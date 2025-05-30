GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Questioning
	Grin
	Suspicion
	Doubt
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Han.png
	ui/NPC_Han_b.png
	b11q02
	quest_b11_02
	fail
	oob12Han1
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
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x4ce
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x195 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x34c Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4a4 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x51a Vars = (int)
		EVENT_6 Op = 0x540 Vars = ()
		EVENT_5 Op = 0x54f Vars = ()
		EVENT_45 Op = 0x55c Vars = (bool)
		EVENT_0 Op = 0x568 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5f1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x751

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x74f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x753

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x755

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7cd

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x707

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x648

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x636

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 518009)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518010)
0x61: Push((int) 32920)
0x62: Push((int) 19143)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 531560)
0x66: Push((int) -1)
0x67: Push((int) 32919)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x757

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x6d2

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x757

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x6e2

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x700

0xa6: Pop(0)
0xa7: Push((int) 19142)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518009)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518010)
0xb4: Push((int) 32920)
0xb5: Push((int) 19143)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 531560)
0xb9: Push((int) -1)
0xba: Push((int) 32919)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 32920)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 531561)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 531562)
0xcb: Push((int) -1)
0xcc: Push((int) 32921)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 531563)
0xd0: Push((int) -1)
0xd1: Push((int) 32922)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x757

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x5f1

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x751

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x74f

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x753

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x755

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x7cd

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[-11]
0x113: Stack[-1] = Stack[-6]
0x114: Push(-2, 4); TaskCall(3)
0x115: Call2 0x12c

0x116: Pop(-2, 4); TaskReturn
0x117: Pop(2)
0x118: @@ IsDialogEnd(Stack[-1])
0x119: Pop(0)
0x11a: Pop(0); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: @ sync()
0x11d: Pop(0)
0x11e: @@ IsDialogEnd(Stack[-1])
0x11f: Pop(0)
0x120: GOTO 0x11a

0x121: PushEmpty(object)
0x122: Stack[-1] = Stack[-10]
0x123: Call2 0x636

0x124: Pop(1)
0x125: @ StopDialog(Stack[-4])
0x126: Pop(0)
0x127: @@ GetReturnValue(Stack[-2])
0x128: Pop(0)
0x129: Stack[-10] = Stack[-2]
0x12a: Return(); Pop(8)

0x12b: Stack[-4] = 0
0x12c: PushEmpty()
0x12d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x130: Push((int) 1)
0x131: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x772

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Questioning"
0x139: Call2 0x17f

0x13a: Pop(1)
0x13b: Push((int) 531123)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 531124)
0x141: Push((int) 32443)
0x142: Push((int) 32442)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Push((int) 531403)
0x146: Push((int) 32745)
0x147: Push((int) 32744)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: GOTO 0x161

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0x17f

0x14e: Pop(1)
0x14f: Push((int) 531127)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 531128)
0x155: Push((int) -1)
0x156: Push((int) 32446)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 531398)
0x15a: Push((int) -1)
0x15b: Push((int) 32739)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: GOTO 0x161

0x15f: Return(); Pop(0)

0x160: GOTO 0x130

0x161: PushEmpty(bool)
0x162: Call2 0x757

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x165: @ lshWaitForAnimEnd()
0x166: Pop(0)
0x167: Push( Stack[3 + Tasks[-1].StackPointer] )
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: GOTO 0x16f

0x16a: PushEmpty(string)
0x16b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x16c: Call2 0x6d2

0x16d: Pop(1)
0x16e: GOTO 0x165

0x16f: GOTO 0x17e

0x170: Push("all")
0x171: Push("idle")
0x172: @ PlayAnimation(Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: @ WaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: Push("all")
0x17a: Push("idle")
0x17b: @ PlayAnimation(Stack[-2], Stack[-1])
0x17c: Pop(2)
0x17d: GOTO 0x174

0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: PushEmpty(bool)
0x181: Call2 0x757

0x182: Pop(0)
0x183: Pop(1); Push((bool) Stack[-1] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: Return(); Pop(0)

0x186: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Return(); Pop(0)

0x189: PushEmpty(string, bool)
0x18a: Stack[-2] = Stack[-3]
0x18b: Push("")
0x18c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: Stack[-1] = (bool) 0
0x18f: GOTO 0x191

0x190: Stack[-1] = (bool) 1
0x191: Call2 0x6e2

0x192: Pop(2)
0x193: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: Push((int) 1)
0x197: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x198: PushEmpty()
0x199: Call2 0x700

0x19a: Pop(0)
0x19b: Push((int) 32444)
0x19c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(object, object)
0x19f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call2 0x759

0x1a2: Pop(2)
0x1a3: Push((int) 32756)
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(object, object)
0x1a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a9: Call2 0x759

0x1aa: Pop(2)
0x1ab: Push((int) 32750)
0x1ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: PushEmpty(object, object)
0x1af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b1: Call2 0x762

0x1b2: Pop(2)
0x1b3: Push((int) 32441)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Call2 0x772

0x1b9: Pop(1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Questioning"
0x1bd: Call2 0x17f

0x1be: Pop(1)
0x1bf: Push((int) 531123)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 531124)
0x1c5: Push((int) 32443)
0x1c6: Push((int) 32442)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 531403)
0x1ca: Push((int) 32745)
0x1cb: Push((int) 32744)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0x17f

0x1d2: Pop(1)
0x1d3: Push((int) 531127)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: Push((int) 531128)
0x1d9: Push((int) -1)
0x1da: Push((int) 32446)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Push((int) 531398)
0x1de: Push((int) -1)
0x1df: Push((int) 32739)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 32745)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Grin"
0x1e8: Call2 0x17f

0x1e9: Pop(1)
0x1ea: Push((int) 531404)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 531405)
0x1f0: Push((int) 32749)
0x1f1: Push((int) 32746)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Push((int) 531406)
0x1f5: Push((int) 32443)
0x1f6: Push((int) 32747)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 32443)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Suspicion"
0x1ff: Call2 0x17f

0x200: Pop(1)
0x201: Push((int) 531125)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 531399)
0x207: Push((int) 32741)
0x208: Push((int) 32740)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 32741)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Suspicion"
0x211: Call2 0x17f

0x212: Pop(1)
0x213: Push((int) 531400)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 531401)
0x219: Push((int) 32757)
0x21a: Push((int) 32742)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 531407)
0x21e: Push((int) 32749)
0x21f: Push((int) 32748)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 32749)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Questioning"
0x228: Call2 0x17f

0x229: Pop(1)
0x22a: Push((int) 531408)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 531409)
0x230: Push((int) -1)
0x231: Push((int) 32750)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 32757)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Doubt"
0x23a: Call2 0x17f

0x23b: Pop(1)
0x23c: Push((int) 531415)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 531417)
0x242: Push((int) 32760)
0x243: Push((int) 32759)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 531416)
0x247: Push((int) 32743)
0x248: Push((int) 32758)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 32743)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Grin"
0x251: Call2 0x17f

0x252: Pop(1)
0x253: Push((int) 531402)
0x254: @@ SetMessage(Stack[-1])
0x255: Pop(1)
0x256: @@ ClearReplies()
0x257: Pop(0)
0x258: Push((int) 531126)
0x259: Push((int) -1)
0x25a: Push((int) 32444)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Push((int) 531410)
0x25e: Push((int) 32753)
0x25f: Push((int) 32752)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 32753)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral"
0x268: Call2 0x17f

0x269: Pop(1)
0x26a: Push((int) 531411)
0x26b: @@ SetMessage(Stack[-1])
0x26c: Pop(1)
0x26d: @@ ClearReplies()
0x26e: Pop(0)
0x26f: Push((int) 531412)
0x270: Push((int) 32755)
0x271: Push((int) 32754)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 32755)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Grin"
0x27a: Call2 0x17f

0x27b: Pop(1)
0x27c: Push((int) 531413)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 531414)
0x282: Push((int) -1)
0x283: Push((int) 32756)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Return(); Pop(0)

0x287: Push((int) 32760)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Doubt"
0x28c: Call2 0x17f

0x28d: Pop(1)
0x28e: Push((int) 531418)
0x28f: @@ SetMessage(Stack[-1])
0x290: Pop(1)
0x291: @@ ClearReplies()
0x292: Pop(0)
0x293: Push((int) 531419)
0x294: Push((int) 32743)
0x295: Push((int) 32761)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29a: PushEmpty(bool)
0x29b: Call2 0x757

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29e: @ lshStopAnimation()
0x29f: Pop(0)
0x2a0: GOTO 0x2a3

0x2a1: @ StopAnimation()
0x2a2: Pop(0)
0x2a3: Return(); Pop(0)

0x2a4: GOTO 0x196

0x2a5: Return(); Pop(0)

0x2a6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a8: PushEmpty(bool, object, float)
0x2a9: Stack[-2] = Stack[-12]
0x2aa: Stack[-1] = (float) 70.0
0x2ab: Call2 0x5f1

0x2ac: Pop(2)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-10] = (int) -2
0x2b0: Return(); Pop(8)

0x2b1: @ CreateDialog(Stack[-4])
0x2b2: Pop(0)
0x2b3: PushEmpty(int)
0x2b4: Call2 0x751

0x2b5: Pop(0)
0x2b6: @@ SetNPCName(Stack[-1])
0x2b7: Pop(1)
0x2b8: PushEmpty(int)
0x2b9: Call2 0x74f

0x2ba: Pop(0)
0x2bb: @@ SetNPCDescription(Stack[-1])
0x2bc: Pop(1)
0x2bd: PushEmpty(string)
0x2be: Call2 0x753

0x2bf: Pop(0)
0x2c0: @@ SetPhoto(Stack[-1])
0x2c1: Pop(1)
0x2c2: PushEmpty(string)
0x2c3: Call2 0x755

0x2c4: Pop(0)
0x2c5: @@ SetPhoto2(Stack[-1])
0x2c6: Pop(1)
0x2c7: PushEmpty(int)
0x2c8: Call2 0x7cd

0x2c9: Pop(0)
0x2ca: @@ SetPlayerName(Stack[-1])
0x2cb: Pop(1)
0x2cc: Stack[-2] = (int) -1
0x2cd: @ IsOverrideActive(Stack[-3])
0x2ce: Pop(0)
0x2cf: Push(Stack[-3])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-10] = (int) -2
0x2d2: Return(); Pop(8)

0x2d3: @ DoDialog(Stack[-4])
0x2d4: Pop(0)
0x2d5: PushEmpty(bool, object)
0x2d6: PushEmpty(object)
0x2d7: Call2 0x707

0x2d8: Stack[-2] = Stack[-1]
0x2d9: Pop(1)
0x2da: Call2 0x648

0x2db: Pop(2)
0x2dc: PushEmpty(object, object)
0x2dd: Stack[-2] = Stack[-11]
0x2de: Stack[-1] = Stack[-6]
0x2df: Push(-2, 4); TaskCall(5)
0x2e0: Call2 0x2f7

0x2e1: Pop(-2, 4); TaskReturn
0x2e2: Pop(2)
0x2e3: @@ IsDialogEnd(Stack[-1])
0x2e4: Pop(0)
0x2e5: Pop(0); Push((bool) Stack[-1] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: @ sync()
0x2e8: Pop(0)
0x2e9: @@ IsDialogEnd(Stack[-1])
0x2ea: Pop(0)
0x2eb: GOTO 0x2e5

0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[-10]
0x2ee: Call2 0x636

0x2ef: Pop(1)
0x2f0: @ StopDialog(Stack[-4])
0x2f1: Pop(0)
0x2f2: @@ GetReturnValue(Stack[-2])
0x2f3: Pop(0)
0x2f4: Stack[-10] = Stack[-2]
0x2f5: Return(); Pop(8)

0x2f6: Stack[-4] = 0
0x2f7: PushEmpty()
0x2f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2fb: Push((int) 1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Doubt"
0x2ff: Call2 0x336

0x300: Pop(1)
0x301: Push((int) 535268)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0x77e

0x309: Pop(1)
0x30a: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30b: Push((int) 535269)
0x30c: Push((int) 37004)
0x30d: Push((int) 36944)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Push((int) 535322)
0x311: Push((int) -1)
0x312: Push((int) 37003)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: GOTO 0x318

0x316: Return(); Pop(0)

0x317: GOTO 0x2fb

0x318: PushEmpty(bool)
0x319: Call2 0x757

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31c: @ lshWaitForAnimEnd()
0x31d: Pop(0)
0x31e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x326

0x321: PushEmpty(string)
0x322: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x323: Call2 0x6d2

0x324: Pop(1)
0x325: GOTO 0x31c

0x326: GOTO 0x335

0x327: Push("all")
0x328: Push("idle")
0x329: @ PlayAnimation(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: @ WaitForAnimEnd()
0x32c: Pop(0)
0x32d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x335

0x330: Push("all")
0x331: Push("idle")
0x332: @ PlayAnimation(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: GOTO 0x32b

0x335: Return(); Pop(0)

0x336: PushEmpty()
0x337: PushEmpty(bool)
0x338: Call2 0x757

0x339: Pop(0)
0x33a: Pop(1); Push((bool) Stack[-1] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Return(); Pop(0)

0x33d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Return(); Pop(0)

0x340: PushEmpty(string, bool)
0x341: Stack[-2] = Stack[-3]
0x342: Push("")
0x343: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-1] = (bool) 0
0x346: GOTO 0x348

0x347: Stack[-1] = (bool) 1
0x348: Call2 0x6e2

0x349: Pop(2)
0x34a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x34b: Return(); Pop(0)

0x34c: PushEmpty()
0x34d: Push((int) 1)
0x34e: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x34f: PushEmpty()
0x350: Call2 0x700

0x351: Pop(0)
0x352: Push((int) 36944)
0x353: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x355: PushEmpty(object, object)
0x356: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x357: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x358: Call2 0x76c

0x359: Pop(2)
0x35a: Push((int) 36943)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Doubt"
0x35f: Call2 0x336

0x360: Pop(1)
0x361: Push((int) 535268)
0x362: @@ SetMessage(Stack[-1])
0x363: Pop(1)
0x364: @@ ClearReplies()
0x365: Pop(0)
0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0x77e

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36b: Push((int) 535269)
0x36c: Push((int) 37004)
0x36d: Push((int) 36944)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Push((int) 535322)
0x371: Push((int) -1)
0x372: Push((int) 37003)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: Push((int) 37004)
0x377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "Doubt"
0x37b: Call2 0x336

0x37c: Pop(1)
0x37d: Push((int) 535323)
0x37e: @@ SetMessage(Stack[-1])
0x37f: Pop(1)
0x380: @@ ClearReplies()
0x381: Pop(0)
0x382: Push((int) 535325)
0x383: Push((int) 37007)
0x384: Push((int) 37006)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Push((int) 535324)
0x388: Push((int) 37008)
0x389: Push((int) 37005)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: Return(); Pop(0)

0x38d: Push((int) 37008)
0x38e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x390: PushEmpty(string)
0x391: Stack[-1] = "Grin"
0x392: Call2 0x336

0x393: Pop(1)
0x394: Push((int) 535327)
0x395: @@ SetMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ ClearReplies()
0x398: Pop(0)
0x399: Push((int) 535328)
0x39a: Push((int) 37015)
0x39b: Push((int) 37009)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Push((int) 535329)
0x39f: Push((int) 37011)
0x3a0: Push((int) 37010)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Return(); Pop(0)

0x3a4: Push((int) 37011)
0x3a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a7: PushEmpty(string)
0x3a8: Stack[-1] = "Grin"
0x3a9: Call2 0x336

0x3aa: Pop(1)
0x3ab: Push((int) 535330)
0x3ac: @@ SetMessage(Stack[-1])
0x3ad: Pop(1)
0x3ae: @@ ClearReplies()
0x3af: Pop(0)
0x3b0: Push((int) 535331)
0x3b1: Push((int) 37007)
0x3b2: Push((int) 37012)
0x3b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 37015)
0x3b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Grin"
0x3bb: Call2 0x336

0x3bc: Pop(1)
0x3bd: Push((int) 535334)
0x3be: @@ SetMessage(Stack[-1])
0x3bf: Pop(1)
0x3c0: @@ ClearReplies()
0x3c1: Pop(0)
0x3c2: Push((int) 535336)
0x3c3: Push((int) -1)
0x3c4: Push((int) 37017)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Push((int) 535335)
0x3c8: Push((int) -1)
0x3c9: Push((int) 37016)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 37007)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Questioning"
0x3d2: Call2 0x336

0x3d3: Pop(1)
0x3d4: Push((int) 535326)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 535332)
0x3da: Push((int) 37014)
0x3db: Push((int) 37013)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Return(); Pop(0)

0x3df: Push((int) 37014)
0x3e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3e2: PushEmpty(string)
0x3e3: Stack[-1] = "Questioning"
0x3e4: Call2 0x336

0x3e5: Pop(1)
0x3e6: Push((int) 535333)
0x3e7: @@ SetMessage(Stack[-1])
0x3e8: Pop(1)
0x3e9: @@ ClearReplies()
0x3ea: Pop(0)
0x3eb: Push((int) 535337)
0x3ec: Push((int) -1)
0x3ed: Push((int) 37019)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: Push((int) 535338)
0x3f1: Push((int) -1)
0x3f2: Push((int) 37020)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Return(); Pop(0)

0x3f6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3f7: PushEmpty(bool)
0x3f8: Call2 0x757

0x3f9: Pop(0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fb: @ lshStopAnimation()
0x3fc: Pop(0)
0x3fd: GOTO 0x400

0x3fe: @ StopAnimation()
0x3ff: Pop(0)
0x400: Return(); Pop(0)

0x401: GOTO 0x34d

0x402: Return(); Pop(0)

0x403: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x404: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x405: PushEmpty(bool, object, float)
0x406: Stack[-2] = Stack[-12]
0x407: Stack[-1] = (float) 70.0
0x408: Call2 0x5f1

0x409: Pop(2)
0x40a: Pop(1); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-10] = (int) -2
0x40d: Return(); Pop(8)

0x40e: @ CreateDialog(Stack[-4])
0x40f: Pop(0)
0x410: PushEmpty(int)
0x411: Call2 0x751

0x412: Pop(0)
0x413: @@ SetNPCName(Stack[-1])
0x414: Pop(1)
0x415: PushEmpty(int)
0x416: Call2 0x74f

0x417: Pop(0)
0x418: @@ SetNPCDescription(Stack[-1])
0x419: Pop(1)
0x41a: PushEmpty(string)
0x41b: Call2 0x753

0x41c: Pop(0)
0x41d: @@ SetPhoto(Stack[-1])
0x41e: Pop(1)
0x41f: PushEmpty(string)
0x420: Call2 0x755

0x421: Pop(0)
0x422: @@ SetPhoto2(Stack[-1])
0x423: Pop(1)
0x424: PushEmpty(int)
0x425: Call2 0x7cd

0x426: Pop(0)
0x427: @@ SetPlayerName(Stack[-1])
0x428: Pop(1)
0x429: Stack[-2] = (int) -1
0x42a: @ IsOverrideActive(Stack[-3])
0x42b: Pop(0)
0x42c: Push(Stack[-3])
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-10] = (int) -2
0x42f: Return(); Pop(8)

0x430: @ DoDialog(Stack[-4])
0x431: Pop(0)
0x432: PushEmpty(bool, object)
0x433: PushEmpty(object)
0x434: Call2 0x707

0x435: Stack[-2] = Stack[-1]
0x436: Pop(1)
0x437: Call2 0x648

0x438: Pop(2)
0x439: PushEmpty(object, object)
0x43a: Stack[-2] = Stack[-11]
0x43b: Stack[-1] = Stack[-6]
0x43c: Push(-2, 4); TaskCall(7)
0x43d: Call2 0x454

0x43e: Pop(-2, 4); TaskReturn
0x43f: Pop(2)
0x440: @@ IsDialogEnd(Stack[-1])
0x441: Pop(0)
0x442: Pop(0); Push((bool) Stack[-1] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x444: @ sync()
0x445: Pop(0)
0x446: @@ IsDialogEnd(Stack[-1])
0x447: Pop(0)
0x448: GOTO 0x442

0x449: PushEmpty(object)
0x44a: Stack[-1] = Stack[-10]
0x44b: Call2 0x636

0x44c: Pop(1)
0x44d: @ StopDialog(Stack[-4])
0x44e: Pop(0)
0x44f: @@ GetReturnValue(Stack[-2])
0x450: Pop(0)
0x451: Stack[-10] = Stack[-2]
0x452: Return(); Pop(8)

0x453: Stack[-4] = 0
0x454: PushEmpty()
0x455: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x456: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x457: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x458: Push((int) 1)
0x459: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x45a: PushEmpty(string)
0x45b: Stack[-1] = "Neutral"
0x45c: Call2 0x48e

0x45d: Pop(1)
0x45e: Push((int) 540554)
0x45f: @@ SetMessage(Stack[-1])
0x460: Pop(1)
0x461: @@ ClearReplies()
0x462: Pop(0)
0x463: Push((int) 540555)
0x464: Push((int) -1)
0x465: Push((int) 42564)
0x466: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x467: Pop(3)
0x468: Push((int) 540794)
0x469: Push((int) -1)
0x46a: Push((int) 42843)
0x46b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46c: Pop(3)
0x46d: GOTO 0x470

0x46e: Return(); Pop(0)

0x46f: GOTO 0x458

0x470: PushEmpty(bool)
0x471: Call2 0x757

0x472: Pop(0)
0x473: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x474: @ lshWaitForAnimEnd()
0x475: Pop(0)
0x476: Push( Stack[3 + Tasks[-1].StackPointer] )
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: GOTO 0x47e

0x479: PushEmpty(string)
0x47a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x47b: Call2 0x6d2

0x47c: Pop(1)
0x47d: GOTO 0x474

0x47e: GOTO 0x48d

0x47f: Push("all")
0x480: Push("idle")
0x481: @ PlayAnimation(Stack[-2], Stack[-1])
0x482: Pop(2)
0x483: @ WaitForAnimEnd()
0x484: Pop(0)
0x485: Push( Stack[3 + Tasks[-1].StackPointer] )
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: GOTO 0x48d

0x488: Push("all")
0x489: Push("idle")
0x48a: @ PlayAnimation(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: GOTO 0x483

0x48d: Return(); Pop(0)

0x48e: PushEmpty()
0x48f: PushEmpty(bool)
0x490: Call2 0x757

0x491: Pop(0)
0x492: Pop(1); Push((bool) Stack[-1] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Return(); Pop(0)

0x495: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x496: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x497: Return(); Pop(0)

0x498: PushEmpty(string, bool)
0x499: Stack[-2] = Stack[-3]
0x49a: Push("")
0x49b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-1] = (bool) 0
0x49e: GOTO 0x4a0

0x49f: Stack[-1] = (bool) 1
0x4a0: Call2 0x6e2

0x4a1: Pop(2)
0x4a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty()
0x4a5: Push((int) 1)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4a7: PushEmpty()
0x4a8: Call2 0x700

0x4a9: Pop(0)
0x4aa: Push((int) 42563)
0x4ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4ad: PushEmpty(string)
0x4ae: Stack[-1] = "Neutral"
0x4af: Call2 0x48e

0x4b0: Pop(1)
0x4b1: Push((int) 540554)
0x4b2: @@ SetMessage(Stack[-1])
0x4b3: Pop(1)
0x4b4: @@ ClearReplies()
0x4b5: Pop(0)
0x4b6: Push((int) 540555)
0x4b7: Push((int) -1)
0x4b8: Push((int) 42564)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Push((int) 540794)
0x4bc: Push((int) -1)
0x4bd: Push((int) 42843)
0x4be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(3)
0x4c0: Return(); Pop(0)

0x4c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4c2: PushEmpty(bool)
0x4c3: Call2 0x757

0x4c4: Pop(0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c6: @ lshStopAnimation()
0x4c7: Pop(0)
0x4c8: GOTO 0x4cb

0x4c9: @ StopAnimation()
0x4ca: Pop(0)
0x4cb: Return(); Pop(0)

0x4cc: GOTO 0x4a5

0x4cd: Return(); Pop(0)

0x4ce: Push(GlobalVars[1])
0x4cf: Stack[-1] = (bool) 0
0x4d0: GlobalVars[1] = Stack[-1]; Pop(1)
0x4d1: PushEmpty()
0x4d2: Call2 0x4d5

0x4d3: Pop(0)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty(bool)
0x4d6: Call2 0x5ec

0x4d7: Pop(0)
0x4d8: Pop(1); Push((bool) Stack[-1] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4da: @ Hold()
0x4db: Pop(0)
0x4dc: @ GetDirection(Stack[-0])
0x4dd: Pop(0)
0x4de: PushEmpty()
0x4df: Call2 0x585

0x4e0: Pop(0)
0x4e1: GOTO 0x4de

0x4e2: Return(); Pop(0)

0x4e3: PushEmpty(object, object)
0x4e4: Push("player")
0x4e5: @ FindActor(Stack[-2], Stack[-1])
0x4e6: Pop(1)
0x4e7: Pop(0); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-3] = (bool) 0
0x4ea: Return(); Pop(2)

0x4eb: PushEmpty(bool, object)
0x4ec: Stack[-1] = Stack[-3]
0x4ed: Call2 0x5e3

0x4ee: Stack[-5] = Stack[-2]
0x4ef: Pop(2)
0x4f0: Return(); Pop(2)

0x4f1: Stack[-1] = 0
0x4f2: Push(CvectorIndex(Stack[-0], 0))
0x4f3: Push(CvectorIndex(Stack[-0], 2))
0x4f4: @ RotateAsync(Stack[-2], Stack[-1])
0x4f5: Pop(2)
0x4f6: Return(); Pop(0)

0x4f7: PushEmpty(object, bool, object, bool)
0x4f8: Push("player")
0x4f9: @ FindActor(Stack[-3], Stack[-1])
0x4fa: Pop(1)
0x4fb: Pop(0); Push((bool) Stack[-2] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-5] = (bool) 0
0x4fe: Return(); Pop(4)

0x4ff: PushEmpty(float, object)
0x500: Stack[-1] = Stack[-4]
0x501: Call2 0x5d1

0x502: Pop(1)
0x503: Push((float)90000.0)
0x504: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-5] = (bool) 0
0x507: Return(); Pop(4)

0x508: @ CanSee(Stack[-1], Stack[-2])
0x509: Pop(0)
0x50a: Stack[-5] = Stack[-1]
0x50b: Return(); Pop(4)

0x50c: Stack[-2] = 0
0x50d: PushEmpty(float, float)
0x50e: Push((int) 8)
0x50f: Push((int) 16)
0x510: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x511: Pop(2)
0x512: Push((int) 10)
0x513: @ SetTimer(Stack[-1], Stack[-2])
0x514: Pop(1)
0x515: Return(); Pop(2)

0x516: Push((int) 10)
0x517: @ KillTimer(Stack[-1])
0x518: Pop(1)
0x519: Return(); Pop(0)

0x51a: PushEmpty()
0x51b: Push((int) 10)
0x51c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x51e: PushEmpty()
0x51f: Call2 0x516

0x520: Pop(0)
0x521: PushEmpty(bool)
0x522: Stack[-1] = (bool) 0
0x523: PushEmpty(bool)
0x524: Call2 0x5ec

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x527: PushEmpty(bool)
0x528: Call2 0x4f7

0x529: Pop(0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Stack[-1] = (bool) 1
0x52c: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x52d: PushEmpty(bool)
0x52e: Call2 0x4e3

0x52f: Pop(0)
0x530: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x531: PushEmpty(bool, object)
0x532: PushEmpty(object)
0x533: Call2 0x707

0x534: Stack[-2] = Stack[-1]
0x535: Pop(1)
0x536: Call2 0x682

0x537: Pop(2)
0x538: GOTO 0x53f

0x539: PushEmpty()
0x53a: Call2 0x4f2

0x53b: Pop(0)
0x53c: PushEmpty()
0x53d: Call2 0x50d

0x53e: Pop(0)
0x53f: Return(); Pop(0)

0x540: PushEmpty()
0x541: Call2 0x5cc

0x542: Pop(0)
0x543: PushEmpty()
0x544: Call2 0x516

0x545: Pop(0)
0x546: @ lshStopSpeech()
0x547: Pop(0)
0x548: @ lshStopAnimation()
0x549: Pop(0)
0x54a: @ StopAsync()
0x54b: Pop(0)
0x54c: @ Hold()
0x54d: Pop(0)
0x54e: Return(); Pop(0)

0x54f: @ StopGroup0()
0x550: Pop(0)
0x551: PushEmpty()
0x552: Call2 0x516

0x553: Pop(0)
0x554: PushEmpty(string)
0x555: Stack[-1] = "Neutral"
0x556: Call2 0x6d2

0x557: Pop(1)
0x558: PushEmpty()
0x559: Call2 0x50d

0x55a: Pop(0)
0x55b: Return(); Pop(0)

0x55c: PushEmpty()
0x55d: Push(Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x55f: PushEmpty()
0x560: Call2 0x50d

0x561: Pop(0)
0x562: GOTO 0x567

0x563: PushEmpty(string)
0x564: Stack[-1] = "Neutral"
0x565: Call2 0x6d2

0x566: Pop(1)
0x567: Return(); Pop(0)

0x568: PushEmpty(bool, bool)
0x569: @ IsOverrideActive(Stack[-1])
0x56a: Pop(0)
0x56b: Pop(0); Push((bool) Stack[-1] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x56d: EventDisable(0)
0x56e: PushEmpty()
0x56f: Call2 0x5cc

0x570: Pop(0)
0x571: PushEmpty(bool, object)
0x572: Stack[-1] = Stack[-5]
0x573: Call2 0x5e3

0x574: Pop(2)
0x575: EventEnable(0)
0x576: PushEmpty(object)
0x577: Stack[-1] = Stack[-4]
0x578: Call2 0x7de

0x579: Pop(1)
0x57a: PushEmpty(string)
0x57b: Stack[-1] = "Neutral"
0x57c: Call2 0x6d2

0x57d: Pop(1)
0x57e: PushEmpty()
0x57f: Call2 0x516

0x580: Pop(0)
0x581: PushEmpty()
0x582: Call2 0x50d

0x583: Pop(0)
0x584: Return(); Pop(2)

0x585: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x586: @ WaitForAnimEnd()
0x587: Pop(0)
0x588: PushEmpty(bool)
0x589: Call2 0x5ec

0x58a: Pop(0)
0x58b: Pop(1); Push((bool) Stack[-1] == 0)
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: Return(); Pop(12)

0x58e: PushEmpty(int)
0x58f: Call2 0x73e

0x590: Stack[-7] = Stack[-1]
0x591: Pop(1)
0x592: Stack[-5] = (int) 0
0x593: PushEmpty(bool)
0x594: Stack[-1] = (bool) 0
0x595: Push((int) 5)
0x596: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x598: PushEmpty(bool)
0x599: Call2 0x5ec

0x59a: Pop(0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Stack[-1] = (bool) 1
0x59d: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x59e: Pop(0); Push((bool) Stack[-6] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a0: Push((int) 3)
0x5a1: @ Sleep(Stack[-1], Stack[-5])
0x5a2: Pop(1)
0x5a3: Pop(0); Push((bool) Stack[-4] == 0)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: GOTO 0x5c7

0x5a6: GOTO 0x5bc

0x5a7: @ irand(Stack[-3], Stack[-6])
0x5a8: Pop(0)
0x5a9: Push((int) 5)
0x5aa: @ irand(Stack[-3], Stack[-1])
0x5ab: Pop(1)
0x5ac: Push((int) 0)
0x5ad: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: Stack[-3] = (int) 0
0x5b0: Push("all")
0x5b1: PushEmpty(string, int)
0x5b2: Stack[-1] = Stack[-6]
0x5b3: Call2 0x737

0x5b4: Pop(1)
0x5b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b6: Pop(2)
0x5b7: @ WaitForAnimEnd(Stack[-1])
0x5b8: Pop(0)
0x5b9: Pop(0); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5bb: GOTO 0x5c7

0x5bc: PushEmpty(bool)
0x5bd: Call2 0x5ca

0x5be: Pop(0)
0x5bf: Pop(1); Push((bool) Stack[-1] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: GOTO 0x5c7

0x5c2: @ ResetAAS()
0x5c3: Pop(0)
0x5c4: Push((int) 1)
0x5c5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5c6: GOTO 0x593

0x5c7: @ ResetAAS()
0x5c8: Pop(0)
0x5c9: Return(); Pop(12)

0x5ca: Stack[-1] = (bool) 1
0x5cb: Return(); Pop(0)

0x5cc: @ StopAnimation()
0x5cd: Pop(0)
0x5ce: @ StopGroup0()
0x5cf: Pop(0)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5d2: @ GetPosition(Stack[-3])
0x5d3: Pop(0)
0x5d4: @@ GetPosition(Stack[-2])
0x5d5: Pop(0)
0x5d6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5d7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5d8: Return(); Pop(6)

0x5d9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5da: @ GetPosition(Stack[-3])
0x5db: Pop(0)
0x5dc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5dd: Push(CvectorIndex(Stack[-2], 0))
0x5de: Push(CvectorIndex(Stack[-3], 2))
0x5df: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5e0: Pop(2)
0x5e1: Stack[-8] = Stack[-1]
0x5e2: Return(); Pop(6)

0x5e3: PushEmpty(cvector, cvector)
0x5e4: @@ GetPosition(Stack[-1])
0x5e5: Pop(0)
0x5e6: PushEmpty(bool, cvector)
0x5e7: Stack[-1] = Stack[-3]
0x5e8: Call2 0x5d9

0x5e9: Stack[-6] = Stack[-2]
0x5ea: Pop(2)
0x5eb: Return(); Pop(2)

0x5ec: PushEmpty(bool, bool)
0x5ed: @ IsLoaded(Stack[-1])
0x5ee: Pop(0)
0x5ef: Stack[-3] = Stack[-1]
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5f2: @@ GetPosition(Stack[-8])
0x5f3: Pop(0)
0x5f4: @@ GetEyesHeight(Stack[-9])
0x5f5: Pop(0)
0x5f6: Push(CvectorIndex(Stack[-8], 1))
0x5f7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5f8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5f9: @ GetPosition(Stack[-7])
0x5fa: Pop(0)
0x5fb: @ GetEyesHeight(Stack[-9])
0x5fc: Pop(0)
0x5fd: Push(CvectorIndex(Stack[-7], 1))
0x5fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x600: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x601: Push(CvectorIndex(Stack[-6], 1))
0x602: Stack[-1] = (int) 0
0x603: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x604: Pop(0); Push(Stack[-6] | Stack[-6]);
0x605: Pop(1); Push(Sqrt(Stack[-1]))
0x606: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x607: Stack[-5] = -Stack[-6]; Pop(0);
0x608: Pop(0); Push(Stack[-6] * Stack[-19]);
0x609: PushEmpty(cvector, cvector)
0x60a: Push(CVector(0.0, 1.0, 0.0))
0x60b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x60c: Call2 0x70d

0x60d: Pop(1)
0x60e: Push((int) 25)
0x60f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x610: Pop(2); Push(Stack[-2] + Stack[-1]);
0x611: Push(CVector(0.0, 10.0, 0.0))
0x612: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x613: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x614: @ IsOverrideActive(Stack[-2])
0x615: Pop(0)
0x616: Push(Stack[-2])
0x617: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x618: Stack[-21] = (bool) 0
0x619: Return(); Pop(18)

0x61a: @ StopWorld()
0x61b: Pop(0)
0x61c: Push((bool) 1)
0x61d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x61e: Pop(1)
0x61f: Push(CvectorIndex(Stack[-4], 0))
0x620: Push(CvectorIndex(Stack[-5], 2))
0x621: @ Rotate(Stack[-2], Stack[-1])
0x622: Pop(2)
0x623: PushEmpty(bool)
0x624: Call2 0x757

0x625: Pop(0)
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: GOTO 0x630

0x628: Push("head")
0x629: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x62a: Pop(1)
0x62b: Push(Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62d: Push("head")
0x62e: @ LookAsyncCamera(Stack[-1])
0x62f: Pop(1)
0x630: @ CameraWaitForPlayFinish()
0x631: Pop(0)
0x632: @ ResumeWorld()
0x633: Pop(0)
0x634: Stack[-21] = (bool) 1
0x635: Return(); Pop(18)

0x636: PushEmpty(bool, bool)
0x637: Push((bool) 1)
0x638: @ CameraSwitchToNormal(Stack[-1])
0x639: Pop(1)
0x63a: PushEmpty(bool)
0x63b: Call2 0x757

0x63c: Pop(0)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: GOTO 0x647

0x63f: Push("head")
0x640: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x641: Pop(1)
0x642: Push(Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x644: Push("head")
0x645: @ UnlookAsync(Stack[-1])
0x646: Pop(1)
0x647: Return(); Pop(2)

0x648: PushEmpty(int, int, int, int)
0x649: Push("voice_common")
0x64a: @ GetVariable(Stack[-1], Stack[-3])
0x64b: Pop(1)
0x64c: Push(Stack[-2])
0x64d: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x64e: PushEmpty(bool, object)
0x64f: Stack[-1] = Stack[-7]
0x650: Call2 0x682

0x651: Pop(1)
0x652: Pop(1); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x654: PushEmpty(bool, object)
0x655: Stack[-1] = Stack[-7]
0x656: Call2 0x6a7

0x657: Pop(1)
0x658: Pop(1); Push((bool) Stack[-1] == 0)
0x659: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65a: Stack[-6] = (bool) 0
0x65b: Return(); Pop(4)

0x65c: Push((int) 2)
0x65d: @ irand(Stack[-2], Stack[-1])
0x65e: Pop(1)
0x65f: Push(Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x661: Push("voice_common")
0x662: Push((int) 1)
0x663: Pop(1); Push(Stack[-4] + Stack[-1]);
0x664: Push((int) 3)
0x665: Pop(2); Push(Stack[-2] % Stack[-1]);
0x666: @ SetVariable(Stack[-2], Stack[-1])
0x667: Pop(2)
0x668: GOTO 0x66d

0x669: Push("voice_common")
0x66a: Push((int) 0)
0x66b: @ SetVariable(Stack[-2], Stack[-1])
0x66c: Pop(2)
0x66d: GOTO 0x680

0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[-7]
0x670: Call2 0x6a7

0x671: Pop(1)
0x672: Pop(1); Push((bool) Stack[-1] == 0)
0x673: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x674: PushEmpty(bool, object)
0x675: Stack[-1] = Stack[-7]
0x676: Call2 0x682

0x677: Pop(1)
0x678: Pop(1); Push((bool) Stack[-1] == 0)
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: Stack[-6] = (bool) 0
0x67b: Return(); Pop(4)

0x67c: Push("voice_common")
0x67d: Push((int) 1)
0x67e: @ SetVariable(Stack[-2], Stack[-1])
0x67f: Pop(2)
0x680: Stack[-6] = (bool) 1
0x681: Return(); Pop(4)

0x682: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x683: Stack[-5] = "c"
0x684: Stack[-4] = (int) 0
0x685: Push((int) 1)
0x686: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x687: Push((int) 1)
0x688: Pop(1); Push(Stack[-5] + Stack[-1]);
0x689: Pop(1); Push(Stack[-6] + Stack[-1]);
0x68a: @@ HasProperty(Stack[-1], Stack[-4])
0x68b: Pop(1)
0x68c: Pop(0); Push((bool) Stack[-3] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: GOTO 0x692

0x68f: Push((int) 1)
0x690: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x691: GOTO 0x685

0x692: Pop(0); Push((bool) Stack[-4] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-12] = (bool) 0
0x695: Return(); Pop(10)

0x696: Stack[-2] = (int) 0
0x697: Push((int) 1)
0x698: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69a: @ irand(Stack[-2], Stack[-4])
0x69b: Pop(0)
0x69c: Push((int) 1)
0x69d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x69e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x69f: @@ GetProperty(Stack[-1], Stack[-2])
0x6a0: Pop(1)
0x6a1: PushEmpty(bool, string)
0x6a2: Stack[-1] = Stack[-3]
0x6a3: Call2 0x6f1

0x6a4: Stack[-14] = Stack[-2]
0x6a5: Pop(2)
0x6a6: Return(); Pop(10)

0x6a7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6a8: Push("d")
0x6a9: PushEmpty(int)
0x6aa: Call2 0x728

0x6ab: Pop(0)
0x6ac: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ad: Push("m")
0x6ae: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6af: Stack[-4] = (int) 0
0x6b0: Push((int) 1)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b2: Push((int) 1)
0x6b3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6b5: @@ HasProperty(Stack[-1], Stack[-4])
0x6b6: Pop(1)
0x6b7: Pop(0); Push((bool) Stack[-3] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b9: GOTO 0x6bd

0x6ba: Push((int) 1)
0x6bb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6bc: GOTO 0x6b0

0x6bd: Pop(0); Push((bool) Stack[-4] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: Stack[-12] = (bool) 0
0x6c0: Return(); Pop(10)

0x6c1: Stack[-2] = (int) 0
0x6c2: Push((int) 1)
0x6c3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c5: @ irand(Stack[-2], Stack[-4])
0x6c6: Pop(0)
0x6c7: Push((int) 1)
0x6c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6c9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ca: @@ GetProperty(Stack[-1], Stack[-2])
0x6cb: Pop(1)
0x6cc: PushEmpty(bool, string)
0x6cd: Stack[-1] = Stack[-3]
0x6ce: Call2 0x6f1

0x6cf: Stack[-14] = Stack[-2]
0x6d0: Pop(2)
0x6d1: Return(); Pop(10)

0x6d2: PushEmpty(bool, float, float, bool, float, float)
0x6d3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6d4: Pop(0)
0x6d5: Push(Stack[-3])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6d7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6d8: Pop(0)
0x6d9: Push((bool) 0)
0x6da: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(1)
0x6dc: GOTO 0x6e1

0x6dd: Push("Can't find lsh animation : ")
0x6de: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6df: @ Trace(Stack[-1])
0x6e0: Pop(1)
0x6e1: Return(); Pop(6)

0x6e2: PushEmpty(bool, float, float, bool, float, float)
0x6e3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6e4: Pop(0)
0x6e5: Push(Stack[-3])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6e8: Pop(0)
0x6e9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6ea: Pop(0)
0x6eb: GOTO 0x6f0

0x6ec: Push("Can't find lsh animation : ")
0x6ed: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6ee: @ Trace(Stack[-1])
0x6ef: Pop(1)
0x6f0: Return(); Pop(6)

0x6f1: PushEmpty(bool, bool)
0x6f2: PushEmpty(bool)
0x6f3: Call2 0x757

0x6f4: Pop(0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6f7: Pop(0)
0x6f8: Push(Stack[-1])
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fa: @ lshPlaySpeech(Stack[-3])
0x6fb: Pop(0)
0x6fc: Stack[-4] = (bool) 1
0x6fd: Return(); Pop(2)

0x6fe: Stack[-4] = (bool) 0
0x6ff: Return(); Pop(2)

0x700: PushEmpty(bool)
0x701: Call2 0x757

0x702: Pop(0)
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: @ lshStopSpeech()
0x705: Pop(0)
0x706: Return(); Pop(0)

0x707: PushEmpty(object, object)
0x708: @ self(Stack[-1])
0x709: Pop(0)
0x70a: Stack[-3] = Stack[-1]
0x70b: Return(); Pop(2)

0x70c: Stack[-1] = 0
0x70d: PushEmpty(float, float)
0x70e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x70f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x710: Push((float)0.0)
0x711: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x714: Return(); Pop(2)

0x715: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x716: Return(); Pop(2)

0x717: PushEmpty(int, int)
0x718: @ GetVariable(Stack[-3], Stack[-1])
0x719: Pop(0)
0x71a: Stack[-4] = Stack[-1]
0x71b: Return(); Pop(2)

0x71c: PushEmpty(object, object)
0x71d: @ FindActor(Stack[-1], Stack[-4])
0x71e: Pop(0)
0x71f: Pop(0); Push((bool) Stack[-1] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x721: Stack[-5] = (bool) 0
0x722: Return(); Pop(2)

0x723: @ Trigger(Stack[-1], Stack[-3])
0x724: Pop(0)
0x725: Stack[-5] = (bool) 1
0x726: Return(); Pop(2)

0x727: Stack[-1] = 0
0x728: PushEmpty(float, float)
0x729: @ GetGameTime(Stack[-1])
0x72a: Pop(0)
0x72b: Push((int) 1)
0x72c: PushEmpty(int)
0x72d: Push((int) 24)
0x72e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x72f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x730: Return(); Pop(2)

0x731: PushEmpty()
0x732: PushEmpty(int)
0x733: Call2 0x728

0x734: Pop(0)
0x735: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x736: Return(); Pop(0)

0x737: PushEmpty(string, string)
0x738: Stack[-1] = "idle"
0x739: Push(Stack[-3])
0x73a: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x73c: Stack[-4] = Stack[-1]
0x73d: Return(); Pop(2)

0x73e: PushEmpty(int, bool, int, bool)
0x73f: Stack[-2] = (int) 0
0x740: Push("all")
0x741: PushEmpty(string, int)
0x742: Stack[-1] = Stack[-5]
0x743: Call2 0x737

0x744: Pop(1)
0x745: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(2)
0x747: Pop(0); Push((bool) Stack[-1] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x749: GOTO 0x74d

0x74a: Push((int) 1)
0x74b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x74c: GOTO 0x740

0x74d: Stack[-5] = Stack[-2]
0x74e: Return(); Pop(4)

0x74f: Stack[-1] = (int) 515536
0x750: Return(); Pop(0)

0x751: Stack[-1] = (int) 502861
0x752: Return(); Pop(0)

0x753: Stack[-1] = "ui/NPC_Han.png"
0x754: Return(); Pop(0)

0x755: Stack[-1] = "ui/NPC_Han_b.png"
0x756: Return(); Pop(0)

0x757: Stack[-1] = (bool) 1
0x758: Return(); Pop(0)

0x759: PushEmpty()
0x75a: Push("b11q02")
0x75b: Push((int) 4)
0x75c: @ SetVariable(Stack[-2], Stack[-1])
0x75d: Pop(2)
0x75e: PushEmpty()
0x75f: Call2 0x797

0x760: Pop(0)
0x761: Return(); Pop(0)

0x762: PushEmpty()
0x763: PushEmpty()
0x764: Call2 0x78a

0x765: Pop(0)
0x766: PushEmpty(bool, string, string)
0x767: Stack[-2] = "quest_b11_02"
0x768: Stack[-1] = "fail"
0x769: Call2 0x71c

0x76a: Pop(3)
0x76b: Return(); Pop(0)

0x76c: PushEmpty()
0x76d: Push("oob12Han1")
0x76e: Push((int) 1)
0x76f: @ SetVariable(Stack[-2], Stack[-1])
0x770: Pop(2)
0x771: Return(); Pop(0)

0x772: PushEmpty()
0x773: PushEmpty(int, string)
0x774: Stack[-1] = "b11q02"
0x775: Call2 0x717

0x776: Pop(1)
0x777: Push((int) 3)
0x778: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: Stack[-2] = (bool) 1
0x77b: Return(); Pop(0)

0x77c: Stack[-2] = (bool) 0
0x77d: Return(); Pop(0)

0x77e: PushEmpty()
0x77f: PushEmpty(int, string)
0x780: Stack[-1] = "oob12Han1"
0x781: Call2 0x717

0x782: Pop(1)
0x783: Push((int) 0)
0x784: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x786: Stack[-2] = (bool) 1
0x787: Return(); Pop(0)

0x788: Stack[-2] = (bool) 0
0x789: Return(); Pop(0)

0x78a: PushEmpty(object, object)
0x78b: Push((int) 611)
0x78c: Push((int) 2)
0x78d: Push((int) 531506)
0x78e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: PushEmpty(bool, object, int)
0x791: Stack[-2] = Stack[-4]
0x792: Stack[-1] = (int) 598
0x793: Call2 0x7b1

0x794: Pop(3)
0x795: Return(); Pop(2)

0x796: Stack[-1] = 0
0x797: PushEmpty(object, object)
0x798: Push((int) 601)
0x799: Push((int) 2)
0x79a: Push((int) 531152)
0x79b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x79c: Pop(3)
0x79d: PushEmpty(bool, object, int)
0x79e: Stack[-2] = Stack[-4]
0x79f: Stack[-1] = (int) 598
0x7a0: Call2 0x7b1

0x7a1: Pop(3)
0x7a2: Return(); Pop(2)

0x7a3: Stack[-1] = 0
0x7a4: PushEmpty(object, object)
0x7a5: @ GetDiaryRoot(Stack[-1])
0x7a6: Pop(0)
0x7a7: Pop(0); Push((bool) Stack[-1] == 0)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a9: Push("Can't retrieve diary root")
0x7aa: @ Trace(Stack[-1])
0x7ab: Pop(1)
0x7ac: Stack[-3] = (bool) 0
0x7ad: Return(); Pop(2)

0x7ae: Stack[-3] = Stack[-1]
0x7af: Return(); Pop(2)

0x7b0: Stack[-1] = 0
0x7b1: PushEmpty(object, object, int, object, object, int)
0x7b2: PushEmpty(object)
0x7b3: Call2 0x7a4

0x7b4: Stack[-4] = Stack[-1]
0x7b5: Pop(1)
0x7b6: @@ Find(Stack[-7], Stack[-2])
0x7b7: Pop(0)
0x7b8: Pop(0); Push((bool) Stack[-2] == 0)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7ba: Push("Can't find diary parent with id: ")
0x7bb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7bc: @ Trace(Stack[-1])
0x7bd: Pop(1)
0x7be: Stack[-9] = (bool) 0
0x7bf: Return(); Pop(6)

0x7c0: @@ AddChild(Stack[-8])
0x7c1: Pop(0)
0x7c2: Push((int) 7)
0x7c3: @ SendWorldWndMessage(Stack[-1])
0x7c4: Pop(1)
0x7c5: @@ GetCategory(Stack[-1])
0x7c6: Pop(0)
0x7c7: @ SetDiarySection(Stack[-1])
0x7c8: Pop(0)
0x7c9: Stack[-9] = (bool) 0
0x7ca: Return(); Pop(6)

0x7cb: Stack[-2] = 0
0x7cc: Stack[-3] = 0
0x7cd: PushEmpty(int, int)
0x7ce: Push("branch")
0x7cf: @ GetVariable(Stack[-1], Stack[-2])
0x7d0: Pop(1)
0x7d1: Push((int) 0)
0x7d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d4: Stack[-3] = (int) 1
0x7d5: Return(); Pop(2)

0x7d6: GOTO 0x7dc

0x7d7: Push((int) 1)
0x7d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7da: Stack[-3] = (int) 2
0x7db: Return(); Pop(2)

0x7dc: Stack[-3] = (int) 3
0x7dd: Return(); Pop(2)

0x7de: PushEmpty()
0x7df: Push(GlobalVars[1])
0x7e0: Pop(1); Push((bool) Stack[-1] == 0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e2: PushEmpty(int, object)
0x7e3: Stack[-1] = Stack[-3]
0x7e4: Push(-2, 1); TaskCall(0)
0x7e5: Call2 0x0

0x7e6: Pop(-2, 1); TaskReturn
0x7e7: Pop(2)
0x7e8: Push(GlobalVars[1])
0x7e9: Stack[-1] = (bool) 1
0x7ea: GlobalVars[1] = Stack[-1]; Pop(1)
0x7eb: PushEmpty(bool, int)
0x7ec: Stack[-1] = (int) 11
0x7ed: Call2 0x731

0x7ee: Pop(1)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f0: PushEmpty(int, object)
0x7f1: Stack[-1] = Stack[-3]
0x7f2: Push(-2, 1); TaskCall(2)
0x7f3: Call2 0xe2

0x7f4: Pop(-2, 1); TaskReturn
0x7f5: Pop(2)
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty(bool, int)
0x7f8: Stack[-1] = (int) 12
0x7f9: Call2 0x731

0x7fa: Pop(1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fc: PushEmpty(int, object)
0x7fd: Stack[-1] = Stack[-3]
0x7fe: Push(-2, 1); TaskCall(4)
0x7ff: Call2 0x2a6

0x800: Pop(-2, 1); TaskReturn
0x801: Pop(2)
0x802: Return(); Pop(0)

0x803: PushEmpty(int, object)
0x804: Stack[-1] = Stack[-3]
0x805: Push(-2, 1); TaskCall(6)
0x806: Call2 0x403

0x807: Pop(-2, 1); TaskReturn
0x808: Pop(2)
0x809: Return(); Pop(0)

