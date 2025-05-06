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
	Untrust
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Fear
	Rage
	cleanup
	restore
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
	b10q04PlennikTalk
	branch
	ui/NPC_MladVlad.png
	ui/NPC_MladVlad_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x175
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x179 Vars = (string)
		EVENT_6 Op = 0x18d Vars = ()
		EVENT_5 Op = 0x19a Vars = ()
		EVENT_7 Op = 0x1e3 Vars = (int)
		EVENT_45 Op = 0x225 Vars = (bool)
		EVENT_0 Op = 0x231 Vars = (object)


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
0xe: Call2 0x42b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x429

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x42d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x42f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x418

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
0x31: Call2 0x3d0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x311

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
0x48: Call2 0x2ff

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
0x56: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x40c

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(object, object)
0x5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60: Call2 0x406

0x61: Pop(2)
0x62: PushEmpty(string)
0x63: Stack[-1] = "Untrust"
0x64: Call2 0xaa

0x65: Pop(1)
0x66: Push((int) 530368)
0x67: @@ SetMessage(Stack[-1])
0x68: Pop(1)
0x69: @@ ClearReplies()
0x6a: Pop(0)
0x6b: Push((int) 530370)
0x6c: Push((int) 32796)
0x6d: Push((int) 31742)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 530369)
0x71: Push((int) 32796)
0x72: Push((int) 31741)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0x8c

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call2 0xaa

0x79: Pop(1)
0x7a: Push((int) 530371)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: Push((int) 530372)
0x80: Push((int) -1)
0x81: Push((int) 31744)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 531447)
0x85: Push((int) -1)
0x86: Push((int) 32795)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x55

0x8c: PushEmpty(bool)
0x8d: Call2 0x431

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x39b

0x98: Pop(1)
0x99: GOTO 0x90

0x9a: GOTO 0xa9

0x9b: Push("all")
0x9c: Push("idle")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: GOTO 0x9f

0xa9: Return(); Pop(0)

0xaa: PushEmpty()
0xab: PushEmpty(bool)
0xac: Call2 0x431

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty(string, bool)
0xb5: Stack[-2] = Stack[-3]
0xb6: Push("")
0xb7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: GOTO 0xbc

0xbb: Stack[-1] = (bool) 1
0xbc: Call2 0x3ab

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x3c9

0xc5: Pop(0)
0xc6: Push((int) 31740)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x40c

0xcc: Pop(1)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x406

0xd3: Pop(2)
0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Untrust"
0xd6: Call2 0xaa

0xd7: Pop(1)
0xd8: Push((int) 530368)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 530370)
0xde: Push((int) 32796)
0xdf: Push((int) 31742)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 530369)
0xe3: Push((int) 32796)
0xe4: Push((int) 31741)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0xaa

0xeb: Pop(1)
0xec: Push((int) 530371)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 530372)
0xf2: Push((int) -1)
0xf3: Push((int) 31744)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 531447)
0xf7: Push((int) -1)
0xf8: Push((int) 32795)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 32796)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Untrust"
0x101: Call2 0xaa

0x102: Pop(1)
0x103: Push((int) 531448)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 531449)
0x109: Push((int) 32799)
0x10a: Push((int) 32798)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 531451)
0x10e: Push((int) 32799)
0x10f: Push((int) 32800)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 32799)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Fear"
0x118: Call2 0xaa

0x119: Pop(1)
0x11a: Push((int) 531450)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 531452)
0x120: Push((int) 32803)
0x121: Push((int) 32802)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 32803)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Rage"
0x12a: Call2 0xaa

0x12b: Pop(1)
0x12c: Push((int) 531453)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 531454)
0x132: Push((int) 32806)
0x133: Push((int) 32804)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 531455)
0x137: Push((int) 32807)
0x138: Push((int) 32805)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 32807)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Rage"
0x141: Call2 0xaa

0x142: Pop(1)
0x143: Push((int) 531457)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 531458)
0x149: Push((int) -1)
0x14a: Push((int) 32808)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 32806)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Fear"
0x153: Call2 0xaa

0x154: Pop(1)
0x155: Push((int) 531456)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 531459)
0x15b: Push((int) -1)
0x15c: Push((int) 32809)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x161: PushEmpty(bool)
0x162: Call2 0x431

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: @ lshStopAnimation()
0x166: Pop(0)
0x167: GOTO 0x16a

0x168: @ StopAnimation()
0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: GOTO 0xc1

0x16c: Return(); Pop(0)

0x16d: PushEmpty()
0x16e: PushEmpty(int, object)
0x16f: Stack[-1] = Stack[-3]
0x170: Push(-2, 1); TaskCall(0)
0x171: Call2 0x0

0x172: Pop(-2, 1); TaskReturn
0x173: Pop(2)
0x174: Return(); Pop(0)

0x175: PushEmpty()
0x176: Call2 0x19e

0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: PushEmpty(bool, bool)
0x17a: Push("cleanup")
0x17b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x17e: @ IsLoaded(Stack[-1])
0x17f: Pop(0)
0x180: Pop(0); Push((bool) Stack[-1] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object)
0x183: Call2 0x3d0

0x184: Pop(0)
0x185: @ RemoveActor(Stack[-1])
0x186: Pop(1)
0x187: GOTO 0x18c

0x188: Push("restore")
0x189: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x18c: Return(); Pop(2)

0x18d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18f: PushEmpty(object)
0x190: Call2 0x3d0

0x191: Pop(0)
0x192: @ RemoveActor(Stack[-1])
0x193: Pop(1)
0x194: @ Hold()
0x195: Pop(0)
0x196: PushEmpty()
0x197: Call2 0x209

0x198: Pop(0)
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: Call2 0x218

0x19c: Pop(0)
0x19d: Return(); Pop(0)

0x19e: PushEmpty(bool)
0x19f: Call2 0x2b5

0x1a0: Pop(0)
0x1a1: Pop(1); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a3: @ Hold()
0x1a4: Pop(0)
0x1a5: @ GetDirection(Stack[-0])
0x1a6: Pop(0)
0x1a7: PushEmpty()
0x1a8: Call2 0x24e

0x1a9: Pop(0)
0x1aa: GOTO 0x1a7

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(object, object)
0x1ad: Push("player")
0x1ae: @ FindActor(Stack[-2], Stack[-1])
0x1af: Pop(1)
0x1b0: Pop(0); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: Stack[-3] = (bool) 0
0x1b3: Return(); Pop(2)

0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[-3]
0x1b6: Call2 0x2ac

0x1b7: Stack[-5] = Stack[-2]
0x1b8: Pop(2)
0x1b9: Return(); Pop(2)

0x1ba: Stack[-1] = 0
0x1bb: Push(CvectorIndex(Stack[-0], 0))
0x1bc: Push(CvectorIndex(Stack[-0], 2))
0x1bd: @ RotateAsync(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty(object, bool, object, bool)
0x1c1: Push("player")
0x1c2: @ FindActor(Stack[-3], Stack[-1])
0x1c3: Pop(1)
0x1c4: Pop(0); Push((bool) Stack[-2] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-5] = (bool) 0
0x1c7: Return(); Pop(4)

0x1c8: PushEmpty(float, object)
0x1c9: Stack[-1] = Stack[-4]
0x1ca: Call2 0x29a

0x1cb: Pop(1)
0x1cc: Push((float)90000.0)
0x1cd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-5] = (bool) 0
0x1d0: Return(); Pop(4)

0x1d1: @ CanSee(Stack[-1], Stack[-2])
0x1d2: Pop(0)
0x1d3: Stack[-5] = Stack[-1]
0x1d4: Return(); Pop(4)

0x1d5: Stack[-2] = 0
0x1d6: PushEmpty(float, float)
0x1d7: Push((int) 8)
0x1d8: Push((int) 16)
0x1d9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: Push((int) 10)
0x1dc: @ SetTimer(Stack[-1], Stack[-2])
0x1dd: Pop(1)
0x1de: Return(); Pop(2)

0x1df: Push((int) 10)
0x1e0: @ KillTimer(Stack[-1])
0x1e1: Pop(1)
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: Push((int) 10)
0x1e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0x1df

0x1e9: Pop(0)
0x1ea: PushEmpty(bool)
0x1eb: Stack[-1] = (bool) 0
0x1ec: PushEmpty(bool)
0x1ed: Call2 0x2b5

0x1ee: Pop(0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x1c0

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Stack[-1] = (bool) 1
0x1f5: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f6: PushEmpty(bool)
0x1f7: Call2 0x1ac

0x1f8: Pop(0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fa: PushEmpty(bool, object)
0x1fb: PushEmpty(object)
0x1fc: Call2 0x3d0

0x1fd: Stack[-2] = Stack[-1]
0x1fe: Pop(1)
0x1ff: Call2 0x34b

0x200: Pop(2)
0x201: GOTO 0x208

0x202: PushEmpty()
0x203: Call2 0x1bb

0x204: Pop(0)
0x205: PushEmpty()
0x206: Call2 0x1d6

0x207: Pop(0)
0x208: Return(); Pop(0)

0x209: PushEmpty()
0x20a: Call2 0x295

0x20b: Pop(0)
0x20c: PushEmpty()
0x20d: Call2 0x1df

0x20e: Pop(0)
0x20f: @ lshStopSpeech()
0x210: Pop(0)
0x211: @ lshStopAnimation()
0x212: Pop(0)
0x213: @ StopAsync()
0x214: Pop(0)
0x215: @ Hold()
0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: @ StopGroup0()
0x219: Pop(0)
0x21a: PushEmpty()
0x21b: Call2 0x1df

0x21c: Pop(0)
0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral"
0x21f: Call2 0x39b

0x220: Pop(1)
0x221: PushEmpty()
0x222: Call2 0x1d6

0x223: Pop(0)
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: Push(Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x228: PushEmpty()
0x229: Call2 0x1d6

0x22a: Pop(0)
0x22b: GOTO 0x230

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Neutral"
0x22e: Call2 0x39b

0x22f: Pop(1)
0x230: Return(); Pop(0)

0x231: PushEmpty(bool, bool)
0x232: @ IsOverrideActive(Stack[-1])
0x233: Pop(0)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x236: EventDisable(0)
0x237: PushEmpty()
0x238: Call2 0x295

0x239: Pop(0)
0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[-5]
0x23c: Call2 0x2ac

0x23d: Pop(2)
0x23e: EventEnable(0)
0x23f: PushEmpty(object)
0x240: Stack[-1] = Stack[-4]
0x241: Call2 0x16d

0x242: Pop(1)
0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral"
0x245: Call2 0x39b

0x246: Pop(1)
0x247: PushEmpty()
0x248: Call2 0x1df

0x249: Pop(0)
0x24a: PushEmpty()
0x24b: Call2 0x1d6

0x24c: Pop(0)
0x24d: Return(); Pop(2)

0x24e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x24f: @ WaitForAnimEnd()
0x250: Pop(0)
0x251: PushEmpty(bool)
0x252: Call2 0x2b5

0x253: Pop(0)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Return(); Pop(12)

0x257: PushEmpty(int)
0x258: Call2 0x3f5

0x259: Stack[-7] = Stack[-1]
0x25a: Pop(1)
0x25b: Stack[-5] = (int) 0
0x25c: PushEmpty(bool)
0x25d: Stack[-1] = (bool) 0
0x25e: Push((int) 5)
0x25f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: PushEmpty(bool)
0x262: Call2 0x2b5

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: Stack[-1] = (bool) 1
0x266: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x267: Pop(0); Push((bool) Stack[-6] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x269: Push((int) 3)
0x26a: @ Sleep(Stack[-1], Stack[-5])
0x26b: Pop(1)
0x26c: Pop(0); Push((bool) Stack[-4] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x290

0x26f: GOTO 0x285

0x270: @ irand(Stack[-3], Stack[-6])
0x271: Pop(0)
0x272: Push((int) 5)
0x273: @ irand(Stack[-3], Stack[-1])
0x274: Pop(1)
0x275: Push((int) 0)
0x276: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Stack[-3] = (int) 0
0x279: Push("all")
0x27a: PushEmpty(string, int)
0x27b: Stack[-1] = Stack[-6]
0x27c: Call2 0x3ee

0x27d: Pop(1)
0x27e: @ PlayAnimation(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: @ WaitForAnimEnd(Stack[-1])
0x281: Pop(0)
0x282: Pop(0); Push((bool) Stack[-1] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x290

0x285: PushEmpty(bool)
0x286: Call2 0x293

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x290

0x28b: @ ResetAAS()
0x28c: Pop(0)
0x28d: Push((int) 1)
0x28e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x28f: GOTO 0x25c

0x290: @ ResetAAS()
0x291: Pop(0)
0x292: Return(); Pop(12)

0x293: Stack[-1] = (bool) 1
0x294: Return(); Pop(0)

0x295: @ StopAnimation()
0x296: Pop(0)
0x297: @ StopGroup0()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29b: @ GetPosition(Stack[-3])
0x29c: Pop(0)
0x29d: @@ GetPosition(Stack[-2])
0x29e: Pop(0)
0x29f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a1: Return(); Pop(6)

0x2a2: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2a3: @ GetPosition(Stack[-3])
0x2a4: Pop(0)
0x2a5: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2a6: Push(CvectorIndex(Stack[-2], 0))
0x2a7: Push(CvectorIndex(Stack[-3], 2))
0x2a8: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2a9: Pop(2)
0x2aa: Stack[-8] = Stack[-1]
0x2ab: Return(); Pop(6)

0x2ac: PushEmpty(cvector, cvector)
0x2ad: @@ GetPosition(Stack[-1])
0x2ae: Pop(0)
0x2af: PushEmpty(bool, cvector)
0x2b0: Stack[-1] = Stack[-3]
0x2b1: Call2 0x2a2

0x2b2: Stack[-6] = Stack[-2]
0x2b3: Pop(2)
0x2b4: Return(); Pop(2)

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
0x2d5: Call2 0x3d6

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
0x2e5: Push((bool) 1)
0x2e6: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2e7: Pop(1)
0x2e8: Push(CvectorIndex(Stack[-4], 0))
0x2e9: Push(CvectorIndex(Stack[-5], 2))
0x2ea: @ Rotate(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: PushEmpty(bool)
0x2ed: Call2 0x431

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2f9

0x2f1: Push("head")
0x2f2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f3: Pop(1)
0x2f4: Push(Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: Push("head")
0x2f7: @ LookAsyncCamera(Stack[-1])
0x2f8: Pop(1)
0x2f9: @ CameraWaitForPlayFinish()
0x2fa: Pop(0)
0x2fb: @ ResumeWorld()
0x2fc: Pop(0)
0x2fd: Stack[-21] = (bool) 1
0x2fe: Return(); Pop(18)

0x2ff: PushEmpty(bool, bool)
0x300: Push((bool) 1)
0x301: @ CameraSwitchToNormal(Stack[-1])
0x302: Pop(1)
0x303: PushEmpty(bool)
0x304: Call2 0x431

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x310

0x308: Push("head")
0x309: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30a: Pop(1)
0x30b: Push(Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Push("head")
0x30e: @ UnlookAsync(Stack[-1])
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: PushEmpty(int, int, int, int)
0x312: Push("voice_common")
0x313: @ GetVariable(Stack[-1], Stack[-3])
0x314: Pop(1)
0x315: Push(Stack[-2])
0x316: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x317: PushEmpty(bool, object)
0x318: Stack[-1] = Stack[-7]
0x319: Call2 0x34b

0x31a: Pop(1)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[-7]
0x31f: Call2 0x370

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-6] = (bool) 0
0x324: Return(); Pop(4)

0x325: Push((int) 2)
0x326: @ irand(Stack[-2], Stack[-1])
0x327: Pop(1)
0x328: Push(Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32a: Push("voice_common")
0x32b: Push((int) 1)
0x32c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x32d: Push((int) 3)
0x32e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x32f: @ SetVariable(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: GOTO 0x336

0x332: Push("voice_common")
0x333: Push((int) 0)
0x334: @ SetVariable(Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: GOTO 0x349

0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[-7]
0x339: Call2 0x370

0x33a: Pop(1)
0x33b: Pop(1); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[-7]
0x33f: Call2 0x34b

0x340: Pop(1)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-6] = (bool) 0
0x344: Return(); Pop(4)

0x345: Push("voice_common")
0x346: Push((int) 1)
0x347: @ SetVariable(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: Stack[-6] = (bool) 1
0x34a: Return(); Pop(4)

0x34b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x34c: Stack[-5] = "c"
0x34d: Stack[-4] = (int) 0
0x34e: Push((int) 1)
0x34f: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x350: Push((int) 1)
0x351: Pop(1); Push(Stack[-5] + Stack[-1]);
0x352: Pop(1); Push(Stack[-6] + Stack[-1]);
0x353: @@ HasProperty(Stack[-1], Stack[-4])
0x354: Pop(1)
0x355: Pop(0); Push((bool) Stack[-3] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x35b

0x358: Push((int) 1)
0x359: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35a: GOTO 0x34e

0x35b: Pop(0); Push((bool) Stack[-4] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-12] = (bool) 0
0x35e: Return(); Pop(10)

0x35f: Stack[-2] = (int) 0
0x360: Push((int) 1)
0x361: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: @ irand(Stack[-2], Stack[-4])
0x364: Pop(0)
0x365: Push((int) 1)
0x366: Pop(1); Push(Stack[-3] + Stack[-1]);
0x367: Pop(1); Push(Stack[-6] + Stack[-1]);
0x368: @@ GetProperty(Stack[-1], Stack[-2])
0x369: Pop(1)
0x36a: PushEmpty(bool, string)
0x36b: Stack[-1] = Stack[-3]
0x36c: Call2 0x3ba

0x36d: Stack[-14] = Stack[-2]
0x36e: Pop(2)
0x36f: Return(); Pop(10)

0x370: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x371: Push("d")
0x372: PushEmpty(int)
0x373: Call2 0x3e5

0x374: Pop(0)
0x375: Pop(2); Push(Stack[-2] + Stack[-1]);
0x376: Push("m")
0x377: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x378: Stack[-4] = (int) 0
0x379: Push((int) 1)
0x37a: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37b: Push((int) 1)
0x37c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37e: @@ HasProperty(Stack[-1], Stack[-4])
0x37f: Pop(1)
0x380: Pop(0); Push((bool) Stack[-3] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: GOTO 0x386

0x383: Push((int) 1)
0x384: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x385: GOTO 0x379

0x386: Pop(0); Push((bool) Stack[-4] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-12] = (bool) 0
0x389: Return(); Pop(10)

0x38a: Stack[-2] = (int) 0
0x38b: Push((int) 1)
0x38c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: @ irand(Stack[-2], Stack[-4])
0x38f: Pop(0)
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-3] + Stack[-1]);
0x392: Pop(1); Push(Stack[-6] + Stack[-1]);
0x393: @@ GetProperty(Stack[-1], Stack[-2])
0x394: Pop(1)
0x395: PushEmpty(bool, string)
0x396: Stack[-1] = Stack[-3]
0x397: Call2 0x3ba

0x398: Stack[-14] = Stack[-2]
0x399: Pop(2)
0x39a: Return(); Pop(10)

0x39b: PushEmpty(bool, float, float, bool, float, float)
0x39c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x39d: Pop(0)
0x39e: Push(Stack[-3])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3a1: Pop(0)
0x3a2: Push((bool) 0)
0x3a3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(1)
0x3a5: GOTO 0x3aa

0x3a6: Push("Can't find lsh animation : ")
0x3a7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a8: @ Trace(Stack[-1])
0x3a9: Pop(1)
0x3aa: Return(); Pop(6)

0x3ab: PushEmpty(bool, float, float, bool, float, float)
0x3ac: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3ad: Pop(0)
0x3ae: Push(Stack[-3])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3b1: Pop(0)
0x3b2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3b3: Pop(0)
0x3b4: GOTO 0x3b9

0x3b5: Push("Can't find lsh animation : ")
0x3b6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3b7: @ Trace(Stack[-1])
0x3b8: Pop(1)
0x3b9: Return(); Pop(6)

0x3ba: PushEmpty(bool, bool)
0x3bb: PushEmpty(bool)
0x3bc: Call2 0x431

0x3bd: Pop(0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3bf: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3c0: Pop(0)
0x3c1: Push(Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c3: @ lshPlaySpeech(Stack[-3])
0x3c4: Pop(0)
0x3c5: Stack[-4] = (bool) 1
0x3c6: Return(); Pop(2)

0x3c7: Stack[-4] = (bool) 0
0x3c8: Return(); Pop(2)

0x3c9: PushEmpty(bool)
0x3ca: Call2 0x431

0x3cb: Pop(0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: @ lshStopSpeech()
0x3ce: Pop(0)
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty(object, object)
0x3d1: @ self(Stack[-1])
0x3d2: Pop(0)
0x3d3: Stack[-3] = Stack[-1]
0x3d4: Return(); Pop(2)

0x3d5: Stack[-1] = 0
0x3d6: PushEmpty(float, float)
0x3d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3d9: Push((float)0.0)
0x3da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3dd: Return(); Pop(2)

0x3de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3df: Return(); Pop(2)

0x3e0: PushEmpty(int, int)
0x3e1: @ GetVariable(Stack[-3], Stack[-1])
0x3e2: Pop(0)
0x3e3: Stack[-4] = Stack[-1]
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(float, float)
0x3e6: @ GetGameTime(Stack[-1])
0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: PushEmpty(int)
0x3ea: Push((int) 24)
0x3eb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ed: Return(); Pop(2)

0x3ee: PushEmpty(string, string)
0x3ef: Stack[-1] = "idle"
0x3f0: Push(Stack[-3])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f3: Stack[-4] = Stack[-1]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(int, bool, int, bool)
0x3f6: Stack[-2] = (int) 0
0x3f7: Push("all")
0x3f8: PushEmpty(string, int)
0x3f9: Stack[-1] = Stack[-5]
0x3fa: Call2 0x3ee

0x3fb: Pop(1)
0x3fc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: Pop(0); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: GOTO 0x404

0x401: Push((int) 1)
0x402: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x403: GOTO 0x3f7

0x404: Stack[-5] = Stack[-2]
0x405: Return(); Pop(4)

0x406: PushEmpty()
0x407: Push("b10q04PlennikTalk")
0x408: Push((int) 1)
0x409: @ SetVariable(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(int, string)
0x40e: Stack[-1] = "b10q04PlennikTalk"
0x40f: Call2 0x3e0

0x410: Pop(1)
0x411: Push((int) 0)
0x412: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-2] = (bool) 1
0x415: Return(); Pop(0)

0x416: Stack[-2] = (bool) 0
0x417: Return(); Pop(0)

0x418: PushEmpty(int, int)
0x419: Push("branch")
0x41a: @ GetVariable(Stack[-1], Stack[-2])
0x41b: Pop(1)
0x41c: Push((int) 0)
0x41d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41f: Stack[-3] = (int) 1
0x420: Return(); Pop(2)

0x421: GOTO 0x427

0x422: Push((int) 1)
0x423: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-3] = (int) 2
0x426: Return(); Pop(2)

0x427: Stack[-3] = (int) 3
0x428: Return(); Pop(2)

0x429: Stack[-1] = (int) 515547
0x42a: Return(); Pop(0)

0x42b: Stack[-1] = (int) 502872
0x42c: Return(); Pop(0)

0x42d: Stack[-1] = "ui/NPC_MladVlad.png"
0x42e: Return(); Pop(0)

0x42f: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x430: Return(); Pop(0)

0x431: Stack[-1] = (bool) 1
0x432: Return(); Pop(0)

