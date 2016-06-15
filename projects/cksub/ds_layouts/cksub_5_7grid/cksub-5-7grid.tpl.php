<?php
/**
 * @file
 * Template for Zurb Foundation Two column Display Suite layout.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="cksub-5-7 <?php print $classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="<?php if (isset($cksub_wrapper_classes)) { print $cksub_wrapper_classes; } ?> row">
    <<?php print $left_wrapper ?> class="group-left large-5 columns<?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper ?>>

    <<?php print $right_wrapper ?> class="group-right large-7 columns<?php print $right_classes; ?>">
    <?php print $right; ?>
    </<?php print $right_wrapper ?>>
  </div>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
