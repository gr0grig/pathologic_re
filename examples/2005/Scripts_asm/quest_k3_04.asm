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
// @pool_raw:690063006f0074005f006500760061005f0064006f006f00720000006b0033007100300034000000640074005f0068006f0075007300650032005f00300038000000700074005f006b0033007100300034005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b0033007100300034005f00640061006e006b006f002e0078006d006c00000070006c006100630065005f00620075007200610068005f006c006f007000750068000000620075007200610068005f0068006f006d006500400064006f006f0072003100000068006f0075007300650035005f00320033000000700074005f006b0033007100300034005f006200750072006100680000004e00500043005f004200750072006100680000006b0033007100300034005f00620075007200610068002e0078006d006c000000700074005f00640033007100300033005f0062006f007900000070006500720073005f006c006900740074006c00650062006f00790000006b0033007100300034005f0062006f0079002e0078006d006c00000063006f006d0070006c006500740065006400000063006c00650061006e0075007000000052656d6f7665004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f736500

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
		EVENT_9 Op = 0x91 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "icot_eva_door" // @poff=0
0x3: Stack[-1] = (bool) 1
0x4: Call2 0xd1

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
0x12: Call2 0x9c

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 3
0x17: Call2 0x7e

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
0x24: Call2 0xc0

0x25: Pop(2)
0x26: Push("house5_23") // @poff=224
0x27: @ GetSceneByName(Stack[-2], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-6] = Stack[-4]
0x2b: Stack[-3] = "pt_k3q04_burah" // @poff=244
0x2c: Stack[-2] = "NPC_Burah" // @poff=274
0x2d: Stack[-1] = "k3q04_burah.xml" // @poff=294
0x2e: Call2 0x9c

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: @ GetMainOutdoorScene(Stack[-1])
0x32: Pop(0)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-6] = Stack[-4]
0x35: Stack[-3] = "pt_d3q03_boy" // @poff=326
0x36: Stack[-2] = "pers_littleboy" // @poff=352
0x37: Stack[-1] = "k3q04_boy.xml" // @poff=382
0x38: Call2 0xae

0x39: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: Stack[-1] = 0
0x3c: GOTO 0x43

0x3d: Push("completed") // @poff=410
0x3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x57

0x42: Pop(0)
0x43: Return(); Pop(2)

0x44: PushEmpty(int, int)
0x45: Push("k3q04") // @poff=28
0x46: @ GetVariable(Stack[-1], Stack[-2])
0x47: Pop(1)
0x48: Push((int) 1000)
0x49: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4b: PushEmpty()
0x4c: Call2 0x4f

0x4d: Pop(0)
0x4e: Return(); Pop(2)

0x4f: Push("k3q04") // @poff=28
0x50: Push((int) -1)
0x51: @ SetVariable(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: PushEmpty()
0x54: Call2 0x5f

0x55: Pop(0)
0x56: Return(); Pop(0)

0x57: Push("k3q04") // @poff=28
0x58: Push((int) 1000)
0x59: @ SetVariable(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: PushEmpty()
0x5c: Call2 0x5f

0x5d: Pop(0)
0x5e: Return(); Pop(0)

0x5f: EventDisable(26)
0x60: PushEmpty(string, bool)
0x61: Stack[-2] = "icot_eva_door" // @poff=0
0x62: Stack[-1] = (bool) 0
0x63: Call2 0xd1

0x64: Pop(2)
0x65: PushEmpty(string, bool)
0x66: Stack[-2] = "burah_home@door1" // @poff=190
0x67: Stack[-1] = (bool) 0
0x68: Call2 0xc0

0x69: Pop(2)
0x6a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: Push("cleanup") // @poff=430
0x6d: @ Trigger(Stack[-0]T, Stack[-1])
0x6e: Pop(1)
0x6f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup") // @poff=430
0x72: @ Trigger(Stack[-1]T, Stack[-1])
0x73: Pop(1)
0x74: Push( Stack[2 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: @@@ Remove(); Obj=2 // @poff=446
0x77: Pop(0)
0x78: PushEmpty(object)
0x79: Call2 0x96

0x7a: Pop(0)
0x7b: @ RemoveActor(Stack[-1])
0x7c: Pop(1)
0x7d: Return(); Pop(0)

0x7e: PushEmpty(float, float)
0x7f: @ GetGameTime(Stack[-1])
0x80: Pop(0)
0x81: Push((int) 24)
0x82: Pop(1); Push(Stack[-4] * Stack[-1]);
0x83: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: PushEmpty()
0x86: Call2 0x5f

0x87: Pop(0)
0x88: GOTO 0x90

0x89: Push((int) 0)
0x8a: Push((int) 24)
0x8b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x8c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: @ Hold()
0x8f: Pop(0)
0x90: Return(); Pop(2)

0x91: PushEmpty()
0x92: PushEmpty()
0x93: Call2 0x44

0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: PushEmpty(object, object)
0x97: @ self(Stack[-1])
0x98: Pop(0)
0x99: Stack[-1] = Stack[-3]
0x9a: Return(); Pop(2)

0x9b: Stack[-1] = 0
0x9c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=453
0x9e: Pop(0)
0x9f: Pop(0); Push((bool) Stack[-4] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa1: Push("Locator ") // @poff=464
0xa2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa3: Push(" doesn't exist") // @poff=482
0xa4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa5: @ Trace(Stack[-1])
0xa6: Pop(1)
0xa7: Stack[-1] = 0
0xa8: GOTO 0xab

0xa9: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xaa: Pop(0)
0xab: Stack[-1] = Stack[-13]
0xac: Return(); Pop(8)

0xad: Stack[-1] = 0
0xae: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xaf: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=453
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-4] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb3: Push("Locator ") // @poff=464
0xb4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb5: Push(" doesn't exist") // @poff=482
0xb6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb7: @ Trace(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[-1] = 0
0xba: GOTO 0xbd

0xbb: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=512
0xbc: Pop(0)
0xbd: Stack[-1] = Stack[-13]
0xbe: Return(); Pop(8)

0xbf: Stack[-1] = 0
0xc0: PushEmpty(object, object)
0xc1: @ FindActor(Stack[-1], Stack[-4])
0xc2: Pop(0)
0xc3: Pop(0); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc5: Push("Door ") // @poff=531
0xc6: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc7: Push(" not found") // @poff=543
0xc8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc9: @ Trace(Stack[-1])
0xca: Pop(1)
0xcb: GOTO 0xcf

0xcc: Push("locked") // @poff=565
0xcd: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=579
0xce: Pop(1)
0xcf: Return(); Pop(2)

0xd0: Stack[-1] = 0
0xd1: PushEmpty(object, object)
0xd2: @ FindActor(Stack[-1], Stack[-4])
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd6: Push("Door ") // @poff=531
0xd7: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd8: Push(" not found") // @poff=543
0xd9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda: @ Trace(Stack[-1])
0xdb: Pop(1)
0xdc: GOTO 0xe4

0xdd: Push(Stack[-3])
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: @@ Close(); Obj=1 // @poff=591
0xe0: Pop(0)
0xe1: Push("locked") // @poff=565
0xe2: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=579
0xe3: Pop(1)
0xe4: Return(); Pop(2)

0xe5: Stack[-1] = 0
