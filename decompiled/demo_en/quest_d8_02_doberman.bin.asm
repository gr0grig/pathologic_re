GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ood8Doberman1
	pt_map_kapella
	ShowMap
	d8q02
	d8q02GotoKapella
	AddMark
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	HasAnimation (3 args)

RunOp = 0x1b5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1bb Vars = (object)
		EVENT_26 Op = 0x1e9 Vars = (string)
		EVENT_6 Op = 0x1f1 Vars = ()
		EVENT_7 Op = 0x232 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2ba

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x436

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x434

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x438

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x43a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x40b

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x2fe

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 533313)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x38a

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 535847)
0x5f: Push((int) 37548)
0x60: Push((int) 37547)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 535882)
0x64: Push((int) -1)
0x65: Push((int) 37588)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 535851)
0x69: Push((int) -1)
0x6a: Push((int) 37551)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x43c

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x30f

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x43c

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x31f

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x339

0xa9: Pop(0)
0xaa: Push((int) 37547)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x35a

0xb1: Pop(2)
0xb2: Push((int) 34820)
0xb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x370

0xb9: Pop(2)
0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x360

0xbe: Pop(2)
0xbf: Push((int) 37604)
0xc0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x370

0xc6: Pop(2)
0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x360

0xcb: Pop(2)
0xcc: Push((int) 34821)
0xcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral"
0xd1: Call2 0x8e

0xd2: Pop(1)
0xd3: Push((int) 533313)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x38a

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: Push((int) 535847)
0xde: Push((int) 37548)
0xdf: Push((int) 37547)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 535882)
0xe3: Push((int) -1)
0xe4: Push((int) 37588)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 535851)
0xe8: Push((int) -1)
0xe9: Push((int) 37551)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 37548)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0x8e

0xf3: Pop(1)
0xf4: Push((int) 535848)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 535883)
0xfa: Push((int) 37590)
0xfb: Push((int) 37589)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 535849)
0xff: Push((int) 37590)
0x100: Push((int) 37549)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 37590)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call2 0x8e

0x10a: Pop(1)
0x10b: Push((int) 535884)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 535885)
0x111: Push((int) 37550)
0x112: Push((int) 37591)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 535886)
0x116: Push((int) 37550)
0x117: Push((int) 37592)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 37550)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Neutral"
0x120: Call2 0x8e

0x121: Pop(1)
0x122: Push((int) 535850)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 535887)
0x128: Push((int) 37595)
0x129: Push((int) 37594)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 37595)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call2 0x8e

0x133: Pop(1)
0x134: Push((int) 535888)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 533308)
0x13a: Push((int) 34817)
0x13b: Push((int) 34816)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 535889)
0x13f: Push((int) 37605)
0x140: Push((int) 37597)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 37605)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral"
0x149: Call2 0x8e

0x14a: Pop(1)
0x14b: Push((int) 535896)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 535897)
0x151: Push((int) 37600)
0x152: Push((int) 37606)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: Push((int) 34817)
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Neutral"
0x15b: Call2 0x8e

0x15c: Pop(1)
0x15d: Push((int) 533309)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 533310)
0x163: Push((int) 34819)
0x164: Push((int) 34818)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 535890)
0x168: Push((int) 37601)
0x169: Push((int) 37598)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 37601)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0x8e

0x173: Pop(1)
0x174: Push((int) 535893)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 535894)
0x17a: Push((int) 37600)
0x17b: Push((int) 37602)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 34819)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral"
0x184: Call2 0x8e

0x185: Pop(1)
0x186: Push((int) 533311)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: Push((int) 535891)
0x18c: Push((int) 37600)
0x18d: Push((int) 37599)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 37600)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0x8e

0x197: Pop(1)
0x198: Push((int) 535892)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 533312)
0x19e: Push((int) -1)
0x19f: Push((int) 34820)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 535895)
0x1a3: Push((int) -1)
0x1a4: Push((int) 37604)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a9: PushEmpty(bool)
0x1aa: Call2 0x43c

0x1ab: Pop(0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ad: @ lshStopAnimation()
0x1ae: Pop(0)
0x1af: GOTO 0x1b2

0x1b0: @ StopAnimation()
0x1b1: Pop(0)
0x1b2: Return(); Pop(0)

0x1b3: GOTO 0xa5

0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(float, float)
0x1b6: Stack[-2] = (int) 300
0x1b7: Stack[-1] = (int) 100
0x1b8: Call2 0x1c3

0x1b9: Pop(2)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: PushEmpty(int, object)
0x1bd: Stack[-1] = Stack[-3]
0x1be: Push(-2, 1); TaskCall(0)
0x1bf: Call2 0x0

0x1c0: Pop(-2, 1); TaskReturn
0x1c1: Pop(2)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(float, bool, float, bool)
0x1c4: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1c5: Push((int) 3)
0x1c6: @ rand(Stack[-3], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push((int) 3)
0x1c9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ca: @ Sleep(Stack[-1], Stack[-2])
0x1cb: Pop(1)
0x1cc: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1cd: PushEmpty(float, float)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-7]
0x1d0: Call2 0x208

0x1d1: Pop(2)
0x1d2: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1d3: GOTO 0x1c5

0x1d4: Return(); Pop(4)

0x1d5: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 0
0x1d8: PushEmpty(bool)
0x1d9: Call2 0x2b5

0x1da: Pop(0)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Call2 0x206

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Stack[-1] = (bool) 1
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object)
0x1e4: Call2 0x340

0x1e5: Pop(0)
0x1e6: @ RemoveActor(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: Push("cleanup")
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x1d5

0x1ef: Pop(0)
0x1f0: Return(); Pop(0)

0x1f1: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: PushEmpty()
0x1f4: Call2 0x249

0x1f5: Pop(0)
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x206

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[-1] = (bool) 1
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(object)
0x201: Call2 0x340

0x202: Pop(0)
0x203: @ RemoveActor(Stack[-1])
0x204: Pop(1)
0x205: Return(); Pop(0)

0x206: Stack[-1] = (bool) 1
0x207: Return(); Pop(0)

0x208: PushEmpty()
0x209: PushEmpty(bool)
0x20a: Call2 0x2b5

0x20b: Pop(0)
0x20c: Pop(1); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Return(); Pop(0)

0x20f: Push("player")
0x210: @ FindActor(Stack[-4], Stack[-1])
0x211: Pop(1)
0x212: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x213: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x214: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x215: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x216: Push((int) 10)
0x217: Push((float)1.0)
0x218: @ SetTimer(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: PushEmpty()
0x21b: Call2 0x257

0x21c: Pop(0)
0x21d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21f: Push((int) 10)
0x220: @ KillTimer(Stack[-1])
0x221: Pop(1)
0x222: Return(); Pop(0)

0x223: PushEmpty(float, float)
0x224: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-3] = (bool) 0
0x227: Return(); Pop(2)

0x228: PushEmpty(float, object)
0x229: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22a: Call2 0x2ad

0x22b: Pop(1)
0x22c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x22d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x230: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x231: Return(); Pop(2)

0x232: PushEmpty()
0x233: Push((int) 10)
0x234: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x236: PushEmpty(bool)
0x237: Call2 0x223

0x238: Pop(0)
0x239: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23c: PushEmpty(object)
0x23d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x23e: Call2 0x32e

0x23f: Pop(1)
0x240: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x241: GOTO 0x248

0x242: Push( Stack[2 + Tasks[-1].StackPointer] )
0x243: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x244: Push("head")
0x245: @ UnlookAsync(Stack[-1])
0x246: Pop(1)
0x247: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: Call2 0x2a8

0x24b: Pop(0)
0x24c: Push((int) 10)
0x24d: @ KillTimer(Stack[-1])
0x24e: Pop(1)
0x24f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x250: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x251: Push("head")
0x252: @ UnlookAsync(Stack[-1])
0x253: Pop(1)
0x254: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x255: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x256: Return(); Pop(0)

0x257: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x258: @ WaitForAnimEnd()
0x259: Pop(0)
0x25a: PushEmpty(bool)
0x25b: Call2 0x2b5

0x25c: Pop(0)
0x25d: Pop(1); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Return(); Pop(14)

0x260: PushEmpty(int)
0x261: Call2 0x423

0x262: Stack[-8] = Stack[-1]
0x263: Pop(1)
0x264: Stack[-6] = (int) 0
0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 0
0x267: Push((int) 5)
0x268: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: PushEmpty(bool)
0x26b: Call2 0x2b5

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: Stack[-1] = (bool) 1
0x26f: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x270: Push((int) 3)
0x271: @ irand(Stack[-6], Stack[-1])
0x272: Pop(1)
0x273: Push((int) 0)
0x274: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x276: Push(Stack[-7])
0x277: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x278: @ irand(Stack[-4], Stack[-7])
0x279: Pop(0)
0x27a: Push("all")
0x27b: PushEmpty(string, int)
0x27c: Stack[-1] = Stack[-7]
0x27d: Call2 0x41c

0x27e: Pop(1)
0x27f: @ PlayAnimation(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: @ WaitForAnimEnd(Stack[-3])
0x282: Pop(0)
0x283: Pop(0); Push((bool) Stack[-3] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: GOTO 0x2a3

0x286: GOTO 0x298

0x287: Push((int) 1)
0x288: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28a: Push((int) 4)
0x28b: @ rand(Stack[-3], Stack[-1])
0x28c: Pop(1)
0x28d: Push((int) 1)
0x28e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x28f: @ Sleep(Stack[-1], Stack[-2])
0x290: Pop(1)
0x291: Pop(0); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: GOTO 0x2a3

0x294: GOTO 0x298

0x295: Push(Stack[-6])
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x2a3

0x298: PushEmpty(bool)
0x299: Call2 0x2a6

0x29a: Pop(0)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a3

0x29e: @ ResetAAS()
0x29f: Pop(0)
0x2a0: Push((int) 1)
0x2a1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a2: GOTO 0x265

0x2a3: @ ResetAAS()
0x2a4: Pop(0)
0x2a5: Return(); Pop(14)

0x2a6: Stack[-1] = (bool) 1
0x2a7: Return(); Pop(0)

0x2a8: @ StopAnimation()
0x2a9: Pop(0)
0x2aa: @ StopGroup0()
0x2ab: Pop(0)
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2ae: @ GetPosition(Stack[-3])
0x2af: Pop(0)
0x2b0: @@ GetPosition(Stack[-2])
0x2b1: Pop(0)
0x2b2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b4: Return(); Pop(6)

0x2b5: PushEmpty(bool, bool)
0x2b6: @ IsLoaded(Stack[-1])
0x2b7: Pop(0)
0x2b8: Stack[-3] = Stack[-1]
0x2b9: Return(); Pop(2)

0x2ba: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bb: @@ GetPosition(Stack[-8])
0x2bc: Pop(0)
0x2bd: @@ GetEyesHeight(Stack[-9])
0x2be: Pop(0)
0x2bf: Push(CvectorIndex(Stack[-8], 1))
0x2c0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c2: @ GetPosition(Stack[-7])
0x2c3: Pop(0)
0x2c4: @ GetEyesHeight(Stack[-9])
0x2c5: Pop(0)
0x2c6: Push(CvectorIndex(Stack[-7], 1))
0x2c7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2c9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ca: Push(CvectorIndex(Stack[-6], 1))
0x2cb: Stack[-1] = (int) 0
0x2cc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2cd: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ce: Pop(1); Push(Sqrt(Stack[-1]))
0x2cf: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d0: Stack[-5] = -Stack[-6]; Pop(0);
0x2d1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d2: PushEmpty(cvector, cvector)
0x2d3: Push(CVector(0.0, 1.0, 0.0))
0x2d4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d5: Call2 0x346

0x2d6: Pop(1)
0x2d7: Push((int) 25)
0x2d8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2da: Push(CVector(0.0, 10.0, 0.0))
0x2db: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2dc: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2dd: @ IsOverrideActive(Stack[-2])
0x2de: Pop(0)
0x2df: Push(Stack[-2])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: Stack[-21] = (bool) 0
0x2e2: Return(); Pop(18)

0x2e3: @ StopWorld()
0x2e4: Pop(0)
0x2e5: @ CameraTransit(Stack[-3], Stack[-5])
0x2e6: Pop(0)
0x2e7: Push(CvectorIndex(Stack[-4], 0))
0x2e8: Push(CvectorIndex(Stack[-5], 2))
0x2e9: @ Rotate(Stack[-2], Stack[-1])
0x2ea: Pop(2)
0x2eb: PushEmpty(bool)
0x2ec: Call2 0x43c

0x2ed: Pop(0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: GOTO 0x2f8

0x2f0: Push("head")
0x2f1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f2: Pop(1)
0x2f3: Push(Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f5: Push("head")
0x2f6: @ LookAsyncCamera(Stack[-1])
0x2f7: Pop(1)
0x2f8: @ CameraWaitForPlayFinish()
0x2f9: Pop(0)
0x2fa: @ ResumeWorld()
0x2fb: Pop(0)
0x2fc: Stack[-21] = (bool) 1
0x2fd: Return(); Pop(18)

0x2fe: PushEmpty(bool, bool)
0x2ff: @ CameraSwitchToNormal()
0x300: Pop(0)
0x301: PushEmpty(bool)
0x302: Call2 0x43c

0x303: Pop(0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x30e

0x306: Push("head")
0x307: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x308: Pop(1)
0x309: Push(Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: Push("head")
0x30c: @ UnlookAsync(Stack[-1])
0x30d: Pop(1)
0x30e: Return(); Pop(2)

0x30f: PushEmpty(bool, float, float, bool, float, float)
0x310: @ lshHasAnimation(Stack[-3], Stack[-7])
0x311: Pop(0)
0x312: Push(Stack[-3])
0x313: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x314: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x315: Pop(0)
0x316: Push((bool) 0)
0x317: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(1)
0x319: GOTO 0x31e

0x31a: Push("Can't find lsh animation : ")
0x31b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31c: @ Trace(Stack[-1])
0x31d: Pop(1)
0x31e: Return(); Pop(6)

0x31f: PushEmpty(bool, float, float, bool, float, float)
0x320: @ lshHasAnimation(Stack[-3], Stack[-8])
0x321: Pop(0)
0x322: Push(Stack[-3])
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x325: Pop(0)
0x326: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x327: Pop(0)
0x328: GOTO 0x32d

0x329: Push("Can't find lsh animation : ")
0x32a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x32b: @ Trace(Stack[-1])
0x32c: Pop(1)
0x32d: Return(); Pop(6)

0x32e: PushEmpty(float, cvector, float, cvector)
0x32f: @@ GetEyesHeight(Stack[-2])
0x330: Pop(0)
0x331: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x332: Push(CvectorIndex(Stack[-1], 1))
0x333: Stack[-1] = Stack[-3]
0x334: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x335: Push("head")
0x336: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x337: Pop(1)
0x338: Return(); Pop(4)

0x339: PushEmpty(bool)
0x33a: Call2 0x43c

0x33b: Pop(0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: @ lshStopSpeech()
0x33e: Pop(0)
0x33f: Return(); Pop(0)

0x340: PushEmpty(object, object)
0x341: @ self(Stack[-1])
0x342: Pop(0)
0x343: Stack[-3] = Stack[-1]
0x344: Return(); Pop(2)

0x345: Stack[-1] = 0
0x346: PushEmpty(float, float)
0x347: Pop(0); Push(Stack[-3] | Stack[-3]);
0x348: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x349: Push((float)0.0)
0x34a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34d: Return(); Pop(2)

0x34e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x34f: Return(); Pop(2)

0x350: PushEmpty(int, int)
0x351: @ GetVariable(Stack[-3], Stack[-1])
0x352: Pop(0)
0x353: Stack[-4] = Stack[-1]
0x354: Return(); Pop(2)

0x355: PushEmpty(float, float)
0x356: @ GetGameTime(Stack[-1])
0x357: Pop(0)
0x358: Stack[-3] = Stack[-1]
0x359: Return(); Pop(2)

0x35a: PushEmpty()
0x35b: Push("ood8Doberman1")
0x35c: Push((int) 1)
0x35d: @ SetVariable(Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: Return(); Pop(0)

0x360: PushEmpty()
0x361: PushEmpty(object, string, float)
0x362: PushEmpty(object)
0x363: Call2 0x3d9

0x364: Stack[-4] = Stack[-1]
0x365: Pop(1)
0x366: Stack[-2] = "pt_map_kapella"
0x367: Stack[-1] = (int) 2
0x368: Call2 0x3ea

0x369: Pop(3)
0x36a: PushEmpty(object)
0x36b: Call2 0x3d9

0x36c: Pop(0)
0x36d: @@ ShowMap(Stack[-1])
0x36e: Pop(1)
0x36f: Return(); Pop(0)

0x370: PushEmpty(object, object)
0x371: Push("d8q02")
0x372: Push((int) 1)
0x373: @ SetVariable(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: PushEmpty(object)
0x376: Call2 0x3d9

0x377: Stack[-2] = Stack[-1]
0x378: Pop(1)
0x379: Push("d8q02GotoKapella")
0x37a: Push("pt_map_kapella")
0x37b: Push((int) 0)
0x37c: Push((int) 540068)
0x37d: PushEmpty(float)
0x37e: Call2 0x355

0x37f: Pop(0)
0x380: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(5)
0x382: PushEmpty()
0x383: Call2 0x396

0x384: Pop(0)
0x385: PushEmpty()
0x386: Call2 0x3a3

0x387: Pop(0)
0x388: Return(); Pop(2)

0x389: Stack[-1] = 0
0x38a: PushEmpty()
0x38b: PushEmpty(int, string)
0x38c: Stack[-1] = "ood8Doberman1"
0x38d: Call2 0x350

0x38e: Pop(1)
0x38f: Push((int) 0)
0x390: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-2] = (bool) 1
0x393: Return(); Pop(0)

0x394: Stack[-2] = (bool) 0
0x395: Return(); Pop(0)

0x396: PushEmpty(object, object)
0x397: Push((int) 127)
0x398: Push((int) 2)
0x399: Push((int) 513772)
0x39a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: PushEmpty(bool, object, int)
0x39d: Stack[-2] = Stack[-4]
0x39e: Stack[-1] = (int) -1
0x39f: Call2 0x3bd

0x3a0: Pop(3)
0x3a1: Return(); Pop(2)

0x3a2: Stack[-1] = 0
0x3a3: PushEmpty(object, object)
0x3a4: Push((int) 648)
0x3a5: Push((int) 2)
0x3a6: Push((int) 533321)
0x3a7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: PushEmpty(bool, object, int)
0x3aa: Stack[-2] = Stack[-4]
0x3ab: Stack[-1] = (int) 127
0x3ac: Call2 0x3bd

0x3ad: Pop(3)
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = 0
0x3b0: PushEmpty(object, object)
0x3b1: @ GetDiaryRoot(Stack[-1])
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: Push("Can't retrieve diary root")
0x3b6: @ Trace(Stack[-1])
0x3b7: Pop(1)
0x3b8: Stack[-3] = (bool) 0
0x3b9: Return(); Pop(2)

0x3ba: Stack[-3] = Stack[-1]
0x3bb: Return(); Pop(2)

0x3bc: Stack[-1] = 0
0x3bd: PushEmpty(object, object, int, object, object, int)
0x3be: PushEmpty(object)
0x3bf: Call2 0x3b0

0x3c0: Stack[-4] = Stack[-1]
0x3c1: Pop(1)
0x3c2: @@ Find(Stack[-7], Stack[-2])
0x3c3: Pop(0)
0x3c4: Pop(0); Push((bool) Stack[-2] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: Push("Can't find diary parent with id: ")
0x3c7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c8: @ Trace(Stack[-1])
0x3c9: Pop(1)
0x3ca: Stack[-9] = (bool) 0
0x3cb: Return(); Pop(6)

0x3cc: @@ AddChild(Stack[-8])
0x3cd: Pop(0)
0x3ce: Push((int) 7)
0x3cf: @ SendWorldWndMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ GetCategory(Stack[-1])
0x3d2: Pop(0)
0x3d3: @ SetDiarySection(Stack[-1])
0x3d4: Pop(0)
0x3d5: Stack[-9] = (bool) 0
0x3d6: Return(); Pop(6)

0x3d7: Stack[-2] = 0
0x3d8: Stack[-3] = 0
0x3d9: PushEmpty(object, object, object, object)
0x3da: @ GetMainOutdoorScene(Stack[-2])
0x3db: Pop(0)
0x3dc: Pop(0); Push((bool) Stack[-2] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3de: Push("Can't find main outdoor scene")
0x3df: @ Trace(Stack[-1])
0x3e0: Pop(1)
0x3e1: Stack[-1] = 0
0x3e2: Stack[-5] = Stack[-1]
0x3e3: Return(); Pop(4)

0x3e4: @@ GetMap(Stack[-1])
0x3e5: Pop(0)
0x3e6: Stack[-5] = Stack[-1]
0x3e7: Return(); Pop(4)

0x3e8: Stack[-1] = 0
0x3e9: Stack[-2] = 0
0x3ea: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3eb: @ GetMainOutdoorScene(Stack[-2])
0x3ec: Pop(0)
0x3ed: Pop(0); Push((bool) Stack[-2] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Push("Can't find main outdoor scene")
0x3f0: @ Trace(Stack[-1])
0x3f1: Pop(1)
0x3f2: Return(); Pop(8)

0x3f3: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3f4: Pop(0)
0x3f5: Pop(0); Push((bool) Stack[-1] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f7: Push("Warning: outdoor scene locator ")
0x3f8: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3f9: Push(" doesnt exist")
0x3fa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fb: @ Trace(Stack[-1])
0x3fc: Pop(1)
0x3fd: @@ GetMap(Stack[-11])
0x3fe: Pop(0)
0x3ff: Pop(0); Push((bool) Stack[-11] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x401: Push("Can't find map")
0x402: @ Trace(Stack[-1])
0x403: Pop(1)
0x404: Return(); Pop(8)

0x405: Push(CvectorIndex(Stack[-4], 0))
0x406: Push(CvectorIndex(Stack[-5], 2))
0x407: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x408: Pop(2)
0x409: Return(); Pop(8)

0x40a: Stack[-2] = 0
0x40b: PushEmpty(int, int)
0x40c: Push("branch")
0x40d: @ GetVariable(Stack[-1], Stack[-2])
0x40e: Pop(1)
0x40f: Push((int) 0)
0x410: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x412: Stack[-3] = (int) 1
0x413: Return(); Pop(2)

0x414: GOTO 0x41a

0x415: Push((int) 1)
0x416: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-3] = (int) 2
0x419: Return(); Pop(2)

0x41a: Stack[-3] = (int) 3
0x41b: Return(); Pop(2)

0x41c: PushEmpty(string, string)
0x41d: Stack[-1] = "idle"
0x41e: Push(Stack[-3])
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x421: Stack[-4] = Stack[-1]
0x422: Return(); Pop(2)

0x423: PushEmpty(int, bool, int, bool)
0x424: Stack[-2] = (int) 0
0x425: Push("all")
0x426: PushEmpty(string, int)
0x427: Stack[-1] = Stack[-5]
0x428: Call2 0x41c

0x429: Pop(1)
0x42a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: Pop(0); Push((bool) Stack[-1] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: GOTO 0x432

0x42f: Push((int) 1)
0x430: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x431: GOTO 0x425

0x432: Stack[-5] = Stack[-2]
0x433: Return(); Pop(4)

0x434: Stack[-1] = (int) 518097
0x435: Return(); Pop(0)

0x436: Stack[-1] = (int) 518096
0x437: Return(); Pop(0)

0x438: Stack[-1] = "ui/NPC_Citizen2.png"
0x439: Return(); Pop(0)

0x43a: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x43b: Return(); Pop(0)

0x43c: Stack[-1] = (bool) 0
0x43d: Return(); Pop(0)

