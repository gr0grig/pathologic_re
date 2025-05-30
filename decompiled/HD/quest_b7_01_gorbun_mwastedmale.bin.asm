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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	b7q01
	b7q01WastedGotoViktor
	pt_map_viktor
	AddMark
	oob7WastedMaleM1
	ShowMap
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
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1c4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1b9 Vars = (object)
		EVENT_26 Op = 0x1ed Vars = (string)
		EVENT_5 Op = 0x1f5 Vars = ()
		EVENT_6 Op = 0x1fa Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x267

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3d8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3da

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3c3

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
0x41: Call2 0x2ac

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x34f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xa2

0x58: Pop(1)
0x59: Push((int) 520997)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 524092)
0x5f: Push((int) 25396)
0x60: Push((int) 25395)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 524096)
0x64: Push((int) 25405)
0x65: Push((int) 25399)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x84

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xa2

0x6c: Pop(1)
0x6d: Push((int) 520999)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x343

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 521000)
0x78: Push((int) 29872)
0x79: Push((int) 22213)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 528488)
0x7d: Push((int) -1)
0x7e: Push((int) 29877)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x3dc

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x2be

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x3dc

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x2ce

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2dd

0xbd: Pop(0)
0xbe: Push((int) 22211)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x316

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x333

0xca: Pop(2)
0xcb: Push((int) 22213)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x32d

0xd2: Pop(2)
0xd3: Push((int) 22210)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x34f

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0xa2

0xde: Pop(1)
0xdf: Push((int) 520997)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 524092)
0xe5: Push((int) 25396)
0xe6: Push((int) 25395)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 524096)
0xea: Push((int) 25405)
0xeb: Push((int) 25399)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0xa2

0xf2: Pop(1)
0xf3: Push((int) 520999)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x343

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 521000)
0xfe: Push((int) 29872)
0xff: Push((int) 22213)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 528488)
0x103: Push((int) -1)
0x104: Push((int) 29877)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 29872)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0xa2

0x10e: Pop(1)
0x10f: Push((int) 528483)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 528484)
0x115: Push((int) 29874)
0x116: Push((int) 29873)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 29874)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 528485)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 528486)
0x127: Push((int) -1)
0x128: Push((int) 29875)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 528487)
0x12c: Push((int) -1)
0x12d: Push((int) 29876)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 25405)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call2 0xa2

0x137: Pop(1)
0x138: Push((int) 524102)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 524103)
0x13e: Push((int) 25401)
0x13f: Push((int) 25406)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 25396)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0xa2

0x149: Pop(1)
0x14a: Push((int) 524093)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 524094)
0x150: Push((int) 25398)
0x151: Push((int) 25397)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Push((int) 524101)
0x155: Push((int) 25401)
0x156: Push((int) 25404)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 25398)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xa2

0x160: Pop(1)
0x161: Push((int) 524095)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 524097)
0x167: Push((int) 25401)
0x168: Push((int) 25400)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 524104)
0x16c: Push((int) 25408)
0x16d: Push((int) 25407)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 25408)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call2 0xa2

0x177: Pop(1)
0x178: Push((int) 524105)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 524106)
0x17e: Push((int) 25403)
0x17f: Push((int) 25411)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 524107)
0x183: Push((int) 25401)
0x184: Push((int) 25412)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 25401)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0xa2

0x18e: Pop(1)
0x18f: Push((int) 524098)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 524099)
0x195: Push((int) 25403)
0x196: Push((int) 25402)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 25403)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral"
0x19f: Call2 0xa2

0x1a0: Pop(1)
0x1a1: Push((int) 524100)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 520998)
0x1a7: Push((int) -1)
0x1a8: Push((int) 22211)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ad: PushEmpty(bool)
0x1ae: Call2 0x3dc

0x1af: Pop(0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: @ lshStopAnimation()
0x1b2: Pop(0)
0x1b3: GOTO 0x1b6

0x1b4: @ StopAnimation()
0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: GOTO 0xb9

0x1b8: Return(); Pop(0)

0x1b9: PushEmpty()
0x1ba: PushEmpty()
0x1bb: Call2 0x25d

0x1bc: Pop(0)
0x1bd: PushEmpty(int, object)
0x1be: Stack[-1] = Stack[-3]
0x1bf: Push(-2, 1); TaskCall(0)
0x1c0: Call2 0x0

0x1c1: Pop(-2, 1); TaskReturn
0x1c2: Pop(2)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(float, float)
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x262

0x1c7: Pop(0)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1ca: @ Hold()
0x1cb: Pop(0)
0x1cc: GOTO 0x1c5

0x1cd: Push((int) 3)
0x1ce: @ rand(Stack[-2], Stack[-1])
0x1cf: Pop(1)
0x1d0: Push((int) 3)
0x1d1: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1d2: @ Sleep(Stack[-1])
0x1d3: Pop(1)
0x1d4: PushEmpty()
0x1d5: Call2 0x20c

0x1d6: Pop(0)
0x1d7: GOTO 0x1c5

0x1d8: Return(); Pop(2)

0x1d9: PushEmpty(bool, bool)
0x1da: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1db: @ IsLoaded(Stack[-1])
0x1dc: Pop(0)
0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 0
0x1df: Pop(0); Push((bool) Stack[-2] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(bool)
0x1e2: Call2 0x20a

0x1e3: Pop(0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[-1] = (bool) 1
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: PushEmpty(object)
0x1e8: Call2 0x2e4

0x1e9: Pop(0)
0x1ea: @ RemoveActor(Stack[-1])
0x1eb: Pop(1)
0x1ec: Return(); Pop(2)

0x1ed: PushEmpty()
0x1ee: Push("cleanup")
0x1ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f1: PushEmpty()
0x1f2: Call2 0x1d9

0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: @ StopGroup0()
0x1f6: Pop(0)
0x1f7: @ sync()
0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 0
0x1fc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x20a

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Stack[-1] = (bool) 1
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty(object)
0x205: Call2 0x2e4

0x206: Pop(0)
0x207: @ RemoveActor(Stack[-1])
0x208: Pop(1)
0x209: Return(); Pop(0)

0x20a: Stack[-1] = (bool) 1
0x20b: Return(); Pop(0)

0x20c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x20d: @ WaitForAnimEnd()
0x20e: Pop(0)
0x20f: PushEmpty(bool)
0x210: Call2 0x262

0x211: Pop(0)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Return(); Pop(14)

0x215: PushEmpty(int)
0x216: Call2 0x305

0x217: Stack[-8] = Stack[-1]
0x218: Pop(1)
0x219: Stack[-6] = (int) 0
0x21a: PushEmpty(bool)
0x21b: Stack[-1] = (bool) 0
0x21c: Push((int) 5)
0x21d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: PushEmpty(bool)
0x220: Call2 0x262

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[-1] = (bool) 1
0x224: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x225: Push((int) 3)
0x226: @ irand(Stack[-6], Stack[-1])
0x227: Pop(1)
0x228: Push((int) 0)
0x229: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x22b: Push(Stack[-7])
0x22c: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22d: @ irand(Stack[-4], Stack[-7])
0x22e: Pop(0)
0x22f: Push("all")
0x230: PushEmpty(string, int)
0x231: Stack[-1] = Stack[-7]
0x232: Call2 0x2fe

0x233: Pop(1)
0x234: @ PlayAnimation(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: @ WaitForAnimEnd(Stack[-3])
0x237: Pop(0)
0x238: Pop(0); Push((bool) Stack[-3] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x258

0x23b: GOTO 0x24d

0x23c: Push((int) 1)
0x23d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23f: Push((int) 4)
0x240: @ rand(Stack[-3], Stack[-1])
0x241: Pop(1)
0x242: Push((int) 1)
0x243: Pop(1); Push(Stack[-3] + Stack[-1]);
0x244: @ Sleep(Stack[-1], Stack[-2])
0x245: Pop(1)
0x246: Pop(0); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: GOTO 0x258

0x249: GOTO 0x24d

0x24a: Push(Stack[-6])
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x258

0x24d: PushEmpty(bool)
0x24e: Call2 0x25b

0x24f: Pop(0)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x258

0x253: @ ResetAAS()
0x254: Pop(0)
0x255: Push((int) 1)
0x256: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x257: GOTO 0x21a

0x258: @ ResetAAS()
0x259: Pop(0)
0x25a: Return(); Pop(14)

0x25b: Stack[-1] = (bool) 1
0x25c: Return(); Pop(0)

0x25d: @ StopAnimation()
0x25e: Pop(0)
0x25f: @ StopGroup0()
0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: PushEmpty(bool, bool)
0x263: @ IsLoaded(Stack[-1])
0x264: Pop(0)
0x265: Stack[-3] = Stack[-1]
0x266: Return(); Pop(2)

0x267: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x268: @@ GetPosition(Stack[-8])
0x269: Pop(0)
0x26a: @@ GetEyesHeight(Stack[-9])
0x26b: Pop(0)
0x26c: Push(CvectorIndex(Stack[-8], 1))
0x26d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x26f: @ GetPosition(Stack[-7])
0x270: Pop(0)
0x271: @ GetEyesHeight(Stack[-9])
0x272: Pop(0)
0x273: Push(CvectorIndex(Stack[-7], 1))
0x274: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x275: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x276: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x277: Push(CvectorIndex(Stack[-6], 1))
0x278: Stack[-1] = (int) 0
0x279: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x27a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x27b: Pop(1); Push(Sqrt(Stack[-1]))
0x27c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x27d: Stack[-5] = -Stack[-6]; Pop(0);
0x27e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x27f: PushEmpty(cvector, cvector)
0x280: Push(CVector(0.0, 1.0, 0.0))
0x281: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x282: Call2 0x2ea

0x283: Pop(1)
0x284: Push((int) 25)
0x285: Pop(2); Push(Stack[-2] * Stack[-1]);
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: Push(CVector(0.0, 10.0, 0.0))
0x288: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x289: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x28a: @ IsOverrideActive(Stack[-2])
0x28b: Pop(0)
0x28c: Push(Stack[-2])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-21] = (bool) 0
0x28f: Return(); Pop(18)

0x290: @ StopWorld()
0x291: Pop(0)
0x292: Push((bool) 1)
0x293: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x294: Pop(1)
0x295: Push(CvectorIndex(Stack[-4], 0))
0x296: Push(CvectorIndex(Stack[-5], 2))
0x297: @ Rotate(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: PushEmpty(bool)
0x29a: Call2 0x3dc

0x29b: Pop(0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a6

0x29e: Push("head")
0x29f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a0: Pop(1)
0x2a1: Push(Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a3: Push("head")
0x2a4: @ LookAsyncCamera(Stack[-1])
0x2a5: Pop(1)
0x2a6: @ CameraWaitForPlayFinish()
0x2a7: Pop(0)
0x2a8: @ ResumeWorld()
0x2a9: Pop(0)
0x2aa: Stack[-21] = (bool) 1
0x2ab: Return(); Pop(18)

0x2ac: PushEmpty(bool, bool)
0x2ad: Push((bool) 1)
0x2ae: @ CameraSwitchToNormal(Stack[-1])
0x2af: Pop(1)
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x3dc

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2bd

0x2b5: Push("head")
0x2b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: Push("head")
0x2bb: @ UnlookAsync(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(bool, float, float, bool, float, float)
0x2bf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2c0: Pop(0)
0x2c1: Push(Stack[-3])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c4: Pop(0)
0x2c5: Push((bool) 0)
0x2c6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(1)
0x2c8: GOTO 0x2cd

0x2c9: Push("Can't find lsh animation : ")
0x2ca: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2cb: @ Trace(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(bool, float, float, bool, float, float)
0x2cf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2d0: Pop(0)
0x2d1: Push(Stack[-3])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d4: Pop(0)
0x2d5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2d6: Pop(0)
0x2d7: GOTO 0x2dc

0x2d8: Push("Can't find lsh animation : ")
0x2d9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Return(); Pop(6)

0x2dd: PushEmpty(bool)
0x2de: Call2 0x3dc

0x2df: Pop(0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: @ lshStopSpeech()
0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty(object, object)
0x2e5: @ self(Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-3] = Stack[-1]
0x2e8: Return(); Pop(2)

0x2e9: Stack[-1] = 0
0x2ea: PushEmpty(float, float)
0x2eb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ec: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ed: Push((float)0.0)
0x2ee: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f1: Return(); Pop(2)

0x2f2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f3: Return(); Pop(2)

0x2f4: PushEmpty(int, int)
0x2f5: @ GetVariable(Stack[-3], Stack[-1])
0x2f6: Pop(0)
0x2f7: Stack[-4] = Stack[-1]
0x2f8: Return(); Pop(2)

0x2f9: PushEmpty(float, float)
0x2fa: @ GetGameTime(Stack[-1])
0x2fb: Pop(0)
0x2fc: Stack[-3] = Stack[-1]
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(string, string)
0x2ff: Stack[-1] = "idle"
0x300: Push(Stack[-3])
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x303: Stack[-4] = Stack[-1]
0x304: Return(); Pop(2)

0x305: PushEmpty(int, bool, int, bool)
0x306: Stack[-2] = (int) 0
0x307: Push("all")
0x308: PushEmpty(string, int)
0x309: Stack[-1] = Stack[-5]
0x30a: Call2 0x2fe

0x30b: Pop(1)
0x30c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Pop(0); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x314

0x311: Push((int) 1)
0x312: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x313: GOTO 0x307

0x314: Stack[-5] = Stack[-2]
0x315: Return(); Pop(4)

0x316: PushEmpty(object, object)
0x317: Push("b7q01")
0x318: Push((int) 5)
0x319: @ SetVariable(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: PushEmpty(object)
0x31c: Call2 0x391

0x31d: Stack[-2] = Stack[-1]
0x31e: Pop(1)
0x31f: Push("b7q01WastedGotoViktor")
0x320: Push("pt_map_viktor")
0x321: Push((int) 1)
0x322: Push((int) 521026)
0x323: PushEmpty(float)
0x324: Call2 0x2f9

0x325: Pop(0)
0x326: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(5)
0x328: PushEmpty()
0x329: Call2 0x35b

0x32a: Pop(0)
0x32b: Return(); Pop(2)

0x32c: Stack[-1] = 0
0x32d: PushEmpty()
0x32e: Push("oob7WastedMaleM1")
0x32f: Push((int) 1)
0x330: @ SetVariable(Stack[-2], Stack[-1])
0x331: Pop(2)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: PushEmpty(object, string, float)
0x335: PushEmpty(object)
0x336: Call2 0x391

0x337: Stack[-4] = Stack[-1]
0x338: Pop(1)
0x339: Stack[-2] = "pt_map_viktor"
0x33a: Stack[-1] = (int) 2
0x33b: Call2 0x3a2

0x33c: Pop(3)
0x33d: PushEmpty(object)
0x33e: Call2 0x391

0x33f: Pop(0)
0x340: @@ ShowMap(Stack[-1])
0x341: Pop(1)
0x342: Return(); Pop(0)

0x343: PushEmpty()
0x344: PushEmpty(int, string)
0x345: Stack[-1] = "oob7WastedMaleM1"
0x346: Call2 0x2f4

0x347: Pop(1)
0x348: Push((int) 0)
0x349: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-2] = (bool) 1
0x34c: Return(); Pop(0)

0x34d: Stack[-2] = (bool) 0
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: PushEmpty(int, string)
0x351: Stack[-1] = "b7q01"
0x352: Call2 0x2f4

0x353: Pop(1)
0x354: Push((int) 4)
0x355: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = (bool) 1
0x358: Return(); Pop(0)

0x359: Stack[-2] = (bool) 0
0x35a: Return(); Pop(0)

0x35b: PushEmpty(object, object)
0x35c: Push((int) 258)
0x35d: Push((int) 1)
0x35e: Push((int) 521030)
0x35f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x360: Pop(3)
0x361: PushEmpty(bool, object, int)
0x362: Stack[-2] = Stack[-4]
0x363: Stack[-1] = (int) 253
0x364: Call2 0x375

0x365: Pop(3)
0x366: Return(); Pop(2)

0x367: Stack[-1] = 0
0x368: PushEmpty(object, object)
0x369: @ GetDiaryRoot(Stack[-1])
0x36a: Pop(0)
0x36b: Pop(0); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36d: Push("Can't retrieve diary root")
0x36e: @ Trace(Stack[-1])
0x36f: Pop(1)
0x370: Stack[-3] = (bool) 0
0x371: Return(); Pop(2)

0x372: Stack[-3] = Stack[-1]
0x373: Return(); Pop(2)

0x374: Stack[-1] = 0
0x375: PushEmpty(object, object, int, object, object, int)
0x376: PushEmpty(object)
0x377: Call2 0x368

0x378: Stack[-4] = Stack[-1]
0x379: Pop(1)
0x37a: @@ Find(Stack[-7], Stack[-2])
0x37b: Pop(0)
0x37c: Pop(0); Push((bool) Stack[-2] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37e: Push("Can't find diary parent with id: ")
0x37f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x380: @ Trace(Stack[-1])
0x381: Pop(1)
0x382: Stack[-9] = (bool) 0
0x383: Return(); Pop(6)

0x384: @@ AddChild(Stack[-8])
0x385: Pop(0)
0x386: Push((int) 7)
0x387: @ SendWorldWndMessage(Stack[-1])
0x388: Pop(1)
0x389: @@ GetCategory(Stack[-1])
0x38a: Pop(0)
0x38b: @ SetDiarySection(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-9] = (bool) 0
0x38e: Return(); Pop(6)

0x38f: Stack[-2] = 0
0x390: Stack[-3] = 0
0x391: PushEmpty(object, object, object, object)
0x392: @ GetMainOutdoorScene(Stack[-2])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-2] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x396: Push("Can't find main outdoor scene")
0x397: @ Trace(Stack[-1])
0x398: Pop(1)
0x399: Stack[-1] = 0
0x39a: Stack[-5] = Stack[-1]
0x39b: Return(); Pop(4)

0x39c: @@ GetMap(Stack[-1])
0x39d: Pop(0)
0x39e: Stack[-5] = Stack[-1]
0x39f: Return(); Pop(4)

0x3a0: Stack[-1] = 0
0x3a1: Stack[-2] = 0
0x3a2: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3a3: @ GetMainOutdoorScene(Stack[-2])
0x3a4: Pop(0)
0x3a5: Pop(0); Push((bool) Stack[-2] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a7: Push("Can't find main outdoor scene")
0x3a8: @ Trace(Stack[-1])
0x3a9: Pop(1)
0x3aa: Return(); Pop(8)

0x3ab: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3ac: Pop(0)
0x3ad: Pop(0); Push((bool) Stack[-1] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3af: Push("Warning: outdoor scene locator ")
0x3b0: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3b1: Push(" doesnt exist")
0x3b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b3: @ Trace(Stack[-1])
0x3b4: Pop(1)
0x3b5: @@ GetMap(Stack[-11])
0x3b6: Pop(0)
0x3b7: Pop(0); Push((bool) Stack[-11] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b9: Push("Can't find map")
0x3ba: @ Trace(Stack[-1])
0x3bb: Pop(1)
0x3bc: Return(); Pop(8)

0x3bd: Push(CvectorIndex(Stack[-4], 0))
0x3be: Push(CvectorIndex(Stack[-5], 2))
0x3bf: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x3c0: Pop(2)
0x3c1: Return(); Pop(8)

0x3c2: Stack[-2] = 0
0x3c3: PushEmpty(int, int)
0x3c4: Push("branch")
0x3c5: @ GetVariable(Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: Push((int) 0)
0x3c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3ca: Stack[-3] = (int) 1
0x3cb: Return(); Pop(2)

0x3cc: GOTO 0x3d2

0x3cd: Push((int) 1)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-3] = (int) 2
0x3d1: Return(); Pop(2)

0x3d2: Stack[-3] = (int) 3
0x3d3: Return(); Pop(2)

0x3d4: Stack[-1] = (int) 515556
0x3d5: Return(); Pop(0)

0x3d6: Stack[-1] = (int) 503341
0x3d7: Return(); Pop(0)

0x3d8: Stack[-1] = "ui/NPC_Citizen3.png"
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = (bool) 0
0x3dd: Return(); Pop(0)

