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
	Door 
	 not found
	locked
	SetProperty
	No
	ui/NPC_Han.png
	playsound
	giveitem
	d3q02
	d3q02HanGotoViktor
	pt_map_viktor
	AddMark
	ShowMap
	ood8Han1
	ood9Xan1
	d9q01
	Rifle
	RemoveItemByType
	mnogogrannik@door1
	GetItemCountOfType
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
	FindActor (2 args)
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
		EVENT_11 Op = 0xc3 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x284 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x409 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x749

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x55f

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
0x15: Call 0x5a0

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
0x26: Call 0x74d

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x553

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x564

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x5f5

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x5f7

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x718

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
0x67: Call 0x59c

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
0x75: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x76: PushEmpty(bool)
0x77: Stack[-1] = (bool) 0
0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call 0x65b

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call 0x656

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 1
0x83: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x84: PushEmpty(string)
0x85: Stack[-1] = "Neutral"
0x86: Call 0xb3

0x87: Pop(1)
0x88: Push((int) 10420)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: Push((int) 10421)
0x8e: Push((int) 11490)
0x8f: Push((int) 11489)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: GOTO 0x95

0x93: Return(); Pop(0)

0x94: GOTO 0x74

0x95: PushEmpty(bool)
0x96: Call 0x5f9

0x97: Pop(0)
0x98: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x99: @ lshWaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: PushEmpty(string)
0x9f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa0: Call 0x5a0

0xa1: Pop(1)
0xa2: GOTO 0x99

0xa3: GOTO 0xb2

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ WaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: Push("all")
0xae: Push("idle")
0xaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: GOTO 0xa8

0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: PushEmpty(bool)
0xb5: Call 0x5f9

0xb6: Pop(0)
0xb7: Pop(1); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = Stack[-2]
0xbf: Call 0x5a0

0xc0: Pop(1)
0xc1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: Push((int) 1)
0xc5: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0xc6: PushEmpty()
0xc7: Call 0x5b2

0xc8: Pop(0)
0xc9: Push((int) 11509)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call 0x603

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x601

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call 0x617

0xda: Pop(2)
0xdb: Push((int) 11510)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call 0x603

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call 0x601

0xe7: Pop(2)
0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call 0x617

0xec: Pop(2)
0xed: Push((int) 11505)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call 0x601

0xf4: Pop(2)
0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call 0x603

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call 0x617

0xfe: Pop(2)
0xff: Push((int) 11498)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call 0x601

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call 0x603

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call 0x617

0x110: Pop(2)
0x111: Push((int) 11488)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x114: PushEmpty(bool)
0x115: Stack[-1] = (bool) 0
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call 0x65b

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call 0x656

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Stack[-1] = (bool) 1
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call 0xb3

0x125: Pop(1)
0x126: Push((int) 10420)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 10421)
0x12c: Push((int) 11490)
0x12d: Push((int) 11489)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 11490)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call 0xb3

0x137: Pop(1)
0x138: Push((int) 10422)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 10423)
0x13e: Push((int) 11492)
0x13f: Push((int) 11491)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 11492)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call 0xb3

0x149: Pop(1)
0x14a: Push((int) 10424)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 10425)
0x150: Push((int) 11494)
0x151: Push((int) 11493)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 11494)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral"
0x15a: Call 0xb3

0x15b: Pop(1)
0x15c: Push((int) 10426)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 10427)
0x162: Push((int) 11496)
0x163: Push((int) 11495)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Return(); Pop(0)

0x167: Push((int) 11496)
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16a: PushEmpty(string)
0x16b: Stack[-1] = "Neutral"
0x16c: Call 0xb3

0x16d: Pop(1)
0x16e: Push((int) 10428)
0x16f: @@ SetMessage(Stack[-1])
0x170: Pop(1)
0x171: @@ ClearReplies()
0x172: Pop(0)
0x173: Push((int) 10429)
0x174: Push((int) 11499)
0x175: Push((int) 11497)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Push((int) 10430)
0x179: Push((int) -1)
0x17a: Push((int) 11498)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Push((int) 11499)
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Neutral"
0x183: Call 0xb3

0x184: Pop(1)
0x185: Push((int) 10431)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 10432)
0x18b: Push((int) 11502)
0x18c: Push((int) 11500)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Push((int) 10433)
0x190: Push((int) 11502)
0x191: Push((int) 11501)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 11502)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call 0xb3

0x19b: Pop(1)
0x19c: Push((int) 10434)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 10435)
0x1a2: Push((int) 11504)
0x1a3: Push((int) 11503)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Push((int) 10437)
0x1a7: Push((int) -1)
0x1a8: Push((int) 11505)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 11504)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Neutral"
0x1b1: Call 0xb3

0x1b2: Pop(1)
0x1b3: Push((int) 10436)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 10438)
0x1b9: Push((int) 11508)
0x1ba: Push((int) 11507)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 11508)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Neutral"
0x1c3: Call 0xb3

0x1c4: Pop(1)
0x1c5: Push((int) 10439)
0x1c6: @@ SetMessage(Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ ClearReplies()
0x1c9: Pop(0)
0x1ca: Push((int) 10440)
0x1cb: Push((int) -1)
0x1cc: Push((int) 11509)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Push((int) 10441)
0x1d0: Push((int) -1)
0x1d1: Push((int) 11510)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d6: PushEmpty(bool)
0x1d7: Call 0x5f9

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1da: @ lshStopAnimation()
0x1db: Pop(0)
0x1dc: GOTO 0x1df

0x1dd: @ StopAnimation()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: GOTO 0xc4

0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[-11]
0x1e6: Call 0x564

0x1e7: Pop(1)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: Stack[-10] = (int) -2
0x1eb: Return(); Pop(8)

0x1ec: @ CreateDialog(Stack[-4])
0x1ed: Pop(0)
0x1ee: PushEmpty(int)
0x1ef: Call 0x5f5

0x1f0: Pop(0)
0x1f1: @@ SetNPCName(Stack[-1])
0x1f2: Pop(1)
0x1f3: PushEmpty(string)
0x1f4: Call 0x5f7

0x1f5: Pop(0)
0x1f6: @@ SetPhoto(Stack[-1])
0x1f7: Pop(1)
0x1f8: PushEmpty(int)
0x1f9: Call 0x718

0x1fa: Pop(0)
0x1fb: @@ SetPlayerName(Stack[-1])
0x1fc: Pop(1)
0x1fd: Stack[-2] = (int) -1
0x1fe: @ IsOverrideActive(Stack[-3])
0x1ff: Pop(0)
0x200: Push(Stack[-3])
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-10] = (int) -2
0x203: Return(); Pop(8)

0x204: @ DoDialog(Stack[-4])
0x205: Pop(0)
0x206: PushEmpty(object, object)
0x207: Stack[-2] = Stack[-11]
0x208: Stack[-1] = Stack[-6]
0x209: Push(-2, 4); TaskCall(5)
0x20a: Call 0x221

0x20b: Pop(-2, 4); TaskReturn
0x20c: Pop(2)
0x20d: @@ IsDialogEnd(Stack[-1])
0x20e: Pop(0)
0x20f: Pop(0); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: @ sync()
0x212: Pop(0)
0x213: @@ IsDialogEnd(Stack[-1])
0x214: Pop(0)
0x215: GOTO 0x20f

0x216: PushEmpty(object)
0x217: Stack[-1] = Stack[-10]
0x218: Call 0x59c

0x219: Pop(1)
0x21a: @ StopDialog(Stack[-4])
0x21b: Pop(0)
0x21c: @@ GetReturnValue(Stack[-2])
0x21d: Pop(0)
0x21e: Stack[-10] = Stack[-2]
0x21f: Return(); Pop(8)

0x220: Stack[-4] = 0
0x221: PushEmpty()
0x222: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x223: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x224: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x225: Push((int) 1)
0x226: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call 0x667

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x22c: PushEmpty(object, object)
0x22d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22f: Call 0x627

0x230: Pop(2)
0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call 0x274

0x234: Pop(1)
0x235: Push((int) 12330)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 12331)
0x23b: Push((int) 13491)
0x23c: Push((int) 13490)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Push((int) 12336)
0x240: Push((int) -1)
0x241: Push((int) 13495)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: GOTO 0x256

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call 0x274

0x248: Pop(1)
0x249: Push((int) 13781)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 13782)
0x24f: Push((int) -1)
0x250: Push((int) 15018)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: GOTO 0x256

0x254: Return(); Pop(0)

0x255: GOTO 0x225

0x256: PushEmpty(bool)
0x257: Call 0x5f9

0x258: Pop(0)
0x259: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x25a: @ lshWaitForAnimEnd()
0x25b: Pop(0)
0x25c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x264

0x25f: PushEmpty(string)
0x260: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x261: Call 0x5a0

0x262: Pop(1)
0x263: GOTO 0x25a

0x264: GOTO 0x273

0x265: Push("all")
0x266: Push("idle")
0x267: @ PlayAnimation(Stack[-2], Stack[-1])
0x268: Pop(2)
0x269: @ WaitForAnimEnd()
0x26a: Pop(0)
0x26b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: GOTO 0x273

0x26e: Push("all")
0x26f: Push("idle")
0x270: @ PlayAnimation(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: GOTO 0x269

0x273: Return(); Pop(0)

0x274: PushEmpty()
0x275: PushEmpty(bool)
0x276: Call 0x5f9

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Return(); Pop(0)

0x27b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Return(); Pop(0)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = Stack[-2]
0x280: Call 0x5a0

0x281: Pop(1)
0x282: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x283: Return(); Pop(0)

0x284: PushEmpty()
0x285: Push((int) 1)
0x286: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x287: PushEmpty()
0x288: Call 0x5b2

0x289: Pop(0)
0x28a: Push((int) 13489)
0x28b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call 0x667

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x292: PushEmpty(object, object)
0x293: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call 0x627

0x296: Pop(2)
0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral"
0x299: Call 0x274

0x29a: Pop(1)
0x29b: Push((int) 12330)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 12331)
0x2a1: Push((int) 13491)
0x2a2: Push((int) 13490)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Push((int) 12336)
0x2a6: Push((int) -1)
0x2a7: Push((int) 13495)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call 0x274

0x2ae: Pop(1)
0x2af: Push((int) 13781)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 13782)
0x2b5: Push((int) -1)
0x2b6: Push((int) 15018)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Return(); Pop(0)

0x2ba: Push((int) 13491)
0x2bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2bd: PushEmpty(string)
0x2be: Stack[-1] = "Neutral"
0x2bf: Call 0x274

0x2c0: Pop(1)
0x2c1: Push((int) 12332)
0x2c2: @@ SetMessage(Stack[-1])
0x2c3: Pop(1)
0x2c4: @@ ClearReplies()
0x2c5: Pop(0)
0x2c6: Push((int) 12333)
0x2c7: Push((int) 13493)
0x2c8: Push((int) 13492)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Push((int) 12337)
0x2cc: Push((int) 13497)
0x2cd: Push((int) 13496)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Return(); Pop(0)

0x2d1: Push((int) 13497)
0x2d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Neutral"
0x2d6: Call 0x274

0x2d7: Pop(1)
0x2d8: Push((int) 12338)
0x2d9: @@ SetMessage(Stack[-1])
0x2da: Pop(1)
0x2db: @@ ClearReplies()
0x2dc: Pop(0)
0x2dd: Push((int) 12339)
0x2de: Push((int) 13499)
0x2df: Push((int) 13498)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Return(); Pop(0)

0x2e3: Push((int) 13499)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral"
0x2e8: Call 0x274

0x2e9: Pop(1)
0x2ea: Push((int) 12340)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 12341)
0x2f0: Push((int) -1)
0x2f1: Push((int) 13500)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 12342)
0x2f5: Push((int) 13502)
0x2f6: Push((int) 13501)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 13502)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call 0x274

0x300: Pop(1)
0x301: Push((int) 12343)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 12344)
0x307: Push((int) -1)
0x308: Push((int) 13503)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 13493)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call 0x274

0x312: Pop(1)
0x313: Push((int) 12334)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 12335)
0x319: Push((int) 13504)
0x31a: Push((int) 13494)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Push((int) 13504)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Neutral"
0x323: Call 0x274

0x324: Pop(1)
0x325: Push((int) 12345)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: Push((int) 12346)
0x32b: Push((int) 13506)
0x32c: Push((int) 13505)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 13506)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Neutral"
0x335: Call 0x274

0x336: Pop(1)
0x337: Push((int) 12347)
0x338: @@ SetMessage(Stack[-1])
0x339: Pop(1)
0x33a: @@ ClearReplies()
0x33b: Pop(0)
0x33c: Push((int) 12348)
0x33d: Push((int) -1)
0x33e: Push((int) 13507)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x343: PushEmpty(bool)
0x344: Call 0x5f9

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x347: @ lshStopAnimation()
0x348: Pop(0)
0x349: GOTO 0x34c

0x34a: @ StopAnimation()
0x34b: Pop(0)
0x34c: Return(); Pop(0)

0x34d: GOTO 0x285

0x34e: Return(); Pop(0)

0x34f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x350: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x351: PushEmpty(bool, object)
0x352: Stack[-1] = Stack[-11]
0x353: Call 0x564

0x354: Pop(1)
0x355: Pop(1); Push((bool) Stack[-1] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-10] = (int) -2
0x358: Return(); Pop(8)

0x359: @ CreateDialog(Stack[-4])
0x35a: Pop(0)
0x35b: PushEmpty(int)
0x35c: Call 0x5f5

0x35d: Pop(0)
0x35e: @@ SetNPCName(Stack[-1])
0x35f: Pop(1)
0x360: PushEmpty(string)
0x361: Call 0x5f7

0x362: Pop(0)
0x363: @@ SetPhoto(Stack[-1])
0x364: Pop(1)
0x365: PushEmpty(int)
0x366: Call 0x718

0x367: Pop(0)
0x368: @@ SetPlayerName(Stack[-1])
0x369: Pop(1)
0x36a: Stack[-2] = (int) -1
0x36b: @ IsOverrideActive(Stack[-3])
0x36c: Pop(0)
0x36d: Push(Stack[-3])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-10] = (int) -2
0x370: Return(); Pop(8)

0x371: @ DoDialog(Stack[-4])
0x372: Pop(0)
0x373: PushEmpty(object, object)
0x374: Stack[-2] = Stack[-11]
0x375: Stack[-1] = Stack[-6]
0x376: Push(-2, 4); TaskCall(7)
0x377: Call 0x38e

0x378: Pop(-2, 4); TaskReturn
0x379: Pop(2)
0x37a: @@ IsDialogEnd(Stack[-1])
0x37b: Pop(0)
0x37c: Pop(0); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37e: @ sync()
0x37f: Pop(0)
0x380: @@ IsDialogEnd(Stack[-1])
0x381: Pop(0)
0x382: GOTO 0x37c

0x383: PushEmpty(object)
0x384: Stack[-1] = Stack[-10]
0x385: Call 0x59c

0x386: Pop(1)
0x387: @ StopDialog(Stack[-4])
0x388: Pop(0)
0x389: @@ GetReturnValue(Stack[-2])
0x38a: Pop(0)
0x38b: Stack[-10] = Stack[-2]
0x38c: Return(); Pop(8)

0x38d: Stack[-4] = 0
0x38e: PushEmpty()
0x38f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x390: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x391: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x392: Push((int) 1)
0x393: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x394: PushEmpty(bool)
0x395: Stack[-1] = (bool) 0
0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x398: Call 0x673

0x399: Pop(1)
0x39a: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39b: PushEmpty(bool, object)
0x39c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39d: Call 0x67f

0x39e: Pop(1)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Stack[-1] = (bool) 1
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a2: PushEmpty(object, object)
0x3a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a5: Call 0x62d

0x3a6: Pop(2)
0x3a7: PushEmpty(string)
0x3a8: Stack[-1] = "Neutral"
0x3a9: Call 0x3f9

0x3aa: Pop(1)
0x3ab: Push((int) 14041)
0x3ac: @@ SetMessage(Stack[-1])
0x3ad: Pop(1)
0x3ae: @@ ClearReplies()
0x3af: Pop(0)
0x3b0: Push((int) 14042)
0x3b1: Push((int) 15278)
0x3b2: Push((int) 15277)
0x3b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: GOTO 0x3db

0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = "Neutral"
0x3b8: Call 0x3f9

0x3b9: Pop(1)
0x3ba: Push((int) 14063)
0x3bb: @@ SetMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ ClearReplies()
0x3be: Pop(0)
0x3bf: PushEmpty(bool, object)
0x3c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c1: Call 0x68b

0x3c2: Pop(1)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: Push((int) 14068)
0x3c5: Push((int) 15309)
0x3c6: Push((int) 15305)
0x3c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c8: Pop(3)
0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Call 0x695

0x3cc: Pop(1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ce: Push((int) 14069)
0x3cf: Push((int) 15307)
0x3d0: Push((int) 15306)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 14064)
0x3d4: Push((int) -1)
0x3d5: Push((int) 15300)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: GOTO 0x3db

0x3d9: Return(); Pop(0)

0x3da: GOTO 0x392

0x3db: PushEmpty(bool)
0x3dc: Call 0x5f9

0x3dd: Pop(0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3df: @ lshWaitForAnimEnd()
0x3e0: Pop(0)
0x3e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: GOTO 0x3e9

0x3e4: PushEmpty(string)
0x3e5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3e6: Call 0x5a0

0x3e7: Pop(1)
0x3e8: GOTO 0x3df

0x3e9: GOTO 0x3f8

0x3ea: Push("all")
0x3eb: Push("idle")
0x3ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: @ WaitForAnimEnd()
0x3ef: Pop(0)
0x3f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: GOTO 0x3f8

0x3f3: Push("all")
0x3f4: Push("idle")
0x3f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: GOTO 0x3ee

0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: PushEmpty(bool)
0x3fb: Call 0x5f9

0x3fc: Pop(0)
0x3fd: Pop(1); Push((bool) Stack[-1] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Return(); Pop(0)

0x400: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Return(); Pop(0)

0x403: PushEmpty(string)
0x404: Stack[-1] = Stack[-2]
0x405: Call 0x5a0

0x406: Pop(1)
0x407: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: Push((int) 1)
0x40b: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x40c: PushEmpty()
0x40d: Call 0x5b2

0x40e: Pop(0)
0x40f: Push((int) 15289)
0x410: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x412: PushEmpty(object, object)
0x413: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x414: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x415: Call 0x633

0x416: Pop(2)
0x417: Push((int) 15310)
0x418: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41a: PushEmpty(object, object)
0x41b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x41c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41d: Call 0x642

0x41e: Pop(2)
0x41f: PushEmpty(object, object)
0x420: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x421: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x422: Call 0x64f

0x423: Pop(2)
0x424: PushEmpty(object, object)
0x425: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x426: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x427: Call 0x5fb

0x428: Pop(2)
0x429: PushEmpty(object, object)
0x42a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42c: Call 0x63c

0x42d: Pop(2)
0x42e: Push((int) 15276)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 0
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call 0x673

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call 0x67f

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Stack[-1] = (bool) 1
0x43e: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x43f: PushEmpty(object, object)
0x440: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x441: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x442: Call 0x62d

0x443: Pop(2)
0x444: PushEmpty(string)
0x445: Stack[-1] = "Neutral"
0x446: Call 0x3f9

0x447: Pop(1)
0x448: Push((int) 14041)
0x449: @@ SetMessage(Stack[-1])
0x44a: Pop(1)
0x44b: @@ ClearReplies()
0x44c: Pop(0)
0x44d: Push((int) 14042)
0x44e: Push((int) 15278)
0x44f: Push((int) 15277)
0x450: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x451: Pop(3)
0x452: Return(); Pop(0)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral"
0x455: Call 0x3f9

0x456: Pop(1)
0x457: Push((int) 14063)
0x458: @@ SetMessage(Stack[-1])
0x459: Pop(1)
0x45a: @@ ClearReplies()
0x45b: Pop(0)
0x45c: PushEmpty(bool, object)
0x45d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45e: Call 0x68b

0x45f: Pop(1)
0x460: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x461: Push((int) 14068)
0x462: Push((int) 15309)
0x463: Push((int) 15305)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: PushEmpty(bool, object)
0x467: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x468: Call 0x695

0x469: Pop(1)
0x46a: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46b: Push((int) 14069)
0x46c: Push((int) 15307)
0x46d: Push((int) 15306)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Push((int) 14064)
0x471: Push((int) -1)
0x472: Push((int) 15300)
0x473: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: Return(); Pop(0)

0x476: Push((int) 15307)
0x477: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x479: PushEmpty(string)
0x47a: Stack[-1] = "Neutral"
0x47b: Call 0x3f9

0x47c: Pop(1)
0x47d: Push((int) 14070)
0x47e: @@ SetMessage(Stack[-1])
0x47f: Pop(1)
0x480: @@ ClearReplies()
0x481: Pop(0)
0x482: Push((int) 14071)
0x483: Push((int) -1)
0x484: Push((int) 15308)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 15309)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Neutral"
0x48d: Call 0x3f9

0x48e: Pop(1)
0x48f: Push((int) 14072)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 14073)
0x495: Push((int) -1)
0x496: Push((int) 15310)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Return(); Pop(0)

0x49a: Push((int) 15278)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral"
0x49f: Call 0x3f9

0x4a0: Pop(1)
0x4a1: Push((int) 14043)
0x4a2: @@ SetMessage(Stack[-1])
0x4a3: Pop(1)
0x4a4: @@ ClearReplies()
0x4a5: Pop(0)
0x4a6: Push((int) 14044)
0x4a7: Push((int) 15280)
0x4a8: Push((int) 15279)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Return(); Pop(0)

0x4ac: Push((int) 15280)
0x4ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Neutral"
0x4b1: Call 0x3f9

0x4b2: Pop(1)
0x4b3: Push((int) 14045)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 14046)
0x4b9: Push((int) 15282)
0x4ba: Push((int) 15281)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Push((int) 15282)
0x4bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Neutral"
0x4c3: Call 0x3f9

0x4c4: Pop(1)
0x4c5: Push((int) 14047)
0x4c6: @@ SetMessage(Stack[-1])
0x4c7: Pop(1)
0x4c8: @@ ClearReplies()
0x4c9: Pop(0)
0x4ca: Push((int) 14048)
0x4cb: Push((int) 15284)
0x4cc: Push((int) 15283)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: Push((int) 14060)
0x4d0: Push((int) 15297)
0x4d1: Push((int) 15296)
0x4d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d3: Pop(3)
0x4d4: Return(); Pop(0)

0x4d5: Push((int) 15297)
0x4d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4d8: PushEmpty(string)
0x4d9: Stack[-1] = "Neutral"
0x4da: Call 0x3f9

0x4db: Pop(1)
0x4dc: Push((int) 14061)
0x4dd: @@ SetMessage(Stack[-1])
0x4de: Pop(1)
0x4df: @@ ClearReplies()
0x4e0: Pop(0)
0x4e1: Push((int) 14062)
0x4e2: Push((int) 15286)
0x4e3: Push((int) 15298)
0x4e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e5: Pop(3)
0x4e6: Return(); Pop(0)

0x4e7: Push((int) 15284)
0x4e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4ea: PushEmpty(string)
0x4eb: Stack[-1] = "Neutral"
0x4ec: Call 0x3f9

0x4ed: Pop(1)
0x4ee: Push((int) 14049)
0x4ef: @@ SetMessage(Stack[-1])
0x4f0: Pop(1)
0x4f1: @@ ClearReplies()
0x4f2: Pop(0)
0x4f3: Push((int) 14050)
0x4f4: Push((int) 15286)
0x4f5: Push((int) 15285)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Push((int) 14055)
0x4f9: Push((int) 15291)
0x4fa: Push((int) 15290)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: Return(); Pop(0)

0x4fe: Push((int) 15291)
0x4ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x501: PushEmpty(string)
0x502: Stack[-1] = "Neutral"
0x503: Call 0x3f9

0x504: Pop(1)
0x505: Push((int) 14056)
0x506: @@ SetMessage(Stack[-1])
0x507: Pop(1)
0x508: @@ ClearReplies()
0x509: Pop(0)
0x50a: Push((int) 14057)
0x50b: Push((int) 15293)
0x50c: Push((int) 15292)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 15293)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Neutral"
0x515: Call 0x3f9

0x516: Pop(1)
0x517: Push((int) 14058)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 14059)
0x51d: Push((int) 15286)
0x51e: Push((int) 15294)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Return(); Pop(0)

0x522: Push((int) 15286)
0x523: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x525: PushEmpty(string)
0x526: Stack[-1] = "Neutral"
0x527: Call 0x3f9

0x528: Pop(1)
0x529: Push((int) 14051)
0x52a: @@ SetMessage(Stack[-1])
0x52b: Pop(1)
0x52c: @@ ClearReplies()
0x52d: Pop(0)
0x52e: Push((int) 14052)
0x52f: Push((int) 15288)
0x530: Push((int) 15287)
0x531: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x532: Pop(3)
0x533: Return(); Pop(0)

0x534: Push((int) 15288)
0x535: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x537: PushEmpty(string)
0x538: Stack[-1] = "Neutral"
0x539: Call 0x3f9

0x53a: Pop(1)
0x53b: Push((int) 14053)
0x53c: @@ SetMessage(Stack[-1])
0x53d: Pop(1)
0x53e: @@ ClearReplies()
0x53f: Pop(0)
0x540: Push((int) 14054)
0x541: Push((int) -1)
0x542: Push((int) 15289)
0x543: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x544: Pop(3)
0x545: Return(); Pop(0)

0x546: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x547: PushEmpty(bool)
0x548: Call 0x5f9

0x549: Pop(0)
0x54a: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54b: @ lshStopAnimation()
0x54c: Pop(0)
0x54d: GOTO 0x550

0x54e: @ StopAnimation()
0x54f: Pop(0)
0x550: Return(); Pop(0)

0x551: GOTO 0x40a

0x552: Return(); Pop(0)

0x553: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x554: @@ GetPosition(Stack[-4])
0x555: Pop(0)
0x556: @ GetPosition(Stack[-3])
0x557: Pop(0)
0x558: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x559: Push(CvectorIndex(Stack[-2], 0))
0x55a: Push(CvectorIndex(Stack[-3], 2))
0x55b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x55c: Pop(2)
0x55d: Stack[-10] = Stack[-1]
0x55e: Return(); Pop(8)

0x55f: PushEmpty(bool, bool)
0x560: @ IsLoaded(Stack[-1])
0x561: Pop(0)
0x562: Stack[-3] = Stack[-1]
0x563: Return(); Pop(2)

0x564: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x565: @@ GetPosition(Stack[-7])
0x566: Pop(0)
0x567: @@ GetEyesHeight(Stack[-8])
0x568: Pop(0)
0x569: Push(CvectorIndex(Stack[-7], 1))
0x56a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x56b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x56c: @ GetPosition(Stack[-6])
0x56d: Pop(0)
0x56e: @ GetEyesHeight(Stack[-8])
0x56f: Pop(0)
0x570: Push(CvectorIndex(Stack[-6], 1))
0x571: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x572: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x573: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x574: Push(CvectorIndex(Stack[-5], 1))
0x575: Stack[-1] = (int) 0
0x576: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x577: Pop(0); Push(Stack[-5] | Stack[-5]);
0x578: Pop(1); Push(Sqrt(Stack[-1]))
0x579: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x57a: Stack[-4] = -Stack[-5]; Pop(0);
0x57b: Push((int) 70)
0x57c: Pop(1); Push(Stack[-6] * Stack[-1]);
0x57d: PushEmpty(cvector, cvector)
0x57e: Push(CVector(0.0, 1.0, 0.0))
0x57f: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x580: Call 0x5b9

0x581: Pop(1)
0x582: Push((int) 25)
0x583: Pop(2); Push(Stack[-2] * Stack[-1]);
0x584: Pop(2); Push(Stack[-2] + Stack[-1]);
0x585: Push(CVector(0.0, 10.0, 0.0))
0x586: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x587: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x588: @ IsOverrideActive(Stack[-1])
0x589: Pop(0)
0x58a: Push(Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58c: Stack[-18] = (bool) 0
0x58d: Return(); Pop(16)

0x58e: @ StopWorld()
0x58f: Pop(0)
0x590: @ CameraTransit(Stack[-2], Stack[-4])
0x591: Pop(0)
0x592: Push(CvectorIndex(Stack[-3], 0))
0x593: Push(CvectorIndex(Stack[-4], 2))
0x594: @ Rotate(Stack[-2], Stack[-1])
0x595: Pop(2)
0x596: @ CameraWaitForPlayFinish()
0x597: Pop(0)
0x598: @ ResumeWorld()
0x599: Pop(0)
0x59a: Stack[-18] = (bool) 1
0x59b: Return(); Pop(16)

0x59c: PushEmpty()
0x59d: @ CameraSwitchToNormal()
0x59e: Pop(0)
0x59f: Return(); Pop(0)

0x5a0: PushEmpty(float, float, float, float)
0x5a1: Push("playing ")
0x5a2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5a3: @ Trace(Stack[-1])
0x5a4: Pop(1)
0x5a5: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5a6: Pop(0)
0x5a7: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x5a8: Pop(0)
0x5a9: Push("start: ")
0x5aa: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5ab: @ Trace(Stack[-1])
0x5ac: Pop(1)
0x5ad: Push("end: ")
0x5ae: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5af: @ Trace(Stack[-1])
0x5b0: Pop(1)
0x5b1: Return(); Pop(4)

0x5b2: PushEmpty(bool)
0x5b3: Call 0x5f9

0x5b4: Pop(0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b6: @ lshStopSpeech()
0x5b7: Pop(0)
0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(float, float)
0x5ba: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5bc: Push((float)0.0)
0x5bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c0: Return(); Pop(2)

0x5c1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c2: Return(); Pop(2)

0x5c3: PushEmpty(int, int)
0x5c4: @ GetVariable(Stack[-3], Stack[-1])
0x5c5: Pop(0)
0x5c6: Stack[-4] = Stack[-1]
0x5c7: Return(); Pop(2)

0x5c8: PushEmpty(object, object)
0x5c9: @ FindActor(Stack[-1], Stack[-4])
0x5ca: Pop(0)
0x5cb: Pop(0); Push((bool) Stack[-1] == 0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5cd: Push("Door ")
0x5ce: Pop(1); Push(Stack[-1] + Stack[-5]);
0x5cf: Push(" not found")
0x5d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d1: @ Trace(Stack[-1])
0x5d2: Pop(1)
0x5d3: Push("locked")
0x5d4: @@ SetProperty(Stack[-1], Stack[-4])
0x5d5: Pop(1)
0x5d6: Return(); Pop(2)

0x5d7: Stack[-1] = 0
0x5d8: PushEmpty(float, float)
0x5d9: @ GetGameTime(Stack[-1])
0x5da: Pop(0)
0x5db: Stack[-3] = Stack[-1]
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty(float, float)
0x5de: @ GetGameTime(Stack[-1])
0x5df: Pop(0)
0x5e0: Push((int) 1)
0x5e1: PushEmpty(int)
0x5e2: Push((int) 24)
0x5e3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5e4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5e5: Return(); Pop(2)

0x5e6: PushEmpty()
0x5e7: PushEmpty(int)
0x5e8: Call 0x5dd

0x5e9: Pop(0)
0x5ea: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(bool, bool)
0x5ed: PushEmpty(string)
0x5ee: Stack[-1] = "No"
0x5ef: Call 0x5a0

0x5f0: Pop(1)
0x5f1: @ lshWaitForAnimEnd(Stack[-1])
0x5f2: Pop(0)
0x5f3: Stack[-3] = Stack[-1]
0x5f4: Return(); Pop(2)

0x5f5: Stack[-1] = (int) 2861
0x5f6: Return(); Pop(0)

0x5f7: Stack[-1] = "ui/NPC_Han.png"
0x5f8: Return(); Pop(0)

0x5f9: Stack[-1] = (bool) 1
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: Push("playsound")
0x5fd: Push("giveitem")
0x5fe: @ TriggerWorld(Stack[-2], Stack[-1])
0x5ff: Pop(2)
0x600: Return(); Pop(0)

0x601: PushEmpty()
0x602: Return(); Pop(0)

0x603: PushEmpty(object, object)
0x604: Push("d3q02")
0x605: Push((int) 4)
0x606: @ SetVariable(Stack[-2], Stack[-1])
0x607: Pop(2)
0x608: PushEmpty(object)
0x609: Call 0x6e6

0x60a: Stack[-2] = Stack[-1]
0x60b: Pop(1)
0x60c: Push("d3q02HanGotoViktor")
0x60d: Push("pt_map_viktor")
0x60e: Push((int) 0)
0x60f: Push((int) 11386)
0x610: PushEmpty(float)
0x611: Call 0x5d8

0x612: Pop(0)
0x613: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(5)
0x615: Return(); Pop(2)

0x616: Stack[-1] = 0
0x617: PushEmpty()
0x618: PushEmpty(object, string, float)
0x619: PushEmpty(object)
0x61a: Call 0x6e6

0x61b: Stack[-4] = Stack[-1]
0x61c: Pop(1)
0x61d: Stack[-2] = "pt_map_viktor"
0x61e: Stack[-1] = (int) 2
0x61f: Call 0x6f7

0x620: Pop(3)
0x621: PushEmpty(object)
0x622: Call 0x6e6

0x623: Pop(0)
0x624: @@ ShowMap(Stack[-1])
0x625: Pop(1)
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: Push("ood8Han1")
0x629: Push((int) 1)
0x62a: @ SetVariable(Stack[-2], Stack[-1])
0x62b: Pop(2)
0x62c: Return(); Pop(0)

0x62d: PushEmpty()
0x62e: Push("ood9Xan1")
0x62f: Push((int) 1)
0x630: @ SetVariable(Stack[-2], Stack[-1])
0x631: Pop(2)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: Push("d9q01")
0x635: Push((int) 2)
0x636: @ SetVariable(Stack[-2], Stack[-1])
0x637: Pop(2)
0x638: PushEmpty()
0x639: Call 0x739

0x63a: Pop(0)
0x63b: Return(); Pop(0)

0x63c: PushEmpty(int, int)
0x63d: Push("Rifle")
0x63e: Push((int) 5)
0x63f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(2)
0x641: Return(); Pop(2)

0x642: PushEmpty(int, int)
0x643: Push("d9q01")
0x644: Push((int) 1000)
0x645: @ SetVariable(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: PushEmpty()
0x648: Call 0x729

0x649: Pop(0)
0x64a: Push("Rifle")
0x64b: Push((int) 5)
0x64c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(2)
0x64e: Return(); Pop(2)

0x64f: PushEmpty()
0x650: PushEmpty(string, bool)
0x651: Stack[-2] = "mnogogrannik@door1"
0x652: Stack[-1] = (bool) 0
0x653: Call 0x5c8

0x654: Pop(2)
0x655: Return(); Pop(0)

0x656: PushEmpty()
0x657: Stack[-2] = (bool) 1
0x658: Return(); Pop(0)

0x659: Stack[-2] = (bool) 0
0x65a: Return(); Pop(0)

0x65b: PushEmpty()
0x65c: PushEmpty(int, string)
0x65d: Stack[-1] = "d3q02"
0x65e: Call 0x5c3

0x65f: Pop(1)
0x660: Push((int) 3)
0x661: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x663: Stack[-2] = (bool) 1
0x664: Return(); Pop(0)

0x665: Stack[-2] = (bool) 0
0x666: Return(); Pop(0)

0x667: PushEmpty()
0x668: PushEmpty(int, string)
0x669: Stack[-1] = "ood8Han1"
0x66a: Call 0x5c3

0x66b: Pop(1)
0x66c: Push((int) 0)
0x66d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-2] = (bool) 1
0x670: Return(); Pop(0)

0x671: Stack[-2] = (bool) 0
0x672: Return(); Pop(0)

0x673: PushEmpty()
0x674: PushEmpty(int, string)
0x675: Stack[-1] = "d9q01"
0x676: Call 0x5c3

0x677: Pop(1)
0x678: Push((int) 1)
0x679: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = (bool) 1
0x67c: Return(); Pop(0)

0x67d: Stack[-2] = (bool) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty()
0x680: PushEmpty(int, string)
0x681: Stack[-1] = "ood9Xan1"
0x682: Call 0x5c3

0x683: Pop(1)
0x684: Push((int) 0)
0x685: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x687: Stack[-2] = (bool) 1
0x688: Return(); Pop(0)

0x689: Stack[-2] = (bool) 0
0x68a: Return(); Pop(0)

0x68b: PushEmpty()
0x68c: PushEmpty(bool, object)
0x68d: Stack[-1] = Stack[-3]
0x68e: Call 0x69f

0x68f: Pop(1)
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: Stack[-2] = (bool) 1
0x692: Return(); Pop(0)

0x693: Stack[-2] = (bool) 0
0x694: Return(); Pop(0)

0x695: PushEmpty()
0x696: PushEmpty(bool, object)
0x697: Stack[-1] = Stack[-3]
0x698: Call 0x6aa

0x699: Pop(1)
0x69a: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69b: Stack[-2] = (bool) 1
0x69c: Return(); Pop(0)

0x69d: Stack[-2] = (bool) 0
0x69e: Return(); Pop(0)

0x69f: PushEmpty(int, int)
0x6a0: Push("Rifle")
0x6a1: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x6a2: Pop(1)
0x6a3: Push((int) 5)
0x6a4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-4] = (bool) 1
0x6a7: Return(); Pop(2)

0x6a8: Stack[-4] = (bool) 0
0x6a9: Return(); Pop(2)

0x6aa: PushEmpty(int, int)
0x6ab: Push("Rifle")
0x6ac: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x6ad: Pop(1)
0x6ae: PushEmpty(bool)
0x6af: Stack[-1] = (bool) 0
0x6b0: Push((int) 0)
0x6b1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b3: Push((int) 5)
0x6b4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b6: Stack[-1] = (bool) 1
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-4] = (bool) 1
0x6b9: Return(); Pop(2)

0x6ba: Stack[-4] = (bool) 0
0x6bb: Return(); Pop(2)

0x6bc: PushEmpty(object, object)
0x6bd: @ GetDiaryRoot(Stack[-1])
0x6be: Pop(0)
0x6bf: Pop(0); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c1: Push("Can't retrieve diary root")
0x6c2: @ Trace(Stack[-1])
0x6c3: Pop(1)
0x6c4: Stack[-3] = (bool) 0
0x6c5: Return(); Pop(2)

0x6c6: Stack[-3] = Stack[-1]
0x6c7: Return(); Pop(2)

0x6c8: Stack[-1] = 0
0x6c9: PushEmpty(object, object, int, object, object, int)
0x6ca: PushEmpty(object)
0x6cb: Call 0x6bc

0x6cc: Stack[-4] = Stack[-1]
0x6cd: Pop(1)
0x6ce: @@ Find(Stack[-7], Stack[-2])
0x6cf: Pop(0)
0x6d0: Pop(0); Push((bool) Stack[-2] == 0)
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d2: Push("Can't find diary parent with id: ")
0x6d3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d4: @ Trace(Stack[-1])
0x6d5: Pop(1)
0x6d6: Stack[-9] = (bool) 0
0x6d7: Return(); Pop(6)

0x6d8: @@ AddChild(Stack[-8])
0x6d9: Pop(0)
0x6da: Push("player_diary")
0x6db: Push((int) 1)
0x6dc: @ SetVariable(Stack[-2], Stack[-1])
0x6dd: Pop(2)
0x6de: @@ GetCategory(Stack[-1])
0x6df: Pop(0)
0x6e0: @ SetDiarySection(Stack[-1])
0x6e1: Pop(0)
0x6e2: Stack[-9] = (bool) 0
0x6e3: Return(); Pop(6)

0x6e4: Stack[-2] = 0
0x6e5: Stack[-3] = 0
0x6e6: PushEmpty(object, object, object, object)
0x6e7: @ GetMainOutdoorScene(Stack[-2])
0x6e8: Pop(0)
0x6e9: Pop(0); Push((bool) Stack[-2] == 0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6eb: Push("Can't find main outdoor scene")
0x6ec: @ Trace(Stack[-1])
0x6ed: Pop(1)
0x6ee: Stack[-1] = 0
0x6ef: Stack[-5] = Stack[-1]
0x6f0: Return(); Pop(4)

0x6f1: @@ GetMap(Stack[-1])
0x6f2: Pop(0)
0x6f3: Stack[-5] = Stack[-1]
0x6f4: Return(); Pop(4)

0x6f5: Stack[-1] = 0
0x6f6: Stack[-2] = 0
0x6f7: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6f8: @ GetMainOutdoorScene(Stack[-2])
0x6f9: Pop(0)
0x6fa: Pop(0); Push((bool) Stack[-2] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fc: Push("Can't find main outdoor scene")
0x6fd: @ Trace(Stack[-1])
0x6fe: Pop(1)
0x6ff: Return(); Pop(8)

0x700: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x701: Pop(0)
0x702: Pop(0); Push((bool) Stack[-1] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x704: Push("Warning: outdoor scene locator ")
0x705: Pop(1); Push(Stack[-1] + Stack[-11]);
0x706: Push(" doesnt exist")
0x707: Pop(2); Push(Stack[-2] + Stack[-1]);
0x708: @ Trace(Stack[-1])
0x709: Pop(1)
0x70a: @@ GetMap(Stack[-11])
0x70b: Pop(0)
0x70c: Pop(0); Push((bool) Stack[-11] == 0)
0x70d: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70e: Push("Can't find map")
0x70f: @ Trace(Stack[-1])
0x710: Pop(1)
0x711: Return(); Pop(8)

0x712: Push(CvectorIndex(Stack[-4], 0))
0x713: Push(CvectorIndex(Stack[-5], 2))
0x714: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x715: Pop(2)
0x716: Return(); Pop(8)

0x717: Stack[-2] = 0
0x718: PushEmpty(int, int)
0x719: Push("player")
0x71a: @ GetVariable(Stack[-1], Stack[-2])
0x71b: Pop(1)
0x71c: Push((int) 0)
0x71d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71f: Stack[-3] = (int) 200001
0x720: Return(); Pop(2)

0x721: GOTO 0x727

0x722: Push((int) 1)
0x723: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: Stack[-3] = (int) 200002
0x726: Return(); Pop(2)

0x727: Stack[-3] = (int) 200003
0x728: Return(); Pop(2)

0x729: PushEmpty(object, object)
0x72a: Push("Adding diary entry")
0x72b: @ Trace(Stack[-1])
0x72c: Pop(1)
0x72d: Push((int) 185)
0x72e: Push((int) 1)
0x72f: Push((int) 15448)
0x730: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: PushEmpty(bool, object, int)
0x733: Stack[-2] = Stack[-4]
0x734: Stack[-1] = (int) 182
0x735: Call 0x6c9

0x736: Pop(3)
0x737: Return(); Pop(2)

0x738: Stack[-1] = 0
0x739: PushEmpty(object, object)
0x73a: Push("Adding diary entry")
0x73b: @ Trace(Stack[-1])
0x73c: Pop(1)
0x73d: Push((int) 184)
0x73e: Push((int) 1)
0x73f: Push((int) 15447)
0x740: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: PushEmpty(bool, object, int)
0x743: Stack[-2] = Stack[-4]
0x744: Stack[-1] = (int) 182
0x745: Call 0x6c9

0x746: Pop(3)
0x747: Return(); Pop(2)

0x748: Stack[-1] = 0
0x749: Push(GlobalVars[1])
0x74a: Stack[-1] = (bool) 0
0x74b: GlobalVars[1] = Stack[-1]; Pop(1)
0x74c: Return(); Pop(0)

0x74d: PushEmpty()
0x74e: Push(GlobalVars[1])
0x74f: Pop(1); Push((bool) Stack[-1] == 0)
0x750: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x751: Push(GlobalVars[1])
0x752: Stack[-1] = (bool) 1
0x753: GlobalVars[1] = Stack[-1]; Pop(1)
0x754: Return(); Pop(0)

0x755: PushEmpty(bool, int)
0x756: Stack[-1] = (int) 1
0x757: Call 0x5e6

0x758: Pop(1)
0x759: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x75a: Return(); Pop(0)

0x75b: PushEmpty(bool, int)
0x75c: Stack[-1] = (int) 3
0x75d: Call 0x5e6

0x75e: Pop(1)
0x75f: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x760: PushEmpty(int, object)
0x761: Stack[-1] = Stack[-3]
0x762: Push(-2, 1); TaskCall(2)
0x763: Call 0x31

0x764: Pop(-2, 1); TaskReturn
0x765: Pop(2)
0x766: Return(); Pop(0)

0x767: PushEmpty(bool, int)
0x768: Stack[-1] = (int) 8
0x769: Call 0x5e6

0x76a: Pop(1)
0x76b: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76c: PushEmpty(int, object)
0x76d: Stack[-1] = Stack[-3]
0x76e: Push(-2, 1); TaskCall(4)
0x76f: Call 0x1e2

0x770: Pop(-2, 1); TaskReturn
0x771: Pop(2)
0x772: Return(); Pop(0)

0x773: PushEmpty(bool, int)
0x774: Stack[-1] = (int) 9
0x775: Call 0x5e6

0x776: Pop(1)
0x777: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x778: PushEmpty(int, object)
0x779: Stack[-1] = Stack[-3]
0x77a: Push(-2, 1); TaskCall(6)
0x77b: Call 0x34f

0x77c: Pop(-2, 1); TaskReturn
0x77d: Pop(2)
0x77e: Return(); Pop(0)

0x77f: PushEmpty(bool)
0x780: Call 0x5ec

0x781: Pop(1)
0x782: Return(); Pop(0)

