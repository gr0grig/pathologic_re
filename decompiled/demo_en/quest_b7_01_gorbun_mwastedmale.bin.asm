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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x199
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x18e Vars = (object)
		EVENT_26 Op = 0x1c2 Vars = (string)
		EVENT_5 Op = 0x1ca Vars = ()
		EVENT_6 Op = 0x1cf Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x23c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x397

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x395

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x399

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x39b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x384

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
0x41: Call2 0x280

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x310

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x98

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
0x68: GOTO 0x7a

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x98

0x6c: Pop(1)
0x6d: Push((int) 520999)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 528488)
0x73: Push((int) -1)
0x74: Push((int) 29877)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x39d

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x291

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x39d

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x2a1

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x2b0

0xb3: Pop(0)
0xb4: Push((int) 22211)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x2e9

0xbb: Pop(2)
0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x300

0xc0: Pop(2)
0xc1: Push((int) 22210)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x310

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral"
0xcb: Call2 0x98

0xcc: Pop(1)
0xcd: Push((int) 520997)
0xce: @@ SetMessage(Stack[-1])
0xcf: Pop(1)
0xd0: @@ ClearReplies()
0xd1: Pop(0)
0xd2: Push((int) 524092)
0xd3: Push((int) 25396)
0xd4: Push((int) 25395)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Push((int) 524096)
0xd8: Push((int) 25405)
0xd9: Push((int) 25399)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral"
0xdf: Call2 0x98

0xe0: Pop(1)
0xe1: Push((int) 520999)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 528488)
0xe7: Push((int) -1)
0xe8: Push((int) 29877)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 29872)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xef: Push((int) 29874)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 528485)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 528486)
0xfc: Push((int) -1)
0xfd: Push((int) 29875)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 528487)
0x101: Push((int) -1)
0x102: Push((int) 29876)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 25405)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x98

0x10c: Pop(1)
0x10d: Push((int) 524102)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 524103)
0x113: Push((int) 25401)
0x114: Push((int) 25406)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 25396)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x98

0x11e: Pop(1)
0x11f: Push((int) 524093)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 524094)
0x125: Push((int) 25398)
0x126: Push((int) 25397)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 524101)
0x12a: Push((int) 25401)
0x12b: Push((int) 25404)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 25398)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 524095)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 524097)
0x13c: Push((int) 25401)
0x13d: Push((int) 25400)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 524104)
0x141: Push((int) 25408)
0x142: Push((int) 25407)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 25408)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x98

0x14c: Pop(1)
0x14d: Push((int) 524105)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 524106)
0x153: Push((int) 25403)
0x154: Push((int) 25411)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 524107)
0x158: Push((int) 25401)
0x159: Push((int) 25412)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 25401)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x98

0x163: Pop(1)
0x164: Push((int) 524098)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 524099)
0x16a: Push((int) 25403)
0x16b: Push((int) 25402)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 25403)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x98

0x175: Pop(1)
0x176: Push((int) 524100)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 520998)
0x17c: Push((int) -1)
0x17d: Push((int) 22211)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x182: PushEmpty(bool)
0x183: Call2 0x39d

0x184: Pop(0)
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: @ lshStopAnimation()
0x187: Pop(0)
0x188: GOTO 0x18b

0x189: @ StopAnimation()
0x18a: Pop(0)
0x18b: Return(); Pop(0)

0x18c: GOTO 0xaf

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty()
0x190: Call2 0x232

0x191: Pop(0)
0x192: PushEmpty(int, object)
0x193: Stack[-1] = Stack[-3]
0x194: Push(-2, 1); TaskCall(0)
0x195: Call2 0x0

0x196: Pop(-2, 1); TaskReturn
0x197: Pop(2)
0x198: Return(); Pop(0)

0x199: PushEmpty(float, float)
0x19a: PushEmpty(bool)
0x19b: Call2 0x237

0x19c: Pop(0)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19f: @ Hold()
0x1a0: Pop(0)
0x1a1: GOTO 0x19a

0x1a2: Push((int) 3)
0x1a3: @ rand(Stack[-2], Stack[-1])
0x1a4: Pop(1)
0x1a5: Push((int) 3)
0x1a6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1a7: @ Sleep(Stack[-1])
0x1a8: Pop(1)
0x1a9: PushEmpty()
0x1aa: Call2 0x1e1

0x1ab: Pop(0)
0x1ac: GOTO 0x19a

0x1ad: Return(); Pop(2)

0x1ae: PushEmpty(bool, bool)
0x1af: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b0: @ IsLoaded(Stack[-1])
0x1b1: Pop(0)
0x1b2: PushEmpty(bool)
0x1b3: Stack[-1] = (bool) 0
0x1b4: Pop(0); Push((bool) Stack[-2] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty(bool)
0x1b7: Call2 0x1df

0x1b8: Pop(0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = (bool) 1
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(object)
0x1bd: Call2 0x2b7

0x1be: Pop(0)
0x1bf: @ RemoveActor(Stack[-1])
0x1c0: Pop(1)
0x1c1: Return(); Pop(2)

0x1c2: PushEmpty()
0x1c3: Push("cleanup")
0x1c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call2 0x1ae

0x1c8: Pop(0)
0x1c9: Return(); Pop(0)

0x1ca: @ StopGroup0()
0x1cb: Pop(0)
0x1cc: @ sync()
0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(bool)
0x1d0: Stack[-1] = (bool) 0
0x1d1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: PushEmpty(bool)
0x1d4: Call2 0x1df

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[-1] = (bool) 1
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object)
0x1da: Call2 0x2b7

0x1db: Pop(0)
0x1dc: @ RemoveActor(Stack[-1])
0x1dd: Pop(1)
0x1de: Return(); Pop(0)

0x1df: Stack[-1] = (bool) 1
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e2: @ WaitForAnimEnd()
0x1e3: Pop(0)
0x1e4: PushEmpty(bool)
0x1e5: Call2 0x237

0x1e6: Pop(0)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Return(); Pop(14)

0x1ea: PushEmpty(int)
0x1eb: Call2 0x2d8

0x1ec: Stack[-8] = Stack[-1]
0x1ed: Pop(1)
0x1ee: Stack[-6] = (int) 0
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: Push((int) 5)
0x1f2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f4: PushEmpty(bool)
0x1f5: Call2 0x237

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = (bool) 1
0x1f9: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x1fa: Push((int) 3)
0x1fb: @ irand(Stack[-6], Stack[-1])
0x1fc: Pop(1)
0x1fd: Push((int) 0)
0x1fe: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x200: Push(Stack[-7])
0x201: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x202: @ irand(Stack[-4], Stack[-7])
0x203: Pop(0)
0x204: Push("all")
0x205: PushEmpty(string, int)
0x206: Stack[-1] = Stack[-7]
0x207: Call2 0x2d1

0x208: Pop(1)
0x209: @ PlayAnimation(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: @ WaitForAnimEnd(Stack[-3])
0x20c: Pop(0)
0x20d: Pop(0); Push((bool) Stack[-3] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: GOTO 0x22d

0x210: GOTO 0x222

0x211: Push((int) 1)
0x212: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x214: Push((int) 4)
0x215: @ rand(Stack[-3], Stack[-1])
0x216: Pop(1)
0x217: Push((int) 1)
0x218: Pop(1); Push(Stack[-3] + Stack[-1]);
0x219: @ Sleep(Stack[-1], Stack[-2])
0x21a: Pop(1)
0x21b: Pop(0); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x22d

0x21e: GOTO 0x222

0x21f: Push(Stack[-6])
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x22d

0x222: PushEmpty(bool)
0x223: Call2 0x230

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x22d

0x228: @ ResetAAS()
0x229: Pop(0)
0x22a: Push((int) 1)
0x22b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22c: GOTO 0x1ef

0x22d: @ ResetAAS()
0x22e: Pop(0)
0x22f: Return(); Pop(14)

0x230: Stack[-1] = (bool) 1
0x231: Return(); Pop(0)

0x232: @ StopAnimation()
0x233: Pop(0)
0x234: @ StopGroup0()
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: PushEmpty(bool, bool)
0x238: @ IsLoaded(Stack[-1])
0x239: Pop(0)
0x23a: Stack[-3] = Stack[-1]
0x23b: Return(); Pop(2)

0x23c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x23d: @@ GetPosition(Stack[-8])
0x23e: Pop(0)
0x23f: @@ GetEyesHeight(Stack[-9])
0x240: Pop(0)
0x241: Push(CvectorIndex(Stack[-8], 1))
0x242: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x243: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x244: @ GetPosition(Stack[-7])
0x245: Pop(0)
0x246: @ GetEyesHeight(Stack[-9])
0x247: Pop(0)
0x248: Push(CvectorIndex(Stack[-7], 1))
0x249: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x24b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x24c: Push(CvectorIndex(Stack[-6], 1))
0x24d: Stack[-1] = (int) 0
0x24e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x24f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x250: Pop(1); Push(Sqrt(Stack[-1]))
0x251: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x252: Stack[-5] = -Stack[-6]; Pop(0);
0x253: Pop(0); Push(Stack[-6] * Stack[-19]);
0x254: PushEmpty(cvector, cvector)
0x255: Push(CVector(0.0, 1.0, 0.0))
0x256: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x257: Call2 0x2bd

0x258: Pop(1)
0x259: Push((int) 25)
0x25a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25c: Push(CVector(0.0, 10.0, 0.0))
0x25d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x25e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x25f: @ IsOverrideActive(Stack[-2])
0x260: Pop(0)
0x261: Push(Stack[-2])
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-21] = (bool) 0
0x264: Return(); Pop(18)

0x265: @ StopWorld()
0x266: Pop(0)
0x267: @ CameraTransit(Stack[-3], Stack[-5])
0x268: Pop(0)
0x269: Push(CvectorIndex(Stack[-4], 0))
0x26a: Push(CvectorIndex(Stack[-5], 2))
0x26b: @ Rotate(Stack[-2], Stack[-1])
0x26c: Pop(2)
0x26d: PushEmpty(bool)
0x26e: Call2 0x39d

0x26f: Pop(0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x27a

0x272: Push("head")
0x273: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x274: Pop(1)
0x275: Push(Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x277: Push("head")
0x278: @ LookAsyncCamera(Stack[-1])
0x279: Pop(1)
0x27a: @ CameraWaitForPlayFinish()
0x27b: Pop(0)
0x27c: @ ResumeWorld()
0x27d: Pop(0)
0x27e: Stack[-21] = (bool) 1
0x27f: Return(); Pop(18)

0x280: PushEmpty(bool, bool)
0x281: @ CameraSwitchToNormal()
0x282: Pop(0)
0x283: PushEmpty(bool)
0x284: Call2 0x39d

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x290

0x288: Push("head")
0x289: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28a: Pop(1)
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28d: Push("head")
0x28e: @ UnlookAsync(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(2)

0x291: PushEmpty(bool, float, float, bool, float, float)
0x292: @ lshHasAnimation(Stack[-3], Stack[-7])
0x293: Pop(0)
0x294: Push(Stack[-3])
0x295: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x296: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x297: Pop(0)
0x298: Push((bool) 0)
0x299: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(1)
0x29b: GOTO 0x2a0

0x29c: Push("Can't find lsh animation : ")
0x29d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x29e: @ Trace(Stack[-1])
0x29f: Pop(1)
0x2a0: Return(); Pop(6)

0x2a1: PushEmpty(bool, float, float, bool, float, float)
0x2a2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2a3: Pop(0)
0x2a4: Push(Stack[-3])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a7: Pop(0)
0x2a8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a9: Pop(0)
0x2aa: GOTO 0x2af

0x2ab: Push("Can't find lsh animation : ")
0x2ac: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ad: @ Trace(Stack[-1])
0x2ae: Pop(1)
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(bool)
0x2b1: Call2 0x39d

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b4: @ lshStopSpeech()
0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object, object)
0x2b8: @ self(Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-3] = Stack[-1]
0x2bb: Return(); Pop(2)

0x2bc: Stack[-1] = 0
0x2bd: PushEmpty(float, float)
0x2be: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2bf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c0: Push((float)0.0)
0x2c1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2c4: Return(); Pop(2)

0x2c5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2c6: Return(); Pop(2)

0x2c7: PushEmpty(int, int)
0x2c8: @ GetVariable(Stack[-3], Stack[-1])
0x2c9: Pop(0)
0x2ca: Stack[-4] = Stack[-1]
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(float, float)
0x2cd: @ GetGameTime(Stack[-1])
0x2ce: Pop(0)
0x2cf: Stack[-3] = Stack[-1]
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(string, string)
0x2d2: Stack[-1] = "idle"
0x2d3: Push(Stack[-3])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2d6: Stack[-4] = Stack[-1]
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(int, bool, int, bool)
0x2d9: Stack[-2] = (int) 0
0x2da: Push("all")
0x2db: PushEmpty(string, int)
0x2dc: Stack[-1] = Stack[-5]
0x2dd: Call2 0x2d1

0x2de: Pop(1)
0x2df: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(2)
0x2e1: Pop(0); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2e7

0x2e4: Push((int) 1)
0x2e5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e6: GOTO 0x2da

0x2e7: Stack[-5] = Stack[-2]
0x2e8: Return(); Pop(4)

0x2e9: PushEmpty(object, object)
0x2ea: Push("b7q01")
0x2eb: Push((int) 5)
0x2ec: @ SetVariable(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: PushEmpty(object)
0x2ef: Call2 0x352

0x2f0: Stack[-2] = Stack[-1]
0x2f1: Pop(1)
0x2f2: Push("b7q01WastedGotoViktor")
0x2f3: Push("pt_map_viktor")
0x2f4: Push((int) 1)
0x2f5: Push((int) 521026)
0x2f6: PushEmpty(float)
0x2f7: Call2 0x2cc

0x2f8: Pop(0)
0x2f9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(5)
0x2fb: PushEmpty()
0x2fc: Call2 0x31c

0x2fd: Pop(0)
0x2fe: Return(); Pop(2)

0x2ff: Stack[-1] = 0
0x300: PushEmpty()
0x301: PushEmpty(object, string, float)
0x302: PushEmpty(object)
0x303: Call2 0x352

0x304: Stack[-4] = Stack[-1]
0x305: Pop(1)
0x306: Stack[-2] = "pt_map_viktor"
0x307: Stack[-1] = (int) 2
0x308: Call2 0x363

0x309: Pop(3)
0x30a: PushEmpty(object)
0x30b: Call2 0x352

0x30c: Pop(0)
0x30d: @@ ShowMap(Stack[-1])
0x30e: Pop(1)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: PushEmpty(int, string)
0x312: Stack[-1] = "b7q01"
0x313: Call2 0x2c7

0x314: Pop(1)
0x315: Push((int) 4)
0x316: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-2] = (bool) 1
0x319: Return(); Pop(0)

0x31a: Stack[-2] = (bool) 0
0x31b: Return(); Pop(0)

0x31c: PushEmpty(object, object)
0x31d: Push((int) 258)
0x31e: Push((int) 1)
0x31f: Push((int) 521030)
0x320: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: PushEmpty(bool, object, int)
0x323: Stack[-2] = Stack[-4]
0x324: Stack[-1] = (int) 253
0x325: Call2 0x336

0x326: Pop(3)
0x327: Return(); Pop(2)

0x328: Stack[-1] = 0
0x329: PushEmpty(object, object)
0x32a: @ GetDiaryRoot(Stack[-1])
0x32b: Pop(0)
0x32c: Pop(0); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32e: Push("Can't retrieve diary root")
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: Stack[-3] = (bool) 0
0x332: Return(); Pop(2)

0x333: Stack[-3] = Stack[-1]
0x334: Return(); Pop(2)

0x335: Stack[-1] = 0
0x336: PushEmpty(object, object, int, object, object, int)
0x337: PushEmpty(object)
0x338: Call2 0x329

0x339: Stack[-4] = Stack[-1]
0x33a: Pop(1)
0x33b: @@ Find(Stack[-7], Stack[-2])
0x33c: Pop(0)
0x33d: Pop(0); Push((bool) Stack[-2] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33f: Push("Can't find diary parent with id: ")
0x340: Pop(1); Push(Stack[-1] + Stack[-8]);
0x341: @ Trace(Stack[-1])
0x342: Pop(1)
0x343: Stack[-9] = (bool) 0
0x344: Return(); Pop(6)

0x345: @@ AddChild(Stack[-8])
0x346: Pop(0)
0x347: Push((int) 7)
0x348: @ SendWorldWndMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ GetCategory(Stack[-1])
0x34b: Pop(0)
0x34c: @ SetDiarySection(Stack[-1])
0x34d: Pop(0)
0x34e: Stack[-9] = (bool) 0
0x34f: Return(); Pop(6)

0x350: Stack[-2] = 0
0x351: Stack[-3] = 0
0x352: PushEmpty(object, object, object, object)
0x353: @ GetMainOutdoorScene(Stack[-2])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-2] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x357: Push("Can't find main outdoor scene")
0x358: @ Trace(Stack[-1])
0x359: Pop(1)
0x35a: Stack[-1] = 0
0x35b: Stack[-5] = Stack[-1]
0x35c: Return(); Pop(4)

0x35d: @@ GetMap(Stack[-1])
0x35e: Pop(0)
0x35f: Stack[-5] = Stack[-1]
0x360: Return(); Pop(4)

0x361: Stack[-1] = 0
0x362: Stack[-2] = 0
0x363: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x364: @ GetMainOutdoorScene(Stack[-2])
0x365: Pop(0)
0x366: Pop(0); Push((bool) Stack[-2] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: Push("Can't find main outdoor scene")
0x369: @ Trace(Stack[-1])
0x36a: Pop(1)
0x36b: Return(); Pop(8)

0x36c: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x36d: Pop(0)
0x36e: Pop(0); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: Push("Warning: outdoor scene locator ")
0x371: Pop(1); Push(Stack[-1] + Stack[-11]);
0x372: Push(" doesnt exist")
0x373: Pop(2); Push(Stack[-2] + Stack[-1]);
0x374: @ Trace(Stack[-1])
0x375: Pop(1)
0x376: @@ GetMap(Stack[-11])
0x377: Pop(0)
0x378: Pop(0); Push((bool) Stack[-11] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37a: Push("Can't find map")
0x37b: @ Trace(Stack[-1])
0x37c: Pop(1)
0x37d: Return(); Pop(8)

0x37e: Push(CvectorIndex(Stack[-4], 0))
0x37f: Push(CvectorIndex(Stack[-5], 2))
0x380: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x381: Pop(2)
0x382: Return(); Pop(8)

0x383: Stack[-2] = 0
0x384: PushEmpty(int, int)
0x385: Push("branch")
0x386: @ GetVariable(Stack[-1], Stack[-2])
0x387: Pop(1)
0x388: Push((int) 0)
0x389: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38b: Stack[-3] = (int) 1
0x38c: Return(); Pop(2)

0x38d: GOTO 0x393

0x38e: Push((int) 1)
0x38f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-3] = (int) 2
0x392: Return(); Pop(2)

0x393: Stack[-3] = (int) 3
0x394: Return(); Pop(2)

0x395: Stack[-1] = (int) 515556
0x396: Return(); Pop(0)

0x397: Stack[-1] = (int) 503341
0x398: Return(); Pop(0)

0x399: Stack[-1] = "ui/NPC_Citizen3.png"
0x39a: Return(); Pop(0)

0x39b: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x39c: Return(); Pop(0)

0x39d: Stack[-1] = (bool) 0
0x39e: Return(); Pop(0)

