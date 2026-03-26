GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:icot_eva_door
	W:k3q04
	W:dt_house2_08
	W:pt_k3q04_danko
	W:NPC_Bakalavr
	W:k3q04_danko.xml
	W:place_burah_lopuh
	W:burah_home@door1
	W:house5_23
	W:pt_k3q04_burah
	W:NPC_Burah
	W:k3q04_burah.xml
	W:pt_d3q03_boy
	W:pers_littleboy
	W:k3q04_boy.xml
	W:completed
	W:fail
	W:cleanup
	A:Remove
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:Close
// @pool_raw:690063006f0074005f006500760061005f0064006f006f00720000006b0033007100300034000000640074005f0068006f0075007300650032005f00300038000000700074005f006b0033007100300034005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b0033007100300034005f00640061006e006b006f002e0078006d006c00000070006c006100630065005f00620075007200610068005f006c006f007000750068000000620075007200610068005f0068006f006d006500400064006f006f0072003100000068006f0075007300650035005f00320033000000700074005f006b0033007100300034005f006200750072006100680000004e00500043005f004200750072006100680000006b0033007100300034005f00620075007200610068002e0078006d006c000000700074005f00640033007100300033005f0062006f007900000070006500720073005f006c006900740074006c00650062006f00790000006b0033007100300034005f0062006f0079002e0078006d006c00000063006f006d0070006c00650074006500640000006600610069006c00000063006c00650061006e0075007000000052656d6f7665004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f736500

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x1b Vars = (string)
		EVENT_9 Op = 0x98 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "icot_eva_door" // @poff=0
0x3: Stack[-1] = (bool) 1
0x4: Call2 0xd8

0x5: Pop(2)
0x6: Push("k3q04") // @poff=28
0x7: Push((int) 1)
0x8: @ SetVariable(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push("dt_house2_08") // @poff=40
0xb: @ GetSceneByName(Stack[-2], Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(object, object, string, string, string)
0xe: Stack[-6] = Stack[-4]
0xf: Stack[-3] = "pt_k3q04_danko" // @poff=66
0x10: Stack[-2] = "NPC_Bakalavr" // @poff=96
0x11: Stack[-1] = "k3q04_danko.xml" // @poff=122
0x12: Call2 0xa3

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 3
0x17: Call2 0x85

0x18: Pop(1)
0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
0x1b: PushEmpty(object, object)
0x1c: @ Trace(Stack[-3])
0x1d: Pop(0)
0x1e: Push("place_burah_lopuh") // @poff=154
0x1f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x21: PushEmpty(string, bool)
0x22: Stack[-2] = "burah_home@door1" // @poff=190
0x23: Stack[-1] = (bool) 1
0x24: Call2 0xc7

0x25: Pop(2)
0x26: Push("house5_23") // @poff=224
0x27: @ GetSceneByName(Stack[-2], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-6] = Stack[-4]
0x2b: Stack[-3] = "pt_k3q04_burah" // @poff=244
0x2c: Stack[-2] = "NPC_Burah" // @poff=274
0x2d: Stack[-1] = "k3q04_burah.xml" // @poff=294
0x2e: Call2 0xa3

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: @ GetMainOutdoorScene(Stack[-1])
0x32: Pop(0)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-6] = Stack[-4]
0x35: Stack[-3] = "pt_d3q03_boy" // @poff=326
0x36: Stack[-2] = "pers_littleboy" // @poff=352
0x37: Stack[-1] = "k3q04_boy.xml" // @poff=382
0x38: Call2 0xb5

0x39: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: Stack[-1] = 0
0x3c: GOTO 0x4a

0x3d: Push("completed") // @poff=410
0x3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x5e

0x42: Pop(0)
0x43: GOTO 0x4a

0x44: Push("fail") // @poff=430
0x45: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: PushEmpty()
0x48: Call2 0x56

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: PushEmpty(int, int)
0x4c: Push("k3q04") // @poff=28
0x4d: @ GetVariable(Stack[-1], Stack[-2])
0x4e: Pop(1)
0x4f: Push((int) 1000)
0x50: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x56

0x54: Pop(0)
0x55: Return(); Pop(2)

0x56: Push("k3q04") // @poff=28
0x57: Push((int) -1)
0x58: @ SetVariable(Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: PushEmpty()
0x5b: Call2 0x66

0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: Push("k3q04") // @poff=28
0x5f: Push((int) 1000)
0x60: @ SetVariable(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: PushEmpty()
0x63: Call2 0x66

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: EventDisable(26)
0x67: PushEmpty(string, bool)
0x68: Stack[-2] = "icot_eva_door" // @poff=0
0x69: Stack[-1] = (bool) 0
0x6a: Call2 0xd8

0x6b: Pop(2)
0x6c: PushEmpty(string, bool)
0x6d: Stack[-2] = "burah_home@door1" // @poff=190
0x6e: Stack[-1] = (bool) 0
0x6f: Call2 0xc7

0x70: Pop(2)
0x71: Push( Stack[0 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x73: Push("cleanup") // @poff=440
0x74: @ Trigger(Stack[-0]T, Stack[-1])
0x75: Pop(1)
0x76: Push( Stack[1 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x78: Push("cleanup") // @poff=440
0x79: @ Trigger(Stack[-1]T, Stack[-1])
0x7a: Pop(1)
0x7b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: @@@ Remove(); Obj=2 // @poff=456
0x7e: Pop(0)
0x7f: PushEmpty(object)
0x80: Call2 0x9d

0x81: Pop(0)
0x82: @ RemoveActor(Stack[-1])
0x83: Pop(1)
0x84: Return(); Pop(0)

0x85: PushEmpty(float, float)
0x86: @ GetGameTime(Stack[-1])
0x87: Pop(0)
0x88: Push((int) 24)
0x89: Pop(1); Push(Stack[-4] * Stack[-1]);
0x8a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8c: PushEmpty()
0x8d: Call2 0x66

0x8e: Pop(0)
0x8f: GOTO 0x97

0x90: Push((int) 0)
0x91: Push((int) 24)
0x92: Pop(1); Push(Stack[-5] * Stack[-1]);
0x93: @ SetTimeEvent(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: @ Hold()
0x96: Pop(0)
0x97: Return(); Pop(2)

0x98: PushEmpty()
0x99: PushEmpty()
0x9a: Call2 0x4b

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: PushEmpty(object, object)
0x9e: @ self(Stack[-1])
0x9f: Pop(0)
0xa0: Stack[-1] = Stack[-3]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa4: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=463
0xa5: Pop(0)
0xa6: Pop(0); Push((bool) Stack[-4] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa8: Push("Locator ") // @poff=474
0xa9: Pop(1); Push(Stack[-1] + Stack[-12]);
0xaa: Push(" doesn't exist") // @poff=492
0xab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xac: @ Trace(Stack[-1])
0xad: Pop(1)
0xae: Stack[-1] = 0
0xaf: GOTO 0xb2

0xb0: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb1: Pop(0)
0xb2: Stack[-1] = Stack[-13]
0xb3: Return(); Pop(8)

0xb4: Stack[-1] = 0
0xb5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=463
0xb7: Pop(0)
0xb8: Pop(0); Push((bool) Stack[-4] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xba: Push("Locator ") // @poff=474
0xbb: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbc: Push(" doesn't exist") // @poff=492
0xbd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe: @ Trace(Stack[-1])
0xbf: Pop(1)
0xc0: Stack[-1] = 0
0xc1: GOTO 0xc4

0xc2: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=522
0xc3: Pop(0)
0xc4: Stack[-1] = Stack[-13]
0xc5: Return(); Pop(8)

0xc6: Stack[-1] = 0
0xc7: PushEmpty(object, object)
0xc8: @ FindActor(Stack[-1], Stack[-4])
0xc9: Pop(0)
0xca: Pop(0); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcc: Push("Door ") // @poff=541
0xcd: Pop(1); Push(Stack[-1] + Stack[-5]);
0xce: Push(" not found") // @poff=553
0xcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: GOTO 0xd6

0xd3: Push("locked") // @poff=575
0xd4: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=589
0xd5: Pop(1)
0xd6: Return(); Pop(2)

0xd7: Stack[-1] = 0
0xd8: PushEmpty(object, object)
0xd9: @ FindActor(Stack[-1], Stack[-4])
0xda: Pop(0)
0xdb: Pop(0); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdd: Push("Door ") // @poff=541
0xde: Pop(1); Push(Stack[-1] + Stack[-5]);
0xdf: Push(" not found") // @poff=553
0xe0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1: @ Trace(Stack[-1])
0xe2: Pop(1)
0xe3: GOTO 0xeb

0xe4: Push(Stack[-3])
0xe5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe6: @@ Close(); Obj=1 // @poff=601
0xe7: Pop(0)
0xe8: Push("locked") // @poff=575
0xe9: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=589
0xea: Pop(1)
0xeb: Return(); Pop(2)

0xec: Stack[-1] = 0
