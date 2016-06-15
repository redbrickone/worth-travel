<?php
/**
 * @file
 * Template for Zurb Foundation One column Display Suite layout.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="cksub-one-column <?php print $classes;?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
    <?php print $header; ?>
  </<?php print $header_wrapper ?>>

  <div class="<?php if (isset($cksub_wrapper_classes)) { print $cksub_wrapper_classes; } ?> row">
    <<?php print $ds_content_wrapper ?> class="group-content large-12 medium-12 columns<?php print $ds_content_classes; ?>">
      <?php print $ds_content; ?>
    </<?php print $ds_content_wrapper ?>>
  </div>

  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
    <?php print $footer; ?>
  </<?php print $footer_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
