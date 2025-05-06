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
	b12q01TheaterIsVisited
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	oob12BirdmaskT1
	quest_b12_01
	init_theater
	oob12BirdmaskT2
	b12q01ChildsAreVisited
	branch
	add
	vol_
	size
	get

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
	Sleep (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x205
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x211 Vars = (object)
		EVENT_7 Op = 0x24b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2d3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x38e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x38c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x390

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x392

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3dd

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
0x41: Call2 0x317

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3a9

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xe3

0x59: Pop(1)
0x5a: Push((int) 522171)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x3cb

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 522172)
0x65: Push((int) 23999)
0x66: Push((int) 23339)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: Push((int) 523159)
0x6a: Push((int) -1)
0x6b: Push((int) 24361)
0x6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d: Pop(3)
0x6e: GOTO 0xc5

0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x3bf

0x72: Pop(1)
0x73: Pop(1); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xe3

0x78: Pop(1)
0x79: Push((int) 541621)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 541622)
0x7f: Push((int) 43795)
0x80: Push((int) 43794)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 541626)
0x84: Push((int) -1)
0x85: Push((int) 43798)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0xc5

0x89: PushEmpty(bool)
0x8a: Stack[-1] = (bool) 0
0x8b: PushEmpty(bool)
0x8c: Stack[-1] = (bool) 0
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x3a9

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x3b3

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x3bf

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Stack[-1] = (bool) 1
0x9f: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa0: PushEmpty(object, object)
0xa1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3: Call2 0x396

0xa4: Pop(2)
0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral"
0xa7: Call2 0xe3

0xa8: Pop(1)
0xa9: Push((int) 522704)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 522705)
0xaf: Push((int) -1)
0xb0: Push((int) 23898)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: GOTO 0xc5

0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Neutral"
0xb6: Call2 0xe3

0xb7: Pop(1)
0xb8: Push((int) 522706)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 522707)
0xbe: Push((int) -1)
0xbf: Push((int) 23900)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xc5

0xc3: Return(); Pop(0)

0xc4: GOTO 0x4e

0xc5: PushEmpty(bool)
0xc6: Call2 0x394

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x328

0xd1: Pop(1)
0xd2: GOTO 0xc9

0xd3: GOTO 0xe2

0xd4: Push("all")
0xd5: Push("idle")
0xd6: @ PlayAnimation(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: @ WaitForAnimEnd()
0xd9: Pop(0)
0xda: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: GOTO 0xe2

0xdd: Push("all")
0xde: Push("idle")
0xdf: @ PlayAnimation(Stack[-2], Stack[-1])
0xe0: Pop(2)
0xe1: GOTO 0xd8

0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool)
0xe5: Call2 0x394

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Return(); Pop(0)

0xea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: PushEmpty(string, bool)
0xee: Stack[-2] = Stack[-3]
0xef: Push("")
0xf0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[-1] = (bool) 0
0xf3: GOTO 0xf5

0xf4: Stack[-1] = (bool) 1
0xf5: Call2 0x338

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x352

0xfe: Pop(0)
0xff: Push((int) 23339)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x3a3

0x106: Pop(2)
0x107: Push((int) 23898)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x39c

0x10e: Pop(2)
0x10f: Push((int) 23338)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x3a9

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0xe3

0x11b: Pop(1)
0x11c: Push((int) 522171)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: PushEmpty(bool, object)
0x122: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x123: Call2 0x3cb

0x124: Pop(1)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: Push((int) 522172)
0x127: Push((int) 23999)
0x128: Push((int) 23339)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 523159)
0x12c: Push((int) -1)
0x12d: Push((int) 24361)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x3bf

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral"
0x139: Call2 0xe3

0x13a: Pop(1)
0x13b: Push((int) 541621)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 541622)
0x141: Push((int) 43795)
0x142: Push((int) 43794)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Push((int) 541626)
0x146: Push((int) -1)
0x147: Push((int) 43798)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: PushEmpty(bool)
0x14c: Stack[-1] = (bool) 0
0x14d: PushEmpty(bool)
0x14e: Stack[-1] = (bool) 0
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x3a9

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call2 0x3b3

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = (bool) 1
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x3bf

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0x396

0x166: Pop(2)
0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral"
0x169: Call2 0xe3

0x16a: Pop(1)
0x16b: Push((int) 522704)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 522705)
0x171: Push((int) -1)
0x172: Push((int) 23898)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xe3

0x179: Pop(1)
0x17a: Push((int) 522706)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 522707)
0x180: Push((int) -1)
0x181: Push((int) 23900)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 43795)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xe3

0x18b: Pop(1)
0x18c: Push((int) 541623)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 541624)
0x192: Push((int) -1)
0x193: Push((int) 43796)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 541627)
0x197: Push((int) -1)
0x198: Push((int) 43799)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 23999)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xe3

0x1a2: Pop(1)
0x1a3: Push((int) 522816)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 522817)
0x1a9: Push((int) 24001)
0x1aa: Push((int) 24000)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 522819)
0x1ae: Push((int) 24003)
0x1af: Push((int) 24002)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 24003)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call2 0xe3

0x1b9: Pop(1)
0x1ba: Push((int) 522820)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 522821)
0x1c0: Push((int) 24006)
0x1c1: Push((int) 24004)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 522822)
0x1c5: Push((int) -1)
0x1c6: Push((int) 24005)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 24006)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call2 0xe3

0x1d0: Pop(1)
0x1d1: Push((int) 522823)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 522824)
0x1d7: Push((int) -1)
0x1d8: Push((int) 24007)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Push((int) 522825)
0x1dc: Push((int) -1)
0x1dd: Push((int) 24008)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 24001)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call2 0xe3

0x1e7: Pop(1)
0x1e8: Push((int) 522818)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 522826)
0x1ee: Push((int) -1)
0x1ef: Push((int) 24009)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 522827)
0x1f3: Push((int) -1)
0x1f4: Push((int) 24010)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x394

0x1fb: Pop(0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: @ lshStopAnimation()
0x1fe: Pop(0)
0x1ff: GOTO 0x202

0x200: @ StopAnimation()
0x201: Pop(0)
0x202: Return(); Pop(0)

0x203: GOTO 0xfa

0x204: Return(); Pop(0)

0x205: Push((bool) 1)
0x206: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x207: PushEmpty(float, float)
0x208: Stack[-2] = (int) 300
0x209: Stack[-1] = (int) 100
0x20a: Call2 0x221

0x20b: Pop(2)
0x20c: Push((int) 1)
0x20d: @ Sleep(Stack[-1])
0x20e: Pop(1)
0x20f: GOTO 0x205

0x210: Return(); Pop(0)

0x211: PushEmpty(int, int)
0x212: Push("b12q01TheaterIsVisited")
0x213: @ GetVariable(Stack[-1], Stack[-2])
0x214: Pop(1)
0x215: Pop(0); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x217: PushEmpty()
0x218: Call2 0x262

0x219: Pop(0)
0x21a: PushEmpty(int, object)
0x21b: Stack[-1] = Stack[-5]
0x21c: Push(-2, 1); TaskCall(0)
0x21d: Call2 0x0

0x21e: Pop(-2, 1); TaskReturn
0x21f: Pop(2)
0x220: Return(); Pop(2)

0x221: PushEmpty()
0x222: PushEmpty(bool)
0x223: Call2 0x2ce

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Return(); Pop(0)

0x228: Push("player")
0x229: @ FindActor(Stack[-4], Stack[-1])
0x22a: Pop(1)
0x22b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x22d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x22e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x22f: Push((int) 10)
0x230: Push((float)1.0)
0x231: @ SetTimer(Stack[-2], Stack[-1])
0x232: Pop(2)
0x233: PushEmpty()
0x234: Call2 0x270

0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x238: Push((int) 10)
0x239: @ KillTimer(Stack[-1])
0x23a: Pop(1)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(float, float)
0x23d: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-3] = (bool) 0
0x240: Return(); Pop(2)

0x241: PushEmpty(float, object)
0x242: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x243: Call2 0x2c6

0x244: Pop(1)
0x245: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x246: Push( Stack[2 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x249: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x24a: Return(); Pop(2)

0x24b: PushEmpty()
0x24c: Push((int) 10)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24f: PushEmpty(bool)
0x250: Call2 0x23c

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x253: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(object)
0x256: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x257: Call2 0x347

0x258: Pop(1)
0x259: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x25a: GOTO 0x261

0x25b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: Push("head")
0x25e: @ UnlookAsync(Stack[-1])
0x25f: Pop(1)
0x260: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: Call2 0x2c1

0x264: Pop(0)
0x265: Push((int) 10)
0x266: @ KillTimer(Stack[-1])
0x267: Pop(1)
0x268: Push( Stack[2 + Tasks[-1].StackPointer] )
0x269: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26a: Push("head")
0x26b: @ UnlookAsync(Stack[-1])
0x26c: Pop(1)
0x26d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x26e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26f: Return(); Pop(0)

0x270: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x271: @ WaitForAnimEnd()
0x272: Pop(0)
0x273: PushEmpty(bool)
0x274: Call2 0x2ce

0x275: Pop(0)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Return(); Pop(14)

0x279: PushEmpty(int)
0x27a: Call2 0x37b

0x27b: Stack[-8] = Stack[-1]
0x27c: Pop(1)
0x27d: Stack[-6] = (int) 0
0x27e: PushEmpty(bool)
0x27f: Stack[-1] = (bool) 0
0x280: Push((int) 5)
0x281: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: PushEmpty(bool)
0x284: Call2 0x2ce

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = (bool) 1
0x288: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x289: Push((int) 3)
0x28a: @ irand(Stack[-6], Stack[-1])
0x28b: Pop(1)
0x28c: Push((int) 0)
0x28d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x28f: Push(Stack[-7])
0x290: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x291: @ irand(Stack[-4], Stack[-7])
0x292: Pop(0)
0x293: Push("all")
0x294: PushEmpty(string, int)
0x295: Stack[-1] = Stack[-7]
0x296: Call2 0x374

0x297: Pop(1)
0x298: @ PlayAnimation(Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: @ WaitForAnimEnd(Stack[-3])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-3] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2bc

0x29f: GOTO 0x2b1

0x2a0: Push((int) 1)
0x2a1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a3: Push((int) 4)
0x2a4: @ rand(Stack[-3], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push((int) 1)
0x2a7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2a8: @ Sleep(Stack[-1], Stack[-2])
0x2a9: Pop(1)
0x2aa: Pop(0); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2bc

0x2ad: GOTO 0x2b1

0x2ae: Push(Stack[-6])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: GOTO 0x2bc

0x2b1: PushEmpty(bool)
0x2b2: Call2 0x2bf

0x2b3: Pop(0)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2bc

0x2b7: @ ResetAAS()
0x2b8: Pop(0)
0x2b9: Push((int) 1)
0x2ba: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2bb: GOTO 0x27e

0x2bc: @ ResetAAS()
0x2bd: Pop(0)
0x2be: Return(); Pop(14)

0x2bf: Stack[-1] = (bool) 1
0x2c0: Return(); Pop(0)

0x2c1: @ StopAnimation()
0x2c2: Pop(0)
0x2c3: @ StopGroup0()
0x2c4: Pop(0)
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2c7: @ GetPosition(Stack[-3])
0x2c8: Pop(0)
0x2c9: @@ GetPosition(Stack[-2])
0x2ca: Pop(0)
0x2cb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2cc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(bool, bool)
0x2cf: @ IsLoaded(Stack[-1])
0x2d0: Pop(0)
0x2d1: Stack[-3] = Stack[-1]
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d4: @@ GetPosition(Stack[-8])
0x2d5: Pop(0)
0x2d6: @@ GetEyesHeight(Stack[-9])
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-8], 1))
0x2d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2da: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2db: @ GetPosition(Stack[-7])
0x2dc: Pop(0)
0x2dd: @ GetEyesHeight(Stack[-9])
0x2de: Pop(0)
0x2df: Push(CvectorIndex(Stack[-7], 1))
0x2e0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e3: Push(CvectorIndex(Stack[-6], 1))
0x2e4: Stack[-1] = (int) 0
0x2e5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e7: Pop(1); Push(Sqrt(Stack[-1]))
0x2e8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e9: Stack[-5] = -Stack[-6]; Pop(0);
0x2ea: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2eb: PushEmpty(cvector, cvector)
0x2ec: Push(CVector(0.0, 1.0, 0.0))
0x2ed: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ee: Call2 0x359

0x2ef: Pop(1)
0x2f0: Push((int) 25)
0x2f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f3: Push(CVector(0.0, 10.0, 0.0))
0x2f4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f6: @ IsOverrideActive(Stack[-2])
0x2f7: Pop(0)
0x2f8: Push(Stack[-2])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-21] = (bool) 0
0x2fb: Return(); Pop(18)

0x2fc: @ StopWorld()
0x2fd: Pop(0)
0x2fe: @ CameraTransit(Stack[-3], Stack[-5])
0x2ff: Pop(0)
0x300: Push(CvectorIndex(Stack[-4], 0))
0x301: Push(CvectorIndex(Stack[-5], 2))
0x302: @ Rotate(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: PushEmpty(bool)
0x305: Call2 0x394

0x306: Pop(0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x311

0x309: Push("head")
0x30a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30b: Pop(1)
0x30c: Push(Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30e: Push("head")
0x30f: @ LookAsyncCamera(Stack[-1])
0x310: Pop(1)
0x311: @ CameraWaitForPlayFinish()
0x312: Pop(0)
0x313: @ ResumeWorld()
0x314: Pop(0)
0x315: Stack[-21] = (bool) 1
0x316: Return(); Pop(18)

0x317: PushEmpty(bool, bool)
0x318: @ CameraSwitchToNormal()
0x319: Pop(0)
0x31a: PushEmpty(bool)
0x31b: Call2 0x394

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x327

0x31f: Push("head")
0x320: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x321: Pop(1)
0x322: Push(Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x324: Push("head")
0x325: @ UnlookAsync(Stack[-1])
0x326: Pop(1)
0x327: Return(); Pop(2)

0x328: PushEmpty(bool, float, float, bool, float, float)
0x329: @ lshHasAnimation(Stack[-3], Stack[-7])
0x32a: Pop(0)
0x32b: Push(Stack[-3])
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x32e: Pop(0)
0x32f: Push((bool) 0)
0x330: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(1)
0x332: GOTO 0x337

0x333: Push("Can't find lsh animation : ")
0x334: Pop(1); Push(Stack[-1] + Stack[-8]);
0x335: @ Trace(Stack[-1])
0x336: Pop(1)
0x337: Return(); Pop(6)

0x338: PushEmpty(bool, float, float, bool, float, float)
0x339: @ lshHasAnimation(Stack[-3], Stack[-8])
0x33a: Pop(0)
0x33b: Push(Stack[-3])
0x33c: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x33e: Pop(0)
0x33f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x340: Pop(0)
0x341: GOTO 0x346

0x342: Push("Can't find lsh animation : ")
0x343: Pop(1); Push(Stack[-1] + Stack[-9]);
0x344: @ Trace(Stack[-1])
0x345: Pop(1)
0x346: Return(); Pop(6)

0x347: PushEmpty(float, cvector, float, cvector)
0x348: @@ GetEyesHeight(Stack[-2])
0x349: Pop(0)
0x34a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x34b: Push(CvectorIndex(Stack[-1], 1))
0x34c: Stack[-1] = Stack[-3]
0x34d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x34e: Push("head")
0x34f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x350: Pop(1)
0x351: Return(); Pop(4)

0x352: PushEmpty(bool)
0x353: Call2 0x394

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x356: @ lshStopSpeech()
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: PushEmpty(float, float)
0x35a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x35b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x35c: Push((float)0.0)
0x35d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x360: Return(); Pop(2)

0x361: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x362: Return(); Pop(2)

0x363: PushEmpty(int, int)
0x364: @ GetVariable(Stack[-3], Stack[-1])
0x365: Pop(0)
0x366: Stack[-4] = Stack[-1]
0x367: Return(); Pop(2)

0x368: PushEmpty(object, object)
0x369: @ FindActor(Stack[-1], Stack[-4])
0x36a: Pop(0)
0x36b: Pop(0); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-5] = (bool) 0
0x36e: Return(); Pop(2)

0x36f: @ Trigger(Stack[-1], Stack[-3])
0x370: Pop(0)
0x371: Stack[-5] = (bool) 1
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty(string, string)
0x375: Stack[-1] = "idle"
0x376: Push(Stack[-3])
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x379: Stack[-4] = Stack[-1]
0x37a: Return(); Pop(2)

0x37b: PushEmpty(int, bool, int, bool)
0x37c: Stack[-2] = (int) 0
0x37d: Push("all")
0x37e: PushEmpty(string, int)
0x37f: Stack[-1] = Stack[-5]
0x380: Call2 0x374

0x381: Pop(1)
0x382: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: Pop(0); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: GOTO 0x38a

0x387: Push((int) 1)
0x388: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x389: GOTO 0x37d

0x38a: Stack[-5] = Stack[-2]
0x38b: Return(); Pop(4)

0x38c: Stack[-1] = (int) 515571
0x38d: Return(); Pop(0)

0x38e: Stack[-1] = (int) 504029
0x38f: Return(); Pop(0)

0x390: Stack[-1] = "ui/NPC_bmask.png"
0x391: Return(); Pop(0)

0x392: Stack[-1] = "ui/NPC_bmask_b.png"
0x393: Return(); Pop(0)

0x394: Stack[-1] = (bool) 0
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: Push("oob12BirdmaskT1")
0x398: Push((int) 1)
0x399: @ SetVariable(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: Return(); Pop(0)

0x39c: PushEmpty()
0x39d: PushEmpty(bool, string, string)
0x39e: Stack[-2] = "quest_b12_01"
0x39f: Stack[-1] = "init_theater"
0x3a0: Call2 0x368

0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: Push("oob12BirdmaskT2")
0x3a5: Push((int) 1)
0x3a6: @ SetVariable(Stack[-2], Stack[-1])
0x3a7: Pop(2)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-1] = Stack[-3]
0x3ac: Call2 0x3d7

0x3ad: Pop(1)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-2] = (bool) 1
0x3b0: Return(); Pop(0)

0x3b1: Stack[-2] = (bool) 0
0x3b2: Return(); Pop(0)

0x3b3: PushEmpty()
0x3b4: PushEmpty(int, string)
0x3b5: Stack[-1] = "oob12BirdmaskT1"
0x3b6: Call2 0x363

0x3b7: Pop(1)
0x3b8: Push((int) 0)
0x3b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-2] = (bool) 1
0x3bc: Return(); Pop(0)

0x3bd: Stack[-2] = (bool) 0
0x3be: Return(); Pop(0)

0x3bf: PushEmpty()
0x3c0: PushEmpty(int, string)
0x3c1: Stack[-1] = "b12q01ChildsAreVisited"
0x3c2: Call2 0x363

0x3c3: Pop(1)
0x3c4: Push((int) 0)
0x3c5: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-2] = (bool) 1
0x3c8: Return(); Pop(0)

0x3c9: Stack[-2] = (bool) 0
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: PushEmpty(int, string)
0x3cd: Stack[-1] = "oob12BirdmaskT2"
0x3ce: Call2 0x363

0x3cf: Pop(1)
0x3d0: Push((int) 0)
0x3d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-2] = (bool) 1
0x3d4: Return(); Pop(0)

0x3d5: Stack[-2] = (bool) 0
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: PushEmpty(bool)
0x3d9: Call2 0x4d6

0x3da: Stack[-3] = Stack[-1]
0x3db: Pop(1)
0x3dc: Return(); Pop(0)

0x3dd: PushEmpty(int, int)
0x3de: Push("branch")
0x3df: @ GetVariable(Stack[-1], Stack[-2])
0x3e0: Pop(1)
0x3e1: Push((int) 0)
0x3e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e4: Stack[-3] = (int) 1
0x3e5: Return(); Pop(2)

0x3e6: GOTO 0x3ec

0x3e7: Push((int) 1)
0x3e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-3] = (int) 2
0x3eb: Return(); Pop(2)

0x3ec: Stack[-3] = (int) 3
0x3ed: Return(); Pop(2)

0x3ee: PushEmpty()
0x3ef: Push((int) 18)
0x3f0: @@ add(Stack[-1])
0x3f1: Pop(1)
0x3f2: Push((int) 24)
0x3f3: @@ add(Stack[-1])
0x3f4: Pop(1)
0x3f5: Push((int) 20)
0x3f6: @@ add(Stack[-1])
0x3f7: Pop(1)
0x3f8: Push((int) 14)
0x3f9: @@ add(Stack[-1])
0x3fa: Pop(1)
0x3fb: Push((bool) 0)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3fe: Push((int) 10)
0x3ff: @@ add(Stack[-1])
0x400: Pop(1)
0x401: Push((int) 17)
0x402: @@ add(Stack[-1])
0x403: Pop(1)
0x404: Push((int) 8)
0x405: @@ add(Stack[-1])
0x406: Pop(1)
0x407: GOTO 0x40e

0x408: Push((int) 1)
0x409: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: Push((int) 10)
0x40c: @@ add(Stack[-1])
0x40d: Pop(1)
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: Push((int) 6)
0x411: @@ add(Stack[-1])
0x412: Pop(1)
0x413: Push((int) 26)
0x414: @@ add(Stack[-1])
0x415: Pop(1)
0x416: Push((int) 2)
0x417: @@ add(Stack[-1])
0x418: Pop(1)
0x419: Push((int) 22)
0x41a: @@ add(Stack[-1])
0x41b: Pop(1)
0x41c: Push((bool) 0)
0x41d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41f: Push((int) 15)
0x420: @@ add(Stack[-1])
0x421: Pop(1)
0x422: Push((int) 5)
0x423: @@ add(Stack[-1])
0x424: Pop(1)
0x425: Push((int) 16)
0x426: @@ add(Stack[-1])
0x427: Pop(1)
0x428: GOTO 0x42f

0x429: Push((int) 0)
0x42a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42c: Push((int) 15)
0x42d: @@ add(Stack[-1])
0x42e: Pop(1)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: Push((int) 7)
0x432: @@ add(Stack[-1])
0x433: Pop(1)
0x434: Push((int) 23)
0x435: @@ add(Stack[-1])
0x436: Pop(1)
0x437: Push((int) 21)
0x438: @@ add(Stack[-1])
0x439: Pop(1)
0x43a: Push((int) 9)
0x43b: @@ add(Stack[-1])
0x43c: Pop(1)
0x43d: Push((int) 3)
0x43e: @@ add(Stack[-1])
0x43f: Pop(1)
0x440: Push((int) 1)
0x441: @@ add(Stack[-1])
0x442: Pop(1)
0x443: Push((int) 11)
0x444: @@ add(Stack[-1])
0x445: Pop(1)
0x446: Push((int) 13)
0x447: @@ add(Stack[-1])
0x448: Pop(1)
0x449: Push((bool) 0)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44c: Push((int) 25)
0x44d: @@ add(Stack[-1])
0x44e: Pop(1)
0x44f: Return(); Pop(0)

0x450: PushEmpty(int, int)
0x451: Push("vol_")
0x452: Pop(1); Push(Stack[-1] + Stack[-4]);
0x453: @ GetVariable(Stack[-1], Stack[-2])
0x454: Pop(1)
0x455: Push((int) 4)
0x456: Pop(1); Push(Stack[-2] & Stack[-1]);
0x457: Push((int) 0)
0x458: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x459: Return(); Pop(2)

0x45a: PushEmpty(int, int)
0x45b: Push("vol_")
0x45c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x45d: @ GetVariable(Stack[-1], Stack[-2])
0x45e: Pop(1)
0x45f: Push((int) 16)
0x460: Pop(1); Push(Stack[-2] & Stack[-1]);
0x461: Push((int) 0)
0x462: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x463: Return(); Pop(2)

0x464: PushEmpty(object, int, int, int, object, int, int, int)
0x465: @ CreateIntVector(Stack[-4])
0x466: Pop(0)
0x467: PushEmpty(object, bool, int)
0x468: Stack[-3] = Stack[-7]
0x469: Stack[-2] = (bool) 0
0x46a: Stack[-1] = (int) -1
0x46b: Call2 0x3ee

0x46c: Pop(3)
0x46d: @@ size(Stack[-3])
0x46e: Pop(0)
0x46f: Stack[-2] = (int) 0
0x470: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x471: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x472: @@ get(Stack[-1], Stack[-2])
0x473: Pop(0)
0x474: PushEmpty(bool)
0x475: Stack[-1] = (bool) 1
0x476: PushEmpty(bool, int)
0x477: Stack[-1] = Stack[-4]
0x478: Call2 0x45a

0x479: Pop(1)
0x47a: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47b: PushEmpty(bool, int)
0x47c: Stack[-1] = Stack[-4]
0x47d: Call2 0x450

0x47e: Pop(1)
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: Stack[-1] = (bool) 0
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-9] = (bool) 0
0x483: Return(); Pop(8)

0x484: Push((int) 1)
0x485: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x486: GOTO 0x470

0x487: Stack[-9] = (bool) 1
0x488: Return(); Pop(8)

0x489: Stack[-4] = 0
0x48a: PushEmpty(object, int, int, int, object, int, int, int)
0x48b: @ CreateIntVector(Stack[-4])
0x48c: Pop(0)
0x48d: PushEmpty(object, bool, int)
0x48e: Stack[-3] = Stack[-7]
0x48f: Stack[-2] = (bool) 0
0x490: Stack[-1] = (int) -1
0x491: Call2 0x40f

0x492: Pop(3)
0x493: @@ size(Stack[-3])
0x494: Pop(0)
0x495: Stack[-2] = (int) 0
0x496: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x497: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x498: @@ get(Stack[-1], Stack[-2])
0x499: Pop(0)
0x49a: PushEmpty(bool)
0x49b: Stack[-1] = (bool) 1
0x49c: PushEmpty(bool, int)
0x49d: Stack[-1] = Stack[-4]
0x49e: Call2 0x45a

0x49f: Pop(1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a1: PushEmpty(bool, int)
0x4a2: Stack[-1] = Stack[-4]
0x4a3: Call2 0x450

0x4a4: Pop(1)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Stack[-1] = (bool) 0
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-9] = (bool) 0
0x4a9: Return(); Pop(8)

0x4aa: Push((int) 1)
0x4ab: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4ac: GOTO 0x496

0x4ad: Stack[-9] = (bool) 1
0x4ae: Return(); Pop(8)

0x4af: Stack[-4] = 0
0x4b0: PushEmpty(object, int, int, int, object, int, int, int)
0x4b1: @ CreateIntVector(Stack[-4])
0x4b2: Pop(0)
0x4b3: PushEmpty(object, bool, int)
0x4b4: Stack[-3] = Stack[-7]
0x4b5: Stack[-2] = (bool) 0
0x4b6: Stack[-1] = (int) -1
0x4b7: Call2 0x430

0x4b8: Pop(3)
0x4b9: @@ size(Stack[-3])
0x4ba: Pop(0)
0x4bb: Stack[-2] = (int) 0
0x4bc: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4be: @@ get(Stack[-1], Stack[-2])
0x4bf: Pop(0)
0x4c0: PushEmpty(bool)
0x4c1: Stack[-1] = (bool) 1
0x4c2: PushEmpty(bool, int)
0x4c3: Stack[-1] = Stack[-4]
0x4c4: Call2 0x45a

0x4c5: Pop(1)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: PushEmpty(bool, int)
0x4c8: Stack[-1] = Stack[-4]
0x4c9: Call2 0x450

0x4ca: Pop(1)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: Stack[-1] = (bool) 0
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-9] = (bool) 0
0x4cf: Return(); Pop(8)

0x4d0: Push((int) 1)
0x4d1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4d2: GOTO 0x4bc

0x4d3: Stack[-9] = (bool) 1
0x4d4: Return(); Pop(8)

0x4d5: Stack[-4] = 0
0x4d6: Stack[-1] = (bool) 0
0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 0
0x4d9: PushEmpty(bool)
0x4da: Call2 0x4b0

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4dd: PushEmpty(bool)
0x4de: Call2 0x48a

0x4df: Pop(0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: Stack[-1] = (bool) 1
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(bool)
0x4e4: Call2 0x464

0x4e5: Pop(0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 1
0x4e8: Return(); Pop(0)

