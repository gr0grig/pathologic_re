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
	Sorrow
	Smile
	Untrust
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
	k10q01
	k10q01KnowAboutRubin
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1d3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1d7 Vars = (string)
		EVENT_6 Op = 0x1eb Vars = ()
		EVENT_5 Op = 0x1f8 Vars = ()
		EVENT_7 Op = 0x241 Vars = (int)
		EVENT_45 Op = 0x283 Vars = (bool)
		EVENT_0 Op = 0x28f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x318

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4d6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4d4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4d8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4da

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c3

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
0x31: Call2 0x42c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x36d

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
0x48: Call2 0x35c

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x474

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x46e

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral"
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 526934)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 527936)
0x6b: Push((int) 29290)
0x6c: Push((int) 29289)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 527942)
0x70: Push((int) 29297)
0x71: Push((int) 29295)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 526936)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 527935)
0x7f: Push((int) -1)
0x80: Push((int) 29288)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 526937)
0x84: Push((int) -1)
0x85: Push((int) 28229)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x4dc

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3f7

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x4dc

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x407

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x425

0xc4: Pop(0)
0xc5: Push((int) 28227)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x462

0xcc: Pop(2)
0xcd: Push((int) 28226)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x474

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x46e

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0xa9

0xdd: Pop(1)
0xde: Push((int) 526934)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 527936)
0xe4: Push((int) 29290)
0xe5: Push((int) 29289)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 527942)
0xe9: Push((int) 29297)
0xea: Push((int) 29295)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0xa9

0xf1: Pop(1)
0xf2: Push((int) 526936)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 527935)
0xf8: Push((int) -1)
0xf9: Push((int) 29288)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 526937)
0xfd: Push((int) -1)
0xfe: Push((int) 28229)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 29297)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Sorrow"
0x107: Call2 0xa9

0x108: Pop(1)
0x109: Push((int) 527943)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 527944)
0x10f: Push((int) 29292)
0x110: Push((int) 29298)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 29290)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Smile"
0x119: Call2 0xa9

0x11a: Pop(1)
0x11b: Push((int) 527937)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 527945)
0x121: Push((int) 29300)
0x122: Push((int) 29299)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 29300)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Smile"
0x12b: Call2 0xa9

0x12c: Pop(1)
0x12d: Push((int) 527946)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 527947)
0x133: Push((int) 29292)
0x134: Push((int) 29301)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 29292)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Sorrow"
0x13d: Call2 0xa9

0x13e: Pop(1)
0x13f: Push((int) 527939)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 527948)
0x145: Push((int) 29304)
0x146: Push((int) 29303)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 29294)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14d: Push((int) 29309)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Untrust"
0x152: Call2 0xa9

0x153: Pop(1)
0x154: Push((int) 527954)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 527956)
0x15a: Push((int) 29304)
0x15b: Push((int) 29311)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 29304)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Sorrow"
0x164: Call2 0xa9

0x165: Pop(1)
0x166: Push((int) 527949)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 527950)
0x16c: Push((int) 29310)
0x16d: Push((int) 29305)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 29310)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Sorrow"
0x176: Call2 0xa9

0x177: Pop(1)
0x178: Push((int) 527955)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 527960)
0x17e: Push((int) 29317)
0x17f: Push((int) 29316)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 527957)
0x183: Push((int) 29314)
0x184: Push((int) 29313)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 29314)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Untrust"
0x18d: Call2 0xa9

0x18e: Pop(1)
0x18f: Push((int) 527958)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 527959)
0x195: Push((int) 29319)
0x196: Push((int) 29315)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 29317)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Untrust"
0x19f: Call2 0xa9

0x1a0: Pop(1)
0x1a1: Push((int) 527961)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 527962)
0x1a7: Push((int) 29319)
0x1a8: Push((int) 29318)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 29319)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Untrust"
0x1b1: Call2 0xa9

0x1b2: Pop(1)
0x1b3: Push((int) 527963)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 526935)
0x1b9: Push((int) -1)
0x1ba: Push((int) 28227)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1bf: PushEmpty(bool)
0x1c0: Call2 0x4dc

0x1c1: Pop(0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c3: @ lshStopAnimation()
0x1c4: Pop(0)
0x1c5: GOTO 0x1c8

0x1c6: @ StopAnimation()
0x1c7: Pop(0)
0x1c8: Return(); Pop(0)

0x1c9: GOTO 0xc0

0x1ca: Return(); Pop(0)

0x1cb: PushEmpty()
0x1cc: PushEmpty(int, object)
0x1cd: Stack[-1] = Stack[-3]
0x1ce: Push(-2, 1); TaskCall(0)
0x1cf: Call2 0x0

0x1d0: Pop(-2, 1); TaskReturn
0x1d1: Pop(2)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: Call2 0x1fc

0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(bool, bool)
0x1d8: Push("cleanup")
0x1d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1db: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1dc: @ IsLoaded(Stack[-1])
0x1dd: Pop(0)
0x1de: Pop(0); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: PushEmpty(object)
0x1e1: Call2 0x42c

0x1e2: Pop(0)
0x1e3: @ RemoveActor(Stack[-1])
0x1e4: Pop(1)
0x1e5: GOTO 0x1ea

0x1e6: Push("restore")
0x1e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ea: Return(); Pop(2)

0x1eb: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ed: PushEmpty(object)
0x1ee: Call2 0x42c

0x1ef: Pop(0)
0x1f0: @ RemoveActor(Stack[-1])
0x1f1: Pop(1)
0x1f2: @ Hold()
0x1f3: Pop(0)
0x1f4: PushEmpty()
0x1f5: Call2 0x267

0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty()
0x1f9: Call2 0x276

0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x313

0x1fe: Pop(0)
0x1ff: Pop(1); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x201: @ Hold()
0x202: Pop(0)
0x203: @ GetDirection(Stack[-0])
0x204: Pop(0)
0x205: PushEmpty()
0x206: Call2 0x2ac

0x207: Pop(0)
0x208: GOTO 0x205

0x209: Return(); Pop(0)

0x20a: PushEmpty(object, object)
0x20b: Push("player")
0x20c: @ FindActor(Stack[-2], Stack[-1])
0x20d: Pop(1)
0x20e: Pop(0); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-3] = (bool) 0
0x211: Return(); Pop(2)

0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[-3]
0x214: Call2 0x30a

0x215: Stack[-5] = Stack[-2]
0x216: Pop(2)
0x217: Return(); Pop(2)

0x218: Stack[-1] = 0
0x219: Push(CvectorIndex(Stack[-0], 0))
0x21a: Push(CvectorIndex(Stack[-0], 2))
0x21b: @ RotateAsync(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(object, bool, object, bool)
0x21f: Push("player")
0x220: @ FindActor(Stack[-3], Stack[-1])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-2] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-5] = (bool) 0
0x225: Return(); Pop(4)

0x226: PushEmpty(float, object)
0x227: Stack[-1] = Stack[-4]
0x228: Call2 0x2f8

0x229: Pop(1)
0x22a: Push((float)90000.0)
0x22b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: Stack[-5] = (bool) 0
0x22e: Return(); Pop(4)

0x22f: @ CanSee(Stack[-1], Stack[-2])
0x230: Pop(0)
0x231: Stack[-5] = Stack[-1]
0x232: Return(); Pop(4)

0x233: Stack[-2] = 0
0x234: PushEmpty(float, float)
0x235: Push((int) 8)
0x236: Push((int) 16)
0x237: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(2)
0x239: Push((int) 10)
0x23a: @ SetTimer(Stack[-1], Stack[-2])
0x23b: Pop(1)
0x23c: Return(); Pop(2)

0x23d: Push((int) 10)
0x23e: @ KillTimer(Stack[-1])
0x23f: Pop(1)
0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Push((int) 10)
0x243: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x245: PushEmpty()
0x246: Call2 0x23d

0x247: Pop(0)
0x248: PushEmpty(bool)
0x249: Stack[-1] = (bool) 0
0x24a: PushEmpty(bool)
0x24b: Call2 0x313

0x24c: Pop(0)
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call2 0x21e

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x254: PushEmpty(bool)
0x255: Call2 0x20a

0x256: Pop(0)
0x257: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x258: PushEmpty(bool, object)
0x259: PushEmpty(object)
0x25a: Call2 0x42c

0x25b: Stack[-2] = Stack[-1]
0x25c: Pop(1)
0x25d: Call2 0x3a7

0x25e: Pop(2)
0x25f: GOTO 0x266

0x260: PushEmpty()
0x261: Call2 0x219

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x234

0x265: Pop(0)
0x266: Return(); Pop(0)

0x267: PushEmpty()
0x268: Call2 0x2f3

0x269: Pop(0)
0x26a: PushEmpty()
0x26b: Call2 0x23d

0x26c: Pop(0)
0x26d: @ lshStopSpeech()
0x26e: Pop(0)
0x26f: @ lshStopAnimation()
0x270: Pop(0)
0x271: @ StopAsync()
0x272: Pop(0)
0x273: @ Hold()
0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: @ StopGroup0()
0x277: Pop(0)
0x278: PushEmpty()
0x279: Call2 0x23d

0x27a: Pop(0)
0x27b: PushEmpty(string)
0x27c: Stack[-1] = "Neutral"
0x27d: Call2 0x3f7

0x27e: Pop(1)
0x27f: PushEmpty()
0x280: Call2 0x234

0x281: Pop(0)
0x282: Return(); Pop(0)

0x283: PushEmpty()
0x284: Push(Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x286: PushEmpty()
0x287: Call2 0x234

0x288: Pop(0)
0x289: GOTO 0x28e

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral"
0x28c: Call2 0x3f7

0x28d: Pop(1)
0x28e: Return(); Pop(0)

0x28f: PushEmpty(bool, bool)
0x290: @ IsOverrideActive(Stack[-1])
0x291: Pop(0)
0x292: Pop(0); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x294: EventDisable(0)
0x295: PushEmpty()
0x296: Call2 0x2f3

0x297: Pop(0)
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[-5]
0x29a: Call2 0x30a

0x29b: Pop(2)
0x29c: EventEnable(0)
0x29d: PushEmpty(object)
0x29e: Stack[-1] = Stack[-4]
0x29f: Call2 0x1cb

0x2a0: Pop(1)
0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x3f7

0x2a4: Pop(1)
0x2a5: PushEmpty()
0x2a6: Call2 0x23d

0x2a7: Pop(0)
0x2a8: PushEmpty()
0x2a9: Call2 0x234

0x2aa: Pop(0)
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2ad: @ WaitForAnimEnd()
0x2ae: Pop(0)
0x2af: PushEmpty(bool)
0x2b0: Call2 0x313

0x2b1: Pop(0)
0x2b2: Pop(1); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Return(); Pop(12)

0x2b5: PushEmpty(int)
0x2b6: Call2 0x451

0x2b7: Stack[-7] = Stack[-1]
0x2b8: Pop(1)
0x2b9: Stack[-5] = (int) 0
0x2ba: PushEmpty(bool)
0x2bb: Stack[-1] = (bool) 0
0x2bc: Push((int) 5)
0x2bd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: PushEmpty(bool)
0x2c0: Call2 0x313

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[-1] = (bool) 1
0x2c4: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2c5: Pop(0); Push((bool) Stack[-6] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c7: Push((int) 3)
0x2c8: @ Sleep(Stack[-1], Stack[-5])
0x2c9: Pop(1)
0x2ca: Pop(0); Push((bool) Stack[-4] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2ee

0x2cd: GOTO 0x2e3

0x2ce: @ irand(Stack[-3], Stack[-6])
0x2cf: Pop(0)
0x2d0: Push((int) 5)
0x2d1: @ irand(Stack[-3], Stack[-1])
0x2d2: Pop(1)
0x2d3: Push((int) 0)
0x2d4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-3] = (int) 0
0x2d7: Push("all")
0x2d8: PushEmpty(string, int)
0x2d9: Stack[-1] = Stack[-6]
0x2da: Call2 0x44a

0x2db: Pop(1)
0x2dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: @ WaitForAnimEnd(Stack[-1])
0x2df: Pop(0)
0x2e0: Pop(0); Push((bool) Stack[-1] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: GOTO 0x2ee

0x2e3: PushEmpty(bool)
0x2e4: Call2 0x2f1

0x2e5: Pop(0)
0x2e6: Pop(1); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2ee

0x2e9: @ ResetAAS()
0x2ea: Pop(0)
0x2eb: Push((int) 1)
0x2ec: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2ba

0x2ee: @ ResetAAS()
0x2ef: Pop(0)
0x2f0: Return(); Pop(12)

0x2f1: Stack[-1] = (bool) 1
0x2f2: Return(); Pop(0)

0x2f3: @ StopAnimation()
0x2f4: Pop(0)
0x2f5: @ StopGroup0()
0x2f6: Pop(0)
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2f9: @ GetPosition(Stack[-3])
0x2fa: Pop(0)
0x2fb: @@ GetPosition(Stack[-2])
0x2fc: Pop(0)
0x2fd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2fe: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ff: Return(); Pop(6)

0x300: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x301: @ GetPosition(Stack[-3])
0x302: Pop(0)
0x303: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x304: Push(CvectorIndex(Stack[-2], 0))
0x305: Push(CvectorIndex(Stack[-3], 2))
0x306: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x307: Pop(2)
0x308: Stack[-8] = Stack[-1]
0x309: Return(); Pop(6)

0x30a: PushEmpty(cvector, cvector)
0x30b: @@ GetPosition(Stack[-1])
0x30c: Pop(0)
0x30d: PushEmpty(bool, cvector)
0x30e: Stack[-1] = Stack[-3]
0x30f: Call2 0x300

0x310: Stack[-6] = Stack[-2]
0x311: Pop(2)
0x312: Return(); Pop(2)

0x313: PushEmpty(bool, bool)
0x314: @ IsLoaded(Stack[-1])
0x315: Pop(0)
0x316: Stack[-3] = Stack[-1]
0x317: Return(); Pop(2)

0x318: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x319: @@ GetPosition(Stack[-8])
0x31a: Pop(0)
0x31b: @@ GetEyesHeight(Stack[-9])
0x31c: Pop(0)
0x31d: Push(CvectorIndex(Stack[-8], 1))
0x31e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x320: @ GetPosition(Stack[-7])
0x321: Pop(0)
0x322: @ GetEyesHeight(Stack[-9])
0x323: Pop(0)
0x324: Push(CvectorIndex(Stack[-7], 1))
0x325: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x326: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x327: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x328: Push(CvectorIndex(Stack[-6], 1))
0x329: Stack[-1] = (int) 0
0x32a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x32b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x32c: Pop(1); Push(Sqrt(Stack[-1]))
0x32d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x32e: Stack[-5] = -Stack[-6]; Pop(0);
0x32f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x330: PushEmpty(cvector, cvector)
0x331: Push(CVector(0.0, 1.0, 0.0))
0x332: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x333: Call2 0x432

0x334: Pop(1)
0x335: Push((int) 25)
0x336: Pop(2); Push(Stack[-2] * Stack[-1]);
0x337: Pop(2); Push(Stack[-2] + Stack[-1]);
0x338: Push(CVector(0.0, 10.0, 0.0))
0x339: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x33a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x33b: @ IsOverrideActive(Stack[-2])
0x33c: Pop(0)
0x33d: Push(Stack[-2])
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-21] = (bool) 0
0x340: Return(); Pop(18)

0x341: @ StopWorld()
0x342: Pop(0)
0x343: @ CameraTransit(Stack[-3], Stack[-5])
0x344: Pop(0)
0x345: Push(CvectorIndex(Stack[-4], 0))
0x346: Push(CvectorIndex(Stack[-5], 2))
0x347: @ Rotate(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: PushEmpty(bool)
0x34a: Call2 0x4dc

0x34b: Pop(0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x356

0x34e: Push("head")
0x34f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x350: Pop(1)
0x351: Push(Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x353: Push("head")
0x354: @ LookAsyncCamera(Stack[-1])
0x355: Pop(1)
0x356: @ CameraWaitForPlayFinish()
0x357: Pop(0)
0x358: @ ResumeWorld()
0x359: Pop(0)
0x35a: Stack[-21] = (bool) 1
0x35b: Return(); Pop(18)

0x35c: PushEmpty(bool, bool)
0x35d: @ CameraSwitchToNormal()
0x35e: Pop(0)
0x35f: PushEmpty(bool)
0x360: Call2 0x4dc

0x361: Pop(0)
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: GOTO 0x36c

0x364: Push("head")
0x365: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x366: Pop(1)
0x367: Push(Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x369: Push("head")
0x36a: @ UnlookAsync(Stack[-1])
0x36b: Pop(1)
0x36c: Return(); Pop(2)

0x36d: PushEmpty(int, int, int, int)
0x36e: Push("voice_common")
0x36f: @ GetVariable(Stack[-1], Stack[-3])
0x370: Pop(1)
0x371: Push(Stack[-2])
0x372: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[-7]
0x375: Call2 0x3a7

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[-7]
0x37b: Call2 0x3cc

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-6] = (bool) 0
0x380: Return(); Pop(4)

0x381: Push((int) 2)
0x382: @ irand(Stack[-2], Stack[-1])
0x383: Pop(1)
0x384: Push(Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x386: Push("voice_common")
0x387: Push((int) 1)
0x388: Pop(1); Push(Stack[-4] + Stack[-1]);
0x389: Push((int) 3)
0x38a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x38b: @ SetVariable(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: GOTO 0x392

0x38e: Push("voice_common")
0x38f: Push((int) 0)
0x390: @ SetVariable(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: GOTO 0x3a5

0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[-7]
0x395: Call2 0x3cc

0x396: Pop(1)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-7]
0x39b: Call2 0x3a7

0x39c: Pop(1)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-6] = (bool) 0
0x3a0: Return(); Pop(4)

0x3a1: Push("voice_common")
0x3a2: Push((int) 1)
0x3a3: @ SetVariable(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: Stack[-6] = (bool) 1
0x3a6: Return(); Pop(4)

0x3a7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a8: Stack[-5] = "c"
0x3a9: Stack[-4] = (int) 0
0x3aa: Push((int) 1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3ac: Push((int) 1)
0x3ad: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ae: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3af: @@ HasProperty(Stack[-1], Stack[-4])
0x3b0: Pop(1)
0x3b1: Pop(0); Push((bool) Stack[-3] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: GOTO 0x3b7

0x3b4: Push((int) 1)
0x3b5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b6: GOTO 0x3aa

0x3b7: Pop(0); Push((bool) Stack[-4] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-12] = (bool) 0
0x3ba: Return(); Pop(10)

0x3bb: Stack[-2] = (int) 0
0x3bc: Push((int) 1)
0x3bd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: @ irand(Stack[-2], Stack[-4])
0x3c0: Pop(0)
0x3c1: Push((int) 1)
0x3c2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c4: @@ GetProperty(Stack[-1], Stack[-2])
0x3c5: Pop(1)
0x3c6: PushEmpty(bool, string)
0x3c7: Stack[-1] = Stack[-3]
0x3c8: Call2 0x416

0x3c9: Stack[-14] = Stack[-2]
0x3ca: Pop(2)
0x3cb: Return(); Pop(10)

0x3cc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3cd: Push("d")
0x3ce: PushEmpty(int)
0x3cf: Call2 0x441

0x3d0: Pop(0)
0x3d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d2: Push("m")
0x3d3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3d4: Stack[-4] = (int) 0
0x3d5: Push((int) 1)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d7: Push((int) 1)
0x3d8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3da: @@ HasProperty(Stack[-1], Stack[-4])
0x3db: Pop(1)
0x3dc: Pop(0); Push((bool) Stack[-3] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: GOTO 0x3e2

0x3df: Push((int) 1)
0x3e0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3e1: GOTO 0x3d5

0x3e2: Pop(0); Push((bool) Stack[-4] == 0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-12] = (bool) 0
0x3e5: Return(); Pop(10)

0x3e6: Stack[-2] = (int) 0
0x3e7: Push((int) 1)
0x3e8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: @ irand(Stack[-2], Stack[-4])
0x3eb: Pop(0)
0x3ec: Push((int) 1)
0x3ed: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ee: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ef: @@ GetProperty(Stack[-1], Stack[-2])
0x3f0: Pop(1)
0x3f1: PushEmpty(bool, string)
0x3f2: Stack[-1] = Stack[-3]
0x3f3: Call2 0x416

0x3f4: Stack[-14] = Stack[-2]
0x3f5: Pop(2)
0x3f6: Return(); Pop(10)

0x3f7: PushEmpty(bool, float, float, bool, float, float)
0x3f8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f9: Pop(0)
0x3fa: Push(Stack[-3])
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((bool) 0)
0x3ff: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(1)
0x401: GOTO 0x406

0x402: Push("Can't find lsh animation : ")
0x403: Pop(1); Push(Stack[-1] + Stack[-8]);
0x404: @ Trace(Stack[-1])
0x405: Pop(1)
0x406: Return(); Pop(6)

0x407: PushEmpty(bool, float, float, bool, float, float)
0x408: @ lshHasAnimation(Stack[-3], Stack[-8])
0x409: Pop(0)
0x40a: Push(Stack[-3])
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x40d: Pop(0)
0x40e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40f: Pop(0)
0x410: GOTO 0x415

0x411: Push("Can't find lsh animation : ")
0x412: Pop(1); Push(Stack[-1] + Stack[-9]);
0x413: @ Trace(Stack[-1])
0x414: Pop(1)
0x415: Return(); Pop(6)

0x416: PushEmpty(bool, bool)
0x417: PushEmpty(bool)
0x418: Call2 0x4dc

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x41c: Pop(0)
0x41d: Push(Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41f: @ lshPlaySpeech(Stack[-3])
0x420: Pop(0)
0x421: Stack[-4] = (bool) 1
0x422: Return(); Pop(2)

0x423: Stack[-4] = (bool) 0
0x424: Return(); Pop(2)

0x425: PushEmpty(bool)
0x426: Call2 0x4dc

0x427: Pop(0)
0x428: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x429: @ lshStopSpeech()
0x42a: Pop(0)
0x42b: Return(); Pop(0)

0x42c: PushEmpty(object, object)
0x42d: @ self(Stack[-1])
0x42e: Pop(0)
0x42f: Stack[-3] = Stack[-1]
0x430: Return(); Pop(2)

0x431: Stack[-1] = 0
0x432: PushEmpty(float, float)
0x433: Pop(0); Push(Stack[-3] | Stack[-3]);
0x434: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x435: Push((float)0.0)
0x436: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x439: Return(); Pop(2)

0x43a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x43b: Return(); Pop(2)

0x43c: PushEmpty(int, int)
0x43d: @ GetVariable(Stack[-3], Stack[-1])
0x43e: Pop(0)
0x43f: Stack[-4] = Stack[-1]
0x440: Return(); Pop(2)

0x441: PushEmpty(float, float)
0x442: @ GetGameTime(Stack[-1])
0x443: Pop(0)
0x444: Push((int) 1)
0x445: PushEmpty(int)
0x446: Push((int) 24)
0x447: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x448: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x449: Return(); Pop(2)

0x44a: PushEmpty(string, string)
0x44b: Stack[-1] = "idle"
0x44c: Push(Stack[-3])
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x44f: Stack[-4] = Stack[-1]
0x450: Return(); Pop(2)

0x451: PushEmpty(int, bool, int, bool)
0x452: Stack[-2] = (int) 0
0x453: Push("all")
0x454: PushEmpty(string, int)
0x455: Stack[-1] = Stack[-5]
0x456: Call2 0x44a

0x457: Pop(1)
0x458: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Pop(0); Push((bool) Stack[-1] == 0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: GOTO 0x460

0x45d: Push((int) 1)
0x45e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x45f: GOTO 0x453

0x460: Stack[-5] = Stack[-2]
0x461: Return(); Pop(4)

0x462: PushEmpty()
0x463: Push("k10q01")
0x464: Push((int) 1)
0x465: @ SetVariable(Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: PushEmpty()
0x468: Call2 0x480

0x469: Pop(0)
0x46a: PushEmpty()
0x46b: Call2 0x48d

0x46c: Pop(0)
0x46d: Return(); Pop(0)

0x46e: PushEmpty()
0x46f: Push("k10q01KnowAboutRubin")
0x470: Push((int) 1)
0x471: @ SetVariable(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: PushEmpty(int, string)
0x476: Stack[-1] = "k10q01"
0x477: Call2 0x43c

0x478: Pop(1)
0x479: Push((int) 0)
0x47a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-2] = (bool) 1
0x47d: Return(); Pop(0)

0x47e: Stack[-2] = (bool) 0
0x47f: Return(); Pop(0)

0x480: PushEmpty(object, object)
0x481: Push((int) 447)
0x482: Push((int) 1)
0x483: Push((int) 527005)
0x484: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: PushEmpty(bool, object, int)
0x487: Stack[-2] = Stack[-4]
0x488: Stack[-1] = (int) -1
0x489: Call2 0x4a7

0x48a: Pop(3)
0x48b: Return(); Pop(2)

0x48c: Stack[-1] = 0
0x48d: PushEmpty(object, object)
0x48e: Push((int) 448)
0x48f: Push((int) 1)
0x490: Push((int) 527006)
0x491: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: PushEmpty(bool, object, int)
0x494: Stack[-2] = Stack[-4]
0x495: Stack[-1] = (int) 447
0x496: Call2 0x4a7

0x497: Pop(3)
0x498: Return(); Pop(2)

0x499: Stack[-1] = 0
0x49a: PushEmpty(object, object)
0x49b: @ GetDiaryRoot(Stack[-1])
0x49c: Pop(0)
0x49d: Pop(0); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49f: Push("Can't retrieve diary root")
0x4a0: @ Trace(Stack[-1])
0x4a1: Pop(1)
0x4a2: Stack[-3] = (bool) 0
0x4a3: Return(); Pop(2)

0x4a4: Stack[-3] = Stack[-1]
0x4a5: Return(); Pop(2)

0x4a6: Stack[-1] = 0
0x4a7: PushEmpty(object, object, int, object, object, int)
0x4a8: PushEmpty(object)
0x4a9: Call2 0x49a

0x4aa: Stack[-4] = Stack[-1]
0x4ab: Pop(1)
0x4ac: @@ Find(Stack[-7], Stack[-2])
0x4ad: Pop(0)
0x4ae: Pop(0); Push((bool) Stack[-2] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b0: Push("Can't find diary parent with id: ")
0x4b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b2: @ Trace(Stack[-1])
0x4b3: Pop(1)
0x4b4: Stack[-9] = (bool) 0
0x4b5: Return(); Pop(6)

0x4b6: @@ AddChild(Stack[-8])
0x4b7: Pop(0)
0x4b8: Push((int) 7)
0x4b9: @ SendWorldWndMessage(Stack[-1])
0x4ba: Pop(1)
0x4bb: @@ GetCategory(Stack[-1])
0x4bc: Pop(0)
0x4bd: @ SetDiarySection(Stack[-1])
0x4be: Pop(0)
0x4bf: Stack[-9] = (bool) 0
0x4c0: Return(); Pop(6)

0x4c1: Stack[-2] = 0
0x4c2: Stack[-3] = 0
0x4c3: PushEmpty(int, int)
0x4c4: Push("branch")
0x4c5: @ GetVariable(Stack[-1], Stack[-2])
0x4c6: Pop(1)
0x4c7: Push((int) 0)
0x4c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4ca: Stack[-3] = (int) 1
0x4cb: Return(); Pop(2)

0x4cc: GOTO 0x4d2

0x4cd: Push((int) 1)
0x4ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-3] = (int) 2
0x4d1: Return(); Pop(2)

0x4d2: Stack[-3] = (int) 3
0x4d3: Return(); Pop(2)

0x4d4: Stack[-1] = (int) 515573
0x4d5: Return(); Pop(0)

0x4d6: Stack[-1] = (int) 504032
0x4d7: Return(); Pop(0)

0x4d8: Stack[-1] = "ui/NPC_Bakalavr.png"
0x4d9: Return(); Pop(0)

0x4da: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x4db: Return(); Pop(0)

0x4dc: Stack[-1] = (bool) 1
0x4dd: Return(); Pop(0)

