<?php
/**
 * @file
 * Default template implementation to display the background inline field.
 *
 * Available variables:
 * - $background_image_selector: (String) The css selector.
 * - $image_url: (String) The absolute url to the image.
 * - $small_image_url: (String) The absolute url to the image.
 * - $large_image_url: (String) The absolute url to the image.
 * - $breakpoint: (String) when to change to large image
 */
?>
<?php
  $characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
  $charactersLength = strlen($characters);
  $randomString = '';
  for ($i = 0; $i < 10; $i++) {
    $randomString .= $characters[rand(0, $charactersLength -1)];
  }
?>
<div id="<?php print $randomString ?>" class="<?php print $background_image_selector ?>">
  <style>
    #<?php print $randomString ?> {
      background-image: url('<?php print $small_image_url ?>');
    }

    @media (min-width: <?php print $breakpoint ?>) {
      #<?php print $randomString ?> {
        background-image: url('<?php print $large_image_url ?>');
      }
    }
  </style>
</div>
