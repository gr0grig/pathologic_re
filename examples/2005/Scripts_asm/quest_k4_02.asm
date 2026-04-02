GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:NPC_Mark
	W:theater@door1
	W:k4q02
	W:pt_k4q02_birdmask1
	W:pers_birdmask
	W:k4q02_birdmask.xml
	W:pt_k4q02_birdmask2
	W:cot_maria
	W:pt_k4q02_mark
	W:k4q02_mark.xml
	W:init_theater
	W:pt_k4q02_prophet
	W:pers_krysa
	W:k4q02_prophet.xml
	W:completed
	W:cleanup
	A:Remove
	W:pt_mark
	W:NPC_Klara_Mark.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:4e00500043005f004d00610072006b0000007400680065006100740065007200400064006f006f007200310000006b0034007100300032000000700074005f006b0034007100300032005f0062006900720064006d00610073006b003100000070006500720073005f0062006900720064006d00610073006b0000006b0034007100300032005f0062006900720064006d00610073006b002e0078006d006c000000700074005f006b0034007100300032005f0062006900720064006d00610073006b003200000063006f0074005f006d0061007200690061000000700074005f006b0034007100300032005f006d00610072006b0000006b0034007100300032005f006d00610072006b002e0078006d006c00000069006e00690074005f0074006800650061007400650072000000700074005f006b0034007100300032005f00700072006f007000680065007400000070006500720073005f006b00720079007300610000006b0034007100300032005f00700072006f0070006800650074002e0078006d006c00000063006f006d0070006c006500740065006400000063006c00650061006e0075007000000052656d6f766500700074005f006d00610072006b0000004e00500043005f004b006c006100720061005f004d00610072006b002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

Import:
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trace (1 args)
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
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x31 Vars = (string)
		EVENT_9 Op = 0xab Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool, string)
0x2: Stack[-1] = "NPC_Mark" // @poff=0
0x3: Call2 0xec

0x4: Pop(2)
0x5: PushEmpty(string, bool)
0x6: Stack[-2] = "theater@door1" // @poff=18
0x7: Stack[-1] = (bool) 1
0x8: Call2 0xdb

0x9: Pop(2)
0xa: Push("k4q02") // @poff=46
0xb: Push((int) 1)
0xc: @ SetVariable(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: @ GetMainOutdoorScene(Stack[-1])
0xf: Pop(0)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-6] = Stack[-4]
0x12: Stack[-3] = "pt_k4q02_birdmask1" // @poff=58
0x13: Stack[-2] = "pers_birdmask" // @poff=96
0x14: Stack[-1] = "k4q02_birdmask.xml" // @poff=124
0x15: Call2 0xc8

0x16: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-6] = Stack[-4]
0x1a: Stack[-3] = "pt_k4q02_birdmask2" // @poff=162
0x1b: Stack[-2] = "pers_birdmask" // @poff=96
0x1c: Stack[-1] = "k4q02_birdmask.xml" // @poff=124
0x1d: Call2 0xc8

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: Push("cot_maria") // @poff=200
0x21: @ GetSceneByName(Stack[-2], Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-6] = Stack[-4]
0x25: Stack[-3] = "pt_k4q02_mark" // @poff=220
0x26: Stack[-2] = "NPC_Mark" // @poff=0
0x27: Stack[-1] = "k4q02_mark.xml" // @poff=248
0x28: Call2 0xb6

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(int)
0x2c: Stack[-1] = (int) 4
0x2d: Call2 0x98

0x2e: Pop(1)
0x2f: Return(); Pop(2)

0x30: Stack[-1] = 0
0x31: PushEmpty(object, object)
0x32: @ Trace(Stack[-3])
0x33: Pop(0)
0x34: Push("init_theater") // @poff=278
0x35: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x37: Push("theater") // @poff=288
0x38: @ GetSceneByName(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(object, object, string, string, string)
0x3b: Stack[-6] = Stack[-4]
0x3c: Stack[-3] = "pt_k4q02_prophet" // @poff=304
0x3d: Stack[-2] = "pers_krysa" // @poff=338
0x3e: Stack[-1] = "k4q02_prophet.xml" // @poff=360
0x3f: Call2 0xb6

0x40: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: PushEmpty(string, bool)
0x43: Stack[-2] = "theater@door1" // @poff=18
0x44: Stack[-1] = (bool) 0
0x45: Call2 0xdb

0x46: Pop(2)
0x47: Stack[-1] = 0
0x48: GOTO 0x4f

0x49: Push("completed") // @poff=396
0x4a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0x63

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: PushEmpty(int, int)
0x51: Push("k4q02") // @poff=46
0x52: @ GetVariable(Stack[-1], Stack[-2])
0x53: Pop(1)
0x54: Push((int) 1000)
0x55: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: PushEmpty()
0x58: Call2 0x5b

0x59: Pop(0)
0x5a: Return(); Pop(2)

0x5b: Push("k4q02") // @poff=46
0x5c: Push((int) -1)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call2 0x6b

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push("k4q02") // @poff=46
0x64: Push((int) 1000)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call2 0x6b

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: PushEmpty(object, object)
0x6c: EventDisable(26)
0x6d: PushEmpty(string, bool)
0x6e: Stack[-2] = "theater@door1" // @poff=18
0x6f: Stack[-1] = (bool) 0
0x70: Call2 0xdb

0x71: Pop(2)
0x72: Push( Stack[2 + Tasks[-1].StackPointer] )
0x73: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x74: Push("cleanup") // @poff=416
0x75: @ Trigger(Stack[-2]T, Stack[-1])
0x76: Pop(1)
0x77: Push( Stack[0 + Tasks[-1].StackPointer] )
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: @@@ Remove(); Obj=0 // @poff=432
0x7a: Pop(0)
0x7b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: @@@ Remove(); Obj=1 // @poff=432
0x7e: Pop(0)
0x7f: Push( Stack[4 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x81: Push("cleanup") // @poff=416
0x82: @ Trigger(Stack[-4]T, Stack[-1])
0x83: Pop(1)
0x84: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x86: Push("theater") // @poff=288
0x87: @ GetSceneByName(Stack[-2], Stack[-1])
0x88: Pop(1)
0x89: PushEmpty(object, object, string, string, string)
0x8a: Stack[-6] = Stack[-4]
0x8b: Stack[-3] = "pt_mark" // @poff=439
0x8c: Stack[-2] = "NPC_Mark" // @poff=0
0x8d: Stack[-1] = "NPC_Klara_Mark.xml" // @poff=455
0x8e: Call2 0xb6

0x8f: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x90: Pop(5)
0x91: Stack[-1] = 0
0x92: PushEmpty(object)
0x93: Call2 0xb0

0x94: Pop(0)
0x95: @ RemoveActor(Stack[-1])
0x96: Pop(1)
0x97: Return(); Pop(2)

0x98: PushEmpty(float, float)
0x99: @ GetGameTime(Stack[-1])
0x9a: Pop(0)
0x9b: Push((int) 24)
0x9c: Pop(1); Push(Stack[-4] * Stack[-1]);
0x9d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x6b

0xa1: Pop(0)
0xa2: GOTO 0xaa

0xa3: Push((int) 0)
0xa4: Push((int) 24)
0xa5: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa6: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ Hold()
0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: PushEmpty()
0xac: PushEmpty()
0xad: Call2 0x50

0xae: Pop(0)
0xaf: Return(); Pop(0)

0xb0: PushEmpty(object, object)
0xb1: @ self(Stack[-1])
0xb2: Pop(0)
0xb3: Stack[-1] = Stack[-3]
0xb4: Return(); Pop(2)

0xb5: Stack[-1] = 0
0xb6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=493
0xb8: Pop(0)
0xb9: Pop(0); Push((bool) Stack[-4] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbb: Push("Locator ") // @poff=504
0xbc: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbd: Push(" doesn't exist") // @poff=522
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: @ Trace(Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-1] = 0
0xc2: GOTO 0xc5

0xc3: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc4: Pop(0)
0xc5: Stack[-1] = Stack[-13]
0xc6: Return(); Pop(8)

0xc7: Stack[-1] = 0
0xc8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=493
0xca: Pop(0)
0xcb: Pop(0); Push((bool) Stack[-4] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcd: Push("Locator ") // @poff=504
0xce: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcf: Push(" doesn't exist") // @poff=522
0xd0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1: @ Trace(Stack[-1])
0xd2: Pop(1)
0xd3: Stack[-1] = 0
0xd4: GOTO 0xd8

0xd5: Push((bool) 1)
0xd6: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=552
0xd7: Pop(1)
0xd8: Stack[-1] = Stack[-13]
0xd9: Return(); Pop(8)

0xda: Stack[-1] = 0
0xdb: PushEmpty(object, object)
0xdc: @ FindActor(Stack[-1], Stack[-4])
0xdd: Pop(0)
0xde: Pop(0); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe0: Push("Door ") // @poff=571
0xe1: Pop(1); Push(Stack[-1] + Stack[-5]);
0xe2: Push(" not found") // @poff=583
0xe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe4: @ Trace(Stack[-1])
0xe5: Pop(1)
0xe6: GOTO 0xea

0xe7: Push("locked") // @poff=605
0xe8: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=619
0xe9: Pop(1)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, object)
0xed: @ FindActor(Stack[-1], Stack[-3])
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-1] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: Stack[-4] = (bool) 0
0xf2: Return(); Pop(2)

0xf3: @ RemoveActor(Stack[-1])
0xf4: Pop(0)
0xf5: Stack[-4] = (bool) 1
0xf6: Return(); Pop(2)

0xf7: Stack[-1] = 0
