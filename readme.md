# macropad/banana

- Install and setup qmk locally (https://docs.qmk.fm/#/newbs)
- Clone this repo in qmk-folder/keyboard/macropad/banana (replace qmk-folder by your local qmk installation folder)
- Change the keymap to you convenance in keymaps/<keymap-name>/keymap.c (you can have all the keymaps you want, just duplicate the file in the default keymap) (https://docs.qmk.fm/#/keycodes_basic)
- qmk compile -kb macropad/banana -km keymap-name (replace keymap-name by your keymap name)
- Plug your banana to the computer in boot mode and drag and drop the file .uf2 in there

Boot mode options:
* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB (in the banana hearth)
