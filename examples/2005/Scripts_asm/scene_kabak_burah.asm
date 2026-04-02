GlobalVarCount = 0

Strings:
	W:pt_andrei
	W:NPC_Andrei
	W:NPC_Burah_Andrei.xml
	A:add
	W:pt_dance
	W:pers_nudegirl_dance
	W:nudegirl_dance.xml
	W:pt_salesman
	W:pers_dohodyaga
	W:salesman_kabak.xml
	W:ps_kabak_alkash1
	W:cs_play_cycle.bin
	W:ps_kabak_alkash2
	W:ps_kabak_unosha1
	W:ps_kabak_woman1
	W:ps_kabak_worker1
	W:noandrei
	W:quest_b2_03
	W:kabak_unload
	W:pt_fireplace
	W:scripted
	W:fireplace.xml
	A:clear
	A:GetItemCount
	A:GetItem
	A:GetItemAmount
	A:IsItemSelected
	A:RemoveAllItems
	A:size
	A:get
	A:AddItem
	A:SelectItem
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f0061006e00640072006500690000004e00500043005f0041006e00640072006500690000004e00500043005f00420075007200610068005f0041006e0064007200650069002e0078006d006c00000061646400700074005f00640061006e0063006500000070006500720073005f006e007500640065006700690072006c005f00640061006e006300650000006e007500640065006700690072006c005f00640061006e00630065002e0078006d006c000000700074005f00730061006c00650073006d0061006e00000070006500720073005f0064006f0068006f00640079006100670061000000730061006c00650073006d0061006e005f006b006100620061006b002e0078006d006c000000700073005f006b006100620061006b005f0061006c006b0061007300680031000000630073005f0070006c00610079005f006300790063006c0065002e00620069006e000000700073005f006b006100620061006b005f0061006c006b0061007300680032000000700073005f006b006100620061006b005f0075006e006f0073006800610031000000700073005f006b006100620061006b005f0077006f006d0061006e0031000000700073005f006b006100620061006b005f0077006f0072006b0065007200310000006e006f0061006e0064007200650069000000710075006500730074005f00620032005f003000330000006b006100620061006b005f0075006e006c006f00610064000000700074005f00660069007200650070006c006100630065000000730063007200690070007400650064000000660069007200650070006c006100630065002e0078006d006c000000636c656172004765744974656d436f756e74004765744974656d004765744974656d416d6f756e740049734974656d53656c65637465640052656d6f7665416c6c4974656d730073697a6500676574004164644974656d0053656c6563744974656d004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	CreateIntVector (1 args)
	CreateObjectVector (1 args)
	Hold (0 args)
	GetLocator (3 args)
	AddActorByType (6 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	FindActor (2 args)
	Trigger (2 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x80 Vars = (string)
		EVENT_6 Op = 0x8b Vars = ()
		EVENT_5 Op = 0xe5 Vars = ()


0x0: @ CreateIntVector(Stack[-5]T)
0x1: Pop(0)
0x2: @ CreateIntVector(Stack[-9]T)
0x3: Pop(0)
0x4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5: PushEmpty()
0x6: Call2 0xb2

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0xc: PushEmpty(object, object, string, string, string)
0xd: PushEmpty(object)
0xe: Call2 0x140

0xf: Stack[-1] = Stack[-5]
0x10: Pop(1)
0x11: Stack[-3] = "pt_andrei" // @poff=0
0x12: Stack[-2] = "NPC_Andrei" // @poff=20
0x13: Stack[-1] = "NPC_Burah_Andrei.xml" // @poff=42
0x14: Call2 0x14c

0x15: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x16: Pop(5)
0x17: Push( Stack[8 + Tasks[-1].StackPointer] )
0x18: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x19: PushEmpty(object, int, object, object, object)
0x1a: Stack[-5] = Stack[7 + Tasks[-1].StackPointer]
0x1b: Stack[-4] = (int) 0
0x1c: Stack[-3] = Stack[8 + Tasks[-1].StackPointer]
0x1d: Stack[-2] = Stack[9 + Tasks[-1].StackPointer]
0x1e: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x1f: Call2 0x120

0x20: Pop(5)
0x21: @@ add(Stack[-7]T); Obj=1 // @poff=84
0x22: Pop(0)
0x23: GOTO 0x25

0x24: Stack[7 + Tasks[-1].StackPointer] = 0
0x25: PushEmpty(object, object, string, string, string)
0x26: PushEmpty(object)
0x27: Call2 0x140

0x28: Stack[-1] = Stack[-5]
0x29: Pop(1)
0x2a: Stack[-3] = "pt_dance" // @poff=88
0x2b: Stack[-2] = "pers_nudegirl_dance" // @poff=106
0x2c: Stack[-1] = "nudegirl_dance.xml" // @poff=146
0x2d: Call2 0x14c

0x2e: Pop(4)
0x2f: @@ add(Stack[-1]); Obj=2 // @poff=84
0x30: Pop(1)
0x31: PushEmpty(object, object, string, string, string)
0x32: PushEmpty(object)
0x33: Call2 0x140

0x34: Stack[-1] = Stack[-5]
0x35: Pop(1)
0x36: Stack[-3] = "pt_salesman" // @poff=184
0x37: Stack[-2] = "pers_dohodyaga" // @poff=208
0x38: Stack[-1] = "salesman_kabak.xml" // @poff=238
0x39: Call2 0x14c

0x3a: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x3b: Pop(5)
0x3c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3d: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x3e: PushEmpty(object, int, object, object, object)
0x3f: Stack[-5] = Stack[3 + Tasks[-1].StackPointer]
0x40: Stack[-4] = (int) 0
0x41: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x42: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x43: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x44: Call2 0x120

0x45: Pop(5)
0x46: @@ add(Stack[-3]T); Obj=1 // @poff=84
0x47: Pop(0)
0x48: PushEmpty(object, object, string, string)
0x49: PushEmpty(object)
0x4a: Call2 0x140

0x4b: Stack[-1] = Stack[-4]
0x4c: Pop(1)
0x4d: Stack[-2] = "ps_kabak_alkash1" // @poff=276
0x4e: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x4f: Call2 0x15e

0x50: Pop(3)
0x51: @@ add(Stack[-1]); Obj=2 // @poff=84
0x52: Pop(1)
0x53: PushEmpty(object, object, string, string)
0x54: PushEmpty(object)
0x55: Call2 0x140

0x56: Stack[-1] = Stack[-4]
0x57: Pop(1)
0x58: Stack[-2] = "ps_kabak_alkash2" // @poff=346
0x59: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x5a: Call2 0x15e

0x5b: Pop(3)
0x5c: @@ add(Stack[-1]); Obj=2 // @poff=84
0x5d: Pop(1)
0x5e: PushEmpty(object, object, string, string)
0x5f: PushEmpty(object)
0x60: Call2 0x140

0x61: Stack[-1] = Stack[-4]
0x62: Pop(1)
0x63: Stack[-2] = "ps_kabak_unosha1" // @poff=380
0x64: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x65: Call2 0x15e

0x66: Pop(3)
0x67: @@ add(Stack[-1]); Obj=2 // @poff=84
0x68: Pop(1)
0x69: PushEmpty(object, object, string, string)
0x6a: PushEmpty(object)
0x6b: Call2 0x140

0x6c: Stack[-1] = Stack[-4]
0x6d: Pop(1)
0x6e: Stack[-2] = "ps_kabak_woman1" // @poff=414
0x6f: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x70: Call2 0x15e

0x71: Pop(3)
0x72: @@ add(Stack[-1]); Obj=2 // @poff=84
0x73: Pop(1)
0x74: PushEmpty(object, object, string, string)
0x75: PushEmpty(object)
0x76: Call2 0x140

0x77: Stack[-1] = Stack[-4]
0x78: Pop(1)
0x79: Stack[-2] = "ps_kabak_worker1" // @poff=446
0x7a: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x7b: Call2 0x15e

0x7c: Pop(3)
0x7d: @@ add(Stack[-1]); Obj=2 // @poff=84
0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: Push("noandrei") // @poff=480
0x82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x85: GOTO 0x8a

0x86: Push("andrei") // @poff=6
0x87: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8a: Return(); Pop(0)

0x8b: PushEmpty(bool, string, string)
0x8c: Stack[-2] = "quest_b2_03" // @poff=498
0x8d: Stack[-1] = "kabak_unload" // @poff=522
0x8e: Call2 0x166

0x8f: Pop(3)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x92: PushEmpty(object, object, int, object)
0x93: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x94: Stack[-2] = (int) 0
0x95: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x96: Call2 0xf3

0x97: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x98: Pop(4)
0x99: PushEmpty(object, object, int)
0x9a: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x9b: Stack[-1] = (int) 0
0x9c: Call2 0x10c

0x9d: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0x9e: Pop(3)
0x9f: Push( Stack[7 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa1: PushEmpty(object, object, int, object)
0xa2: Stack[-3] = Stack[7 + Tasks[-1].StackPointer]
0xa3: Stack[-2] = (int) 0
0xa4: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xa5: Call2 0xf3

0xa6: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xa7: Pop(4)
0xa8: PushEmpty(object, object, int)
0xa9: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = (int) 0
0xab: Call2 0x10c

0xac: Stack[10 + Tasks[-1].StackPointer] = Stack[-3]
0xad: Pop(3)
0xae: PushEmpty()
0xaf: Call2 0xec

0xb0: Pop(0)
0xb1: Return(); Pop(0)

0xb2: @ CreateObjectVector(Stack[-0]T)
0xb3: Pop(0)
0xb4: @ CreateObjectVector(Stack[-1]T)
0xb5: Pop(0)
0xb6: @ Hold()
0xb7: Pop(0)
0xb8: GOTO 0xb6

0xb9: Return(); Pop(0)

0xba: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0xbb: Stack[-5] = (int) 1
0xbc: Push("pt_fireplace") // @poff=548
0xbd: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0xbe: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0xbf: Pop(0)
0xc0: Pop(0); Push((bool) Stack[-3] == 0)
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xd1

0xc3: Push("scripted") // @poff=574
0xc4: PushEmpty(object)
0xc5: Call2 0x140

0xc6: Pop(0)
0xc7: Push([0.0, 0.0, 1.0])
0xc8: Push("fireplace.xml") // @poff=592
0xc9: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0xca: Pop(4)
0xcb: @@@ add(Stack[-1]); Obj=0 // @poff=84
0xcc: Pop(0)
0xcd: Stack[-1] = 0
0xce: Push((int) 1)
0xcf: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xd0: GOTO 0xbc

0xd1: Return(); Pop(10)

0xd2: PushEmpty(object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x9

0xd5: Pop(1)
0xd6: Return(); Pop(0)

0xd7: PushEmpty(object)
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x172

0xda: Pop(1)
0xdb: @@@ clear(); Obj=0 // @poff=620
0xdc: Pop(0)
0xdd: Return(); Pop(0)

0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x172

0xe1: Pop(1)
0xe2: @@@ clear(); Obj=1 // @poff=620
0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: Call2 0xba

0xe7: Pop(0)
0xe8: PushEmpty()
0xe9: Call2 0xd2

0xea: Pop(0)
0xeb: Return(); Pop(0)

0xec: PushEmpty()
0xed: Call2 0xd7

0xee: Pop(0)
0xef: PushEmpty()
0xf0: Call2 0xde

0xf1: Pop(0)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xf4: PushEmpty(object)
0xf5: Call2 0x146

0xf6: Stack[-1] = Stack[-6]
0xf7: Pop(1)
0xf8: @@ GetItemCount(Stack[-4], Stack[-12]); Obj=13 // @poff=626
0xf9: Pop(0)
0xfa: Stack[-3] = (int) 0
0xfb: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xfc: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfd: @@ GetItem(Stack[-2], Stack[-3], Stack[-12]); Obj=13 // @poff=639
0xfe: Pop(0)
0xff: @@ add(Stack[-2]); Obj=5 // @poff=84
0x100: Pop(0)
0x101: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12]); Obj=13 // @poff=647
0x102: Pop(0)
0x103: @@ add(Stack[-1]); Obj=11 // @poff=84
0x104: Pop(0)
0x105: Stack[-2] = 0
0x106: Push((int) 1)
0x107: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x108: GOTO 0xfb

0x109: Stack[-5] = Stack[-14]
0x10a: Return(); Pop(10)

0x10b: Stack[-5] = 0
0x10c: PushEmpty(object, int, int, bool, object, int, int, bool)
0x10d: @ CreateIntVector(Stack[-4])
0x10e: Pop(0)
0x10f: @@ GetItemCount(Stack[-3], Stack[-9]); Obj=10 // @poff=626
0x110: Pop(0)
0x111: Stack[-2] = (int) 0
0x112: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x113: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x114: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9]); Obj=10 // @poff=661
0x115: Pop(0)
0x116: Push(Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: @@ add(Stack[-2]); Obj=4 // @poff=84
0x119: Pop(0)
0x11a: Push((int) 1)
0x11b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11c: GOTO 0x112

0x11d: Stack[-4] = Stack[-11]
0x11e: Return(); Pop(8)

0x11f: Stack[-4] = 0
0x120: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x121: @@ RemoveAllItems(Stack[-18]); Obj=19 // @poff=676
0x122: Pop(0)
0x123: @@ size(Stack[-7]); Obj=17 // @poff=691
0x124: Pop(0)
0x125: Stack[-6] = (int) 0
0x126: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x127: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x128: @@ get(Stack[-5], Stack[-6]); Obj=17 // @poff=696
0x129: Pop(0)
0x12a: @@ get(Stack[-4], Stack[-6]); Obj=16 // @poff=696
0x12b: Pop(0)
0x12c: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4]); Obj=19 // @poff=700
0x12d: Pop(0)
0x12e: Stack[-5] = 0
0x12f: Push((int) 1)
0x130: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x131: GOTO 0x126

0x132: @@ size(Stack[-7]); Obj=15 // @poff=691
0x133: Pop(0)
0x134: Stack[-2] = (int) 0
0x135: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x136: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x137: @@ get(Stack[-1], Stack[-2]); Obj=15 // @poff=696
0x138: Pop(0)
0x139: Push((bool) 1)
0x13a: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19]); Obj=20 // @poff=708
0x13b: Pop(1)
0x13c: Push((int) 1)
0x13d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13e: GOTO 0x135

0x13f: Return(); Pop(14)

0x140: PushEmpty(object, object)
0x141: @ self(Stack[-1])
0x142: Pop(0)
0x143: Stack[-1] = Stack[-3]
0x144: Return(); Pop(2)

0x145: Stack[-1] = 0
0x146: PushEmpty(object, object)
0x147: @ CreateObjectVector(Stack[-1])
0x148: Pop(0)
0x149: Stack[-1] = Stack[-3]
0x14a: Return(); Pop(2)

0x14b: Stack[-1] = 0
0x14c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x14d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=719
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-4] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x151: Push("Locator ") // @poff=730
0x152: Pop(1); Push(Stack[-1] + Stack[-12]);
0x153: Push(" doesn't exist") // @poff=748
0x154: Pop(2); Push(Stack[-2] + Stack[-1]);
0x155: @ Trace(Stack[-1])
0x156: Pop(1)
0x157: Stack[-1] = 0
0x158: GOTO 0x15b

0x159: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x15a: Pop(0)
0x15b: Stack[-1] = Stack[-13]
0x15c: Return(); Pop(8)

0x15d: Stack[-1] = 0
0x15e: PushEmpty(object, object)
0x15f: Push([0.0, 0.0, 0.0])
0x160: Push([0.0, 0.0, 1.0])
0x161: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: Stack[-1] = Stack[-6]
0x164: Return(); Pop(2)

0x165: Stack[-1] = 0
0x166: PushEmpty(object, object)
0x167: @ FindActor(Stack[-1], Stack[-4])
0x168: Pop(0)
0x169: Pop(0); PushNull((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: Stack[-5] = (bool) 0
0x16c: Return(); Pop(2)

0x16d: @ Trigger(Stack[-1], Stack[-3])
0x16e: Pop(0)
0x16f: Stack[-5] = (bool) 1
0x170: Return(); Pop(2)

0x171: Stack[-1] = 0
0x172: PushEmpty(int, int, object, int, int, object)
0x173: Push(Stack[-7])
0x174: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x175: @@ size(Stack[-3]); Obj=7 // @poff=691
0x176: Pop(0)
0x177: Stack[-2] = (int) 0
0x178: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x179: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17a: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=696
0x17b: Pop(0)
0x17c: Push(Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17e: @ RemoveActor(Stack[-1])
0x17f: Pop(0)
0x180: Stack[-1] = 0
0x181: Push((int) 1)
0x182: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x183: GOTO 0x178

0x184: @@ clear(); Obj=7 // @poff=620
0x185: Pop(0)
0x186: Return(); Pop(6)

