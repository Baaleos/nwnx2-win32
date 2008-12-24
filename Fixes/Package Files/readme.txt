NWNX Fixes 1.0.3

This plugin is intended to provide various fixes and patches to NWServer.

1.0.3 (22.11.2007):
- Fixed another bug in string comparison code.

1.0.2 (05.11.2007):
- Fixed a bug in string comparison code.

1.0.1 (01.10.2007):
- Another fix for stackable items: OnDisturbed now fires when you try to merge a stack from a placeable with another stack in your inventory. Note: the script fires BEFORE the stack gets merged (usually it fires after that).

1.0 (09.07.2007):
- The engine now takes local variables into account when working with stackable items:
 * Items with different local vars don't stack
 * When you split a stack, all vars get copied
 * When you buy an item marked as infinite from a store, the vars also get copied

In future releases the plugin will be configurable.

---
virusman