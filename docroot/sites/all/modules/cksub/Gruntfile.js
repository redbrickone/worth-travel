module.exports = function(grunt) {
  require('time-grunt')(grunt);
  require('load-grunt-tasks')(grunt);
  grunt.loadNpmTasks('grunt-postcss'); // not sure why this is needed

  var theme_name = 'cksub'; // please change this per theme
  var base_theme_path = '../zurb_foundation';

  var global_vars = {
    theme_name: theme_name,
    theme_css: 'css',
    theme_scss: 'scss',
    base_theme_path: base_theme_path
  };

  var bourbon = require('node-bourbon').includePaths;

  // array of javascript libraries to include.
  // comment out things if you're not using them
  var jsLibs = [
    '<%= global_vars.base_theme_path %>/js/vendor/placeholder.js',
    '<%= global_vars.base_theme_path %>/js/vendor/fastclick.js'
  ];

  // array of foundation javascript components to include.
  // comment out things if you're not using them
  var jsFoundation = [
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.abide.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.accordion.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.alert.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.clearing.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.dropdown.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.equalizer.js',
    //'<%= global_vars.base_theme_path %>/js/foundation/foundation.interchange.js',
    //'<%= global_vars.base_theme_path %>/js/foundation/foundation.joyride.js',
    //'<%= global_vars.base_theme_path %>/js/foundation/foundation.magellan.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.offcanvas.js',
    //'<%= global_vars.base_theme_path %>/js/foundation/foundation.orbit.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.reveal.js',
    //'<%= global_vars.base_theme_path %>/js/foundation/foundation.slider.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.tab.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.tooltip.js',
    '<%= global_vars.base_theme_path %>/js/foundation/foundation.topbar.js'
  ];

  // array of custom javascript files to include.
  var jsApp = [
    'js/_*.js'
  ];

  grunt.initConfig({
    global_vars: global_vars,
    pkg: grunt.file.readJSON('package.json'),

    sass: {
      dist: {
        options: {
          style: 'expanded',
        },
        files: {
          '<%= global_vars.theme_css %>/<%= global_vars.theme_name %>.css': '<%= global_vars.theme_scss %>/<%= global_vars.theme_name %>.scss'
        }
      }
    },
    babel: {
      options: {
        presets: ['es2015'],
        sourceMap: true
      },
      dist: {
        'files': { 'js/<%= global_vars.theme_name %>.js': 'js/_<%= global_vars.theme_name %>.js' }
      }
    },
    eslint: {
      options: {
        configFile: '.eslintrc'
      },
      target: ['js/_<%= global_vars.theme_name %>.js']
    },
    uglify: {
      options: {
        sourceMap: false
      },
      dist: {
        files: {
          'js/libs.min.js': [jsLibs],
          'js/foundation.min.js': [jsFoundation],
          //'js/app.min.js': [jsApp]
        }
      }
    },
    postcss: {
      //lint: {
        options: {
          syntax: require('postcss-scss'),
          processors: [
            require("stylelint")({
              "extends": [
                "stylelint-config-standard",
              ],
              "plugins": [
                "stylelint-statement-max-nesting-depth",
              ],
              "rules": {
                "statement-max-nesting-depth": [3, { countAtRules: false }],
                "string-quotes": "single",
                "selector-no-id": true,
                "color-hex-case": "lower",
                "number-leading-zero": "never",
                "property-no-vendor-prefix": true,
                "declaration-bang-space-after": "never",
                "declaration-bang-space-before": "always",
                "declaration-colon-space-after": "always",
                "declaration-no-important": true,
                "selector-combinator-space-after": "always",
                "selector-combinator-space-before": "always",
                "selector-pseudo-element-colon-notation": "single",
                "rule-nested-empty-line-before": "always",
                "declaration-block-properties-order": "alphabetical"
              }
            }),
            require("postcss-reporter")({ clearMessages: true })
          ]
        },
        dist: {
          src: '<%= global_vars.theme_scss %>/**/*.scss'
        }
      //}
    },
    autoprefixer: {
      options: {
        browsers: ['> 1%', 'last 2 versions', 'ie 9'],
        remove: false
      },
      dist: {
        src: '<%= global_vars.theme_css %>/<%= global_vars.theme_name %>.css',
      }
    },

    watch: {
      grunt: { files: ['Gruntfile.js'] },

      sass: {
        files: '<%= global_vars.theme_scss %>/**/*.scss',
        tasks: ['postcss', 'sass', 'autoprefixer'],
        options: {
          livereload: true
        }
      },
      babel: {
        files: 'js/_<%= global_vars.theme_name %>.js',
        tasks: ['eslint', 'babel']
      },
    }
  });

  grunt.registerTask('new-build', ['newer:jshint:all','newer:uglify:dist','newer:sass:dist','newer:autoprefixer:dist']);
  grunt.registerTask('new', ['new-build', 'watch']);

  grunt.registerTask('build', ['eslint','babel','uglify','postcss','sass','autoprefixer']);
  grunt.registerTask('default', ['build', 'watch']);
};
