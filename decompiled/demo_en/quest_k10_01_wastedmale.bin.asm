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
	k10q01
	k10q01WastedGotoBurah
	pt_gmap_factory
	AddMark
	quest_k10_01
	init_factory
	ShowMap
	SetReturnValue
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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x181
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x187 Vars = (object)
		EVENT_26 Op = 0x1b8 Vars = (string)
		EVENT_6 Op = 0x1c0 Vars = ()
		EVENT_7 Op = 0x201 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x289

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x427

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x425

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x429

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x42b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x414

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
0x41: Call2 0x2cd

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x387

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 526972)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 528069)
0x5f: Push((int) 29412)
0x60: Push((int) 29411)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x7f

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 526976)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x393

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 526981)
0x73: Push((int) 28274)
0x74: Push((int) 28273)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 526977)
0x78: Push((int) -1)
0x79: Push((int) 28269)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x42d

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2de

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x42d

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x2ee

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x308

0xb8: Pop(0)
0xb9: Push((int) 28267)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x34d

0xc0: Pop(2)
0xc1: Push((int) 28275)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x356

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x382

0xcd: Pop(2)
0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x372

0xd2: Pop(2)
0xd3: Push((int) 29417)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x356

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x382

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x372

0xe4: Pop(2)
0xe5: Push((int) 28264)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call2 0x387

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x9d

0xf0: Pop(1)
0xf1: Push((int) 526972)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 528069)
0xf7: Push((int) 29412)
0xf8: Push((int) 29411)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x9d

0xff: Pop(1)
0x100: Push((int) 526976)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x393

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: Push((int) 526981)
0x10b: Push((int) 28274)
0x10c: Push((int) 28273)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Push((int) 526977)
0x110: Push((int) -1)
0x111: Push((int) 28269)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 28274)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0x9d

0x11b: Pop(1)
0x11c: Push((int) 526982)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 528073)
0x122: Push((int) 29416)
0x123: Push((int) 29415)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 528075)
0x127: Push((int) -1)
0x128: Push((int) 29417)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 29416)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0x9d

0x132: Pop(1)
0x133: Push((int) 528074)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 526983)
0x139: Push((int) -1)
0x13a: Push((int) 28275)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 29412)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0x9d

0x144: Pop(1)
0x145: Push((int) 528070)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 528071)
0x14b: Push((int) 29414)
0x14c: Push((int) 29413)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 29414)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x9d

0x156: Pop(1)
0x157: Push((int) 528072)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 526973)
0x15d: Push((int) 28266)
0x15e: Push((int) 28265)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 28266)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x9d

0x168: Pop(1)
0x169: Push((int) 526974)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 526975)
0x16f: Push((int) -1)
0x170: Push((int) 28267)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x175: PushEmpty(bool)
0x176: Call2 0x42d

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x179: @ lshStopAnimation()
0x17a: Pop(0)
0x17b: GOTO 0x17e

0x17c: @ StopAnimation()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: GOTO 0xb4

0x180: Return(); Pop(0)

0x181: PushEmpty(float, float)
0x182: Stack[-2] = (int) 300
0x183: Stack[-1] = (int) 100
0x184: Call2 0x192

0x185: Pop(2)
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: PushEmpty()
0x189: Call2 0x218

0x18a: Pop(0)
0x18b: PushEmpty(int, object)
0x18c: Stack[-1] = Stack[-3]
0x18d: Push(-2, 1); TaskCall(0)
0x18e: Call2 0x0

0x18f: Pop(-2, 1); TaskReturn
0x190: Pop(2)
0x191: Return(); Pop(0)

0x192: PushEmpty(float, bool, float, bool)
0x193: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x194: Push((int) 3)
0x195: @ rand(Stack[-3], Stack[-1])
0x196: Pop(1)
0x197: Push((int) 3)
0x198: Pop(1); Push(Stack[-3] + Stack[-1]);
0x199: @ Sleep(Stack[-1], Stack[-2])
0x19a: Pop(1)
0x19b: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x19c: PushEmpty(float, float)
0x19d: Stack[-2] = Stack[-8]
0x19e: Stack[-1] = Stack[-7]
0x19f: Call2 0x1d7

0x1a0: Pop(2)
0x1a1: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a2: GOTO 0x194

0x1a3: Return(); Pop(4)

0x1a4: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: PushEmpty(bool)
0x1a8: Call2 0x284

0x1a9: Pop(0)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1d5

0x1ae: Pop(0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(object)
0x1b3: Call2 0x30f

0x1b4: Pop(0)
0x1b5: @ RemoveActor(Stack[-1])
0x1b6: Pop(1)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Push("cleanup")
0x1ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bc: PushEmpty()
0x1bd: Call2 0x1a4

0x1be: Pop(0)
0x1bf: Return(); Pop(0)

0x1c0: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: PushEmpty()
0x1c3: Call2 0x218

0x1c4: Pop(0)
0x1c5: PushEmpty(bool)
0x1c6: Stack[-1] = (bool) 0
0x1c7: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(bool)
0x1ca: Call2 0x1d5

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cf: PushEmpty(object)
0x1d0: Call2 0x30f

0x1d1: Pop(0)
0x1d2: @ RemoveActor(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(0)

0x1d5: Stack[-1] = (bool) 1
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: PushEmpty(bool)
0x1d9: Call2 0x284

0x1da: Pop(0)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Return(); Pop(0)

0x1de: Push("player")
0x1df: @ FindActor(Stack[-4], Stack[-1])
0x1e0: Pop(1)
0x1e1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e3: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1e5: Push((int) 10)
0x1e6: Push((float)1.0)
0x1e7: @ SetTimer(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: PushEmpty()
0x1ea: Call2 0x226

0x1eb: Pop(0)
0x1ec: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ee: Push((int) 10)
0x1ef: @ KillTimer(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(float, float)
0x1f3: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-3] = (bool) 0
0x1f6: Return(); Pop(2)

0x1f7: PushEmpty(float, object)
0x1f8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f9: Call2 0x27c

0x1fa: Pop(1)
0x1fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ff: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x200: Return(); Pop(2)

0x201: PushEmpty()
0x202: Push((int) 10)
0x203: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x1f2

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x209: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(object)
0x20c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20d: Call2 0x2fd

0x20e: Pop(1)
0x20f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x210: GOTO 0x217

0x211: Push( Stack[2 + Tasks[-1].StackPointer] )
0x212: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x213: Push("head")
0x214: @ UnlookAsync(Stack[-1])
0x215: Pop(1)
0x216: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Call2 0x277

0x21a: Pop(0)
0x21b: Push((int) 10)
0x21c: @ KillTimer(Stack[-1])
0x21d: Pop(1)
0x21e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x220: Push("head")
0x221: @ UnlookAsync(Stack[-1])
0x222: Pop(1)
0x223: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x224: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x225: Return(); Pop(0)

0x226: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x227: @ WaitForAnimEnd()
0x228: Pop(0)
0x229: PushEmpty(bool)
0x22a: Call2 0x284

0x22b: Pop(0)
0x22c: Pop(1); Push((bool) Stack[-1] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Return(); Pop(14)

0x22f: PushEmpty(int)
0x230: Call2 0x33c

0x231: Stack[-8] = Stack[-1]
0x232: Pop(1)
0x233: Stack[-6] = (int) 0
0x234: PushEmpty(bool)
0x235: Stack[-1] = (bool) 0
0x236: Push((int) 5)
0x237: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x239: PushEmpty(bool)
0x23a: Call2 0x284

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Stack[-1] = (bool) 1
0x23e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x23f: Push((int) 3)
0x240: @ irand(Stack[-6], Stack[-1])
0x241: Pop(1)
0x242: Push((int) 0)
0x243: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x245: Push(Stack[-7])
0x246: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x247: @ irand(Stack[-4], Stack[-7])
0x248: Pop(0)
0x249: Push("all")
0x24a: PushEmpty(string, int)
0x24b: Stack[-1] = Stack[-7]
0x24c: Call2 0x335

0x24d: Pop(1)
0x24e: @ PlayAnimation(Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: @ WaitForAnimEnd(Stack[-3])
0x251: Pop(0)
0x252: Pop(0); Push((bool) Stack[-3] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x272

0x255: GOTO 0x267

0x256: Push((int) 1)
0x257: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x259: Push((int) 4)
0x25a: @ rand(Stack[-3], Stack[-1])
0x25b: Pop(1)
0x25c: Push((int) 1)
0x25d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25e: @ Sleep(Stack[-1], Stack[-2])
0x25f: Pop(1)
0x260: Pop(0); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: GOTO 0x272

0x263: GOTO 0x267

0x264: Push(Stack[-6])
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x272

0x267: PushEmpty(bool)
0x268: Call2 0x275

0x269: Pop(0)
0x26a: Pop(1); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: @ ResetAAS()
0x26e: Pop(0)
0x26f: Push((int) 1)
0x270: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x271: GOTO 0x234

0x272: @ ResetAAS()
0x273: Pop(0)
0x274: Return(); Pop(14)

0x275: Stack[-1] = (bool) 1
0x276: Return(); Pop(0)

0x277: @ StopAnimation()
0x278: Pop(0)
0x279: @ StopGroup0()
0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x27d: @ GetPosition(Stack[-3])
0x27e: Pop(0)
0x27f: @@ GetPosition(Stack[-2])
0x280: Pop(0)
0x281: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x282: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x283: Return(); Pop(6)

0x284: PushEmpty(bool, bool)
0x285: @ IsLoaded(Stack[-1])
0x286: Pop(0)
0x287: Stack[-3] = Stack[-1]
0x288: Return(); Pop(2)

0x289: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28a: @@ GetPosition(Stack[-8])
0x28b: Pop(0)
0x28c: @@ GetEyesHeight(Stack[-9])
0x28d: Pop(0)
0x28e: Push(CvectorIndex(Stack[-8], 1))
0x28f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x290: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x291: @ GetPosition(Stack[-7])
0x292: Pop(0)
0x293: @ GetEyesHeight(Stack[-9])
0x294: Pop(0)
0x295: Push(CvectorIndex(Stack[-7], 1))
0x296: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x297: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x298: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x299: Push(CvectorIndex(Stack[-6], 1))
0x29a: Stack[-1] = (int) 0
0x29b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29d: Pop(1); Push(Sqrt(Stack[-1]))
0x29e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x29f: Stack[-5] = -Stack[-6]; Pop(0);
0x2a0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a1: PushEmpty(cvector, cvector)
0x2a2: Push(CVector(0.0, 1.0, 0.0))
0x2a3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a4: Call2 0x315

0x2a5: Pop(1)
0x2a6: Push((int) 25)
0x2a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a9: Push(CVector(0.0, 10.0, 0.0))
0x2aa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ab: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ac: @ IsOverrideActive(Stack[-2])
0x2ad: Pop(0)
0x2ae: Push(Stack[-2])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-21] = (bool) 0
0x2b1: Return(); Pop(18)

0x2b2: @ StopWorld()
0x2b3: Pop(0)
0x2b4: @ CameraTransit(Stack[-3], Stack[-5])
0x2b5: Pop(0)
0x2b6: Push(CvectorIndex(Stack[-4], 0))
0x2b7: Push(CvectorIndex(Stack[-5], 2))
0x2b8: @ Rotate(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x42d

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c7

0x2bf: Push("head")
0x2c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push(Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c4: Push("head")
0x2c5: @ LookAsyncCamera(Stack[-1])
0x2c6: Pop(1)
0x2c7: @ CameraWaitForPlayFinish()
0x2c8: Pop(0)
0x2c9: @ ResumeWorld()
0x2ca: Pop(0)
0x2cb: Stack[-21] = (bool) 1
0x2cc: Return(); Pop(18)

0x2cd: PushEmpty(bool, bool)
0x2ce: @ CameraSwitchToNormal()
0x2cf: Pop(0)
0x2d0: PushEmpty(bool)
0x2d1: Call2 0x42d

0x2d2: Pop(0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: GOTO 0x2dd

0x2d5: Push("head")
0x2d6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d7: Pop(1)
0x2d8: Push(Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: Push("head")
0x2db: @ UnlookAsync(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(bool, float, float, bool, float, float)
0x2df: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2e0: Pop(0)
0x2e1: Push(Stack[-3])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2e4: Pop(0)
0x2e5: Push((bool) 0)
0x2e6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(1)
0x2e8: GOTO 0x2ed

0x2e9: Push("Can't find lsh animation : ")
0x2ea: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2eb: @ Trace(Stack[-1])
0x2ec: Pop(1)
0x2ed: Return(); Pop(6)

0x2ee: PushEmpty(bool, float, float, bool, float, float)
0x2ef: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2f0: Pop(0)
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2f4: Pop(0)
0x2f5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2f6: Pop(0)
0x2f7: GOTO 0x2fc

0x2f8: Push("Can't find lsh animation : ")
0x2f9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2fa: @ Trace(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(6)

0x2fd: PushEmpty(float, cvector, float, cvector)
0x2fe: @@ GetEyesHeight(Stack[-2])
0x2ff: Pop(0)
0x300: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x301: Push(CvectorIndex(Stack[-1], 1))
0x302: Stack[-1] = Stack[-3]
0x303: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x304: Push("head")
0x305: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x306: Pop(1)
0x307: Return(); Pop(4)

0x308: PushEmpty(bool)
0x309: Call2 0x42d

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: @ lshStopSpeech()
0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: PushEmpty(object, object)
0x310: @ self(Stack[-1])
0x311: Pop(0)
0x312: Stack[-3] = Stack[-1]
0x313: Return(); Pop(2)

0x314: Stack[-1] = 0
0x315: PushEmpty(float, float)
0x316: Pop(0); Push(Stack[-3] | Stack[-3]);
0x317: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x318: Push((float)0.0)
0x319: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x31c: Return(); Pop(2)

0x31d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31e: Return(); Pop(2)

0x31f: PushEmpty(int, int)
0x320: @ GetVariable(Stack[-3], Stack[-1])
0x321: Pop(0)
0x322: Stack[-4] = Stack[-1]
0x323: Return(); Pop(2)

0x324: PushEmpty(object, object)
0x325: @ FindActor(Stack[-1], Stack[-4])
0x326: Pop(0)
0x327: Pop(0); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-5] = (bool) 0
0x32a: Return(); Pop(2)

0x32b: @ Trigger(Stack[-1], Stack[-3])
0x32c: Pop(0)
0x32d: Stack[-5] = (bool) 1
0x32e: Return(); Pop(2)

0x32f: Stack[-1] = 0
0x330: PushEmpty(float, float)
0x331: @ GetGameTime(Stack[-1])
0x332: Pop(0)
0x333: Stack[-3] = Stack[-1]
0x334: Return(); Pop(2)

0x335: PushEmpty(string, string)
0x336: Stack[-1] = "idle"
0x337: Push(Stack[-3])
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x33a: Stack[-4] = Stack[-1]
0x33b: Return(); Pop(2)

0x33c: PushEmpty(int, bool, int, bool)
0x33d: Stack[-2] = (int) 0
0x33e: Push("all")
0x33f: PushEmpty(string, int)
0x340: Stack[-1] = Stack[-5]
0x341: Call2 0x335

0x342: Pop(1)
0x343: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: Pop(0); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x34b

0x348: Push((int) 1)
0x349: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x34a: GOTO 0x33e

0x34b: Stack[-5] = Stack[-2]
0x34c: Return(); Pop(4)

0x34d: PushEmpty()
0x34e: Push("k10q01")
0x34f: Push((int) 4)
0x350: @ SetVariable(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: PushEmpty()
0x353: Call2 0x39f

0x354: Pop(0)
0x355: Return(); Pop(0)

0x356: PushEmpty(object, object)
0x357: Push("k10q01")
0x358: Push((int) 6)
0x359: @ SetVariable(Stack[-2], Stack[-1])
0x35a: Pop(2)
0x35b: PushEmpty(object)
0x35c: Call2 0x3e2

0x35d: Stack[-2] = Stack[-1]
0x35e: Pop(1)
0x35f: Push("k10q01WastedGotoBurah")
0x360: Push("pt_gmap_factory")
0x361: Push((int) 1)
0x362: Push((int) 530196)
0x363: PushEmpty(float)
0x364: Call2 0x330

0x365: Pop(0)
0x366: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(5)
0x368: PushEmpty()
0x369: Call2 0x3ac

0x36a: Pop(0)
0x36b: PushEmpty(bool, string, string)
0x36c: Stack[-2] = "quest_k10_01"
0x36d: Stack[-1] = "init_factory"
0x36e: Call2 0x324

0x36f: Pop(3)
0x370: Return(); Pop(2)

0x371: Stack[-1] = 0
0x372: PushEmpty()
0x373: PushEmpty(object, string, float)
0x374: PushEmpty(object)
0x375: Call2 0x3e2

0x376: Stack[-4] = Stack[-1]
0x377: Pop(1)
0x378: Stack[-2] = "pt_gmap_factory"
0x379: Stack[-1] = (int) 2
0x37a: Call2 0x3f3

0x37b: Pop(3)
0x37c: PushEmpty(object)
0x37d: Call2 0x3e2

0x37e: Pop(0)
0x37f: @@ ShowMap(Stack[-1])
0x380: Pop(1)
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: Push((int) 0)
0x384: @@ SetReturnValue(Stack[-1])
0x385: Pop(1)
0x386: Return(); Pop(0)

0x387: PushEmpty()
0x388: PushEmpty(int, string)
0x389: Stack[-1] = "k10q01"
0x38a: Call2 0x31f

0x38b: Pop(1)
0x38c: Push((int) 3)
0x38d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-2] = (bool) 1
0x390: Return(); Pop(0)

0x391: Stack[-2] = (bool) 0
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(int, string)
0x395: Stack[-1] = "k10q01"
0x396: Call2 0x31f

0x397: Pop(1)
0x398: Push((int) 5)
0x399: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39b: Stack[-2] = (bool) 1
0x39c: Return(); Pop(0)

0x39d: Stack[-2] = (bool) 0
0x39e: Return(); Pop(0)

0x39f: PushEmpty(object, object)
0x3a0: Push((int) 451)
0x3a1: Push((int) 1)
0x3a2: Push((int) 527009)
0x3a3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: PushEmpty(bool, object, int)
0x3a6: Stack[-2] = Stack[-4]
0x3a7: Stack[-1] = (int) 447
0x3a8: Call2 0x3c6

0x3a9: Pop(3)
0x3aa: Return(); Pop(2)

0x3ab: Stack[-1] = 0
0x3ac: PushEmpty(object, object)
0x3ad: Push((int) 453)
0x3ae: Push((int) 1)
0x3af: Push((int) 527011)
0x3b0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: PushEmpty(bool, object, int)
0x3b3: Stack[-2] = Stack[-4]
0x3b4: Stack[-1] = (int) 447
0x3b5: Call2 0x3c6

0x3b6: Pop(3)
0x3b7: Return(); Pop(2)

0x3b8: Stack[-1] = 0
0x3b9: PushEmpty(object, object)
0x3ba: @ GetDiaryRoot(Stack[-1])
0x3bb: Pop(0)
0x3bc: Pop(0); Push((bool) Stack[-1] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3be: Push("Can't retrieve diary root")
0x3bf: @ Trace(Stack[-1])
0x3c0: Pop(1)
0x3c1: Stack[-3] = (bool) 0
0x3c2: Return(); Pop(2)

0x3c3: Stack[-3] = Stack[-1]
0x3c4: Return(); Pop(2)

0x3c5: Stack[-1] = 0
0x3c6: PushEmpty(object, object, int, object, object, int)
0x3c7: PushEmpty(object)
0x3c8: Call2 0x3b9

0x3c9: Stack[-4] = Stack[-1]
0x3ca: Pop(1)
0x3cb: @@ Find(Stack[-7], Stack[-2])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-2] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: Push("Can't find diary parent with id: ")
0x3d0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d1: @ Trace(Stack[-1])
0x3d2: Pop(1)
0x3d3: Stack[-9] = (bool) 0
0x3d4: Return(); Pop(6)

0x3d5: @@ AddChild(Stack[-8])
0x3d6: Pop(0)
0x3d7: Push((int) 7)
0x3d8: @ SendWorldWndMessage(Stack[-1])
0x3d9: Pop(1)
0x3da: @@ GetCategory(Stack[-1])
0x3db: Pop(0)
0x3dc: @ SetDiarySection(Stack[-1])
0x3dd: Pop(0)
0x3de: Stack[-9] = (bool) 0
0x3df: Return(); Pop(6)

0x3e0: Stack[-2] = 0
0x3e1: Stack[-3] = 0
0x3e2: PushEmpty(object, object, object, object)
0x3e3: @ GetMainOutdoorScene(Stack[-2])
0x3e4: Pop(0)
0x3e5: Pop(0); Push((bool) Stack[-2] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: Push("Can't find main outdoor scene")
0x3e8: @ Trace(Stack[-1])
0x3e9: Pop(1)
0x3ea: Stack[-1] = 0
0x3eb: Stack[-5] = Stack[-1]
0x3ec: Return(); Pop(4)

0x3ed: @@ GetMap(Stack[-1])
0x3ee: Pop(0)
0x3ef: Stack[-5] = Stack[-1]
0x3f0: Return(); Pop(4)

0x3f1: Stack[-1] = 0
0x3f2: Stack[-2] = 0
0x3f3: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3f4: @ GetMainOutdoorScene(Stack[-2])
0x3f5: Pop(0)
0x3f6: Pop(0); Push((bool) Stack[-2] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f8: Push("Can't find main outdoor scene")
0x3f9: @ Trace(Stack[-1])
0x3fa: Pop(1)
0x3fb: Return(); Pop(8)

0x3fc: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3fd: Pop(0)
0x3fe: Pop(0); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x400: Push("Warning: outdoor scene locator ")
0x401: Pop(1); Push(Stack[-1] + Stack[-11]);
0x402: Push(" doesnt exist")
0x403: Pop(2); Push(Stack[-2] + Stack[-1]);
0x404: @ Trace(Stack[-1])
0x405: Pop(1)
0x406: @@ GetMap(Stack[-11])
0x407: Pop(0)
0x408: Pop(0); Push((bool) Stack[-11] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40a: Push("Can't find map")
0x40b: @ Trace(Stack[-1])
0x40c: Pop(1)
0x40d: Return(); Pop(8)

0x40e: Push(CvectorIndex(Stack[-4], 0))
0x40f: Push(CvectorIndex(Stack[-5], 2))
0x410: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x411: Pop(2)
0x412: Return(); Pop(8)

0x413: Stack[-2] = 0
0x414: PushEmpty(int, int)
0x415: Push("branch")
0x416: @ GetVariable(Stack[-1], Stack[-2])
0x417: Pop(1)
0x418: Push((int) 0)
0x419: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41b: Stack[-3] = (int) 1
0x41c: Return(); Pop(2)

0x41d: GOTO 0x423

0x41e: Push((int) 1)
0x41f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-3] = (int) 2
0x422: Return(); Pop(2)

0x423: Stack[-3] = (int) 3
0x424: Return(); Pop(2)

0x425: Stack[-1] = (int) 515556
0x426: Return(); Pop(0)

0x427: Stack[-1] = (int) 503341
0x428: Return(); Pop(0)

0x429: Stack[-1] = "ui/NPC_Citizen3.png"
0x42a: Return(); Pop(0)

0x42b: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x42c: Return(); Pop(0)

0x42d: Stack[-1] = (bool) 0
0x42e: Return(); Pop(0)

