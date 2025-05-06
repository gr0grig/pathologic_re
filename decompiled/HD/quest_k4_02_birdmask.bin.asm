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
	player
	head
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	ook4BirdmaskTheater1
	k4q02BirdmaskGotoMaria
	quest_k4_02
	init_theater
	money 500 removed
	k4q02
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x1d0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcb Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1da Vars = (object)
		EVENT_7 Op = 0x20f Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2c0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3bc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ba

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3be

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x47e

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
0x41: Call2 0x305

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
0x4f: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x403

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x427

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xb5

0x62: Pop(1)
0x63: Push((int) 525749)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 525750)
0x69: Push((int) 27063)
0x6a: Push((int) 27062)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 540951)
0x6e: Push((int) 43036)
0x6f: Push((int) 43035)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x97

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xb5

0x76: Pop(1)
0x77: Push((int) 525753)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x40f

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x41b

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Stack[-1] = (bool) 1
0x89: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8a: Push((int) 525768)
0x8b: Push((int) 27081)
0x8c: Push((int) 27080)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: Push((int) 525754)
0x90: Push((int) -1)
0x91: Push((int) 27066)
0x92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(3)
0x94: GOTO 0x97

0x95: Return(); Pop(0)

0x96: GOTO 0x4e

0x97: PushEmpty(bool)
0x98: Call2 0x3c2

0x99: Pop(0)
0x9a: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9b: @ lshWaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xa5

0xa0: PushEmpty(string)
0xa1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa2: Call2 0x317

0xa3: Pop(1)
0xa4: GOTO 0x9b

0xa5: GOTO 0xb4

0xa6: Push("all")
0xa7: Push("idle")
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: @ WaitForAnimEnd()
0xab: Pop(0)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: GOTO 0xb4

0xaf: Push("all")
0xb0: Push("idle")
0xb1: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: GOTO 0xaa

0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: PushEmpty(bool)
0xb7: Call2 0x3c2

0xb8: Pop(0)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Return(); Pop(0)

0xbf: PushEmpty(string, bool)
0xc0: Stack[-2] = Stack[-3]
0xc1: Push("")
0xc2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: Stack[-1] = (bool) 0
0xc5: GOTO 0xc7

0xc6: Stack[-1] = (bool) 1
0xc7: Call2 0x327

0xc8: Pop(2)
0xc9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Push((int) 1)
0xcd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0xce: PushEmpty()
0xcf: Call2 0x341

0xd0: Pop(0)
0xd1: Push((int) 27064)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x3e2

0xd8: Pop(2)
0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x3fc

0xdd: Pop(2)
0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x3f2

0xe2: Pop(2)
0xe3: Push((int) 43039)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x3e2

0xea: Pop(2)
0xeb: Push((int) 27080)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x3dc

0xf2: Pop(2)
0xf3: Push((int) 27082)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3eb

0xfa: Pop(2)
0xfb: Push((int) 27061)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xfe: PushEmpty(bool)
0xff: Stack[-1] = (bool) 0
0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x403

0x103: Pop(1)
0x104: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x427

0x108: Pop(1)
0x109: Pop(1); Push((bool) Stack[-1] == 0)
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Stack[-1] = (bool) 1
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xb5

0x110: Pop(1)
0x111: Push((int) 525749)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 525750)
0x117: Push((int) 27063)
0x118: Push((int) 27062)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 540951)
0x11c: Push((int) 43036)
0x11d: Push((int) 43035)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xb5

0x124: Pop(1)
0x125: Push((int) 525753)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 0
0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x40f

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x41b

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: Push((int) 525768)
0x139: Push((int) 27081)
0x13a: Push((int) 27080)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 525754)
0x13e: Push((int) -1)
0x13f: Push((int) 27066)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 27081)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0xb5

0x149: Pop(1)
0x14a: Push((int) 525769)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 525770)
0x150: Push((int) -1)
0x151: Push((int) 27082)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 43036)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral"
0x15a: Call2 0xb5

0x15b: Pop(1)
0x15c: Push((int) 540952)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 540953)
0x162: Push((int) 27063)
0x163: Push((int) 43037)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 542080)
0x167: Push((int) 44374)
0x168: Push((int) 44373)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 44374)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral"
0x171: Call2 0xb5

0x172: Pop(1)
0x173: Push((int) 542081)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 542082)
0x179: Push((int) 44377)
0x17a: Push((int) 44375)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Push((int) 542083)
0x17e: Push((int) 44377)
0x17f: Push((int) 44376)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 44377)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0xb5

0x189: Pop(1)
0x18a: Push((int) 542084)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 542085)
0x190: Push((int) 27063)
0x191: Push((int) 44379)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 27063)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call2 0xb5

0x19b: Pop(1)
0x19c: Push((int) 525751)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 529230)
0x1a2: Push((int) 30685)
0x1a3: Push((int) 30684)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 30685)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral"
0x1ac: Call2 0xb5

0x1ad: Pop(1)
0x1ae: Push((int) 529231)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x433

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: Push((int) 525752)
0x1b9: Push((int) -1)
0x1ba: Push((int) 27064)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Push((int) 540954)
0x1be: Push((int) -1)
0x1bf: Push((int) 43039)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c4: PushEmpty(bool)
0x1c5: Call2 0x3c2

0x1c6: Pop(0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c8: @ lshStopAnimation()
0x1c9: Pop(0)
0x1ca: GOTO 0x1cd

0x1cb: @ StopAnimation()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: GOTO 0xcc

0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(float, float)
0x1d1: Stack[-2] = (int) 300
0x1d2: Stack[-1] = (int) 100
0x1d3: Call2 0x1e5

0x1d4: Pop(2)
0x1d5: Push((int) 3)
0x1d6: @ Sleep(Stack[-1])
0x1d7: Pop(1)
0x1d8: GOTO 0x1d0

0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: PushEmpty()
0x1dc: Call2 0x226

0x1dd: Pop(0)
0x1de: PushEmpty(int, object)
0x1df: Stack[-1] = Stack[-3]
0x1e0: Push(-2, 1); TaskCall(0)
0x1e1: Call2 0x0

0x1e2: Pop(-2, 1); TaskReturn
0x1e3: Pop(2)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x2bb

0x1e8: Pop(0)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Return(); Pop(0)

0x1ec: Push("player")
0x1ed: @ FindActor(Stack[-4], Stack[-1])
0x1ee: Pop(1)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f3: Push((int) 10)
0x1f4: Push((float)1.0)
0x1f5: @ SetTimer(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: PushEmpty()
0x1f8: Call2 0x234

0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: Push((int) 10)
0x1fd: @ KillTimer(Stack[-1])
0x1fe: Pop(1)
0x1ff: Return(); Pop(0)

0x200: PushEmpty(float, float)
0x201: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-3] = (bool) 0
0x204: Return(); Pop(2)

0x205: PushEmpty(float, object)
0x206: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x207: Call2 0x28a

0x208: Pop(1)
0x209: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20e: Return(); Pop(2)

0x20f: PushEmpty()
0x210: Push((int) 10)
0x211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x213: PushEmpty(bool)
0x214: Call2 0x200

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x217: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21b: Call2 0x336

0x21c: Pop(1)
0x21d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21e: GOTO 0x225

0x21f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x221: Push("head")
0x222: @ UnlookAsync(Stack[-1])
0x223: Pop(1)
0x224: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x225: Return(); Pop(0)

0x226: PushEmpty()
0x227: Call2 0x285

0x228: Pop(0)
0x229: Push((int) 10)
0x22a: @ KillTimer(Stack[-1])
0x22b: Pop(1)
0x22c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22e: Push("head")
0x22f: @ UnlookAsync(Stack[-1])
0x230: Pop(1)
0x231: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x233: Return(); Pop(0)

0x234: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x235: @ WaitForAnimEnd()
0x236: Pop(0)
0x237: PushEmpty(bool)
0x238: Call2 0x2bb

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Return(); Pop(14)

0x23d: PushEmpty(int)
0x23e: Call2 0x3cb

0x23f: Stack[-8] = Stack[-1]
0x240: Pop(1)
0x241: Stack[-6] = (int) 0
0x242: PushEmpty(bool)
0x243: Stack[-1] = (bool) 0
0x244: Push((int) 5)
0x245: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(bool)
0x248: Call2 0x2bb

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Stack[-1] = (bool) 1
0x24c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x24d: Push((int) 3)
0x24e: @ irand(Stack[-6], Stack[-1])
0x24f: Pop(1)
0x250: Push((int) 0)
0x251: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x253: Push(Stack[-7])
0x254: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x255: @ irand(Stack[-4], Stack[-7])
0x256: Pop(0)
0x257: Push("all")
0x258: PushEmpty(string, int)
0x259: Stack[-1] = Stack[-7]
0x25a: Call2 0x3c4

0x25b: Pop(1)
0x25c: @ PlayAnimation(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: @ WaitForAnimEnd(Stack[-3])
0x25f: Pop(0)
0x260: Pop(0); Push((bool) Stack[-3] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: GOTO 0x280

0x263: GOTO 0x275

0x264: Push((int) 1)
0x265: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x267: Push((int) 4)
0x268: @ rand(Stack[-3], Stack[-1])
0x269: Pop(1)
0x26a: Push((int) 1)
0x26b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26c: @ Sleep(Stack[-1], Stack[-2])
0x26d: Pop(1)
0x26e: Pop(0); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x280

0x271: GOTO 0x275

0x272: Push(Stack[-6])
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x280

0x275: PushEmpty(bool)
0x276: Call2 0x283

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x280

0x27b: @ ResetAAS()
0x27c: Pop(0)
0x27d: Push((int) 1)
0x27e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27f: GOTO 0x242

0x280: @ ResetAAS()
0x281: Pop(0)
0x282: Return(); Pop(14)

0x283: Stack[-1] = (bool) 1
0x284: Return(); Pop(0)

0x285: @ StopAnimation()
0x286: Pop(0)
0x287: @ StopGroup0()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28b: @ GetPosition(Stack[-3])
0x28c: Pop(0)
0x28d: @@ GetPosition(Stack[-2])
0x28e: Pop(0)
0x28f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x290: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x291: Return(); Pop(6)

0x292: PushEmpty(bool, bool)
0x293: Push("HasProperty")
0x294: Push((int) 2)
0x295: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: Stack[-5] = (bool) 0
0x299: Return(); Pop(2)

0x29a: @@ HasProperty(Stack[-3], Stack[-1])
0x29b: Pop(0)
0x29c: Stack[-5] = Stack[-1]
0x29d: Return(); Pop(2)

0x29e: PushEmpty(float, float)
0x29f: PushEmpty(bool, object, string)
0x2a0: Stack[-2] = Stack[-10]
0x2a1: Stack[-1] = Stack[-9]
0x2a2: Call2 0x292

0x2a3: Pop(2)
0x2a4: Pop(1); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-8] = (bool) 0
0x2a7: Return(); Pop(2)

0x2a8: @@ GetProperty(Stack[-6], Stack[-1])
0x2a9: Pop(0)
0x2aa: PushEmpty(float, float, float, float)
0x2ab: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2ac: Stack[-2] = Stack[-8]
0x2ad: Stack[-1] = Stack[-7]
0x2ae: Call2 0x352

0x2af: Pop(3)
0x2b0: @@ SetProperty(Stack[-7], Stack[-1])
0x2b1: Pop(1)
0x2b2: Stack[-8] = (bool) 1
0x2b3: Return(); Pop(2)

0x2b4: PushEmpty(int, int)
0x2b5: @@ GetProperty(Stack[-4], Stack[-1])
0x2b6: Pop(0)
0x2b7: Pop(0); Push(Stack[-1] + Stack[-3]);
0x2b8: @@ SetProperty(Stack[-5], Stack[-1])
0x2b9: Pop(1)
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty(bool, bool)
0x2bc: @ IsLoaded(Stack[-1])
0x2bd: Pop(0)
0x2be: Stack[-3] = Stack[-1]
0x2bf: Return(); Pop(2)

0x2c0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c1: @@ GetPosition(Stack[-8])
0x2c2: Pop(0)
0x2c3: @@ GetEyesHeight(Stack[-9])
0x2c4: Pop(0)
0x2c5: Push(CvectorIndex(Stack[-8], 1))
0x2c6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c8: @ GetPosition(Stack[-7])
0x2c9: Pop(0)
0x2ca: @ GetEyesHeight(Stack[-9])
0x2cb: Pop(0)
0x2cc: Push(CvectorIndex(Stack[-7], 1))
0x2cd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ce: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d0: Push(CvectorIndex(Stack[-6], 1))
0x2d1: Stack[-1] = (int) 0
0x2d2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d4: Pop(1); Push(Sqrt(Stack[-1]))
0x2d5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d6: Stack[-5] = -Stack[-6]; Pop(0);
0x2d7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d8: PushEmpty(cvector, cvector)
0x2d9: Push(CVector(0.0, 1.0, 0.0))
0x2da: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2db: Call2 0x348

0x2dc: Pop(1)
0x2dd: Push((int) 25)
0x2de: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e0: Push(CVector(0.0, 10.0, 0.0))
0x2e1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e3: @ IsOverrideActive(Stack[-2])
0x2e4: Pop(0)
0x2e5: Push(Stack[-2])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-21] = (bool) 0
0x2e8: Return(); Pop(18)

0x2e9: @ StopWorld()
0x2ea: Pop(0)
0x2eb: Push((bool) 1)
0x2ec: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2ed: Pop(1)
0x2ee: Push(CvectorIndex(Stack[-4], 0))
0x2ef: Push(CvectorIndex(Stack[-5], 2))
0x2f0: @ Rotate(Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: PushEmpty(bool)
0x2f3: Call2 0x3c2

0x2f4: Pop(0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2ff

0x2f7: Push("head")
0x2f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Push("head")
0x2fd: @ LookAsyncCamera(Stack[-1])
0x2fe: Pop(1)
0x2ff: @ CameraWaitForPlayFinish()
0x300: Pop(0)
0x301: @ ResumeWorld()
0x302: Pop(0)
0x303: Stack[-21] = (bool) 1
0x304: Return(); Pop(18)

0x305: PushEmpty(bool, bool)
0x306: Push((bool) 1)
0x307: @ CameraSwitchToNormal(Stack[-1])
0x308: Pop(1)
0x309: PushEmpty(bool)
0x30a: Call2 0x3c2

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x316

0x30e: Push("head")
0x30f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Push("head")
0x314: @ UnlookAsync(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(2)

0x317: PushEmpty(bool, float, float, bool, float, float)
0x318: @ lshHasAnimation(Stack[-3], Stack[-7])
0x319: Pop(0)
0x31a: Push(Stack[-3])
0x31b: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x31d: Pop(0)
0x31e: Push((bool) 0)
0x31f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x320: Pop(1)
0x321: GOTO 0x326

0x322: Push("Can't find lsh animation : ")
0x323: Pop(1); Push(Stack[-1] + Stack[-8]);
0x324: @ Trace(Stack[-1])
0x325: Pop(1)
0x326: Return(); Pop(6)

0x327: PushEmpty(bool, float, float, bool, float, float)
0x328: @ lshHasAnimation(Stack[-3], Stack[-8])
0x329: Pop(0)
0x32a: Push(Stack[-3])
0x32b: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x32d: Pop(0)
0x32e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x32f: Pop(0)
0x330: GOTO 0x335

0x331: Push("Can't find lsh animation : ")
0x332: Pop(1); Push(Stack[-1] + Stack[-9]);
0x333: @ Trace(Stack[-1])
0x334: Pop(1)
0x335: Return(); Pop(6)

0x336: PushEmpty(float, cvector, float, cvector)
0x337: @@ GetEyesHeight(Stack[-2])
0x338: Pop(0)
0x339: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x33a: Push(CvectorIndex(Stack[-1], 1))
0x33b: Stack[-1] = Stack[-3]
0x33c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x33d: Push("head")
0x33e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x33f: Pop(1)
0x340: Return(); Pop(4)

0x341: PushEmpty(bool)
0x342: Call2 0x3c2

0x343: Pop(0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: @ lshStopSpeech()
0x346: Pop(0)
0x347: Return(); Pop(0)

0x348: PushEmpty(float, float)
0x349: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x34b: Push((float)0.0)
0x34c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34f: Return(); Pop(2)

0x350: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x351: Return(); Pop(2)

0x352: PushEmpty()
0x353: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-4] = Stack[-2]
0x356: Return(); Pop(0)

0x357: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-4] = Stack[-1]
0x35a: Return(); Pop(0)

0x35b: Stack[-4] = Stack[-3]
0x35c: Return(); Pop(0)

0x35d: PushEmpty(int, int)
0x35e: @ GetVariable(Stack[-3], Stack[-1])
0x35f: Pop(0)
0x360: Stack[-4] = Stack[-1]
0x361: Return(); Pop(2)

0x362: PushEmpty(object, object)
0x363: @ CreateIntVector(Stack[-1])
0x364: Pop(0)
0x365: @@ add(Stack[-4])
0x366: Pop(0)
0x367: @@ add(Stack[-3])
0x368: Pop(0)
0x369: Push((int) 3)
0x36a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x36b: Pop(1)
0x36c: Return(); Pop(2)

0x36d: Stack[-1] = 0
0x36e: PushEmpty(int, int)
0x36f: PushEmpty(object, string, int)
0x370: Stack[-3] = Stack[-7]
0x371: Stack[-2] = "money"
0x372: Stack[-1] = Stack[-6]
0x373: Call2 0x2b4

0x374: Pop(3)
0x375: Push((int) 0)
0x376: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x378: Push("Money")
0x379: @ GetInvItemByName(Stack[-2], Stack[-1])
0x37a: Pop(1)
0x37b: PushEmpty(int, int)
0x37c: Stack[-2] = Stack[-3]
0x37d: Stack[-1] = Stack[-5]
0x37e: Call2 0x362

0x37f: Pop(2)
0x380: Return(); Pop(2)

0x381: PushEmpty()
0x382: Pop(0); Push((bool) Stack[-2] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-3] = (bool) 0
0x385: Return(); Pop(0)

0x386: Push((int) 0)
0x387: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x389: Push((int) 8)
0x38a: @ SendWorldWndMessage(Stack[-1])
0x38b: Pop(1)
0x38c: GOTO 0x396

0x38d: Push((int) 0)
0x38e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x390: Push((int) 9)
0x391: @ SendWorldWndMessage(Stack[-1])
0x392: Pop(1)
0x393: GOTO 0x396

0x394: Stack[-3] = (bool) 0
0x395: Return(); Pop(0)

0x396: PushEmpty(float)
0x397: Stack[-1] = Stack[-2]
0x398: Call2 0x3a4

0x399: Pop(1)
0x39a: PushEmpty(bool, object, string, float, float, float)
0x39b: Stack[-5] = Stack[-8]
0x39c: Stack[-4] = "reputation"
0x39d: Stack[-3] = Stack[-7]
0x39e: Stack[-2] = (int) 0
0x39f: Stack[-1] = (int) 1
0x3a0: Call2 0x29e

0x3a1: Pop(6)
0x3a2: Stack[-3] = (bool) 1
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(object, object)
0x3a5: @ CreateFloatVector(Stack[-1])
0x3a6: Pop(0)
0x3a7: @@ add(Stack[-3])
0x3a8: Pop(0)
0x3a9: Push((int) 16)
0x3aa: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3ab: Pop(1)
0x3ac: Return(); Pop(2)

0x3ad: Stack[-1] = 0
0x3ae: PushEmpty(object, object)
0x3af: @ FindActor(Stack[-1], Stack[-4])
0x3b0: Pop(0)
0x3b1: Pop(0); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-5] = (bool) 0
0x3b4: Return(); Pop(2)

0x3b5: @ Trigger(Stack[-1], Stack[-3])
0x3b6: Pop(0)
0x3b7: Stack[-5] = (bool) 1
0x3b8: Return(); Pop(2)

0x3b9: Stack[-1] = 0
0x3ba: Stack[-1] = (int) 515571
0x3bb: Return(); Pop(0)

0x3bc: Stack[-1] = (int) 504029
0x3bd: Return(); Pop(0)

0x3be: Stack[-1] = "ui/NPC_bmask.png"
0x3bf: Return(); Pop(0)

0x3c0: Stack[-1] = "ui/NPC_bmask_b.png"
0x3c1: Return(); Pop(0)

0x3c2: Stack[-1] = (bool) 0
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(string, string)
0x3c5: Stack[-1] = "idle"
0x3c6: Push(Stack[-3])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3c9: Stack[-4] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(int, bool, int, bool)
0x3cc: Stack[-2] = (int) 0
0x3cd: Push("all")
0x3ce: PushEmpty(string, int)
0x3cf: Stack[-1] = Stack[-5]
0x3d0: Call2 0x3c4

0x3d1: Pop(1)
0x3d2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: Pop(0); Push((bool) Stack[-1] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d6: GOTO 0x3da

0x3d7: Push((int) 1)
0x3d8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d9: GOTO 0x3cd

0x3da: Stack[-5] = Stack[-2]
0x3db: Return(); Pop(4)

0x3dc: PushEmpty()
0x3dd: Push("ook4BirdmaskTheater1")
0x3de: Push((int) 1)
0x3df: @ SetVariable(Stack[-2], Stack[-1])
0x3e0: Pop(2)
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty()
0x3e3: Push("k4q02BirdmaskGotoMaria")
0x3e4: Push((int) 1)
0x3e5: @ SetVariable(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: PushEmpty()
0x3e8: Call2 0x448

0x3e9: Pop(0)
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty(bool, string, string)
0x3ed: Stack[-2] = "quest_k4_02"
0x3ee: Stack[-1] = "init_theater"
0x3ef: Call2 0x3ae

0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: PushEmpty()
0x3f3: Push("money 500 removed")
0x3f4: @ Trace(Stack[-1])
0x3f5: Pop(1)
0x3f6: PushEmpty(object, int)
0x3f7: Stack[-2] = Stack[-4]
0x3f8: Stack[-1] = (int) -500
0x3f9: Call2 0x36e

0x3fa: Pop(2)
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty()
0x3fd: PushEmpty(bool, object, float)
0x3fe: Stack[-2] = Stack[-5]
0x3ff: Stack[-1] = (float) 0.1
0x400: Call2 0x381

0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(int, string)
0x405: Stack[-1] = "k4q02"
0x406: Call2 0x35d

0x407: Pop(1)
0x408: Push((int) 1)
0x409: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-2] = (bool) 1
0x40c: Return(); Pop(0)

0x40d: Stack[-2] = (bool) 0
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: PushEmpty(int, string)
0x411: Stack[-1] = "k4q02"
0x412: Call2 0x35d

0x413: Pop(1)
0x414: Push((int) 2)
0x415: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-2] = (bool) 1
0x418: Return(); Pop(0)

0x419: Stack[-2] = (bool) 0
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: PushEmpty(int, string)
0x41d: Stack[-1] = "ook4BirdmaskTheater1"
0x41e: Call2 0x35d

0x41f: Pop(1)
0x420: Push((int) 0)
0x421: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-2] = (bool) 1
0x424: Return(); Pop(0)

0x425: Stack[-2] = (bool) 0
0x426: Return(); Pop(0)

0x427: PushEmpty()
0x428: PushEmpty(int, string)
0x429: Stack[-1] = "k4q02BirdmaskGotoMaria"
0x42a: Call2 0x35d

0x42b: Pop(1)
0x42c: Push((int) 0)
0x42d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-2] = (bool) 1
0x430: Return(); Pop(0)

0x431: Stack[-2] = (bool) 0
0x432: Return(); Pop(0)

0x433: PushEmpty()
0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[-3]
0x436: Call2 0x43d

0x437: Pop(1)
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: Stack[-2] = (bool) 1
0x43a: Return(); Pop(0)

0x43b: Stack[-2] = (bool) 0
0x43c: Return(); Pop(0)

0x43d: PushEmpty(float, float)
0x43e: Push("money")
0x43f: @@ GetProperty(Stack[-1], Stack[-2])
0x440: Pop(1)
0x441: Push((int) 500)
0x442: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-4] = (bool) 1
0x445: Return(); Pop(2)

0x446: Stack[-4] = (bool) 0
0x447: Return(); Pop(2)

0x448: PushEmpty(object, object)
0x449: Push((int) 380)
0x44a: Push((int) 2)
0x44b: Push((int) 525786)
0x44c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: PushEmpty(bool, object, int)
0x44f: Stack[-2] = Stack[-4]
0x450: Stack[-1] = (int) 378
0x451: Call2 0x462

0x452: Pop(3)
0x453: Return(); Pop(2)

0x454: Stack[-1] = 0
0x455: PushEmpty(object, object)
0x456: @ GetDiaryRoot(Stack[-1])
0x457: Pop(0)
0x458: Pop(0); Push((bool) Stack[-1] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45a: Push("Can't retrieve diary root")
0x45b: @ Trace(Stack[-1])
0x45c: Pop(1)
0x45d: Stack[-3] = (bool) 0
0x45e: Return(); Pop(2)

0x45f: Stack[-3] = Stack[-1]
0x460: Return(); Pop(2)

0x461: Stack[-1] = 0
0x462: PushEmpty(object, object, int, object, object, int)
0x463: PushEmpty(object)
0x464: Call2 0x455

0x465: Stack[-4] = Stack[-1]
0x466: Pop(1)
0x467: @@ Find(Stack[-7], Stack[-2])
0x468: Pop(0)
0x469: Pop(0); Push((bool) Stack[-2] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46b: Push("Can't find diary parent with id: ")
0x46c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x46d: @ Trace(Stack[-1])
0x46e: Pop(1)
0x46f: Stack[-9] = (bool) 0
0x470: Return(); Pop(6)

0x471: @@ AddChild(Stack[-8])
0x472: Pop(0)
0x473: Push((int) 7)
0x474: @ SendWorldWndMessage(Stack[-1])
0x475: Pop(1)
0x476: @@ GetCategory(Stack[-1])
0x477: Pop(0)
0x478: @ SetDiarySection(Stack[-1])
0x479: Pop(0)
0x47a: Stack[-9] = (bool) 0
0x47b: Return(); Pop(6)

0x47c: Stack[-2] = 0
0x47d: Stack[-3] = 0
0x47e: PushEmpty(int, int)
0x47f: Push("branch")
0x480: @ GetVariable(Stack[-1], Stack[-2])
0x481: Pop(1)
0x482: Push((int) 0)
0x483: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x485: Stack[-3] = (int) 1
0x486: Return(); Pop(2)

0x487: GOTO 0x48d

0x488: Push((int) 1)
0x489: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-3] = (int) 2
0x48c: Return(); Pop(2)

0x48d: Stack[-3] = (int) 3
0x48e: Return(); Pop(2)

