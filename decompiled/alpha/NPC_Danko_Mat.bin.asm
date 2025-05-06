GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	HasItem
	No
	ui/NPC_Mat.png
	playsound
	giveitem
	ood8Mat1
	d8q01BringBadBoy
	d8q01MatBringToy
	d8q01MatGotoToyHouse
	pt_map_d8q01_toyhouse
	AddMark
	ood8Mat2
	quest_d8_01
	unlock_boiny
	ood8Mat3
	ood8Mat4
	ood8Mat5
	ood8Mat6
	ood8Mat7
	d8TalkToMat
	d8q02
	feromicin
	RemoveItemByType
	ShowMap
	d8q01
	toy_horse
	d8q01BigVladIsVictim
	d8q01MladVladIsVictim
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16d Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x8a8

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x61c

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x65d

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x8ac

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x610

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x621

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x6b5

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x6b7

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x847

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x659

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x76: PushEmpty(bool)
0x77: Stack[-1] = (bool) 0
0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call 0x745

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call 0x751

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 1
0x83: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call 0x6c3

0x88: Pop(2)
0x89: PushEmpty(object, object)
0x8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c: Call 0x717

0x8d: Pop(2)
0x8e: PushEmpty(string)
0x8f: Stack[-1] = "Neutral"
0x90: Call 0x15d

0x91: Pop(1)
0x92: Push((int) 13496)
0x93: @@ SetMessage(Stack[-1])
0x94: Pop(1)
0x95: @@ ClearReplies()
0x96: Pop(0)
0x97: Push((int) 13504)
0x98: Push((int) 14773)
0x99: Push((int) 14746)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: Push((int) 13505)
0x9d: Push((int) 14748)
0x9e: Push((int) 14747)
0x9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0: Pop(3)
0xa1: GOTO 0x13f

0xa2: PushEmpty(object, object)
0xa3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5: Call 0x717

0xa6: Pop(2)
0xa7: PushEmpty(string)
0xa8: Stack[-1] = "Neutral"
0xa9: Call 0x15d

0xaa: Pop(1)
0xab: Push((int) 12350)
0xac: @@ SetMessage(Stack[-1])
0xad: Pop(1)
0xae: @@ ClearReplies()
0xaf: Pop(0)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 0
0xb2: PushEmpty(bool)
0xb3: Stack[-1] = (bool) 0
0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call 0x75d

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call 0x769

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-1] = (bool) 1
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call 0x774

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 1
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: Push((int) 13563)
0xc8: Push((int) 14813)
0xc9: Push((int) 14812)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call 0x780

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 12352)
0xd2: Push((int) 13512)
0xd3: Push((int) 13511)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call 0x78c

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 12366)
0xdc: Push((int) 13527)
0xdd: Push((int) 13526)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call 0x798

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: Push((int) 12357)
0xe6: Push((int) 13518)
0xe7: Push((int) 13517)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: PushEmpty(bool)
0xeb: Stack[-1] = (bool) 0
0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call 0x7a4

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf1: PushEmpty(bool, object)
0xf2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Call 0x7bc

0xf4: Pop(1)
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Stack[-1] = (bool) 1
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 13752)
0xf9: Push((int) 14997)
0xfa: Push((int) 14996)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: PushEmpty(bool)
0xfe: Stack[-1] = (bool) 0
0xff: PushEmpty(bool, object)
0x100: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101: Call 0x7b0

0x102: Pop(1)
0x103: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call 0x7c8

0x107: Pop(1)
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: Stack[-1] = (bool) 1
0x10a: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10b: Push((int) 13568)
0x10c: Push((int) 14818)
0x10d: Push((int) 14817)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: PushEmpty(bool)
0x111: Stack[-1] = (bool) 0
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call 0x7d4

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call 0x7e0

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 1
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: Push((int) 13766)
0x11f: Push((int) 15006)
0x120: Push((int) 15005)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: PushEmpty(bool)
0x124: Stack[-1] = (bool) 0
0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call 0x7d4

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call 0x7e0

0x12d: Pop(1)
0x12e: Pop(1); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 13769)
0x133: Push((int) 15009)
0x134: Push((int) 15008)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Push((int) 12351)
0x138: Push((int) -1)
0x139: Push((int) 13510)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: GOTO 0x13f

0x13d: Return(); Pop(0)

0x13e: GOTO 0x74

0x13f: PushEmpty(bool)
0x140: Call 0x6b9

0x141: Pop(0)
0x142: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x143: @ lshWaitForAnimEnd()
0x144: Pop(0)
0x145: Push( Stack[3 + Tasks[-1].StackPointer] )
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: GOTO 0x14d

0x148: PushEmpty(string)
0x149: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x14a: Call 0x65d

0x14b: Pop(1)
0x14c: GOTO 0x143

0x14d: GOTO 0x15c

0x14e: Push("all")
0x14f: Push("idle")
0x150: @ PlayAnimation(Stack[-2], Stack[-1])
0x151: Pop(2)
0x152: @ WaitForAnimEnd()
0x153: Pop(0)
0x154: Push( Stack[3 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: GOTO 0x15c

0x157: Push("all")
0x158: Push("idle")
0x159: @ PlayAnimation(Stack[-2], Stack[-1])
0x15a: Pop(2)
0x15b: GOTO 0x152

0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty(bool)
0x15f: Call 0x6b9

0x160: Pop(0)
0x161: Pop(1); Push((bool) Stack[-1] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Return(); Pop(0)

0x164: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Return(); Pop(0)

0x167: PushEmpty(string)
0x168: Stack[-1] = Stack[-2]
0x169: Call 0x65d

0x16a: Pop(1)
0x16b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x16c: Return(); Pop(0)

0x16d: PushEmpty()
0x16e: Push((int) 1)
0x16f: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x170: PushEmpty()
0x171: Call 0x66f

0x172: Pop(0)
0x173: Push((int) 14805)
0x174: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(object, object)
0x177: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x178: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x179: Call 0x6c9

0x17a: Pop(2)
0x17b: Push((int) 14811)
0x17c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17e: PushEmpty(object, object)
0x17f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x180: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181: Call 0x6d2

0x182: Pop(2)
0x183: PushEmpty(object, object)
0x184: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x185: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x186: Call 0x735

0x187: Pop(2)
0x188: Push((int) 14812)
0x189: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: PushEmpty(object, object)
0x18c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18e: Call 0x6e9

0x18f: Pop(2)
0x190: Push((int) 14816)
0x191: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(object, object)
0x194: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x195: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x196: Call 0x6ef

0x197: Pop(2)
0x198: Push((int) 13511)
0x199: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(object, object)
0x19c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19e: Call 0x6f9

0x19f: Pop(2)
0x1a0: Push((int) 13526)
0x1a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call 0x6ff

0x1a7: Pop(2)
0x1a8: Push((int) 13517)
0x1a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: PushEmpty(object, object)
0x1ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Call 0x705

0x1af: Pop(2)
0x1b0: Push((int) 14996)
0x1b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(object, object)
0x1b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b6: Call 0x70b

0x1b7: Pop(2)
0x1b8: Push((int) 15004)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1be: Call 0x6ef

0x1bf: Pop(2)
0x1c0: Push((int) 14817)
0x1c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: PushEmpty(object, object)
0x1c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call 0x711

0x1c7: Pop(2)
0x1c8: Push((int) 15002)
0x1c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call 0x6ef

0x1cf: Pop(2)
0x1d0: Push((int) 15007)
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: PushEmpty(object, object)
0x1d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d6: Call 0x72f

0x1d7: Pop(2)
0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call 0x6bb

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call 0x71d

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call 0x6c1

0x1e6: Pop(2)
0x1e7: Push((int) 15010)
0x1e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call 0x726

0x1ee: Pop(2)
0x1ef: Push((int) 14737)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Stack[-1] = (bool) 0
0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Call 0x745

0x1f7: Pop(1)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f9: PushEmpty(bool, object)
0x1fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Call 0x751

0x1fc: Pop(1)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[-1] = (bool) 1
0x1ff: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call 0x6c3

0x204: Pop(2)
0x205: PushEmpty(object, object)
0x206: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call 0x717

0x209: Pop(2)
0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call 0x15d

0x20d: Pop(1)
0x20e: Push((int) 13496)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 13504)
0x214: Push((int) 14773)
0x215: Push((int) 14746)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 13505)
0x219: Push((int) 14748)
0x21a: Push((int) 14747)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(object, object)
0x21f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x220: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x221: Call 0x717

0x222: Pop(2)
0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral"
0x225: Call 0x15d

0x226: Pop(1)
0x227: Push((int) 12350)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: PushEmpty(bool)
0x22f: Stack[-1] = (bool) 0
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x232: Call 0x75d

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x235: PushEmpty(bool, object)
0x236: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x237: Call 0x769

0x238: Pop(1)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: Stack[-1] = (bool) 1
0x23b: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call 0x774

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Stack[-1] = (bool) 1
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: Push((int) 13563)
0x244: Push((int) 14813)
0x245: Push((int) 14812)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call 0x780

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: Push((int) 12352)
0x24e: Push((int) 13512)
0x24f: Push((int) 13511)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call 0x78c

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: Push((int) 12366)
0x258: Push((int) 13527)
0x259: Push((int) 13526)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: PushEmpty(bool, object)
0x25d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25e: Call 0x798

0x25f: Pop(1)
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: Push((int) 12357)
0x262: Push((int) 13518)
0x263: Push((int) 13517)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: PushEmpty(bool)
0x267: Stack[-1] = (bool) 0
0x268: PushEmpty(bool, object)
0x269: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26a: Call 0x7a4

0x26b: Pop(1)
0x26c: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26d: PushEmpty(bool, object)
0x26e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26f: Call 0x7bc

0x270: Pop(1)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 13752)
0x275: Push((int) 14997)
0x276: Push((int) 14996)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: PushEmpty(bool)
0x27a: Stack[-1] = (bool) 0
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call 0x7b0

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x282: Call 0x7c8

0x283: Pop(1)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: Stack[-1] = (bool) 1
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: Push((int) 13568)
0x288: Push((int) 14818)
0x289: Push((int) 14817)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: PushEmpty(bool)
0x28d: Stack[-1] = (bool) 0
0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call 0x7d4

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x295: Call 0x7e0

0x296: Pop(1)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = (bool) 1
0x299: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29a: Push((int) 13766)
0x29b: Push((int) 15006)
0x29c: Push((int) 15005)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: PushEmpty(bool, object)
0x2a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Call 0x7d4

0x2a4: Pop(1)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a6: PushEmpty(bool, object)
0x2a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Call 0x7e0

0x2a9: Pop(1)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-1] = (bool) 1
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ae: Push((int) 13769)
0x2af: Push((int) 15009)
0x2b0: Push((int) 15008)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Push((int) 12351)
0x2b4: Push((int) -1)
0x2b5: Push((int) 13510)
0x2b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(3)
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 15009)
0x2ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "Neutral"
0x2be: Call 0x15d

0x2bf: Pop(1)
0x2c0: Push((int) 13770)
0x2c1: @@ SetMessage(Stack[-1])
0x2c2: Pop(1)
0x2c3: @@ ClearReplies()
0x2c4: Pop(0)
0x2c5: Push((int) 13771)
0x2c6: Push((int) -1)
0x2c7: Push((int) 15010)
0x2c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 15006)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral"
0x2d0: Call 0x15d

0x2d1: Pop(1)
0x2d2: Push((int) 13767)
0x2d3: @@ SetMessage(Stack[-1])
0x2d4: Pop(1)
0x2d5: @@ ClearReplies()
0x2d6: Pop(0)
0x2d7: Push((int) 13768)
0x2d8: Push((int) -1)
0x2d9: Push((int) 15007)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 14818)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral"
0x2e2: Call 0x15d

0x2e3: Pop(1)
0x2e4: Push((int) 13569)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 13570)
0x2ea: Push((int) 14820)
0x2eb: Push((int) 14819)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Push((int) 14820)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Neutral"
0x2f4: Call 0x15d

0x2f5: Pop(1)
0x2f6: Push((int) 13571)
0x2f7: @@ SetMessage(Stack[-1])
0x2f8: Pop(1)
0x2f9: @@ ClearReplies()
0x2fa: Pop(0)
0x2fb: Push((int) 13572)
0x2fc: Push((int) 15001)
0x2fd: Push((int) 14821)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: Push((int) 15001)
0x302: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral"
0x306: Call 0x15d

0x307: Pop(1)
0x308: Push((int) 13757)
0x309: @@ SetMessage(Stack[-1])
0x30a: Pop(1)
0x30b: @@ ClearReplies()
0x30c: Pop(0)
0x30d: Push((int) 13758)
0x30e: Push((int) -1)
0x30f: Push((int) 15002)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Return(); Pop(0)

0x313: Push((int) 14997)
0x314: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x316: PushEmpty(string)
0x317: Stack[-1] = "Neutral"
0x318: Call 0x15d

0x319: Pop(1)
0x31a: Push((int) 13753)
0x31b: @@ SetMessage(Stack[-1])
0x31c: Pop(1)
0x31d: @@ ClearReplies()
0x31e: Pop(0)
0x31f: Push((int) 13754)
0x320: Push((int) 14999)
0x321: Push((int) 14998)
0x322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: Return(); Pop(0)

0x325: Push((int) 14999)
0x326: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x328: PushEmpty(string)
0x329: Stack[-1] = "Neutral"
0x32a: Call 0x15d

0x32b: Pop(1)
0x32c: Push((int) 13755)
0x32d: @@ SetMessage(Stack[-1])
0x32e: Pop(1)
0x32f: @@ ClearReplies()
0x330: Pop(0)
0x331: Push((int) 13756)
0x332: Push((int) 15003)
0x333: Push((int) 15000)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 15003)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Neutral"
0x33c: Call 0x15d

0x33d: Pop(1)
0x33e: Push((int) 13759)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 13760)
0x344: Push((int) -1)
0x345: Push((int) 15004)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: Push((int) 13518)
0x34a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Neutral"
0x34e: Call 0x15d

0x34f: Pop(1)
0x350: Push((int) 12358)
0x351: @@ SetMessage(Stack[-1])
0x352: Pop(1)
0x353: @@ ClearReplies()
0x354: Pop(0)
0x355: Push((int) 12359)
0x356: Push((int) 13520)
0x357: Push((int) 13519)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Push((int) 13497)
0x35b: Push((int) 14739)
0x35c: Push((int) 14738)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Return(); Pop(0)

0x360: Push((int) 14739)
0x361: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x363: PushEmpty(string)
0x364: Stack[-1] = "Neutral"
0x365: Call 0x15d

0x366: Pop(1)
0x367: Push((int) 13498)
0x368: @@ SetMessage(Stack[-1])
0x369: Pop(1)
0x36a: @@ ClearReplies()
0x36b: Pop(0)
0x36c: Push((int) 13499)
0x36d: Push((int) 14741)
0x36e: Push((int) 14740)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 14741)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call 0x15d

0x378: Pop(1)
0x379: Push((int) 13500)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 13501)
0x37f: Push((int) 14743)
0x380: Push((int) 14742)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 14743)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Neutral"
0x389: Call 0x15d

0x38a: Pop(1)
0x38b: Push((int) 13502)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 13503)
0x391: Push((int) 13524)
0x392: Push((int) 14744)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 13520)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Neutral"
0x39b: Call 0x15d

0x39c: Pop(1)
0x39d: Push((int) 12360)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 12361)
0x3a3: Push((int) 13522)
0x3a4: Push((int) 13521)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 13522)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Neutral"
0x3ad: Call 0x15d

0x3ae: Pop(1)
0x3af: Push((int) 12362)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 12363)
0x3b5: Push((int) 13524)
0x3b6: Push((int) 13523)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 13524)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Neutral"
0x3bf: Call 0x15d

0x3c0: Pop(1)
0x3c1: Push((int) 12364)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 12365)
0x3c7: Push((int) -1)
0x3c8: Push((int) 13525)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Return(); Pop(0)

0x3cc: Push((int) 13527)
0x3cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3cf: PushEmpty(string)
0x3d0: Stack[-1] = "Neutral"
0x3d1: Call 0x15d

0x3d2: Pop(1)
0x3d3: Push((int) 12367)
0x3d4: @@ SetMessage(Stack[-1])
0x3d5: Pop(1)
0x3d6: @@ ClearReplies()
0x3d7: Pop(0)
0x3d8: Push((int) 12368)
0x3d9: Push((int) 13529)
0x3da: Push((int) 13528)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 13529)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Neutral"
0x3e3: Call 0x15d

0x3e4: Pop(1)
0x3e5: Push((int) 12369)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 12370)
0x3eb: Push((int) 13531)
0x3ec: Push((int) 13530)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 13531)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Neutral"
0x3f5: Call 0x15d

0x3f6: Pop(1)
0x3f7: Push((int) 12371)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 12372)
0x3fd: Push((int) -1)
0x3fe: Push((int) 13532)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 13512)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Neutral"
0x407: Call 0x15d

0x408: Pop(1)
0x409: Push((int) 12353)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 13529)
0x40f: Push((int) 14775)
0x410: Push((int) 14774)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 14775)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Neutral"
0x419: Call 0x15d

0x41a: Pop(1)
0x41b: Push((int) 13530)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 13531)
0x421: Push((int) 14777)
0x422: Push((int) 14776)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Return(); Pop(0)

0x426: Push((int) 14777)
0x427: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral"
0x42b: Call 0x15d

0x42c: Pop(1)
0x42d: Push((int) 13532)
0x42e: @@ SetMessage(Stack[-1])
0x42f: Pop(1)
0x430: @@ ClearReplies()
0x431: Pop(0)
0x432: Push((int) 13533)
0x433: Push((int) 14779)
0x434: Push((int) 14778)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Push((int) 13536)
0x438: Push((int) 14782)
0x439: Push((int) 14781)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 14782)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral"
0x442: Call 0x15d

0x443: Pop(1)
0x444: Push((int) 13537)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 13538)
0x44a: Push((int) 14784)
0x44b: Push((int) 14783)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Return(); Pop(0)

0x44f: Push((int) 14784)
0x450: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x452: PushEmpty(string)
0x453: Stack[-1] = "Neutral"
0x454: Call 0x15d

0x455: Pop(1)
0x456: Push((int) 13539)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: Push((int) 13540)
0x45c: Push((int) 14786)
0x45d: Push((int) 14785)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 14786)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Neutral"
0x466: Call 0x15d

0x467: Pop(1)
0x468: Push((int) 13541)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 13542)
0x46e: Push((int) -1)
0x46f: Push((int) 14787)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 14779)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral"
0x478: Call 0x15d

0x479: Pop(1)
0x47a: Push((int) 13534)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: Push((int) 13535)
0x480: Push((int) 14788)
0x481: Push((int) 14780)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Return(); Pop(0)

0x485: Push((int) 14788)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x488: PushEmpty(string)
0x489: Stack[-1] = "Neutral"
0x48a: Call 0x15d

0x48b: Pop(1)
0x48c: Push((int) 13543)
0x48d: @@ SetMessage(Stack[-1])
0x48e: Pop(1)
0x48f: @@ ClearReplies()
0x490: Pop(0)
0x491: Push((int) 13544)
0x492: Push((int) 14790)
0x493: Push((int) 14789)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Return(); Pop(0)

0x497: Push((int) 14790)
0x498: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral"
0x49c: Call 0x15d

0x49d: Pop(1)
0x49e: Push((int) 13545)
0x49f: @@ SetMessage(Stack[-1])
0x4a0: Pop(1)
0x4a1: @@ ClearReplies()
0x4a2: Pop(0)
0x4a3: Push((int) 13546)
0x4a4: Push((int) -1)
0x4a5: Push((int) 14791)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 14813)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call 0x15d

0x4af: Pop(1)
0x4b0: Push((int) 13564)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 13565)
0x4b6: Push((int) 14815)
0x4b7: Push((int) 14814)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 14815)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Neutral"
0x4c0: Call 0x15d

0x4c1: Pop(1)
0x4c2: Push((int) 13566)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: Push((int) 13567)
0x4c8: Push((int) -1)
0x4c9: Push((int) 14816)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Push((int) 14748)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral"
0x4d2: Call 0x15d

0x4d3: Pop(1)
0x4d4: Push((int) 13506)
0x4d5: @@ SetMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ ClearReplies()
0x4d8: Pop(0)
0x4d9: Push((int) 13507)
0x4da: Push((int) 14750)
0x4db: Push((int) 14749)
0x4dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Push((int) 13513)
0x4df: Push((int) 14756)
0x4e0: Push((int) 14755)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Return(); Pop(0)

0x4e4: Push((int) 14756)
0x4e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e7: PushEmpty(string)
0x4e8: Stack[-1] = "Neutral"
0x4e9: Call 0x15d

0x4ea: Pop(1)
0x4eb: Push((int) 13514)
0x4ec: @@ SetMessage(Stack[-1])
0x4ed: Pop(1)
0x4ee: @@ ClearReplies()
0x4ef: Pop(0)
0x4f0: Push((int) 13515)
0x4f1: Push((int) 14758)
0x4f2: Push((int) 14757)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: Push((int) 13517)
0x4f6: Push((int) 14760)
0x4f7: Push((int) 14759)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 14760)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x4fe: PushEmpty(string)
0x4ff: Stack[-1] = "Neutral"
0x500: Call 0x15d

0x501: Pop(1)
0x502: Push((int) 13518)
0x503: @@ SetMessage(Stack[-1])
0x504: Pop(1)
0x505: @@ ClearReplies()
0x506: Pop(0)
0x507: Push((int) 13520)
0x508: Push((int) 14750)
0x509: Push((int) 14763)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Return(); Pop(0)

0x50d: Push((int) 14758)
0x50e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x510: PushEmpty(string)
0x511: Stack[-1] = "Neutral"
0x512: Call 0x15d

0x513: Pop(1)
0x514: Push((int) 13516)
0x515: @@ SetMessage(Stack[-1])
0x516: Pop(1)
0x517: @@ ClearReplies()
0x518: Pop(0)
0x519: Push((int) 13519)
0x51a: Push((int) 14750)
0x51b: Push((int) 14761)
0x51c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51d: Pop(3)
0x51e: Return(); Pop(0)

0x51f: Push((int) 14750)
0x520: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x522: PushEmpty(string)
0x523: Stack[-1] = "Neutral"
0x524: Call 0x15d

0x525: Pop(1)
0x526: Push((int) 13508)
0x527: @@ SetMessage(Stack[-1])
0x528: Pop(1)
0x529: @@ ClearReplies()
0x52a: Pop(0)
0x52b: Push((int) 13521)
0x52c: Push((int) 14766)
0x52d: Push((int) 14765)
0x52e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(3)
0x530: Push((int) 13509)
0x531: Push((int) 14752)
0x532: Push((int) 14751)
0x533: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x534: Pop(3)
0x535: Return(); Pop(0)

0x536: Push((int) 14752)
0x537: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x539: PushEmpty(string)
0x53a: Stack[-1] = "Neutral"
0x53b: Call 0x15d

0x53c: Pop(1)
0x53d: Push((int) 13510)
0x53e: @@ SetMessage(Stack[-1])
0x53f: Pop(1)
0x540: @@ ClearReplies()
0x541: Pop(0)
0x542: Push((int) 13511)
0x543: Push((int) 14754)
0x544: Push((int) 14753)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Return(); Pop(0)

0x548: Push((int) 14754)
0x549: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x54b: PushEmpty(string)
0x54c: Stack[-1] = "Neutral"
0x54d: Call 0x15d

0x54e: Pop(1)
0x54f: Push((int) 13512)
0x550: @@ SetMessage(Stack[-1])
0x551: Pop(1)
0x552: @@ ClearReplies()
0x553: Pop(0)
0x554: Push((int) 13547)
0x555: Push((int) 14773)
0x556: Push((int) 14792)
0x557: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x558: Pop(3)
0x559: Return(); Pop(0)

0x55a: Push((int) 14766)
0x55b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x55d: PushEmpty(string)
0x55e: Stack[-1] = "Neutral"
0x55f: Call 0x15d

0x560: Pop(1)
0x561: Push((int) 13522)
0x562: @@ SetMessage(Stack[-1])
0x563: Pop(1)
0x564: @@ ClearReplies()
0x565: Pop(0)
0x566: Push((int) 13523)
0x567: Push((int) 14769)
0x568: Push((int) 14767)
0x569: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56a: Pop(3)
0x56b: Push((int) 13524)
0x56c: Push((int) 14769)
0x56d: Push((int) 14768)
0x56e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56f: Pop(3)
0x570: Return(); Pop(0)

0x571: Push((int) 14769)
0x572: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call 0x15d

0x577: Pop(1)
0x578: Push((int) 13525)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: Push((int) 13526)
0x57e: Push((int) 14773)
0x57f: Push((int) 14770)
0x580: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x581: Pop(3)
0x582: Push((int) 13527)
0x583: Push((int) -1)
0x584: Push((int) 14772)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Push((int) 14773)
0x589: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral"
0x58d: Call 0x15d

0x58e: Pop(1)
0x58f: Push((int) 13528)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 13548)
0x595: Push((int) 14796)
0x596: Push((int) 14795)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Return(); Pop(0)

0x59a: Push((int) 14796)
0x59b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x59d: PushEmpty(string)
0x59e: Stack[-1] = "Neutral"
0x59f: Call 0x15d

0x5a0: Pop(1)
0x5a1: Push((int) 13549)
0x5a2: @@ SetMessage(Stack[-1])
0x5a3: Pop(1)
0x5a4: @@ ClearReplies()
0x5a5: Pop(0)
0x5a6: Push((int) 13550)
0x5a7: Push((int) 14800)
0x5a8: Push((int) 14797)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Push((int) 13551)
0x5ac: Push((int) 14799)
0x5ad: Push((int) 14798)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Return(); Pop(0)

0x5b1: Push((int) 14799)
0x5b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Neutral"
0x5b6: Call 0x15d

0x5b7: Pop(1)
0x5b8: Push((int) 13552)
0x5b9: @@ SetMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: @@ ClearReplies()
0x5bc: Pop(0)
0x5bd: Push((int) 13554)
0x5be: Push((int) 14800)
0x5bf: Push((int) 14801)
0x5c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c1: Pop(3)
0x5c2: Return(); Pop(0)

0x5c3: Push((int) 14800)
0x5c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5c6: PushEmpty(string)
0x5c7: Stack[-1] = "Neutral"
0x5c8: Call 0x15d

0x5c9: Pop(1)
0x5ca: Push((int) 13553)
0x5cb: @@ SetMessage(Stack[-1])
0x5cc: Pop(1)
0x5cd: @@ ClearReplies()
0x5ce: Pop(0)
0x5cf: Push((int) 13556)
0x5d0: Push((int) -1)
0x5d1: Push((int) 14805)
0x5d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d3: Pop(3)
0x5d4: Push((int) 13557)
0x5d5: Push((int) 14807)
0x5d6: Push((int) 14806)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Return(); Pop(0)

0x5da: Push((int) 14807)
0x5db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5dd: PushEmpty(string)
0x5de: Stack[-1] = "Neutral"
0x5df: Call 0x15d

0x5e0: Pop(1)
0x5e1: Push((int) 13558)
0x5e2: @@ SetMessage(Stack[-1])
0x5e3: Pop(1)
0x5e4: @@ ClearReplies()
0x5e5: Pop(0)
0x5e6: Push((int) 13559)
0x5e7: Push((int) 14810)
0x5e8: Push((int) 14808)
0x5e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(3)
0x5eb: Push((int) 13560)
0x5ec: Push((int) -1)
0x5ed: Push((int) 14809)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: Return(); Pop(0)

0x5f1: Push((int) 14810)
0x5f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5f4: PushEmpty(string)
0x5f5: Stack[-1] = "Neutral"
0x5f6: Call 0x15d

0x5f7: Pop(1)
0x5f8: Push((int) 13561)
0x5f9: @@ SetMessage(Stack[-1])
0x5fa: Pop(1)
0x5fb: @@ ClearReplies()
0x5fc: Pop(0)
0x5fd: Push((int) 13562)
0x5fe: Push((int) -1)
0x5ff: Push((int) 14811)
0x600: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x601: Pop(3)
0x602: Return(); Pop(0)

0x603: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x604: PushEmpty(bool)
0x605: Call 0x6b9

0x606: Pop(0)
0x607: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x608: @ lshStopAnimation()
0x609: Pop(0)
0x60a: GOTO 0x60d

0x60b: @ StopAnimation()
0x60c: Pop(0)
0x60d: Return(); Pop(0)

0x60e: GOTO 0x16e

0x60f: Return(); Pop(0)

0x610: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x611: @@ GetPosition(Stack[-4])
0x612: Pop(0)
0x613: @ GetPosition(Stack[-3])
0x614: Pop(0)
0x615: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x616: Push(CvectorIndex(Stack[-2], 0))
0x617: Push(CvectorIndex(Stack[-3], 2))
0x618: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x619: Pop(2)
0x61a: Stack[-10] = Stack[-1]
0x61b: Return(); Pop(8)

0x61c: PushEmpty(bool, bool)
0x61d: @ IsLoaded(Stack[-1])
0x61e: Pop(0)
0x61f: Stack[-3] = Stack[-1]
0x620: Return(); Pop(2)

0x621: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x622: @@ GetPosition(Stack[-7])
0x623: Pop(0)
0x624: @@ GetEyesHeight(Stack[-8])
0x625: Pop(0)
0x626: Push(CvectorIndex(Stack[-7], 1))
0x627: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x628: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x629: @ GetPosition(Stack[-6])
0x62a: Pop(0)
0x62b: @ GetEyesHeight(Stack[-8])
0x62c: Pop(0)
0x62d: Push(CvectorIndex(Stack[-6], 1))
0x62e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x62f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x630: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x631: Push(CvectorIndex(Stack[-5], 1))
0x632: Stack[-1] = (int) 0
0x633: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x634: Pop(0); Push(Stack[-5] | Stack[-5]);
0x635: Pop(1); Push(Sqrt(Stack[-1]))
0x636: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x637: Stack[-4] = -Stack[-5]; Pop(0);
0x638: Push((int) 70)
0x639: Pop(1); Push(Stack[-6] * Stack[-1]);
0x63a: PushEmpty(cvector, cvector)
0x63b: Push(CVector(0.0, 1.0, 0.0))
0x63c: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x63d: Call 0x676

0x63e: Pop(1)
0x63f: Push((int) 25)
0x640: Pop(2); Push(Stack[-2] * Stack[-1]);
0x641: Pop(2); Push(Stack[-2] + Stack[-1]);
0x642: Push(CVector(0.0, 10.0, 0.0))
0x643: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x644: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x645: @ IsOverrideActive(Stack[-1])
0x646: Pop(0)
0x647: Push(Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-18] = (bool) 0
0x64a: Return(); Pop(16)

0x64b: @ StopWorld()
0x64c: Pop(0)
0x64d: @ CameraTransit(Stack[-2], Stack[-4])
0x64e: Pop(0)
0x64f: Push(CvectorIndex(Stack[-3], 0))
0x650: Push(CvectorIndex(Stack[-4], 2))
0x651: @ Rotate(Stack[-2], Stack[-1])
0x652: Pop(2)
0x653: @ CameraWaitForPlayFinish()
0x654: Pop(0)
0x655: @ ResumeWorld()
0x656: Pop(0)
0x657: Stack[-18] = (bool) 1
0x658: Return(); Pop(16)

0x659: PushEmpty()
0x65a: @ CameraSwitchToNormal()
0x65b: Pop(0)
0x65c: Return(); Pop(0)

0x65d: PushEmpty(float, float, float, float)
0x65e: Push("playing ")
0x65f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x660: @ Trace(Stack[-1])
0x661: Pop(1)
0x662: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x663: Pop(0)
0x664: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x665: Pop(0)
0x666: Push("start: ")
0x667: Pop(1); Push(Stack[-1] + Stack[-3]);
0x668: @ Trace(Stack[-1])
0x669: Pop(1)
0x66a: Push("end: ")
0x66b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x66c: @ Trace(Stack[-1])
0x66d: Pop(1)
0x66e: Return(); Pop(4)

0x66f: PushEmpty(bool)
0x670: Call 0x6b9

0x671: Pop(0)
0x672: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x673: @ lshStopSpeech()
0x674: Pop(0)
0x675: Return(); Pop(0)

0x676: PushEmpty(float, float)
0x677: Pop(0); Push(Stack[-3] | Stack[-3]);
0x678: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x679: Push((float)0.0)
0x67a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x67d: Return(); Pop(2)

0x67e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x67f: Return(); Pop(2)

0x680: PushEmpty(int, int)
0x681: @ GetVariable(Stack[-3], Stack[-1])
0x682: Pop(0)
0x683: Stack[-4] = Stack[-1]
0x684: Return(); Pop(2)

0x685: PushEmpty(int, bool, int, bool)
0x686: @ GetInvItemByName(Stack[-2], Stack[-5])
0x687: Pop(0)
0x688: @@ HasItem(Stack[-2], Stack[-1])
0x689: Pop(0)
0x68a: Stack[-7] = Stack[-1]
0x68b: Return(); Pop(4)

0x68c: PushEmpty(object, object)
0x68d: @ FindActor(Stack[-1], Stack[-4])
0x68e: Pop(0)
0x68f: Pop(0); Push((bool) Stack[-1] == 0)
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: Stack[-5] = (bool) 0
0x692: Return(); Pop(2)

0x693: @ Trigger(Stack[-1], Stack[-3])
0x694: Pop(0)
0x695: Stack[-5] = (bool) 1
0x696: Return(); Pop(2)

0x697: Stack[-1] = 0
0x698: PushEmpty(float, float)
0x699: @ GetGameTime(Stack[-1])
0x69a: Pop(0)
0x69b: Stack[-3] = Stack[-1]
0x69c: Return(); Pop(2)

0x69d: PushEmpty(float, float)
0x69e: @ GetGameTime(Stack[-1])
0x69f: Pop(0)
0x6a0: Push((int) 1)
0x6a1: PushEmpty(int)
0x6a2: Push((int) 24)
0x6a3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6a4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6a5: Return(); Pop(2)

0x6a6: PushEmpty()
0x6a7: PushEmpty(int)
0x6a8: Call 0x69d

0x6a9: Pop(0)
0x6aa: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(bool, bool)
0x6ad: PushEmpty(string)
0x6ae: Stack[-1] = "No"
0x6af: Call 0x65d

0x6b0: Pop(1)
0x6b1: @ lshWaitForAnimEnd(Stack[-1])
0x6b2: Pop(0)
0x6b3: Stack[-3] = Stack[-1]
0x6b4: Return(); Pop(2)

0x6b5: Stack[-1] = (int) 2870
0x6b6: Return(); Pop(0)

0x6b7: Stack[-1] = "ui/NPC_Mat.png"
0x6b8: Return(); Pop(0)

0x6b9: Stack[-1] = (bool) 1
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty()
0x6bc: Push("playsound")
0x6bd: Push("giveitem")
0x6be: @ TriggerWorld(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: Return(); Pop(0)

0x6c1: PushEmpty()
0x6c2: Return(); Pop(0)

0x6c3: PushEmpty()
0x6c4: Push("ood8Mat1")
0x6c5: Push((int) 1)
0x6c6: @ SetVariable(Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: Return(); Pop(0)

0x6c9: PushEmpty()
0x6ca: Push("d8q01BringBadBoy")
0x6cb: Push((int) 1)
0x6cc: @ SetVariable(Stack[-2], Stack[-1])
0x6cd: Pop(2)
0x6ce: PushEmpty()
0x6cf: Call 0x858

0x6d0: Pop(0)
0x6d1: Return(); Pop(0)

0x6d2: PushEmpty(object, object)
0x6d3: Push("d8q01MatBringToy")
0x6d4: Push((int) 1)
0x6d5: @ SetVariable(Stack[-2], Stack[-1])
0x6d6: Pop(2)
0x6d7: PushEmpty(object)
0x6d8: Call 0x815

0x6d9: Stack[-2] = Stack[-1]
0x6da: Pop(1)
0x6db: Push("d8q01MatGotoToyHouse")
0x6dc: Push("pt_map_d8q01_toyhouse")
0x6dd: Push((int) 1)
0x6de: Push((int) 15444)
0x6df: PushEmpty(float)
0x6e0: Call 0x698

0x6e1: Pop(0)
0x6e2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(5)
0x6e4: PushEmpty()
0x6e5: Call 0x868

0x6e6: Pop(0)
0x6e7: Return(); Pop(2)

0x6e8: Stack[-1] = 0
0x6e9: PushEmpty()
0x6ea: Push("ood8Mat2")
0x6eb: Push((int) 1)
0x6ec: @ SetVariable(Stack[-2], Stack[-1])
0x6ed: Pop(2)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty()
0x6f0: PushEmpty()
0x6f1: Call 0x878

0x6f2: Pop(0)
0x6f3: PushEmpty(bool, string, string)
0x6f4: Stack[-2] = "quest_d8_01"
0x6f5: Stack[-1] = "unlock_boiny"
0x6f6: Call 0x68c

0x6f7: Pop(3)
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty()
0x6fa: Push("ood8Mat3")
0x6fb: Push((int) 1)
0x6fc: @ SetVariable(Stack[-2], Stack[-1])
0x6fd: Pop(2)
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty()
0x700: Push("ood8Mat4")
0x701: Push((int) 1)
0x702: @ SetVariable(Stack[-2], Stack[-1])
0x703: Pop(2)
0x704: Return(); Pop(0)

0x705: PushEmpty()
0x706: Push("ood8Mat5")
0x707: Push((int) 1)
0x708: @ SetVariable(Stack[-2], Stack[-1])
0x709: Pop(2)
0x70a: Return(); Pop(0)

0x70b: PushEmpty()
0x70c: Push("ood8Mat6")
0x70d: Push((int) 1)
0x70e: @ SetVariable(Stack[-2], Stack[-1])
0x70f: Pop(2)
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: Push("ood8Mat7")
0x713: Push((int) 1)
0x714: @ SetVariable(Stack[-2], Stack[-1])
0x715: Pop(2)
0x716: Return(); Pop(0)

0x717: PushEmpty()
0x718: Push("d8TalkToMat")
0x719: Push((int) 1)
0x71a: @ SetVariable(Stack[-2], Stack[-1])
0x71b: Pop(2)
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: Push("d8q02")
0x71f: Push((int) 1000)
0x720: @ SetVariable(Stack[-2], Stack[-1])
0x721: Pop(2)
0x722: PushEmpty()
0x723: Call 0x888

0x724: Pop(0)
0x725: Return(); Pop(0)

0x726: PushEmpty()
0x727: Push("d8q02")
0x728: Push((int) -1)
0x729: @ SetVariable(Stack[-2], Stack[-1])
0x72a: Pop(2)
0x72b: PushEmpty()
0x72c: Call 0x898

0x72d: Pop(0)
0x72e: Return(); Pop(0)

0x72f: PushEmpty(int, int)
0x730: Push("feromicin")
0x731: Push((int) 1)
0x732: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(2)
0x734: Return(); Pop(2)

0x735: PushEmpty()
0x736: PushEmpty(object, string, float)
0x737: PushEmpty(object)
0x738: Call 0x815

0x739: Stack[-4] = Stack[-1]
0x73a: Pop(1)
0x73b: Stack[-2] = "pt_map_d8q01_toyhouse"
0x73c: Stack[-1] = (int) 2
0x73d: Call 0x826

0x73e: Pop(3)
0x73f: PushEmpty(object)
0x740: Call 0x815

0x741: Pop(0)
0x742: @@ ShowMap(Stack[-1])
0x743: Pop(1)
0x744: Return(); Pop(0)

0x745: PushEmpty()
0x746: PushEmpty(int, string)
0x747: Stack[-1] = "d8q01"
0x748: Call 0x680

0x749: Pop(1)
0x74a: Push((int) 1)
0x74b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-2] = (bool) 1
0x74e: Return(); Pop(0)

0x74f: Stack[-2] = (bool) 0
0x750: Return(); Pop(0)

0x751: PushEmpty()
0x752: PushEmpty(int, string)
0x753: Stack[-1] = "ood8Mat1"
0x754: Call 0x680

0x755: Pop(1)
0x756: Push((int) 0)
0x757: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-2] = (bool) 1
0x75a: Return(); Pop(0)

0x75b: Stack[-2] = (bool) 0
0x75c: Return(); Pop(0)

0x75d: PushEmpty()
0x75e: PushEmpty(int, string)
0x75f: Stack[-1] = "d8q01MatBringToy"
0x760: Call 0x680

0x761: Pop(1)
0x762: Push((int) 1)
0x763: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-2] = (bool) 1
0x766: Return(); Pop(0)

0x767: Stack[-2] = (bool) 0
0x768: Return(); Pop(0)

0x769: PushEmpty()
0x76a: PushEmpty(bool, object, string)
0x76b: Stack[-2] = Stack[-4]
0x76c: Stack[-1] = "toy_horse"
0x76d: Call 0x685

0x76e: Pop(2)
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-2] = (bool) 1
0x771: Return(); Pop(0)

0x772: Stack[-2] = (bool) 0
0x773: Return(); Pop(0)

0x774: PushEmpty()
0x775: PushEmpty(int, string)
0x776: Stack[-1] = "ood8Mat2"
0x777: Call 0x680

0x778: Pop(1)
0x779: Push((int) 0)
0x77a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77c: Stack[-2] = (bool) 1
0x77d: Return(); Pop(0)

0x77e: Stack[-2] = (bool) 0
0x77f: Return(); Pop(0)

0x780: PushEmpty()
0x781: PushEmpty(int, string)
0x782: Stack[-1] = "ood8Mat3"
0x783: Call 0x680

0x784: Pop(1)
0x785: Push((int) 0)
0x786: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-2] = (bool) 1
0x789: Return(); Pop(0)

0x78a: Stack[-2] = (bool) 0
0x78b: Return(); Pop(0)

0x78c: PushEmpty()
0x78d: PushEmpty(int, string)
0x78e: Stack[-1] = "ood8Mat4"
0x78f: Call 0x680

0x790: Pop(1)
0x791: Push((int) 0)
0x792: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x794: Stack[-2] = (bool) 1
0x795: Return(); Pop(0)

0x796: Stack[-2] = (bool) 0
0x797: Return(); Pop(0)

0x798: PushEmpty()
0x799: PushEmpty(int, string)
0x79a: Stack[-1] = "ood8Mat5"
0x79b: Call 0x680

0x79c: Pop(1)
0x79d: Push((int) 0)
0x79e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a0: Stack[-2] = (bool) 1
0x7a1: Return(); Pop(0)

0x7a2: Stack[-2] = (bool) 0
0x7a3: Return(); Pop(0)

0x7a4: PushEmpty()
0x7a5: PushEmpty(int, string)
0x7a6: Stack[-1] = "d8q01BigVladIsVictim"
0x7a7: Call 0x680

0x7a8: Pop(1)
0x7a9: Push((int) 1)
0x7aa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: Stack[-2] = (bool) 1
0x7ad: Return(); Pop(0)

0x7ae: Stack[-2] = (bool) 0
0x7af: Return(); Pop(0)

0x7b0: PushEmpty()
0x7b1: PushEmpty(int, string)
0x7b2: Stack[-1] = "d8q01MladVladIsVictim"
0x7b3: Call 0x680

0x7b4: Pop(1)
0x7b5: Push((int) 1)
0x7b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b8: Stack[-2] = (bool) 1
0x7b9: Return(); Pop(0)

0x7ba: Stack[-2] = (bool) 0
0x7bb: Return(); Pop(0)

0x7bc: PushEmpty()
0x7bd: PushEmpty(int, string)
0x7be: Stack[-1] = "ood8Mat6"
0x7bf: Call 0x680

0x7c0: Pop(1)
0x7c1: Push((int) 0)
0x7c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-2] = (bool) 1
0x7c5: Return(); Pop(0)

0x7c6: Stack[-2] = (bool) 0
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty()
0x7c9: PushEmpty(int, string)
0x7ca: Stack[-1] = "ood8Mat7"
0x7cb: Call 0x680

0x7cc: Pop(1)
0x7cd: Push((int) 0)
0x7ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d0: Stack[-2] = (bool) 1
0x7d1: Return(); Pop(0)

0x7d2: Stack[-2] = (bool) 0
0x7d3: Return(); Pop(0)

0x7d4: PushEmpty()
0x7d5: PushEmpty(int, string)
0x7d6: Stack[-1] = "d8q02"
0x7d7: Call 0x680

0x7d8: Pop(1)
0x7d9: Push((int) 1)
0x7da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-2] = (bool) 1
0x7dd: Return(); Pop(0)

0x7de: Stack[-2] = (bool) 0
0x7df: Return(); Pop(0)

0x7e0: PushEmpty()
0x7e1: PushEmpty(bool, object, string)
0x7e2: Stack[-2] = Stack[-4]
0x7e3: Stack[-1] = "feromicin"
0x7e4: Call 0x685

0x7e5: Pop(2)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e7: Stack[-2] = (bool) 1
0x7e8: Return(); Pop(0)

0x7e9: Stack[-2] = (bool) 0
0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(object, object)
0x7ec: @ GetDiaryRoot(Stack[-1])
0x7ed: Pop(0)
0x7ee: Pop(0); Push((bool) Stack[-1] == 0)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f0: Push("Can't retrieve diary root")
0x7f1: @ Trace(Stack[-1])
0x7f2: Pop(1)
0x7f3: Stack[-3] = (bool) 0
0x7f4: Return(); Pop(2)

0x7f5: Stack[-3] = Stack[-1]
0x7f6: Return(); Pop(2)

0x7f7: Stack[-1] = 0
0x7f8: PushEmpty(object, object, int, object, object, int)
0x7f9: PushEmpty(object)
0x7fa: Call 0x7eb

0x7fb: Stack[-4] = Stack[-1]
0x7fc: Pop(1)
0x7fd: @@ Find(Stack[-7], Stack[-2])
0x7fe: Pop(0)
0x7ff: Pop(0); Push((bool) Stack[-2] == 0)
0x800: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x801: Push("Can't find diary parent with id: ")
0x802: Pop(1); Push(Stack[-1] + Stack[-8]);
0x803: @ Trace(Stack[-1])
0x804: Pop(1)
0x805: Stack[-9] = (bool) 0
0x806: Return(); Pop(6)

0x807: @@ AddChild(Stack[-8])
0x808: Pop(0)
0x809: Push("player_diary")
0x80a: Push((int) 1)
0x80b: @ SetVariable(Stack[-2], Stack[-1])
0x80c: Pop(2)
0x80d: @@ GetCategory(Stack[-1])
0x80e: Pop(0)
0x80f: @ SetDiarySection(Stack[-1])
0x810: Pop(0)
0x811: Stack[-9] = (bool) 0
0x812: Return(); Pop(6)

0x813: Stack[-2] = 0
0x814: Stack[-3] = 0
0x815: PushEmpty(object, object, object, object)
0x816: @ GetMainOutdoorScene(Stack[-2])
0x817: Pop(0)
0x818: Pop(0); Push((bool) Stack[-2] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81a: Push("Can't find main outdoor scene")
0x81b: @ Trace(Stack[-1])
0x81c: Pop(1)
0x81d: Stack[-1] = 0
0x81e: Stack[-5] = Stack[-1]
0x81f: Return(); Pop(4)

0x820: @@ GetMap(Stack[-1])
0x821: Pop(0)
0x822: Stack[-5] = Stack[-1]
0x823: Return(); Pop(4)

0x824: Stack[-1] = 0
0x825: Stack[-2] = 0
0x826: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x827: @ GetMainOutdoorScene(Stack[-2])
0x828: Pop(0)
0x829: Pop(0); Push((bool) Stack[-2] == 0)
0x82a: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82b: Push("Can't find main outdoor scene")
0x82c: @ Trace(Stack[-1])
0x82d: Pop(1)
0x82e: Return(); Pop(8)

0x82f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x830: Pop(0)
0x831: Pop(0); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x833: Push("Warning: outdoor scene locator ")
0x834: Pop(1); Push(Stack[-1] + Stack[-11]);
0x835: Push(" doesnt exist")
0x836: Pop(2); Push(Stack[-2] + Stack[-1]);
0x837: @ Trace(Stack[-1])
0x838: Pop(1)
0x839: @@ GetMap(Stack[-11])
0x83a: Pop(0)
0x83b: Pop(0); Push((bool) Stack[-11] == 0)
0x83c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83d: Push("Can't find map")
0x83e: @ Trace(Stack[-1])
0x83f: Pop(1)
0x840: Return(); Pop(8)

0x841: Push(CvectorIndex(Stack[-4], 0))
0x842: Push(CvectorIndex(Stack[-5], 2))
0x843: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x844: Pop(2)
0x845: Return(); Pop(8)

0x846: Stack[-2] = 0
0x847: PushEmpty(int, int)
0x848: Push("player")
0x849: @ GetVariable(Stack[-1], Stack[-2])
0x84a: Pop(1)
0x84b: Push((int) 0)
0x84c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84e: Stack[-3] = (int) 200001
0x84f: Return(); Pop(2)

0x850: GOTO 0x856

0x851: Push((int) 1)
0x852: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-3] = (int) 200002
0x855: Return(); Pop(2)

0x856: Stack[-3] = (int) 200003
0x857: Return(); Pop(2)

0x858: PushEmpty(object, object)
0x859: Push("Adding diary entry")
0x85a: @ Trace(Stack[-1])
0x85b: Pop(1)
0x85c: Push((int) 179)
0x85d: Push((int) 1)
0x85e: Push((int) 15441)
0x85f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x860: Pop(3)
0x861: PushEmpty(bool, object, int)
0x862: Stack[-2] = Stack[-4]
0x863: Stack[-1] = (int) 175
0x864: Call 0x7f8

0x865: Pop(3)
0x866: Return(); Pop(2)

0x867: Stack[-1] = 0
0x868: PushEmpty(object, object)
0x869: Push("Adding diary entry")
0x86a: @ Trace(Stack[-1])
0x86b: Pop(1)
0x86c: Push((int) 180)
0x86d: Push((int) 1)
0x86e: Push((int) 15442)
0x86f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: PushEmpty(bool, object, int)
0x872: Stack[-2] = Stack[-4]
0x873: Stack[-1] = (int) 175
0x874: Call 0x7f8

0x875: Pop(3)
0x876: Return(); Pop(2)

0x877: Stack[-1] = 0
0x878: PushEmpty(object, object)
0x879: Push("Adding diary entry")
0x87a: @ Trace(Stack[-1])
0x87b: Pop(1)
0x87c: Push((int) 181)
0x87d: Push((int) 1)
0x87e: Push((int) 15443)
0x87f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: PushEmpty(bool, object, int)
0x882: Stack[-2] = Stack[-4]
0x883: Stack[-1] = (int) 175
0x884: Call 0x7f8

0x885: Pop(3)
0x886: Return(); Pop(2)

0x887: Stack[-1] = 0
0x888: PushEmpty(object, object)
0x889: Push("Adding diary entry")
0x88a: @ Trace(Stack[-1])
0x88b: Pop(1)
0x88c: Push((int) 128)
0x88d: Push((int) 2)
0x88e: Push((int) 13773)
0x88f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: PushEmpty(bool, object, int)
0x892: Stack[-2] = Stack[-4]
0x893: Stack[-1] = (int) 127
0x894: Call 0x7f8

0x895: Pop(3)
0x896: Return(); Pop(2)

0x897: Stack[-1] = 0
0x898: PushEmpty(object, object)
0x899: Push("Adding diary entry")
0x89a: @ Trace(Stack[-1])
0x89b: Pop(1)
0x89c: Push((int) 129)
0x89d: Push((int) 2)
0x89e: Push((int) 13774)
0x89f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8a0: Pop(3)
0x8a1: PushEmpty(bool, object, int)
0x8a2: Stack[-2] = Stack[-4]
0x8a3: Stack[-1] = (int) 127
0x8a4: Call 0x7f8

0x8a5: Pop(3)
0x8a6: Return(); Pop(2)

0x8a7: Stack[-1] = 0
0x8a8: Push(GlobalVars[1])
0x8a9: Stack[-1] = (bool) 0
0x8aa: GlobalVars[1] = Stack[-1]; Pop(1)
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: PushEmpty(bool, int)
0x8ae: Stack[-1] = (int) 8
0x8af: Call 0x6a6

0x8b0: Pop(1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b2: PushEmpty(int, object)
0x8b3: Stack[-1] = Stack[-3]
0x8b4: Push(-2, 1); TaskCall(2)
0x8b5: Call 0x31

0x8b6: Pop(-2, 1); TaskReturn
0x8b7: Pop(2)
0x8b8: Return(); Pop(0)

0x8b9: PushEmpty(bool)
0x8ba: Call 0x6ac

0x8bb: Pop(1)
0x8bc: Return(); Pop(0)

