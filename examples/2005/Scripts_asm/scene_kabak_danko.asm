GlobalVarCount = 0

Strings:
	W:pt_andrei
	W:NPC_Andrei
	W:NPC_Danko_Andrei.xml
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
// @pool_raw:700074005f0061006e00640072006500690000004e00500043005f0041006e00640072006500690000004e00500043005f00440061006e006b006f005f0041006e0064007200650069002e0078006d006c00000061646400700074005f00640061006e0063006500000070006500720073005f006e007500640065006700690072006c005f00640061006e006300650000006e007500640065006700690072006c005f00640061006e00630065002e0078006d006c000000700074005f00730061006c00650073006d0061006e00000070006500720073005f0064006f0068006f00640079006100670061000000730061006c00650073006d0061006e005f006b006100620061006b002e0078006d006c000000700073005f006b006100620061006b005f0061006c006b0061007300680031000000630073005f0070006c00610079005f006300790063006c0065002e00620069006e000000700073005f006b006100620061006b005f0061006c006b0061007300680032000000700073005f006b006100620061006b005f0075006e006f0073006800610031000000700073005f006b006100620061006b005f0077006f006d0061006e0031000000700073005f006b006100620061006b005f0077006f0072006b0065007200310000006e006f0061006e0064007200650069000000700074005f00660069007200650070006c006100630065000000730063007200690070007400650064000000660069007200650070006c006100630065002e0078006d006c000000636c656172004765744974656d436f756e74004765744974656d004765744974656d416d6f756e740049734974656d53656c65637465640052656d6f7665416c6c4974656d730073697a6500676574004164644974656d0053656c6563744974656d004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

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
	GTASK_0 Vars = (object, object, bool, object, object, object, object) Params = 0
		EVENT_26 Op = 0x71 Vars = (string)
		EVENT_6 Op = 0x7c Vars = ()
		EVENT_5 Op = 0xc2 Vars = ()


0x0: @ CreateIntVector(Stack[-5]T)
0x1: Pop(0)
0x2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3: PushEmpty()
0x4: Call2 0x8f

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty()
0x8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xa: PushEmpty(object, object, string, string, string)
0xb: PushEmpty(object)
0xc: Call2 0x11d

0xd: Stack[-1] = Stack[-5]
0xe: Pop(1)
0xf: Stack[-3] = "pt_andrei" // @poff=0
0x10: Stack[-2] = "NPC_Andrei" // @poff=20
0x11: Stack[-1] = "NPC_Danko_Andrei.xml" // @poff=42
0x12: Call2 0x129

0x13: Pop(4)
0x14: @@ add(Stack[-1]); Obj=2 // @poff=84
0x15: Pop(1)
0x16: PushEmpty(object, object, string, string, string)
0x17: PushEmpty(object)
0x18: Call2 0x11d

0x19: Stack[-1] = Stack[-5]
0x1a: Pop(1)
0x1b: Stack[-3] = "pt_dance" // @poff=88
0x1c: Stack[-2] = "pers_nudegirl_dance" // @poff=106
0x1d: Stack[-1] = "nudegirl_dance.xml" // @poff=146
0x1e: Call2 0x129

0x1f: Pop(4)
0x20: @@ add(Stack[-1]); Obj=2 // @poff=84
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: PushEmpty(object)
0x24: Call2 0x11d

0x25: Stack[-1] = Stack[-5]
0x26: Pop(1)
0x27: Stack[-3] = "pt_salesman" // @poff=184
0x28: Stack[-2] = "pers_dohodyaga" // @poff=208
0x29: Stack[-1] = "salesman_kabak.xml" // @poff=238
0x2a: Call2 0x129

0x2b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2c: Pop(5)
0x2d: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2e: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x2f: PushEmpty(object, int, object, object, object)
0x30: Stack[-5] = Stack[3 + Tasks[-1].StackPointer]
0x31: Stack[-4] = (int) 0
0x32: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x33: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x34: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x35: Call2 0xfd

0x36: Pop(5)
0x37: @@ add(Stack[-3]T); Obj=1 // @poff=84
0x38: Pop(0)
0x39: PushEmpty(object, object, string, string)
0x3a: PushEmpty(object)
0x3b: Call2 0x11d

0x3c: Stack[-1] = Stack[-4]
0x3d: Pop(1)
0x3e: Stack[-2] = "ps_kabak_alkash1" // @poff=276
0x3f: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x40: Call2 0x13b

0x41: Pop(3)
0x42: @@ add(Stack[-1]); Obj=2 // @poff=84
0x43: Pop(1)
0x44: PushEmpty(object, object, string, string)
0x45: PushEmpty(object)
0x46: Call2 0x11d

0x47: Stack[-1] = Stack[-4]
0x48: Pop(1)
0x49: Stack[-2] = "ps_kabak_alkash2" // @poff=346
0x4a: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x4b: Call2 0x13b

0x4c: Pop(3)
0x4d: @@ add(Stack[-1]); Obj=2 // @poff=84
0x4e: Pop(1)
0x4f: PushEmpty(object, object, string, string)
0x50: PushEmpty(object)
0x51: Call2 0x11d

0x52: Stack[-1] = Stack[-4]
0x53: Pop(1)
0x54: Stack[-2] = "ps_kabak_unosha1" // @poff=380
0x55: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x56: Call2 0x13b

0x57: Pop(3)
0x58: @@ add(Stack[-1]); Obj=2 // @poff=84
0x59: Pop(1)
0x5a: PushEmpty(object, object, string, string)
0x5b: PushEmpty(object)
0x5c: Call2 0x11d

0x5d: Stack[-1] = Stack[-4]
0x5e: Pop(1)
0x5f: Stack[-2] = "ps_kabak_woman1" // @poff=414
0x60: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x61: Call2 0x13b

0x62: Pop(3)
0x63: @@ add(Stack[-1]); Obj=2 // @poff=84
0x64: Pop(1)
0x65: PushEmpty(object, object, string, string)
0x66: PushEmpty(object)
0x67: Call2 0x11d

0x68: Stack[-1] = Stack[-4]
0x69: Pop(1)
0x6a: Stack[-2] = "ps_kabak_worker1" // @poff=446
0x6b: Stack[-1] = "cs_play_cycle.bin" // @poff=310
0x6c: Call2 0x13b

0x6d: Pop(3)
0x6e: @@ add(Stack[-1]); Obj=2 // @poff=84
0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: Push("noandrei") // @poff=480
0x73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x76: GOTO 0x7b

0x77: Push("andrei") // @poff=6
0x78: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7b: Return(); Pop(0)

0x7c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7e: PushEmpty(object, object, int, object)
0x7f: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x80: Stack[-2] = (int) 0
0x81: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x82: Call2 0xd0

0x83: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x84: Pop(4)
0x85: PushEmpty(object, object, int)
0x86: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x87: Stack[-1] = (int) 0
0x88: Call2 0xe9

0x89: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0x8a: Pop(3)
0x8b: PushEmpty()
0x8c: Call2 0xc9

0x8d: Pop(0)
0x8e: Return(); Pop(0)

0x8f: @ CreateObjectVector(Stack[-0]T)
0x90: Pop(0)
0x91: @ CreateObjectVector(Stack[-1]T)
0x92: Pop(0)
0x93: @ Hold()
0x94: Pop(0)
0x95: GOTO 0x93

0x96: Return(); Pop(0)

0x97: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0x98: Stack[-5] = (int) 1
0x99: Push("pt_fireplace") // @poff=498
0x9a: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0x9b: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0x9c: Pop(0)
0x9d: Pop(0); Push((bool) Stack[-3] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xae

0xa0: Push("scripted") // @poff=524
0xa1: PushEmpty(object)
0xa2: Call2 0x11d

0xa3: Pop(0)
0xa4: Push([0.0, 0.0, 1.0])
0xa5: Push("fireplace.xml") // @poff=542
0xa6: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0xa7: Pop(4)
0xa8: @@@ add(Stack[-1]); Obj=0 // @poff=84
0xa9: Pop(0)
0xaa: Stack[-1] = 0
0xab: Push((int) 1)
0xac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xad: GOTO 0x99

0xae: Return(); Pop(10)

0xaf: PushEmpty(object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x7

0xb2: Pop(1)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(object)
0xb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6: Call2 0x143

0xb7: Pop(1)
0xb8: @@@ clear(); Obj=0 // @poff=570
0xb9: Pop(0)
0xba: Return(); Pop(0)

0xbb: PushEmpty(object)
0xbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Call2 0x143

0xbe: Pop(1)
0xbf: @@@ clear(); Obj=1 // @poff=570
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Call2 0x97

0xc4: Pop(0)
0xc5: PushEmpty()
0xc6: Call2 0xaf

0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Call2 0xb4

0xcb: Pop(0)
0xcc: PushEmpty()
0xcd: Call2 0xbb

0xce: Pop(0)
0xcf: Return(); Pop(0)

0xd0: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xd1: PushEmpty(object)
0xd2: Call2 0x123

0xd3: Stack[-1] = Stack[-6]
0xd4: Pop(1)
0xd5: @@ GetItemCount(Stack[-4], Stack[-12]); Obj=13 // @poff=576
0xd6: Pop(0)
0xd7: Stack[-3] = (int) 0
0xd8: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xd9: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xda: @@ GetItem(Stack[-2], Stack[-3], Stack[-12]); Obj=13 // @poff=589
0xdb: Pop(0)
0xdc: @@ add(Stack[-2]); Obj=5 // @poff=84
0xdd: Pop(0)
0xde: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12]); Obj=13 // @poff=597
0xdf: Pop(0)
0xe0: @@ add(Stack[-1]); Obj=11 // @poff=84
0xe1: Pop(0)
0xe2: Stack[-2] = 0
0xe3: Push((int) 1)
0xe4: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe5: GOTO 0xd8

0xe6: Stack[-5] = Stack[-14]
0xe7: Return(); Pop(10)

0xe8: Stack[-5] = 0
0xe9: PushEmpty(object, int, int, bool, object, int, int, bool)
0xea: @ CreateIntVector(Stack[-4])
0xeb: Pop(0)
0xec: @@ GetItemCount(Stack[-3], Stack[-9]); Obj=10 // @poff=576
0xed: Pop(0)
0xee: Stack[-2] = (int) 0
0xef: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf0: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf1: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9]); Obj=10 // @poff=611
0xf2: Pop(0)
0xf3: Push(Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf5: @@ add(Stack[-2]); Obj=4 // @poff=84
0xf6: Pop(0)
0xf7: Push((int) 1)
0xf8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf9: GOTO 0xef

0xfa: Stack[-4] = Stack[-11]
0xfb: Return(); Pop(8)

0xfc: Stack[-4] = 0
0xfd: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0xfe: @@ RemoveAllItems(Stack[-18]); Obj=19 // @poff=626
0xff: Pop(0)
0x100: @@ size(Stack[-7]); Obj=17 // @poff=641
0x101: Pop(0)
0x102: Stack[-6] = (int) 0
0x103: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x104: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x105: @@ get(Stack[-5], Stack[-6]); Obj=17 // @poff=646
0x106: Pop(0)
0x107: @@ get(Stack[-4], Stack[-6]); Obj=16 // @poff=646
0x108: Pop(0)
0x109: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4]); Obj=19 // @poff=650
0x10a: Pop(0)
0x10b: Stack[-5] = 0
0x10c: Push((int) 1)
0x10d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x10e: GOTO 0x103

0x10f: @@ size(Stack[-7]); Obj=15 // @poff=641
0x110: Pop(0)
0x111: Stack[-2] = (int) 0
0x112: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x113: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x114: @@ get(Stack[-1], Stack[-2]); Obj=15 // @poff=646
0x115: Pop(0)
0x116: Push((bool) 1)
0x117: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19]); Obj=20 // @poff=658
0x118: Pop(1)
0x119: Push((int) 1)
0x11a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11b: GOTO 0x112

0x11c: Return(); Pop(14)

0x11d: PushEmpty(object, object)
0x11e: @ self(Stack[-1])
0x11f: Pop(0)
0x120: Stack[-1] = Stack[-3]
0x121: Return(); Pop(2)

0x122: Stack[-1] = 0
0x123: PushEmpty(object, object)
0x124: @ CreateObjectVector(Stack[-1])
0x125: Pop(0)
0x126: Stack[-1] = Stack[-3]
0x127: Return(); Pop(2)

0x128: Stack[-1] = 0
0x129: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=669
0x12b: Pop(0)
0x12c: Pop(0); Push((bool) Stack[-4] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12e: Push("Locator ") // @poff=680
0x12f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x130: Push(" doesn't exist") // @poff=698
0x131: Pop(2); Push(Stack[-2] + Stack[-1]);
0x132: @ Trace(Stack[-1])
0x133: Pop(1)
0x134: Stack[-1] = 0
0x135: GOTO 0x138

0x136: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x137: Pop(0)
0x138: Stack[-1] = Stack[-13]
0x139: Return(); Pop(8)

0x13a: Stack[-1] = 0
0x13b: PushEmpty(object, object)
0x13c: Push([0.0, 0.0, 0.0])
0x13d: Push([0.0, 0.0, 1.0])
0x13e: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: Stack[-1] = Stack[-6]
0x141: Return(); Pop(2)

0x142: Stack[-1] = 0
0x143: PushEmpty(int, int, object, int, int, object)
0x144: Push(Stack[-7])
0x145: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x146: @@ size(Stack[-3]); Obj=7 // @poff=641
0x147: Pop(0)
0x148: Stack[-2] = (int) 0
0x149: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x14a: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14b: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=646
0x14c: Pop(0)
0x14d: Push(Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14f: @ RemoveActor(Stack[-1])
0x150: Pop(0)
0x151: Stack[-1] = 0
0x152: Push((int) 1)
0x153: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x154: GOTO 0x149

0x155: @@ clear(); Obj=7 // @poff=570
0x156: Pop(0)
0x157: Return(); Pop(6)

