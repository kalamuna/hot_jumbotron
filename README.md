Hot JUMBOTRON!
==============

CAUTION
===========

This is just the alpha version.  in the hot_jumbotron.features.inc there are image styles, but image styles in drupal only wants an integer value.  Withink this file all the values are width => 100%, which wont work.  Someone is working on something similair and I will update this then

This app is a Fieldable Panel Pane with responsive imaging.  This FPP will go the full width of the container as it is a JUMBOTROM.

Things you will need to do:
<ol>
<li>After enabling this app is go to Appearance and scan your default theme for breakpoints.</li> 
<li>You can also check to make sure your breakpoints worked here: admin/config/media/breakpoints</li>
<li>Go to admin/structure/fieldable-panels-panes/manage/hot-jumbotron-full/display</li>
<li>Make sure the Format for the Jumbotron Image = Picture</li>
<li>Make sure the Picture Group is Jumbotron & The Fallback Picture is Picture Jumbotron</li>
</ol>

Then all you need to do is just create the FPP.  This uses entity so it will just appear in the pane selection above add text or whatever.

NOTE
===================
Make sure you upload the image in the panel pane, otherwise it will nto work work

You can also put &lt;none&gt; in the title as well.
