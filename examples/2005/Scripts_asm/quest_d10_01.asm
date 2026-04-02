GlobalVarCount = 0

Strings:
	W:warehouse_rubin
	W:house_petr@door1
	W:init_house
	W:NPC_Petr
	W:house_petr
	W:pt_d10q01_soldier
	W:pers_soldat
	W:d10q01_soldier.xml
	A:add
	W:pt_d10q01_msoldier
	W:d10q01_msoldier.xml
	W:pt_d10q01_sketch
	W:scripted_container
	W:d10q01_blueprint.xml
	W:pt_d10q01_petr
	W:pers_birdmask
	W:d10q01_petr.xml
	W:pt_d10q01_fire
	W:scripted
	W:d10q01_fire.xml
	W:soldier_fight
	W:attack
	W:house_unload
	W:cleanup
	W:d10q01
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
// @pool_raw:770061007200650068006f007500730065005f0072007500620069006e00000068006f007500730065005f007000650074007200400064006f006f0072003100000069006e00690074005f0068006f0075007300650000004e00500043005f005000650074007200000068006f007500730065005f0070006500740072000000700074005f006400310030007100300031005f0073006f006c006400690065007200000070006500720073005f0073006f006c0064006100740000006400310030007100300031005f0073006f006c0064006900650072002e0078006d006c00000061646400700074005f006400310030007100300031005f006d0073006f006c00640069006500720000006400310030007100300031005f006d0073006f006c0064006900650072002e0078006d006c000000700074005f006400310030007100300031005f0073006b0065007400630068000000730063007200690070007400650064005f0063006f006e007400610069006e006500720000006400310030007100300031005f0062006c00750065007000720069006e0074002e0078006d006c000000700074005f006400310030007100300031005f007000650074007200000070006500720073005f0062006900720064006d00610073006b0000006400310030007100300031005f0070006500740072002e0078006d006c000000700074005f006400310030007100300031005f00660069007200650000007300630072006900700074006500640000006400310030007100300031005f0066006900720065002e0078006d006c00000073006f006c0064006900650072005f00660069006700680074000000610074007400610063006b00000068006f007500730065005f0075006e006c006f0061006400000063006c00650061006e0075007000000064003100300071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a650067657400

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push("warehouse_rubin") // @poff=0
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Push("rubin") // @poff=20
0x5: @ Trigger(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(string, bool)
0x8: Stack[-2] = "house_petr@door1" // @poff=32
0x9: Stack[-1] = (bool) 0
0xa: Call2 0xeb

0xb: Pop(2)
0xc: PushEmpty(object)
0xd: Call2 0xc1

0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf: Pop(1)
0x10: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, int, int, object, int, int)
0x17: @ Trace(Stack[-7])
0x18: Pop(0)
0x19: Push("init_house") // @poff=66
0x1a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x1c: PushEmpty(bool, string)
0x1d: Stack[-1] = "NPC_Petr" // @poff=88
0x1e: Call2 0xfc

0x1f: Pop(2)
0x20: Push("house_petr") // @poff=106
0x21: @ GetSceneByName(Stack[-4], Stack[-1])
0x22: Pop(1)
0x23: Stack[-2] = (int) 1
0x24: Push((int) 4)
0x25: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-8] = Stack[-4]
0x29: Push("pt_d10q01_soldier") // @poff=128
0x2a: Stack[-4] = Stack[-1] + Stack[-8]; Pop(1);
0x2b: Stack[-2] = "pers_soldat" // @poff=164
0x2c: Stack[-1] = "d10q01_soldier.xml" // @poff=188
0x2d: Call2 0xc7

0x2e: Pop(4)
0x2f: @@@ add(Stack[-1]); Obj=0 // @poff=226
0x30: Pop(1)
0x31: Push((int) 1)
0x32: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33: GOTO 0x24

0x34: PushEmpty(object, object, string, string, string)
0x35: Stack[-8] = Stack[-4]
0x36: Stack[-3] = "pt_d10q01_msoldier" // @poff=230
0x37: Stack[-2] = "pers_soldat" // @poff=164
0x38: Stack[-1] = "d10q01_msoldier.xml" // @poff=268
0x39: Call2 0xc7

0x3a: Pop(4)
0x3b: @@@ add(Stack[-1]); Obj=0 // @poff=226
0x3c: Pop(1)
0x3d: PushEmpty(object, object, string, string, string)
0x3e: Stack[-8] = Stack[-4]
0x3f: Stack[-3] = "pt_d10q01_sketch" // @poff=308
0x40: Stack[-2] = "scripted_container" // @poff=342
0x41: Stack[-1] = "d10q01_blueprint.xml" // @poff=380
0x42: Call2 0xd9

0x43: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x44: Pop(5)
0x45: @ GetMainOutdoorScene(Stack[-3])
0x46: Pop(0)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-8] = Stack[-4]
0x49: Stack[-3] = "pt_d10q01_petr" // @poff=422
0x4a: Stack[-2] = "pers_birdmask" // @poff=452
0x4b: Stack[-1] = "d10q01_petr.xml" // @poff=480
0x4c: Call2 0xc7

0x4d: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x4e: Pop(5)
0x4f: PushEmpty(object, object, string, string, string)
0x50: Stack[-8] = Stack[-4]
0x51: Stack[-3] = "pt_d10q01_fire" // @poff=512
0x52: Stack[-2] = "scripted" // @poff=542
0x53: Stack[-1] = "d10q01_fire.xml" // @poff=560
0x54: Call2 0xd9

0x55: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x56: Pop(5)
0x57: Stack[-3] = 0
0x58: GOTO 0x8a

0x59: Push("soldier_fight") // @poff=592
0x5a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5c: PushEmpty(object, string)
0x5d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = "attack" // @poff=620
0x5f: Call2 0x108

0x60: Pop(2)
0x61: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x62: GOTO 0x8a

0x63: Push("house_unload") // @poff=634
0x64: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x66: PushEmpty(string, bool)
0x67: Stack[-2] = "house_petr@door1" // @poff=32
0x68: Stack[-1] = (bool) 1
0x69: Call2 0xeb

0x6a: Pop(2)
0x6b: GOTO 0x8a

0x6c: Push("cleanup") // @poff=660
0x6d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x6f: Push("d10q01") // @poff=676
0x70: @ GetVariable(Stack[-1], Stack[-2])
0x71: Pop(1)
0x72: Push((int) 1000)
0x73: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x75: PushEmpty()
0x76: Call2 0x8b

0x77: Pop(0)
0x78: GOTO 0x7c

0x79: PushEmpty()
0x7a: Call2 0x9b

0x7b: Pop(0)
0x7c: GOTO 0x8a

0x7d: Push("fail") // @poff=690
0x7e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x80: PushEmpty()
0x81: Call2 0x8b

0x82: Pop(0)
0x83: GOTO 0x8a

0x84: Push("completed") // @poff=700
0x85: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x93

0x89: Pop(0)
0x8a: Return(); Pop(6)

0x8b: Push("d10q01") // @poff=676
0x8c: Push((int) -1)
0x8d: @ SetVariable(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: PushEmpty()
0x90: Call2 0x9b

0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: Push("d10q01") // @poff=676
0x94: Push((int) 1000)
0x95: @ SetVariable(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: PushEmpty()
0x98: Call2 0x9b

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: EventDisable(26)
0x9c: PushEmpty(object, string)
0x9d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x9e: Stack[-1] = "cleanup" // @poff=660
0x9f: Call2 0x108

0xa0: Pop(2)
0xa1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa3: Push("cleanup") // @poff=660
0xa4: @ Trigger(Stack[-1]T, Stack[-1])
0xa5: Pop(1)
0xa6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: Push("cleanup") // @poff=660
0xa9: @ Trigger(Stack[-2]T, Stack[-1])
0xaa: Pop(1)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup") // @poff=660
0xae: @ Trigger(Stack[-3]T, Stack[-1])
0xaf: Pop(1)
0xb0: PushEmpty(string, bool)
0xb1: Stack[-2] = "house_petr@door1" // @poff=32
0xb2: Stack[-1] = (bool) 0
0xb3: Call2 0xeb

0xb4: Pop(2)
0xb5: PushEmpty(object)
0xb6: Call2 0xbb

0xb7: Pop(0)
0xb8: @ RemoveActor(Stack[-1])
0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: PushEmpty(object, object)
0xbc: @ self(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-1] = Stack[-3]
0xbf: Return(); Pop(2)

0xc0: Stack[-1] = 0
0xc1: PushEmpty(object, object)
0xc2: @ CreateObjectVector(Stack[-1])
0xc3: Pop(0)
0xc4: Stack[-1] = Stack[-3]
0xc5: Return(); Pop(2)

0xc6: Stack[-1] = 0
0xc7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=720
0xc9: Pop(0)
0xca: Pop(0); Push((bool) Stack[-4] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcc: Push("Locator ") // @poff=731
0xcd: Pop(1); Push(Stack[-1] + Stack[-12]);
0xce: Push(" doesn't exist") // @poff=749
0xcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: Stack[-1] = 0
0xd3: GOTO 0xd6

0xd4: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xd5: Pop(0)
0xd6: Stack[-1] = Stack[-13]
0xd7: Return(); Pop(8)

0xd8: Stack[-1] = 0
0xd9: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xda: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=720
0xdb: Pop(0)
0xdc: Pop(0); Push((bool) Stack[-4] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xde: Push("Locator ") // @poff=731
0xdf: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe0: Push(" doesn't exist") // @poff=749
0xe1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe2: @ Trace(Stack[-1])
0xe3: Pop(1)
0xe4: Stack[-1] = 0
0xe5: GOTO 0xe8

0xe6: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xe7: Pop(0)
0xe8: Stack[-1] = Stack[-13]
0xe9: Return(); Pop(8)

0xea: Stack[-1] = 0
0xeb: PushEmpty(object, object)
0xec: @ FindActor(Stack[-1], Stack[-4])
0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf0: Push("Door ") // @poff=779
0xf1: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf2: Push(" not found") // @poff=791
0xf3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf4: @ Trace(Stack[-1])
0xf5: Pop(1)
0xf6: GOTO 0xfa

0xf7: Push("locked") // @poff=813
0xf8: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=827
0xf9: Pop(1)
0xfa: Return(); Pop(2)

0xfb: Stack[-1] = 0
0xfc: PushEmpty(object, object)
0xfd: @ FindActor(Stack[-1], Stack[-3])
0xfe: Pop(0)
0xff: Pop(0); Push((bool) Stack[-1] == 0)
0x100: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x101: Stack[-4] = (bool) 0
0x102: Return(); Pop(2)

0x103: @ RemoveActor(Stack[-1])
0x104: Pop(0)
0x105: Stack[-4] = (bool) 1
0x106: Return(); Pop(2)

0x107: Stack[-1] = 0
0x108: PushEmpty(int, int, object, int, int, object)
0x109: Push(Stack[-8])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: @@ size(Stack[-3]); Obj=8 // @poff=839
0x10c: Pop(0)
0x10d: Stack[-2] = (int) 0
0x10e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x10f: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x110: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=844
0x111: Pop(0)
0x112: Push(Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x114: @ Trigger(Stack[-1], Stack[-7])
0x115: Pop(0)
0x116: Stack[-1] = 0
0x117: Push((int) 1)
0x118: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x119: GOTO 0x10e

0x11a: Return(); Pop(6)

