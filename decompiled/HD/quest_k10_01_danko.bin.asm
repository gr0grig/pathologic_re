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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1e7
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1eb Vars = (string)
		EVENT_6 Op = 0x1ff Vars = ()
		EVENT_5 Op = 0x20c Vars = ()
		EVENT_7 Op = 0x255 Vars = (int)
		EVENT_45 Op = 0x297 Vars = (bool)
		EVENT_0 Op = 0x2a3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x32c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4ec

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4ea

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4ee

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4f0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4d9

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
0x31: Call2 0x442

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x383

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
0x48: Call2 0x371

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
0x59: Call2 0x48a

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x484

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
0x8c: Call2 0x4f2

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x40d

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
0xab: Call2 0x4f2

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
0xbb: Call2 0x41d

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x43b

0xc4: Pop(0)
0xc5: Push((int) 28227)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x478

0xcc: Pop(2)
0xcd: Push((int) 28226)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x48a

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x484

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
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

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
0x149: Push((int) 527940)
0x14a: Push((int) 29294)
0x14b: Push((int) 29293)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 29294)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0xa9

0x155: Pop(1)
0x156: Push((int) 527941)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 527953)
0x15c: Push((int) 29309)
0x15d: Push((int) 29308)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 29309)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Untrust"
0x166: Call2 0xa9

0x167: Pop(1)
0x168: Push((int) 527954)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 527956)
0x16e: Push((int) 29304)
0x16f: Push((int) 29311)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 29304)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Sorrow"
0x178: Call2 0xa9

0x179: Pop(1)
0x17a: Push((int) 527949)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 527950)
0x180: Push((int) 29310)
0x181: Push((int) 29305)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 29310)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Sorrow"
0x18a: Call2 0xa9

0x18b: Pop(1)
0x18c: Push((int) 527955)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 527960)
0x192: Push((int) 29317)
0x193: Push((int) 29316)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 527957)
0x197: Push((int) 29314)
0x198: Push((int) 29313)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 29314)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Untrust"
0x1a1: Call2 0xa9

0x1a2: Pop(1)
0x1a3: Push((int) 527958)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 527959)
0x1a9: Push((int) 29319)
0x1aa: Push((int) 29315)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 29317)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Untrust"
0x1b3: Call2 0xa9

0x1b4: Pop(1)
0x1b5: Push((int) 527961)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 527962)
0x1bb: Push((int) 29319)
0x1bc: Push((int) 29318)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 29319)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Untrust"
0x1c5: Call2 0xa9

0x1c6: Pop(1)
0x1c7: Push((int) 527963)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 526935)
0x1cd: Push((int) -1)
0x1ce: Push((int) 28227)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d3: PushEmpty(bool)
0x1d4: Call2 0x4f2

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: @ lshStopAnimation()
0x1d8: Pop(0)
0x1d9: GOTO 0x1dc

0x1da: @ StopAnimation()
0x1db: Pop(0)
0x1dc: Return(); Pop(0)

0x1dd: GOTO 0xc0

0x1de: Return(); Pop(0)

0x1df: PushEmpty()
0x1e0: PushEmpty(int, object)
0x1e1: Stack[-1] = Stack[-3]
0x1e2: Push(-2, 1); TaskCall(0)
0x1e3: Call2 0x0

0x1e4: Pop(-2, 1); TaskReturn
0x1e5: Pop(2)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty()
0x1e8: Call2 0x210

0x1e9: Pop(0)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(bool, bool)
0x1ec: Push("cleanup")
0x1ed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1ef: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1f0: @ IsLoaded(Stack[-1])
0x1f1: Pop(0)
0x1f2: Pop(0); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f4: PushEmpty(object)
0x1f5: Call2 0x442

0x1f6: Pop(0)
0x1f7: @ RemoveActor(Stack[-1])
0x1f8: Pop(1)
0x1f9: GOTO 0x1fe

0x1fa: Push("restore")
0x1fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1fe: Return(); Pop(2)

0x1ff: Push( Stack[1 + Tasks[-1].StackPointer] )
0x200: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x201: PushEmpty(object)
0x202: Call2 0x442

0x203: Pop(0)
0x204: @ RemoveActor(Stack[-1])
0x205: Pop(1)
0x206: @ Hold()
0x207: Pop(0)
0x208: PushEmpty()
0x209: Call2 0x27b

0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: Call2 0x28a

0x20e: Pop(0)
0x20f: Return(); Pop(0)

0x210: PushEmpty(bool)
0x211: Call2 0x327

0x212: Pop(0)
0x213: Pop(1); Push((bool) Stack[-1] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: @ Hold()
0x216: Pop(0)
0x217: @ GetDirection(Stack[-0])
0x218: Pop(0)
0x219: PushEmpty()
0x21a: Call2 0x2c0

0x21b: Pop(0)
0x21c: GOTO 0x219

0x21d: Return(); Pop(0)

0x21e: PushEmpty(object, object)
0x21f: Push("player")
0x220: @ FindActor(Stack[-2], Stack[-1])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-3] = (bool) 0
0x225: Return(); Pop(2)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[-3]
0x228: Call2 0x31e

0x229: Stack[-5] = Stack[-2]
0x22a: Pop(2)
0x22b: Return(); Pop(2)

0x22c: Stack[-1] = 0
0x22d: Push(CvectorIndex(Stack[-0], 0))
0x22e: Push(CvectorIndex(Stack[-0], 2))
0x22f: @ RotateAsync(Stack[-2], Stack[-1])
0x230: Pop(2)
0x231: Return(); Pop(0)

0x232: PushEmpty(object, bool, object, bool)
0x233: Push("player")
0x234: @ FindActor(Stack[-3], Stack[-1])
0x235: Pop(1)
0x236: Pop(0); Push((bool) Stack[-2] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-5] = (bool) 0
0x239: Return(); Pop(4)

0x23a: PushEmpty(float, object)
0x23b: Stack[-1] = Stack[-4]
0x23c: Call2 0x30c

0x23d: Pop(1)
0x23e: Push((float)90000.0)
0x23f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x241: Stack[-5] = (bool) 0
0x242: Return(); Pop(4)

0x243: @ CanSee(Stack[-1], Stack[-2])
0x244: Pop(0)
0x245: Stack[-5] = Stack[-1]
0x246: Return(); Pop(4)

0x247: Stack[-2] = 0
0x248: PushEmpty(float, float)
0x249: Push((int) 8)
0x24a: Push((int) 16)
0x24b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Push((int) 10)
0x24e: @ SetTimer(Stack[-1], Stack[-2])
0x24f: Pop(1)
0x250: Return(); Pop(2)

0x251: Push((int) 10)
0x252: @ KillTimer(Stack[-1])
0x253: Pop(1)
0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: Push((int) 10)
0x257: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x259: PushEmpty()
0x25a: Call2 0x251

0x25b: Pop(0)
0x25c: PushEmpty(bool)
0x25d: Stack[-1] = (bool) 0
0x25e: PushEmpty(bool)
0x25f: Call2 0x327

0x260: Pop(0)
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call2 0x232

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 1
0x267: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x268: PushEmpty(bool)
0x269: Call2 0x21e

0x26a: Pop(0)
0x26b: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26c: PushEmpty(bool, object)
0x26d: PushEmpty(object)
0x26e: Call2 0x442

0x26f: Stack[-2] = Stack[-1]
0x270: Pop(1)
0x271: Call2 0x3bd

0x272: Pop(2)
0x273: GOTO 0x27a

0x274: PushEmpty()
0x275: Call2 0x22d

0x276: Pop(0)
0x277: PushEmpty()
0x278: Call2 0x248

0x279: Pop(0)
0x27a: Return(); Pop(0)

0x27b: PushEmpty()
0x27c: Call2 0x307

0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x251

0x280: Pop(0)
0x281: @ lshStopSpeech()
0x282: Pop(0)
0x283: @ lshStopAnimation()
0x284: Pop(0)
0x285: @ StopAsync()
0x286: Pop(0)
0x287: @ Hold()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: @ StopGroup0()
0x28b: Pop(0)
0x28c: PushEmpty()
0x28d: Call2 0x251

0x28e: Pop(0)
0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0x40d

0x292: Pop(1)
0x293: PushEmpty()
0x294: Call2 0x248

0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: PushEmpty()
0x298: Push(Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29a: PushEmpty()
0x29b: Call2 0x248

0x29c: Pop(0)
0x29d: GOTO 0x2a2

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Neutral"
0x2a0: Call2 0x40d

0x2a1: Pop(1)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(bool, bool)
0x2a4: @ IsOverrideActive(Stack[-1])
0x2a5: Pop(0)
0x2a6: Pop(0); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2a8: EventDisable(0)
0x2a9: PushEmpty()
0x2aa: Call2 0x307

0x2ab: Pop(0)
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-5]
0x2ae: Call2 0x31e

0x2af: Pop(2)
0x2b0: EventEnable(0)
0x2b1: PushEmpty(object)
0x2b2: Stack[-1] = Stack[-4]
0x2b3: Call2 0x1df

0x2b4: Pop(1)
0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call2 0x40d

0x2b8: Pop(1)
0x2b9: PushEmpty()
0x2ba: Call2 0x251

0x2bb: Pop(0)
0x2bc: PushEmpty()
0x2bd: Call2 0x248

0x2be: Pop(0)
0x2bf: Return(); Pop(2)

0x2c0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2c1: @ WaitForAnimEnd()
0x2c2: Pop(0)
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x327

0x2c5: Pop(0)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(12)

0x2c9: PushEmpty(int)
0x2ca: Call2 0x467

0x2cb: Stack[-7] = Stack[-1]
0x2cc: Pop(1)
0x2cd: Stack[-5] = (int) 0
0x2ce: PushEmpty(bool)
0x2cf: Stack[-1] = (bool) 0
0x2d0: Push((int) 5)
0x2d1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x327

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-1] = (bool) 1
0x2d8: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2d9: Pop(0); Push((bool) Stack[-6] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2db: Push((int) 3)
0x2dc: @ Sleep(Stack[-1], Stack[-5])
0x2dd: Pop(1)
0x2de: Pop(0); Push((bool) Stack[-4] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: GOTO 0x302

0x2e1: GOTO 0x2f7

0x2e2: @ irand(Stack[-3], Stack[-6])
0x2e3: Pop(0)
0x2e4: Push((int) 5)
0x2e5: @ irand(Stack[-3], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push((int) 0)
0x2e8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-3] = (int) 0
0x2eb: Push("all")
0x2ec: PushEmpty(string, int)
0x2ed: Stack[-1] = Stack[-6]
0x2ee: Call2 0x460

0x2ef: Pop(1)
0x2f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: @ WaitForAnimEnd(Stack[-1])
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-1] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x302

0x2f7: PushEmpty(bool)
0x2f8: Call2 0x305

0x2f9: Pop(0)
0x2fa: Pop(1); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x302

0x2fd: @ ResetAAS()
0x2fe: Pop(0)
0x2ff: Push((int) 1)
0x300: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x301: GOTO 0x2ce

0x302: @ ResetAAS()
0x303: Pop(0)
0x304: Return(); Pop(12)

0x305: Stack[-1] = (bool) 1
0x306: Return(); Pop(0)

0x307: @ StopAnimation()
0x308: Pop(0)
0x309: @ StopGroup0()
0x30a: Pop(0)
0x30b: Return(); Pop(0)

0x30c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x30d: @ GetPosition(Stack[-3])
0x30e: Pop(0)
0x30f: @@ GetPosition(Stack[-2])
0x310: Pop(0)
0x311: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x312: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x313: Return(); Pop(6)

0x314: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x315: @ GetPosition(Stack[-3])
0x316: Pop(0)
0x317: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x318: Push(CvectorIndex(Stack[-2], 0))
0x319: Push(CvectorIndex(Stack[-3], 2))
0x31a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31b: Pop(2)
0x31c: Stack[-8] = Stack[-1]
0x31d: Return(); Pop(6)

0x31e: PushEmpty(cvector, cvector)
0x31f: @@ GetPosition(Stack[-1])
0x320: Pop(0)
0x321: PushEmpty(bool, cvector)
0x322: Stack[-1] = Stack[-3]
0x323: Call2 0x314

0x324: Stack[-6] = Stack[-2]
0x325: Pop(2)
0x326: Return(); Pop(2)

0x327: PushEmpty(bool, bool)
0x328: @ IsLoaded(Stack[-1])
0x329: Pop(0)
0x32a: Stack[-3] = Stack[-1]
0x32b: Return(); Pop(2)

0x32c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x32d: @@ GetPosition(Stack[-8])
0x32e: Pop(0)
0x32f: @@ GetEyesHeight(Stack[-9])
0x330: Pop(0)
0x331: Push(CvectorIndex(Stack[-8], 1))
0x332: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x333: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x334: @ GetPosition(Stack[-7])
0x335: Pop(0)
0x336: @ GetEyesHeight(Stack[-9])
0x337: Pop(0)
0x338: Push(CvectorIndex(Stack[-7], 1))
0x339: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x33a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x33b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x33c: Push(CvectorIndex(Stack[-6], 1))
0x33d: Stack[-1] = (int) 0
0x33e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x33f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x340: Pop(1); Push(Sqrt(Stack[-1]))
0x341: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x342: Stack[-5] = -Stack[-6]; Pop(0);
0x343: Pop(0); Push(Stack[-6] * Stack[-19]);
0x344: PushEmpty(cvector, cvector)
0x345: Push(CVector(0.0, 1.0, 0.0))
0x346: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x347: Call2 0x448

0x348: Pop(1)
0x349: Push((int) 25)
0x34a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x34b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34c: Push(CVector(0.0, 10.0, 0.0))
0x34d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x34e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x34f: @ IsOverrideActive(Stack[-2])
0x350: Pop(0)
0x351: Push(Stack[-2])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-21] = (bool) 0
0x354: Return(); Pop(18)

0x355: @ StopWorld()
0x356: Pop(0)
0x357: Push((bool) 1)
0x358: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x359: Pop(1)
0x35a: Push(CvectorIndex(Stack[-4], 0))
0x35b: Push(CvectorIndex(Stack[-5], 2))
0x35c: @ Rotate(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: PushEmpty(bool)
0x35f: Call2 0x4f2

0x360: Pop(0)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: GOTO 0x36b

0x363: Push("head")
0x364: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x365: Pop(1)
0x366: Push(Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x368: Push("head")
0x369: @ LookAsyncCamera(Stack[-1])
0x36a: Pop(1)
0x36b: @ CameraWaitForPlayFinish()
0x36c: Pop(0)
0x36d: @ ResumeWorld()
0x36e: Pop(0)
0x36f: Stack[-21] = (bool) 1
0x370: Return(); Pop(18)

0x371: PushEmpty(bool, bool)
0x372: Push((bool) 1)
0x373: @ CameraSwitchToNormal(Stack[-1])
0x374: Pop(1)
0x375: PushEmpty(bool)
0x376: Call2 0x4f2

0x377: Pop(0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x382

0x37a: Push("head")
0x37b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x37c: Pop(1)
0x37d: Push(Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37f: Push("head")
0x380: @ UnlookAsync(Stack[-1])
0x381: Pop(1)
0x382: Return(); Pop(2)

0x383: PushEmpty(int, int, int, int)
0x384: Push("voice_common")
0x385: @ GetVariable(Stack[-1], Stack[-3])
0x386: Pop(1)
0x387: Push(Stack[-2])
0x388: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x389: PushEmpty(bool, object)
0x38a: Stack[-1] = Stack[-7]
0x38b: Call2 0x3bd

0x38c: Pop(1)
0x38d: Pop(1); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38f: PushEmpty(bool, object)
0x390: Stack[-1] = Stack[-7]
0x391: Call2 0x3e2

0x392: Pop(1)
0x393: Pop(1); Push((bool) Stack[-1] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: Stack[-6] = (bool) 0
0x396: Return(); Pop(4)

0x397: Push((int) 2)
0x398: @ irand(Stack[-2], Stack[-1])
0x399: Pop(1)
0x39a: Push(Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39c: Push("voice_common")
0x39d: Push((int) 1)
0x39e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x39f: Push((int) 3)
0x3a0: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3a1: @ SetVariable(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: GOTO 0x3a8

0x3a4: Push("voice_common")
0x3a5: Push((int) 0)
0x3a6: @ SetVariable(Stack[-2], Stack[-1])
0x3a7: Pop(2)
0x3a8: GOTO 0x3bb

0x3a9: PushEmpty(bool, object)
0x3aa: Stack[-1] = Stack[-7]
0x3ab: Call2 0x3e2

0x3ac: Pop(1)
0x3ad: Pop(1); Push((bool) Stack[-1] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3af: PushEmpty(bool, object)
0x3b0: Stack[-1] = Stack[-7]
0x3b1: Call2 0x3bd

0x3b2: Pop(1)
0x3b3: Pop(1); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-6] = (bool) 0
0x3b6: Return(); Pop(4)

0x3b7: Push("voice_common")
0x3b8: Push((int) 1)
0x3b9: @ SetVariable(Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: Stack[-6] = (bool) 1
0x3bc: Return(); Pop(4)

0x3bd: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3be: Stack[-5] = "c"
0x3bf: Stack[-4] = (int) 0
0x3c0: Push((int) 1)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c2: Push((int) 1)
0x3c3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3c4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c5: @@ HasProperty(Stack[-1], Stack[-4])
0x3c6: Pop(1)
0x3c7: Pop(0); Push((bool) Stack[-3] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3cd

0x3ca: Push((int) 1)
0x3cb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3cc: GOTO 0x3c0

0x3cd: Pop(0); Push((bool) Stack[-4] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: Stack[-12] = (bool) 0
0x3d0: Return(); Pop(10)

0x3d1: Stack[-2] = (int) 0
0x3d2: Push((int) 1)
0x3d3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: @ irand(Stack[-2], Stack[-4])
0x3d6: Pop(0)
0x3d7: Push((int) 1)
0x3d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3da: @@ GetProperty(Stack[-1], Stack[-2])
0x3db: Pop(1)
0x3dc: PushEmpty(bool, string)
0x3dd: Stack[-1] = Stack[-3]
0x3de: Call2 0x42c

0x3df: Stack[-14] = Stack[-2]
0x3e0: Pop(2)
0x3e1: Return(); Pop(10)

0x3e2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3e3: Push("d")
0x3e4: PushEmpty(int)
0x3e5: Call2 0x457

0x3e6: Pop(0)
0x3e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e8: Push("m")
0x3e9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3ea: Stack[-4] = (int) 0
0x3eb: Push((int) 1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f0: @@ HasProperty(Stack[-1], Stack[-4])
0x3f1: Pop(1)
0x3f2: Pop(0); Push((bool) Stack[-3] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: GOTO 0x3f8

0x3f5: Push((int) 1)
0x3f6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f7: GOTO 0x3eb

0x3f8: Pop(0); Push((bool) Stack[-4] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-12] = (bool) 0
0x3fb: Return(); Pop(10)

0x3fc: Stack[-2] = (int) 0
0x3fd: Push((int) 1)
0x3fe: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @ irand(Stack[-2], Stack[-4])
0x401: Pop(0)
0x402: Push((int) 1)
0x403: Pop(1); Push(Stack[-3] + Stack[-1]);
0x404: Pop(1); Push(Stack[-6] + Stack[-1]);
0x405: @@ GetProperty(Stack[-1], Stack[-2])
0x406: Pop(1)
0x407: PushEmpty(bool, string)
0x408: Stack[-1] = Stack[-3]
0x409: Call2 0x42c

0x40a: Stack[-14] = Stack[-2]
0x40b: Pop(2)
0x40c: Return(); Pop(10)

0x40d: PushEmpty(bool, float, float, bool, float, float)
0x40e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x40f: Pop(0)
0x410: Push(Stack[-3])
0x411: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x412: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x413: Pop(0)
0x414: Push((bool) 0)
0x415: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(1)
0x417: GOTO 0x41c

0x418: Push("Can't find lsh animation : ")
0x419: Pop(1); Push(Stack[-1] + Stack[-8]);
0x41a: @ Trace(Stack[-1])
0x41b: Pop(1)
0x41c: Return(); Pop(6)

0x41d: PushEmpty(bool, float, float, bool, float, float)
0x41e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x41f: Pop(0)
0x420: Push(Stack[-3])
0x421: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x422: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x423: Pop(0)
0x424: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x425: Pop(0)
0x426: GOTO 0x42b

0x427: Push("Can't find lsh animation : ")
0x428: Pop(1); Push(Stack[-1] + Stack[-9]);
0x429: @ Trace(Stack[-1])
0x42a: Pop(1)
0x42b: Return(); Pop(6)

0x42c: PushEmpty(bool, bool)
0x42d: PushEmpty(bool)
0x42e: Call2 0x4f2

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x431: @ lshHasSpeech(Stack[-1], Stack[-3])
0x432: Pop(0)
0x433: Push(Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x435: @ lshPlaySpeech(Stack[-3])
0x436: Pop(0)
0x437: Stack[-4] = (bool) 1
0x438: Return(); Pop(2)

0x439: Stack[-4] = (bool) 0
0x43a: Return(); Pop(2)

0x43b: PushEmpty(bool)
0x43c: Call2 0x4f2

0x43d: Pop(0)
0x43e: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43f: @ lshStopSpeech()
0x440: Pop(0)
0x441: Return(); Pop(0)

0x442: PushEmpty(object, object)
0x443: @ self(Stack[-1])
0x444: Pop(0)
0x445: Stack[-3] = Stack[-1]
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty(float, float)
0x449: Pop(0); Push(Stack[-3] | Stack[-3]);
0x44a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x44b: Push((float)0.0)
0x44c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x44f: Return(); Pop(2)

0x450: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x451: Return(); Pop(2)

0x452: PushEmpty(int, int)
0x453: @ GetVariable(Stack[-3], Stack[-1])
0x454: Pop(0)
0x455: Stack[-4] = Stack[-1]
0x456: Return(); Pop(2)

0x457: PushEmpty(float, float)
0x458: @ GetGameTime(Stack[-1])
0x459: Pop(0)
0x45a: Push((int) 1)
0x45b: PushEmpty(int)
0x45c: Push((int) 24)
0x45d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x45f: Return(); Pop(2)

0x460: PushEmpty(string, string)
0x461: Stack[-1] = "idle"
0x462: Push(Stack[-3])
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x465: Stack[-4] = Stack[-1]
0x466: Return(); Pop(2)

0x467: PushEmpty(int, bool, int, bool)
0x468: Stack[-2] = (int) 0
0x469: Push("all")
0x46a: PushEmpty(string, int)
0x46b: Stack[-1] = Stack[-5]
0x46c: Call2 0x460

0x46d: Pop(1)
0x46e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Pop(0); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x476

0x473: Push((int) 1)
0x474: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x475: GOTO 0x469

0x476: Stack[-5] = Stack[-2]
0x477: Return(); Pop(4)

0x478: PushEmpty()
0x479: Push("k10q01")
0x47a: Push((int) 1)
0x47b: @ SetVariable(Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: PushEmpty()
0x47e: Call2 0x496

0x47f: Pop(0)
0x480: PushEmpty()
0x481: Call2 0x4a3

0x482: Pop(0)
0x483: Return(); Pop(0)

0x484: PushEmpty()
0x485: Push("k10q01KnowAboutRubin")
0x486: Push((int) 1)
0x487: @ SetVariable(Stack[-2], Stack[-1])
0x488: Pop(2)
0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: PushEmpty(int, string)
0x48c: Stack[-1] = "k10q01"
0x48d: Call2 0x452

0x48e: Pop(1)
0x48f: Push((int) 0)
0x490: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-2] = (bool) 1
0x493: Return(); Pop(0)

0x494: Stack[-2] = (bool) 0
0x495: Return(); Pop(0)

0x496: PushEmpty(object, object)
0x497: Push((int) 447)
0x498: Push((int) 1)
0x499: Push((int) 527005)
0x49a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: PushEmpty(bool, object, int)
0x49d: Stack[-2] = Stack[-4]
0x49e: Stack[-1] = (int) -1
0x49f: Call2 0x4bd

0x4a0: Pop(3)
0x4a1: Return(); Pop(2)

0x4a2: Stack[-1] = 0
0x4a3: PushEmpty(object, object)
0x4a4: Push((int) 448)
0x4a5: Push((int) 1)
0x4a6: Push((int) 527006)
0x4a7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(3)
0x4a9: PushEmpty(bool, object, int)
0x4aa: Stack[-2] = Stack[-4]
0x4ab: Stack[-1] = (int) 447
0x4ac: Call2 0x4bd

0x4ad: Pop(3)
0x4ae: Return(); Pop(2)

0x4af: Stack[-1] = 0
0x4b0: PushEmpty(object, object)
0x4b1: @ GetDiaryRoot(Stack[-1])
0x4b2: Pop(0)
0x4b3: Pop(0); Push((bool) Stack[-1] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b5: Push("Can't retrieve diary root")
0x4b6: @ Trace(Stack[-1])
0x4b7: Pop(1)
0x4b8: Stack[-3] = (bool) 0
0x4b9: Return(); Pop(2)

0x4ba: Stack[-3] = Stack[-1]
0x4bb: Return(); Pop(2)

0x4bc: Stack[-1] = 0
0x4bd: PushEmpty(object, object, int, object, object, int)
0x4be: PushEmpty(object)
0x4bf: Call2 0x4b0

0x4c0: Stack[-4] = Stack[-1]
0x4c1: Pop(1)
0x4c2: @@ Find(Stack[-7], Stack[-2])
0x4c3: Pop(0)
0x4c4: Pop(0); Push((bool) Stack[-2] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c6: Push("Can't find diary parent with id: ")
0x4c7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c8: @ Trace(Stack[-1])
0x4c9: Pop(1)
0x4ca: Stack[-9] = (bool) 0
0x4cb: Return(); Pop(6)

0x4cc: @@ AddChild(Stack[-8])
0x4cd: Pop(0)
0x4ce: Push((int) 7)
0x4cf: @ SendWorldWndMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ GetCategory(Stack[-1])
0x4d2: Pop(0)
0x4d3: @ SetDiarySection(Stack[-1])
0x4d4: Pop(0)
0x4d5: Stack[-9] = (bool) 0
0x4d6: Return(); Pop(6)

0x4d7: Stack[-2] = 0
0x4d8: Stack[-3] = 0
0x4d9: PushEmpty(int, int)
0x4da: Push("branch")
0x4db: @ GetVariable(Stack[-1], Stack[-2])
0x4dc: Pop(1)
0x4dd: Push((int) 0)
0x4de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e0: Stack[-3] = (int) 1
0x4e1: Return(); Pop(2)

0x4e2: GOTO 0x4e8

0x4e3: Push((int) 1)
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-3] = (int) 2
0x4e7: Return(); Pop(2)

0x4e8: Stack[-3] = (int) 3
0x4e9: Return(); Pop(2)

0x4ea: Stack[-1] = (int) 515573
0x4eb: Return(); Pop(0)

0x4ec: Stack[-1] = (int) 504032
0x4ed: Return(); Pop(0)

0x4ee: Stack[-1] = "ui/NPC_Bakalavr.png"
0x4ef: Return(); Pop(0)

0x4f0: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x4f1: Return(); Pop(0)

0x4f2: Stack[-1] = (bool) 1
0x4f3: Return(); Pop(0)

