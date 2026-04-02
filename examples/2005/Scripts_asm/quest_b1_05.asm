GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d2q01_house1
	W:pt_b1q05_spi4ka
	W:NPC_Spi4ka
	W:b1q05_spi4ka.xml
	W:house_spi4ka
	W:nospi4ka
	W:pt_b1q05_patrol_house
	W:pers_patrool
	W:b1q05_patrol_house.xml
	W:pt_b1q05_patrol1
	W:b1q05_patrol_key.xml
	W:pt_b1q05_patrol2
	W:b1q05_patrol.xml
	W:pt_b1q05_woman
	W:pers_woman
	W:b1q05_woman.xml
	W:attack
	A:GetActor
	W:house_load
	W:pt_b1q05_rat
	W:pers_rat
	W:b1q05_rat.xml
	W:rat_dead
	W:fail
	W:completed
	W:b1q05
	A:Remove
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:640032007100300031005f0068006f0075007300650031000000700074005f00620031007100300035005f0073007000690034006b00610000004e00500043005f0053007000690034006b0061000000620031007100300035005f0073007000690034006b0061002e0078006d006c00000068006f007500730065005f0073007000690034006b00610000006e006f0073007000690034006b0061000000700074005f00620031007100300035005f0070006100740072006f006c005f0068006f00750073006500000070006500720073005f0070006100740072006f006f006c000000620031007100300035005f0070006100740072006f006c005f0068006f007500730065002e0078006d006c000000700074005f00620031007100300035005f0070006100740072006f006c0031000000620031007100300035005f0070006100740072006f006c005f006b00650079002e0078006d006c000000700074005f00620031007100300035005f0070006100740072006f006c0032000000620031007100300035005f0070006100740072006f006c002e0078006d006c000000700074005f00620031007100300035005f0077006f006d0061006e00000070006500720073005f0077006f006d0061006e000000620031007100300035005f0077006f006d0061006e002e0078006d006c000000610074007400610063006b0000004765744163746f720068006f007500730065005f006c006f00610064000000700074005f00620031007100300035005f00720061007400000070006500720073005f007200610074000000620031007100300035005f007200610074002e0078006d006c0000007200610074005f00640065006100640000006600610069006c00000063006f006d0070006c006500740065006400000062003100710030003500000052656d6f76650063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x3b Vars = (string)
		EVENT_9 Op = 0xd7 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)4
0x2: Push("d2q01_house1") // @poff=0
0x3: @ GetSceneByName(Stack[-2], Stack[-1])
0x4: Pop(1)
0x5: PushEmpty(object, object, string, string, string)
0x6: Stack[-6] = Stack[-4]
0x7: Stack[-3] = "pt_b1q05_spi4ka" // @poff=26
0x8: Stack[-2] = "NPC_Spi4ka" // @poff=58
0x9: Stack[-1] = "b1q05_spi4ka.xml" // @poff=80
0xa: Call2 0xe2

0xb: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xc: Pop(5)
0xd: Push("house_spi4ka") // @poff=114
0xe: @ GetSceneByName(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: Push("nospi4ka") // @poff=140
0x11: @ Trigger(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: @ GetMainOutdoorScene(Stack[-1])
0x14: Pop(0)
0x15: PushEmpty(object, object, string, string, string)
0x16: Stack[-6] = Stack[-4]
0x17: Stack[-3] = "pt_b1q05_patrol_house" // @poff=158
0x18: Stack[-2] = "pers_patrool" // @poff=202
0x19: Stack[-1] = "b1q05_patrol_house.xml" // @poff=228
0x1a: Call2 0xf4

0x1b: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1c: Pop(5)
0x1d: PushEmpty(object, object, string, string, string)
0x1e: Stack[-6] = Stack[-4]
0x1f: Stack[-3] = "pt_b1q05_patrol1" // @poff=274
0x20: Stack[-2] = "pers_patrool" // @poff=202
0x21: Stack[-1] = "b1q05_patrol_key.xml" // @poff=308
0x22: Call2 0xf4

0x23: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x24: Pop(5)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-6] = Stack[-4]
0x27: Stack[-3] = "pt_b1q05_patrol2" // @poff=350
0x28: Stack[-2] = "pers_patrool" // @poff=202
0x29: Stack[-1] = "b1q05_patrol.xml" // @poff=384
0x2a: Call2 0xf4

0x2b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2c: Pop(5)
0x2d: PushEmpty(object, object, string, string, string)
0x2e: Stack[-6] = Stack[-4]
0x2f: Stack[-3] = "pt_b1q05_woman" // @poff=418
0x30: Stack[-2] = "pers_woman" // @poff=448
0x31: Stack[-1] = "b1q05_woman.xml" // @poff=470
0x32: Call2 0xf4

0x33: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x34: Pop(5)
0x35: PushEmpty(int)
0x36: Stack[-1] = (int) 1
0x37: Call2 0xc4

0x38: Pop(1)
0x39: Return(); Pop(2)

0x3a: Stack[-1] = 0
0x3b: PushEmpty(object, object, object, int, object, object, object, int)
0x3c: @ Trace(Stack[-9])
0x3d: Pop(0)
0x3e: Push("attack") // @poff=502
0x3f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x41: Push( Stack[2 + Tasks[-1].StackPointer] )
0x42: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x43: @@@ GetActor(Stack[-4]); Obj=2 // @poff=516
0x44: Pop(0)
0x45: Push(Stack[-4])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: Push("attack") // @poff=502
0x48: @ Trigger(Stack[-5], Stack[-1])
0x49: Pop(1)
0x4a: Stack[-4] = 0
0x4b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4d: @@@ GetActor(Stack[-3]); Obj=3 // @poff=516
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: Push("attack") // @poff=502
0x52: @ Trigger(Stack[-4], Stack[-1])
0x53: Pop(1)
0x54: Stack[-3] = 0
0x55: GOTO 0x81

0x56: Push("house_load") // @poff=525
0x57: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x59: Push("d2q01_house1") // @poff=0
0x5a: @ GetSceneByName(Stack[-3], Stack[-1])
0x5b: Pop(1)
0x5c: Stack[-1] = (int) 0
0x5d: Pop(0); Push((bool) Stack[-1] < Stack[0 + Tasks[-1].StackPointer])
0x5e: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5f: PushEmpty(object, object, string, string, string)
0x60: Stack[-7] = Stack[-4]
0x61: Push("pt_b1q05_rat") // @poff=547
0x62: Push((int) 1)
0x63: Pop(1); Push(Stack[-8] + Stack[-1]);
0x64: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x65: Stack[-2] = "pers_rat" // @poff=573
0x66: Stack[-1] = "b1q05_rat.xml" // @poff=591
0x67: Call2 0xe2

0x68: Pop(5)
0x69: Push((int) 1)
0x6a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6b: GOTO 0x5d

0x6c: Stack[-2] = 0
0x6d: GOTO 0x81

0x6e: Push("rat_dead") // @poff=619
0x6f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push((int) -1)
0x72: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x73: GOTO 0x81

0x74: Push("fail") // @poff=637
0x75: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x77: PushEmpty()
0x78: Call2 0x95

0x79: Pop(0)
0x7a: GOTO 0x81

0x7b: Push("completed") // @poff=647
0x7c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7e: PushEmpty()
0x7f: Call2 0x9d

0x80: Pop(0)
0x81: Return(); Pop(8)

0x82: PushEmpty(int, int)
0x83: Push("b1q05") // @poff=667
0x84: @ GetVariable(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Push((int) 1000)
0x87: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: PushEmpty()
0x8a: Call2 0x95

0x8b: Pop(0)
0x8c: PushEmpty()
0x8d: Call2 0xa5

0x8e: Pop(0)
0x8f: PushEmpty(object)
0x90: Call2 0xdc

0x91: Pop(0)
0x92: @ RemoveActor(Stack[-1])
0x93: Pop(1)
0x94: Return(); Pop(2)

0x95: Push("b1q05") // @poff=667
0x96: Push((int) -1)
0x97: @ SetVariable(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: PushEmpty()
0x9a: Call2 0xa5

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: Push("b1q05") // @poff=667
0x9e: Push((int) 1000)
0x9f: @ SetVariable(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: PushEmpty()
0xa2: Call2 0xa5

0xa3: Pop(0)
0xa4: Return(); Pop(0)

0xa5: PushEmpty(object, object)
0xa6: EventDisable(26)
0xa7: Push("house_spi4ka") // @poff=114
0xa8: @ GetSceneByName(Stack[-2], Stack[-1])
0xa9: Pop(1)
0xaa: Push("spi4ka") // @poff=44
0xab: @ Trigger(Stack[-2], Stack[-1])
0xac: Pop(1)
0xad: Push( Stack[1 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xaf: @@@ Remove(); Obj=1 // @poff=679
0xb0: Pop(0)
0xb1: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: @@@ Remove(); Obj=2 // @poff=679
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb7: @@@ Remove(); Obj=3 // @poff=679
0xb8: Pop(0)
0xb9: Push( Stack[4 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbb: Push("cleanup") // @poff=686
0xbc: @ Trigger(Stack[-4]T, Stack[-1])
0xbd: Pop(1)
0xbe: Push( Stack[5 + Tasks[-1].StackPointer] )
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: @@@ Remove(); Obj=5 // @poff=679
0xc1: Pop(0)
0xc2: Return(); Pop(2)

0xc3: Stack[-1] = 0
0xc4: PushEmpty(float, float)
0xc5: @ GetGameTime(Stack[-1])
0xc6: Pop(0)
0xc7: Push((int) 24)
0xc8: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0xa5

0xcd: Pop(0)
0xce: GOTO 0xd6

0xcf: Push((int) 0)
0xd0: Push((int) 24)
0xd1: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd2: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: @ Hold()
0xd5: Pop(0)
0xd6: Return(); Pop(2)

0xd7: PushEmpty()
0xd8: PushEmpty()
0xd9: Call2 0x82

0xda: Pop(0)
0xdb: Return(); Pop(0)

0xdc: PushEmpty(object, object)
0xdd: @ self(Stack[-1])
0xde: Pop(0)
0xdf: Stack[-1] = Stack[-3]
0xe0: Return(); Pop(2)

0xe1: Stack[-1] = 0
0xe2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=702
0xe4: Pop(0)
0xe5: Pop(0); Push((bool) Stack[-4] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe7: Push("Locator ") // @poff=713
0xe8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe9: Push(" doesn't exist") // @poff=731
0xea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb: @ Trace(Stack[-1])
0xec: Pop(1)
0xed: Stack[-1] = 0
0xee: GOTO 0xf1

0xef: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf0: Pop(0)
0xf1: Stack[-1] = Stack[-13]
0xf2: Return(); Pop(8)

0xf3: Stack[-1] = 0
0xf4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xf5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=702
0xf6: Pop(0)
0xf7: Pop(0); Push((bool) Stack[-4] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf9: Push("Locator ") // @poff=713
0xfa: Pop(1); Push(Stack[-1] + Stack[-12]);
0xfb: Push(" doesn't exist") // @poff=731
0xfc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfd: @ Trace(Stack[-1])
0xfe: Pop(1)
0xff: Stack[-1] = 0
0x100: GOTO 0x103

0x101: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=761
0x102: Pop(0)
0x103: Stack[-1] = Stack[-13]
0x104: Return(); Pop(8)

0x105: Stack[-1] = 0
