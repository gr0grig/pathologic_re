GlobalVarCount = 0

Strings:
	W:pt_andrei
	W:NPC_Andrei
	W:NPC_Klara_Andrei.xml
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
	A:clear
	W:pt_fireplace
	W:scripted
	W:fireplace.xml
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
// @pool_raw:700074005f0061006e00640072006500690000004e00500043005f0041006e00640072006500690000004e00500043005f004b006c006100720061005f0041006e0064007200650069002e0078006d006c00000061646400700074005f00640061006e0063006500000070006500720073005f006e007500640065006700690072006c005f00640061006e006300650000006e007500640065006700690072006c005f00640061006e00630065002e0078006d006c000000700074005f00730061006c00650073006d0061006e00000070006500720073005f0064006f0068006f00640079006100670061000000730061006c00650073006d0061006e005f006b006100620061006b002e0078006d006c000000700073005f006b006100620061006b005f0061006c006b0061007300680031000000630073005f0070006c00610079005f006300790063006c0065002e00620069006e000000700073005f006b006100620061006b005f0061006c006b0061007300680032000000700073005f006b006100620061006b005f0075006e006f0073006800610031000000700073005f006b006100620061006b005f0077006f006d0061006e0031000000700073005f006b006100620061006b005f0077006f0072006b0065007200310000006e006f0061006e0064007200650069000000636c65617200700074005f00660069007200650070006c006100630065000000730063007200690070007400650064000000660069007200650070006c006100630065002e0078006d006c0000004765744974656d436f756e74004765744974656d004765744974656d416d6f756e740049734974656d53656c65637465640052656d6f7665416c6c4974656d730073697a6500676574004164644974656d0053656c6563744974656d004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

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
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x7e Vars = (string)
		EVENT_6 Op = 0x89 Vars = ()
		EVENT_5 Op = 0xe2 Vars = ()


0x0: @ CreateIntVector(Stack[-5]T)
0x1: Pop(0)
0x2: @ CreateIntVector(Stack[-9]T)
0x3: Pop(0)
0x4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5: PushEmpty()
0x6: Call2 0xaf

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0xc: PushEmpty(object, object, string, string, string)
0xd: PushEmpty(object)
0xe: Call2 0x13d

0xf: Stack[-1] = Stack[-5]
0x10: Pop(1)
0x11: Stack[-3] = "pt_andrei" // @poff=0
0x12: Stack[-2] = "NPC_Andrei" // @poff=20
0x13: Stack[-1] = "NPC_Klara_Andrei.xml" // @poff=42
0x14: Call2 0x149

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
0x1f: Call2 0x11d

0x20: Pop(5)
0x21: @@ add(Stack[-7]T); Obj=1 // @poff=84
0x22: Pop(0)
0x23: PushEmpty(object, object, string, string, string)
0x24: PushEmpty(object)
0x25: Call2 0x13d

0x26: Stack[-1] = Stack[-5]
0x27: Pop(1)
0x28: Stack[-3] = "pt_dance" // @poff=88
0x29: Stack[-2] = "pers_nudegirl_dance" // @poff=106
0x2a: Stack[-1] = "nudegirl_dance.xml" // @poff=146
0x2b: Call2 0x149

0x2c: Pop(4)
0x2d: @@ add(Stack[-1]); Obj=2 // @poff=84
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: PushEmpty(object)
0x31: Call2 0x13d

0x32: Stack[-1] = Stack[-5]
0x33: Pop(1)
0x34: Stack[-3] = "pt_salesman" // @poff=184
0x35: Stack[-2] = "pers_dohodyaga" // @poff=208
0x36: Stack[-1] = "salesman_kabak.xml" // @poff=238
0x37: Call2 0x149

0x38: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x39: Pop(5)
0x3a: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3b: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3c: PushEmpty(object, int, object, object, object)
0x3d: Stack[-5] = Stack[3 + Tasks[-1].StackPointer]
0x3e: Stack[-4] = (int) 0
0x3f: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x40: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x41: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x42: Call2 0x11d

0x43: Pop(5)
0x44: @@ add(Stack[-3]T); Obj=1 // @poff=84
0x45: Pop(0)
0x46: PushEmpty(object, object, string, string)
0x47: PushEmpty(object)
0x48: Call2 0x13d

0x49: Stack[-1] = Stack[-4]
0x4a: Pop(1)
0x4b: Stack[-2] = "ps_kabak_alkash1" // @poff=276
0x4c: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x4d: Call2 0x15b

0x4e: Pop(3)
0x4f: @@ add(Stack[-1]); Obj=2 // @poff=84
0x50: Pop(1)
0x51: PushEmpty(object, object, string, string)
0x52: PushEmpty(object)
0x53: Call2 0x13d

0x54: Stack[-1] = Stack[-4]
0x55: Pop(1)
0x56: Stack[-2] = "ps_kabak_alkash2" // @poff=346
0x57: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x58: Call2 0x15b

0x59: Pop(3)
0x5a: @@ add(Stack[-1]); Obj=2 // @poff=84
0x5b: Pop(1)
0x5c: PushEmpty(object, object, string, string)
0x5d: PushEmpty(object)
0x5e: Call2 0x13d

0x5f: Stack[-1] = Stack[-4]
0x60: Pop(1)
0x61: Stack[-2] = "ps_kabak_unosha1" // @poff=380
0x62: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x63: Call2 0x15b

0x64: Pop(3)
0x65: @@ add(Stack[-1]); Obj=2 // @poff=84
0x66: Pop(1)
0x67: PushEmpty(object, object, string, string)
0x68: PushEmpty(object)
0x69: Call2 0x13d

0x6a: Stack[-1] = Stack[-4]
0x6b: Pop(1)
0x6c: Stack[-2] = "ps_kabak_woman1" // @poff=414
0x6d: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x6e: Call2 0x15b

0x6f: Pop(3)
0x70: @@ add(Stack[-1]); Obj=2 // @poff=84
0x71: Pop(1)
0x72: PushEmpty(object, object, string, string)
0x73: PushEmpty(object)
0x74: Call2 0x13d

0x75: Stack[-1] = Stack[-4]
0x76: Pop(1)
0x77: Stack[-2] = "ps_kabak_worker1" // @poff=446
0x78: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x79: Call2 0x15b

0x7a: Pop(3)
0x7b: @@ add(Stack[-1]); Obj=2 // @poff=84
0x7c: Pop(1)
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Push("noandrei") // @poff=480
0x80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x83: GOTO 0x88

0x84: Push("andrei") // @poff=6
0x85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x88: Return(); Pop(0)

0x89: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8b: @@@ clear(); Obj=5 // @poff=498
0x8c: Pop(0)
0x8d: PushEmpty(object, object, int, object)
0x8e: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x8f: Stack[-2] = (int) 0
0x90: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x91: Call2 0xf0

0x92: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x93: Pop(4)
0x94: PushEmpty(object, object, int)
0x95: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x96: Stack[-1] = (int) 0
0x97: Call2 0x109

0x98: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0x99: Pop(3)
0x9a: Push( Stack[7 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9c: @@@ clear(); Obj=9 // @poff=498
0x9d: Pop(0)
0x9e: PushEmpty(object, object, int, object)
0x9f: Stack[-3] = Stack[7 + Tasks[-1].StackPointer]
0xa0: Stack[-2] = (int) 0
0xa1: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xa2: Call2 0xf0

0xa3: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xa4: Pop(4)
0xa5: PushEmpty(object, object, int)
0xa6: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0xa7: Stack[-1] = (int) 0
0xa8: Call2 0x109

0xa9: Stack[10 + Tasks[-1].StackPointer] = Stack[-3]
0xaa: Pop(3)
0xab: PushEmpty()
0xac: Call2 0xe9

0xad: Pop(0)
0xae: Return(); Pop(0)

0xaf: @ CreateObjectVector(Stack[-0]T)
0xb0: Pop(0)
0xb1: @ CreateObjectVector(Stack[-1]T)
0xb2: Pop(0)
0xb3: @ Hold()
0xb4: Pop(0)
0xb5: GOTO 0xb3

0xb6: Return(); Pop(0)

0xb7: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0xb8: Stack[-5] = (int) 1
0xb9: Push("pt_fireplace") // @poff=504
0xba: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0xbb: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0xbc: Pop(0)
0xbd: Pop(0); Push((bool) Stack[-3] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: GOTO 0xce

0xc0: Push("scripted") // @poff=530
0xc1: PushEmpty(object)
0xc2: Call2 0x13d

0xc3: Pop(0)
0xc4: Push(CVector(0.0, 0.0, 1.0))
0xc5: Push("fireplace.xml") // @poff=548
0xc6: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0xc7: Pop(4)
0xc8: @@@ add(Stack[-1]); Obj=0 // @poff=84
0xc9: Pop(0)
0xca: Stack[-1] = 0
0xcb: Push((int) 1)
0xcc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xcd: GOTO 0xb9

0xce: Return(); Pop(10)

0xcf: PushEmpty(object)
0xd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Call2 0x9

0xd2: Pop(1)
0xd3: Return(); Pop(0)

0xd4: PushEmpty(object)
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x163

0xd7: Pop(1)
0xd8: @@@ clear(); Obj=0 // @poff=498
0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty(object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x163

0xde: Pop(1)
0xdf: @@@ clear(); Obj=1 // @poff=498
0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: Call2 0xb7

0xe4: Pop(0)
0xe5: PushEmpty()
0xe6: Call2 0xcf

0xe7: Pop(0)
0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: Call2 0xd4

0xeb: Pop(0)
0xec: PushEmpty()
0xed: Call2 0xdb

0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xf1: PushEmpty(object)
0xf2: Call2 0x143

0xf3: Stack[-1] = Stack[-6]
0xf4: Pop(1)
0xf5: @@ GetItemCount(Stack[-4], Stack[-12]); Obj=13 // @poff=576
0xf6: Pop(0)
0xf7: Stack[-3] = (int) 0
0xf8: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xf9: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xfa: @@ GetItem(Stack[-2], Stack[-3], Stack[-12]); Obj=13 // @poff=589
0xfb: Pop(0)
0xfc: @@ add(Stack[-2]); Obj=5 // @poff=84
0xfd: Pop(0)
0xfe: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12]); Obj=13 // @poff=597
0xff: Pop(0)
0x100: @@ add(Stack[-1]); Obj=11 // @poff=84
0x101: Pop(0)
0x102: Stack[-2] = 0
0x103: Push((int) 1)
0x104: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x105: GOTO 0xf8

0x106: Stack[-5] = Stack[-14]
0x107: Return(); Pop(10)

0x108: Stack[-5] = 0
0x109: PushEmpty(object, int, int, bool, object, int, int, bool)
0x10a: @ CreateIntVector(Stack[-4])
0x10b: Pop(0)
0x10c: @@ GetItemCount(Stack[-3], Stack[-9]); Obj=10 // @poff=576
0x10d: Pop(0)
0x10e: Stack[-2] = (int) 0
0x10f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x110: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x111: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9]); Obj=10 // @poff=611
0x112: Pop(0)
0x113: Push(Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: @@ add(Stack[-2]); Obj=4 // @poff=84
0x116: Pop(0)
0x117: Push((int) 1)
0x118: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x119: GOTO 0x10f

0x11a: Stack[-4] = Stack[-11]
0x11b: Return(); Pop(8)

0x11c: Stack[-4] = 0
0x11d: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x11e: @@ RemoveAllItems(Stack[-18]); Obj=19 // @poff=626
0x11f: Pop(0)
0x120: @@ size(Stack[-7]); Obj=17 // @poff=641
0x121: Pop(0)
0x122: Stack[-6] = (int) 0
0x123: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x124: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x125: @@ get(Stack[-5], Stack[-6]); Obj=17 // @poff=646
0x126: Pop(0)
0x127: @@ get(Stack[-4], Stack[-6]); Obj=16 // @poff=646
0x128: Pop(0)
0x129: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4]); Obj=19 // @poff=650
0x12a: Pop(0)
0x12b: Stack[-5] = 0
0x12c: Push((int) 1)
0x12d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x12e: GOTO 0x123

0x12f: @@ size(Stack[-7]); Obj=15 // @poff=641
0x130: Pop(0)
0x131: Stack[-2] = (int) 0
0x132: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x133: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x134: @@ get(Stack[-1], Stack[-2]); Obj=15 // @poff=646
0x135: Pop(0)
0x136: Push((bool) 1)
0x137: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19]); Obj=20 // @poff=658
0x138: Pop(1)
0x139: Push((int) 1)
0x13a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13b: GOTO 0x132

0x13c: Return(); Pop(14)

0x13d: PushEmpty(object, object)
0x13e: @ self(Stack[-1])
0x13f: Pop(0)
0x140: Stack[-1] = Stack[-3]
0x141: Return(); Pop(2)

0x142: Stack[-1] = 0
0x143: PushEmpty(object, object)
0x144: @ CreateObjectVector(Stack[-1])
0x145: Pop(0)
0x146: Stack[-1] = Stack[-3]
0x147: Return(); Pop(2)

0x148: Stack[-1] = 0
0x149: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x14a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=669
0x14b: Pop(0)
0x14c: Pop(0); Push((bool) Stack[-4] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x14e: Push("Locator ") // @poff=680
0x14f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x150: Push(" doesn't exist") // @poff=698
0x151: Pop(2); Push(Stack[-2] + Stack[-1]);
0x152: @ Trace(Stack[-1])
0x153: Pop(1)
0x154: Stack[-1] = 0
0x155: GOTO 0x158

0x156: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x157: Pop(0)
0x158: Stack[-1] = Stack[-13]
0x159: Return(); Pop(8)

0x15a: Stack[-1] = 0
0x15b: PushEmpty(object, object)
0x15c: Push(CVector(0.0, 0.0, 0.0))
0x15d: Push(CVector(0.0, 0.0, 1.0))
0x15e: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: Stack[-1] = Stack[-6]
0x161: Return(); Pop(2)

0x162: Stack[-1] = 0
0x163: PushEmpty(int, int, object, int, int, object)
0x164: Push(Stack[-7])
0x165: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x166: @@ size(Stack[-3]); Obj=7 // @poff=641
0x167: Pop(0)
0x168: Stack[-2] = (int) 0
0x169: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x16a: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16b: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=646
0x16c: Pop(0)
0x16d: Push(Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: @ RemoveActor(Stack[-1])
0x170: Pop(0)
0x171: Stack[-1] = 0
0x172: Push((int) 1)
0x173: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x174: GOTO 0x169

0x175: @@ clear(); Obj=7 // @poff=498
0x176: Pop(0)
0x177: Return(); Pop(6)

