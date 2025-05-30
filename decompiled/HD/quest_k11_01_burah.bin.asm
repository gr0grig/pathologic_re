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
	Doubt
	Sorrow
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
	k11q01
	quest_k11_01
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1cc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1d0 Vars = (string)
		EVENT_6 Op = 0x1e4 Vars = ()
		EVENT_5 Op = 0x1f1 Vars = ()
		EVENT_7 Op = 0x23a Vars = (int)
		EVENT_45 Op = 0x27c Vars = (bool)
		EVENT_0 Op = 0x288 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x311

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4de

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4dc

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4e0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4e2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4cb

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
0x31: Call2 0x427

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x368

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
0x48: Call2 0x356

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 527220)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x47c

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 527221)
0x66: Push((int) 28839)
0x67: Push((int) 28529)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 527224)
0x6b: Push((int) -1)
0x6c: Push((int) 28532)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x4e4

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x3f2

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x4e4

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x402

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x420

0xab: Pop(0)
0xac: Push((int) 28869)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x469

0xb3: Pop(2)
0xb4: Push((int) 28870)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x469

0xbb: Pop(2)
0xbc: Push((int) 28859)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x472

0xc3: Pop(2)
0xc4: Push((int) 28528)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xc7: PushEmpty(string)
0xc8: Stack[-1] = "Neutral"
0xc9: Call2 0x90

0xca: Pop(1)
0xcb: Push((int) 527220)
0xcc: @@ SetMessage(Stack[-1])
0xcd: Pop(1)
0xce: @@ ClearReplies()
0xcf: Pop(0)
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x47c

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 527221)
0xd6: Push((int) 28839)
0xd7: Push((int) 28529)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 527224)
0xdb: Push((int) -1)
0xdc: Push((int) 28532)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 28839)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Doubt"
0xe5: Call2 0x90

0xe6: Pop(1)
0xe7: Push((int) 527507)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 527508)
0xed: Push((int) 28842)
0xee: Push((int) 28840)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 527509)
0xf2: Push((int) 28842)
0xf3: Push((int) 28841)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 28842)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Sorrow"
0xfc: Call2 0x90

0xfd: Pop(1)
0xfe: Push((int) 527510)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 527511)
0x104: Push((int) 28845)
0x105: Push((int) 28843)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 527512)
0x109: Push((int) 28845)
0x10a: Push((int) 28844)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 28845)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Sorrow"
0x113: Call2 0x90

0x114: Pop(1)
0x115: Push((int) 527513)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 527514)
0x11b: Push((int) 28850)
0x11c: Push((int) 28846)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 28850)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Doubt"
0x125: Call2 0x90

0x126: Pop(1)
0x127: Push((int) 527516)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 527517)
0x12d: Push((int) 28853)
0x12e: Push((int) 28851)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 527518)
0x132: Push((int) 28853)
0x133: Push((int) 28852)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 28853)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Doubt"
0x13c: Call2 0x90

0x13d: Pop(1)
0x13e: Push((int) 527519)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 527520)
0x144: Push((int) 28530)
0x145: Push((int) 28855)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 527521)
0x149: Push((int) 28530)
0x14a: Push((int) 28856)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 28530)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Doubt"
0x153: Call2 0x90

0x154: Pop(1)
0x155: Push((int) 527222)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 527223)
0x15b: Push((int) 28863)
0x15c: Push((int) 28531)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 527523)
0x160: Push((int) -1)
0x161: Push((int) 28859)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 28863)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Sorrow"
0x16a: Call2 0x90

0x16b: Pop(1)
0x16c: Push((int) 527526)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 527527)
0x172: Push((int) 28866)
0x173: Push((int) 28864)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 527528)
0x177: Push((int) 28866)
0x178: Push((int) 28865)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 28866)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Sorrow"
0x181: Call2 0x90

0x182: Pop(1)
0x183: Push((int) 527529)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 527530)
0x189: Push((int) 28858)
0x18a: Push((int) 28867)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 28858)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x90

0x194: Pop(1)
0x195: Push((int) 527522)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 527524)
0x19b: Push((int) 28862)
0x19c: Push((int) 28861)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 28862)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral"
0x1a5: Call2 0x90

0x1a6: Pop(1)
0x1a7: Push((int) 527525)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 527531)
0x1ad: Push((int) -1)
0x1ae: Push((int) 28869)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Push((int) 527532)
0x1b2: Push((int) -1)
0x1b3: Push((int) 28870)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Return(); Pop(0)

0x1b7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b8: PushEmpty(bool)
0x1b9: Call2 0x4e4

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bc: @ lshStopAnimation()
0x1bd: Pop(0)
0x1be: GOTO 0x1c1

0x1bf: @ StopAnimation()
0x1c0: Pop(0)
0x1c1: Return(); Pop(0)

0x1c2: GOTO 0xa7

0x1c3: Return(); Pop(0)

0x1c4: PushEmpty()
0x1c5: PushEmpty(int, object)
0x1c6: Stack[-1] = Stack[-3]
0x1c7: Push(-2, 1); TaskCall(0)
0x1c8: Call2 0x0

0x1c9: Pop(-2, 1); TaskReturn
0x1ca: Pop(2)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Call2 0x1f5

0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(bool, bool)
0x1d1: Push("cleanup")
0x1d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d4: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d5: @ IsLoaded(Stack[-1])
0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object)
0x1da: Call2 0x427

0x1db: Pop(0)
0x1dc: @ RemoveActor(Stack[-1])
0x1dd: Pop(1)
0x1de: GOTO 0x1e3

0x1df: Push("restore")
0x1e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1e3: Return(); Pop(2)

0x1e4: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e6: PushEmpty(object)
0x1e7: Call2 0x427

0x1e8: Pop(0)
0x1e9: @ RemoveActor(Stack[-1])
0x1ea: Pop(1)
0x1eb: @ Hold()
0x1ec: Pop(0)
0x1ed: PushEmpty()
0x1ee: Call2 0x260

0x1ef: Pop(0)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: Call2 0x26f

0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(bool)
0x1f6: Call2 0x30c

0x1f7: Pop(0)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: @ Hold()
0x1fb: Pop(0)
0x1fc: @ GetDirection(Stack[-0])
0x1fd: Pop(0)
0x1fe: PushEmpty()
0x1ff: Call2 0x2a5

0x200: Pop(0)
0x201: GOTO 0x1fe

0x202: Return(); Pop(0)

0x203: PushEmpty(object, object)
0x204: Push("player")
0x205: @ FindActor(Stack[-2], Stack[-1])
0x206: Pop(1)
0x207: Pop(0); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-3] = (bool) 0
0x20a: Return(); Pop(2)

0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[-3]
0x20d: Call2 0x303

0x20e: Stack[-5] = Stack[-2]
0x20f: Pop(2)
0x210: Return(); Pop(2)

0x211: Stack[-1] = 0
0x212: Push(CvectorIndex(Stack[-0], 0))
0x213: Push(CvectorIndex(Stack[-0], 2))
0x214: @ RotateAsync(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: Return(); Pop(0)

0x217: PushEmpty(object, bool, object, bool)
0x218: Push("player")
0x219: @ FindActor(Stack[-3], Stack[-1])
0x21a: Pop(1)
0x21b: Pop(0); Push((bool) Stack[-2] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Stack[-5] = (bool) 0
0x21e: Return(); Pop(4)

0x21f: PushEmpty(float, object)
0x220: Stack[-1] = Stack[-4]
0x221: Call2 0x2f1

0x222: Pop(1)
0x223: Push((float)90000.0)
0x224: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-5] = (bool) 0
0x227: Return(); Pop(4)

0x228: @ CanSee(Stack[-1], Stack[-2])
0x229: Pop(0)
0x22a: Stack[-5] = Stack[-1]
0x22b: Return(); Pop(4)

0x22c: Stack[-2] = 0
0x22d: PushEmpty(float, float)
0x22e: Push((int) 8)
0x22f: Push((int) 16)
0x230: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: Push((int) 10)
0x233: @ SetTimer(Stack[-1], Stack[-2])
0x234: Pop(1)
0x235: Return(); Pop(2)

0x236: Push((int) 10)
0x237: @ KillTimer(Stack[-1])
0x238: Pop(1)
0x239: Return(); Pop(0)

0x23a: PushEmpty()
0x23b: Push((int) 10)
0x23c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x23e: PushEmpty()
0x23f: Call2 0x236

0x240: Pop(0)
0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: PushEmpty(bool)
0x244: Call2 0x30c

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(bool)
0x248: Call2 0x217

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Stack[-1] = (bool) 1
0x24c: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24d: PushEmpty(bool)
0x24e: Call2 0x203

0x24f: Pop(0)
0x250: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x251: PushEmpty(bool, object)
0x252: PushEmpty(object)
0x253: Call2 0x427

0x254: Stack[-2] = Stack[-1]
0x255: Pop(1)
0x256: Call2 0x3a2

0x257: Pop(2)
0x258: GOTO 0x25f

0x259: PushEmpty()
0x25a: Call2 0x212

0x25b: Pop(0)
0x25c: PushEmpty()
0x25d: Call2 0x22d

0x25e: Pop(0)
0x25f: Return(); Pop(0)

0x260: PushEmpty()
0x261: Call2 0x2ec

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x236

0x265: Pop(0)
0x266: @ lshStopSpeech()
0x267: Pop(0)
0x268: @ lshStopAnimation()
0x269: Pop(0)
0x26a: @ StopAsync()
0x26b: Pop(0)
0x26c: @ Hold()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: @ StopGroup0()
0x270: Pop(0)
0x271: PushEmpty()
0x272: Call2 0x236

0x273: Pop(0)
0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral"
0x276: Call2 0x3f2

0x277: Pop(1)
0x278: PushEmpty()
0x279: Call2 0x22d

0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty()
0x27d: Push(Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27f: PushEmpty()
0x280: Call2 0x22d

0x281: Pop(0)
0x282: GOTO 0x287

0x283: PushEmpty(string)
0x284: Stack[-1] = "Neutral"
0x285: Call2 0x3f2

0x286: Pop(1)
0x287: Return(); Pop(0)

0x288: PushEmpty(bool, bool)
0x289: @ IsOverrideActive(Stack[-1])
0x28a: Pop(0)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x28d: EventDisable(0)
0x28e: PushEmpty()
0x28f: Call2 0x2ec

0x290: Pop(0)
0x291: PushEmpty(bool, object)
0x292: Stack[-1] = Stack[-5]
0x293: Call2 0x303

0x294: Pop(2)
0x295: EventEnable(0)
0x296: PushEmpty(object)
0x297: Stack[-1] = Stack[-4]
0x298: Call2 0x1c4

0x299: Pop(1)
0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call2 0x3f2

0x29d: Pop(1)
0x29e: PushEmpty()
0x29f: Call2 0x236

0x2a0: Pop(0)
0x2a1: PushEmpty()
0x2a2: Call2 0x22d

0x2a3: Pop(0)
0x2a4: Return(); Pop(2)

0x2a5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2a6: @ WaitForAnimEnd()
0x2a7: Pop(0)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x30c

0x2aa: Pop(0)
0x2ab: Pop(1); Push((bool) Stack[-1] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: Return(); Pop(12)

0x2ae: PushEmpty(int)
0x2af: Call2 0x458

0x2b0: Stack[-7] = Stack[-1]
0x2b1: Pop(1)
0x2b2: Stack[-5] = (int) 0
0x2b3: PushEmpty(bool)
0x2b4: Stack[-1] = (bool) 0
0x2b5: Push((int) 5)
0x2b6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b8: PushEmpty(bool)
0x2b9: Call2 0x30c

0x2ba: Pop(0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: Stack[-1] = (bool) 1
0x2bd: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2be: Pop(0); Push((bool) Stack[-6] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c0: Push((int) 3)
0x2c1: @ Sleep(Stack[-1], Stack[-5])
0x2c2: Pop(1)
0x2c3: Pop(0); Push((bool) Stack[-4] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x2e7

0x2c6: GOTO 0x2dc

0x2c7: @ irand(Stack[-3], Stack[-6])
0x2c8: Pop(0)
0x2c9: Push((int) 5)
0x2ca: @ irand(Stack[-3], Stack[-1])
0x2cb: Pop(1)
0x2cc: Push((int) 0)
0x2cd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Stack[-3] = (int) 0
0x2d0: Push("all")
0x2d1: PushEmpty(string, int)
0x2d2: Stack[-1] = Stack[-6]
0x2d3: Call2 0x451

0x2d4: Pop(1)
0x2d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: @ WaitForAnimEnd(Stack[-1])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2e7

0x2dc: PushEmpty(bool)
0x2dd: Call2 0x2ea

0x2de: Pop(0)
0x2df: Pop(1); Push((bool) Stack[-1] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e7

0x2e2: @ ResetAAS()
0x2e3: Pop(0)
0x2e4: Push((int) 1)
0x2e5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2e6: GOTO 0x2b3

0x2e7: @ ResetAAS()
0x2e8: Pop(0)
0x2e9: Return(); Pop(12)

0x2ea: Stack[-1] = (bool) 1
0x2eb: Return(); Pop(0)

0x2ec: @ StopAnimation()
0x2ed: Pop(0)
0x2ee: @ StopGroup0()
0x2ef: Pop(0)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2f2: @ GetPosition(Stack[-3])
0x2f3: Pop(0)
0x2f4: @@ GetPosition(Stack[-2])
0x2f5: Pop(0)
0x2f6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2f7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2f8: Return(); Pop(6)

0x2f9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2fa: @ GetPosition(Stack[-3])
0x2fb: Pop(0)
0x2fc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2fd: Push(CvectorIndex(Stack[-2], 0))
0x2fe: Push(CvectorIndex(Stack[-3], 2))
0x2ff: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x300: Pop(2)
0x301: Stack[-8] = Stack[-1]
0x302: Return(); Pop(6)

0x303: PushEmpty(cvector, cvector)
0x304: @@ GetPosition(Stack[-1])
0x305: Pop(0)
0x306: PushEmpty(bool, cvector)
0x307: Stack[-1] = Stack[-3]
0x308: Call2 0x2f9

0x309: Stack[-6] = Stack[-2]
0x30a: Pop(2)
0x30b: Return(); Pop(2)

0x30c: PushEmpty(bool, bool)
0x30d: @ IsLoaded(Stack[-1])
0x30e: Pop(0)
0x30f: Stack[-3] = Stack[-1]
0x310: Return(); Pop(2)

0x311: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x312: @@ GetPosition(Stack[-8])
0x313: Pop(0)
0x314: @@ GetEyesHeight(Stack[-9])
0x315: Pop(0)
0x316: Push(CvectorIndex(Stack[-8], 1))
0x317: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x318: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x319: @ GetPosition(Stack[-7])
0x31a: Pop(0)
0x31b: @ GetEyesHeight(Stack[-9])
0x31c: Pop(0)
0x31d: Push(CvectorIndex(Stack[-7], 1))
0x31e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x320: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x321: Push(CvectorIndex(Stack[-6], 1))
0x322: Stack[-1] = (int) 0
0x323: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x324: Pop(0); Push(Stack[-6] | Stack[-6]);
0x325: Pop(1); Push(Sqrt(Stack[-1]))
0x326: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x327: Stack[-5] = -Stack[-6]; Pop(0);
0x328: Pop(0); Push(Stack[-6] * Stack[-19]);
0x329: PushEmpty(cvector, cvector)
0x32a: Push(CVector(0.0, 1.0, 0.0))
0x32b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x32c: Call2 0x42d

0x32d: Pop(1)
0x32e: Push((int) 25)
0x32f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x330: Pop(2); Push(Stack[-2] + Stack[-1]);
0x331: Push(CVector(0.0, 10.0, 0.0))
0x332: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x333: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x334: @ IsOverrideActive(Stack[-2])
0x335: Pop(0)
0x336: Push(Stack[-2])
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-21] = (bool) 0
0x339: Return(); Pop(18)

0x33a: @ StopWorld()
0x33b: Pop(0)
0x33c: Push((bool) 1)
0x33d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x33e: Pop(1)
0x33f: Push(CvectorIndex(Stack[-4], 0))
0x340: Push(CvectorIndex(Stack[-5], 2))
0x341: @ Rotate(Stack[-2], Stack[-1])
0x342: Pop(2)
0x343: PushEmpty(bool)
0x344: Call2 0x4e4

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x350

0x348: Push("head")
0x349: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34a: Pop(1)
0x34b: Push(Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34d: Push("head")
0x34e: @ LookAsyncCamera(Stack[-1])
0x34f: Pop(1)
0x350: @ CameraWaitForPlayFinish()
0x351: Pop(0)
0x352: @ ResumeWorld()
0x353: Pop(0)
0x354: Stack[-21] = (bool) 1
0x355: Return(); Pop(18)

0x356: PushEmpty(bool, bool)
0x357: Push((bool) 1)
0x358: @ CameraSwitchToNormal(Stack[-1])
0x359: Pop(1)
0x35a: PushEmpty(bool)
0x35b: Call2 0x4e4

0x35c: Pop(0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x367

0x35f: Push("head")
0x360: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x361: Pop(1)
0x362: Push(Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: Push("head")
0x365: @ UnlookAsync(Stack[-1])
0x366: Pop(1)
0x367: Return(); Pop(2)

0x368: PushEmpty(int, int, int, int)
0x369: Push("voice_common")
0x36a: @ GetVariable(Stack[-1], Stack[-3])
0x36b: Pop(1)
0x36c: Push(Stack[-2])
0x36d: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x36e: PushEmpty(bool, object)
0x36f: Stack[-1] = Stack[-7]
0x370: Call2 0x3a2

0x371: Pop(1)
0x372: Pop(1); Push((bool) Stack[-1] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x374: PushEmpty(bool, object)
0x375: Stack[-1] = Stack[-7]
0x376: Call2 0x3c7

0x377: Pop(1)
0x378: Pop(1); Push((bool) Stack[-1] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-6] = (bool) 0
0x37b: Return(); Pop(4)

0x37c: Push((int) 2)
0x37d: @ irand(Stack[-2], Stack[-1])
0x37e: Pop(1)
0x37f: Push(Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x381: Push("voice_common")
0x382: Push((int) 1)
0x383: Pop(1); Push(Stack[-4] + Stack[-1]);
0x384: Push((int) 3)
0x385: Pop(2); Push(Stack[-2] % Stack[-1]);
0x386: @ SetVariable(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: GOTO 0x38d

0x389: Push("voice_common")
0x38a: Push((int) 0)
0x38b: @ SetVariable(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: GOTO 0x3a0

0x38e: PushEmpty(bool, object)
0x38f: Stack[-1] = Stack[-7]
0x390: Call2 0x3c7

0x391: Pop(1)
0x392: Pop(1); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[-7]
0x396: Call2 0x3a2

0x397: Pop(1)
0x398: Pop(1); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-6] = (bool) 0
0x39b: Return(); Pop(4)

0x39c: Push("voice_common")
0x39d: Push((int) 1)
0x39e: @ SetVariable(Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Stack[-6] = (bool) 1
0x3a1: Return(); Pop(4)

0x3a2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a3: Stack[-5] = "c"
0x3a4: Stack[-4] = (int) 0
0x3a5: Push((int) 1)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a7: Push((int) 1)
0x3a8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3a9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3aa: @@ HasProperty(Stack[-1], Stack[-4])
0x3ab: Pop(1)
0x3ac: Pop(0); Push((bool) Stack[-3] == 0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: GOTO 0x3b2

0x3af: Push((int) 1)
0x3b0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b1: GOTO 0x3a5

0x3b2: Pop(0); Push((bool) Stack[-4] == 0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b4: Stack[-12] = (bool) 0
0x3b5: Return(); Pop(10)

0x3b6: Stack[-2] = (int) 0
0x3b7: Push((int) 1)
0x3b8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: @ irand(Stack[-2], Stack[-4])
0x3bb: Pop(0)
0x3bc: Push((int) 1)
0x3bd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3be: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3bf: @@ GetProperty(Stack[-1], Stack[-2])
0x3c0: Pop(1)
0x3c1: PushEmpty(bool, string)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Call2 0x411

0x3c4: Stack[-14] = Stack[-2]
0x3c5: Pop(2)
0x3c6: Return(); Pop(10)

0x3c7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3c8: Push("d")
0x3c9: PushEmpty(int)
0x3ca: Call2 0x448

0x3cb: Pop(0)
0x3cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cd: Push("m")
0x3ce: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3cf: Stack[-4] = (int) 0
0x3d0: Push((int) 1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d2: Push((int) 1)
0x3d3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d5: @@ HasProperty(Stack[-1], Stack[-4])
0x3d6: Pop(1)
0x3d7: Pop(0); Push((bool) Stack[-3] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x3dd

0x3da: Push((int) 1)
0x3db: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3dc: GOTO 0x3d0

0x3dd: Pop(0); Push((bool) Stack[-4] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-12] = (bool) 0
0x3e0: Return(); Pop(10)

0x3e1: Stack[-2] = (int) 0
0x3e2: Push((int) 1)
0x3e3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: @ irand(Stack[-2], Stack[-4])
0x3e6: Pop(0)
0x3e7: Push((int) 1)
0x3e8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ea: @@ GetProperty(Stack[-1], Stack[-2])
0x3eb: Pop(1)
0x3ec: PushEmpty(bool, string)
0x3ed: Stack[-1] = Stack[-3]
0x3ee: Call2 0x411

0x3ef: Stack[-14] = Stack[-2]
0x3f0: Pop(2)
0x3f1: Return(); Pop(10)

0x3f2: PushEmpty(bool, float, float, bool, float, float)
0x3f3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f4: Pop(0)
0x3f5: Push(Stack[-3])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3f8: Pop(0)
0x3f9: Push((bool) 0)
0x3fa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(1)
0x3fc: GOTO 0x401

0x3fd: Push("Can't find lsh animation : ")
0x3fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3ff: @ Trace(Stack[-1])
0x400: Pop(1)
0x401: Return(); Pop(6)

0x402: PushEmpty(bool, float, float, bool, float, float)
0x403: @ lshHasAnimation(Stack[-3], Stack[-8])
0x404: Pop(0)
0x405: Push(Stack[-3])
0x406: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x407: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x408: Pop(0)
0x409: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40a: Pop(0)
0x40b: GOTO 0x410

0x40c: Push("Can't find lsh animation : ")
0x40d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x40e: @ Trace(Stack[-1])
0x40f: Pop(1)
0x410: Return(); Pop(6)

0x411: PushEmpty(bool, bool)
0x412: PushEmpty(bool)
0x413: Call2 0x4e4

0x414: Pop(0)
0x415: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x416: @ lshHasSpeech(Stack[-1], Stack[-3])
0x417: Pop(0)
0x418: Push(Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41a: @ lshPlaySpeech(Stack[-3])
0x41b: Pop(0)
0x41c: Stack[-4] = (bool) 1
0x41d: Return(); Pop(2)

0x41e: Stack[-4] = (bool) 0
0x41f: Return(); Pop(2)

0x420: PushEmpty(bool)
0x421: Call2 0x4e4

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: @ lshStopSpeech()
0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: PushEmpty(object, object)
0x428: @ self(Stack[-1])
0x429: Pop(0)
0x42a: Stack[-3] = Stack[-1]
0x42b: Return(); Pop(2)

0x42c: Stack[-1] = 0
0x42d: PushEmpty(float, float)
0x42e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x42f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x430: Push((float)0.0)
0x431: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x434: Return(); Pop(2)

0x435: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x436: Return(); Pop(2)

0x437: PushEmpty(int, int)
0x438: @ GetVariable(Stack[-3], Stack[-1])
0x439: Pop(0)
0x43a: Stack[-4] = Stack[-1]
0x43b: Return(); Pop(2)

0x43c: PushEmpty(object, object)
0x43d: @ FindActor(Stack[-1], Stack[-4])
0x43e: Pop(0)
0x43f: Pop(0); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-5] = (bool) 0
0x442: Return(); Pop(2)

0x443: @ Trigger(Stack[-1], Stack[-3])
0x444: Pop(0)
0x445: Stack[-5] = (bool) 1
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty(float, float)
0x449: @ GetGameTime(Stack[-1])
0x44a: Pop(0)
0x44b: Push((int) 1)
0x44c: PushEmpty(int)
0x44d: Push((int) 24)
0x44e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x44f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x450: Return(); Pop(2)

0x451: PushEmpty(string, string)
0x452: Stack[-1] = "idle"
0x453: Push(Stack[-3])
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x456: Stack[-4] = Stack[-1]
0x457: Return(); Pop(2)

0x458: PushEmpty(int, bool, int, bool)
0x459: Stack[-2] = (int) 0
0x45a: Push("all")
0x45b: PushEmpty(string, int)
0x45c: Stack[-1] = Stack[-5]
0x45d: Call2 0x451

0x45e: Pop(1)
0x45f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Pop(0); Push((bool) Stack[-1] == 0)
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: GOTO 0x467

0x464: Push((int) 1)
0x465: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x466: GOTO 0x45a

0x467: Stack[-5] = Stack[-2]
0x468: Return(); Pop(4)

0x469: PushEmpty()
0x46a: Push("k11q01")
0x46b: Push((int) 7)
0x46c: @ SetVariable(Stack[-2], Stack[-1])
0x46d: Pop(2)
0x46e: PushEmpty()
0x46f: Call2 0x495

0x470: Pop(0)
0x471: Return(); Pop(0)

0x472: PushEmpty()
0x473: PushEmpty()
0x474: Call2 0x488

0x475: Pop(0)
0x476: PushEmpty(bool, string, string)
0x477: Stack[-2] = "quest_k11_01"
0x478: Stack[-1] = "fail"
0x479: Call2 0x43c

0x47a: Pop(3)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: PushEmpty(int, string)
0x47e: Stack[-1] = "k11q01"
0x47f: Call2 0x437

0x480: Pop(1)
0x481: Push((int) 6)
0x482: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-2] = (bool) 1
0x485: Return(); Pop(0)

0x486: Stack[-2] = (bool) 0
0x487: Return(); Pop(0)

0x488: PushEmpty(object, object)
0x489: Push((int) 778)
0x48a: Push((int) 1)
0x48b: Push((int) 541642)
0x48c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: PushEmpty(bool, object, int)
0x48f: Stack[-2] = Stack[-4]
0x490: Stack[-1] = (int) 480
0x491: Call2 0x4af

0x492: Pop(3)
0x493: Return(); Pop(2)

0x494: Stack[-1] = 0
0x495: PushEmpty(object, object)
0x496: Push((int) 490)
0x497: Push((int) 1)
0x498: Push((int) 528057)
0x499: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: PushEmpty(bool, object, int)
0x49c: Stack[-2] = Stack[-4]
0x49d: Stack[-1] = (int) 480
0x49e: Call2 0x4af

0x49f: Pop(3)
0x4a0: Return(); Pop(2)

0x4a1: Stack[-1] = 0
0x4a2: PushEmpty(object, object)
0x4a3: @ GetDiaryRoot(Stack[-1])
0x4a4: Pop(0)
0x4a5: Pop(0); Push((bool) Stack[-1] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a7: Push("Can't retrieve diary root")
0x4a8: @ Trace(Stack[-1])
0x4a9: Pop(1)
0x4aa: Stack[-3] = (bool) 0
0x4ab: Return(); Pop(2)

0x4ac: Stack[-3] = Stack[-1]
0x4ad: Return(); Pop(2)

0x4ae: Stack[-1] = 0
0x4af: PushEmpty(object, object, int, object, object, int)
0x4b0: PushEmpty(object)
0x4b1: Call2 0x4a2

0x4b2: Stack[-4] = Stack[-1]
0x4b3: Pop(1)
0x4b4: @@ Find(Stack[-7], Stack[-2])
0x4b5: Pop(0)
0x4b6: Pop(0); Push((bool) Stack[-2] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b8: Push("Can't find diary parent with id: ")
0x4b9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ba: @ Trace(Stack[-1])
0x4bb: Pop(1)
0x4bc: Stack[-9] = (bool) 0
0x4bd: Return(); Pop(6)

0x4be: @@ AddChild(Stack[-8])
0x4bf: Pop(0)
0x4c0: Push((int) 7)
0x4c1: @ SendWorldWndMessage(Stack[-1])
0x4c2: Pop(1)
0x4c3: @@ GetCategory(Stack[-1])
0x4c4: Pop(0)
0x4c5: @ SetDiarySection(Stack[-1])
0x4c6: Pop(0)
0x4c7: Stack[-9] = (bool) 0
0x4c8: Return(); Pop(6)

0x4c9: Stack[-2] = 0
0x4ca: Stack[-3] = 0
0x4cb: PushEmpty(int, int)
0x4cc: Push("branch")
0x4cd: @ GetVariable(Stack[-1], Stack[-2])
0x4ce: Pop(1)
0x4cf: Push((int) 0)
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d2: Stack[-3] = (int) 1
0x4d3: Return(); Pop(2)

0x4d4: GOTO 0x4da

0x4d5: Push((int) 1)
0x4d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-3] = (int) 2
0x4d9: Return(); Pop(2)

0x4da: Stack[-3] = (int) 3
0x4db: Return(); Pop(2)

0x4dc: Stack[-1] = (int) 515592
0x4dd: Return(); Pop(0)

0x4de: Stack[-1] = (int) 511961
0x4df: Return(); Pop(0)

0x4e0: Stack[-1] = "ui/NPC_Burah.png"
0x4e1: Return(); Pop(0)

0x4e2: Stack[-1] = "ui/NPC_Burah_b.png"
0x4e3: Return(); Pop(0)

0x4e4: Stack[-1] = (bool) 1
0x4e5: Return(); Pop(0)

