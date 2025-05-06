GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Fear
	Sympathy
	Confusion
	Tiredness
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
	ui/NPC_Lara.png
	ui/NPC_Lara_b.png
	b4q01
	b4q01LaraGotoRubin
	pt_map_warehouse_gangster
	AddMark
	quest_b4_01
	place_rubin
	b4q01LaraWasBadRep
	oob8Lara1
	ShowMap
	b8q02
	reputation
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x73e
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x293 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x509 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x64e Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x714 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x78a Vars = (int)
		EVENT_6 Op = 0x7b0 Vars = ()
		EVENT_5 Op = 0x7bf Vars = ()
		EVENT_45 Op = 0x7cc Vars = (bool)
		EVENT_0 Op = 0x7d8 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x861

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x9c4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x9c2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x9c6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x9c8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xaa1

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
0x31: Call2 0x975

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x8b6

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
0x48: Call2 0x8a5

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
0x5b: Push((int) 535294)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535295)
0x61: Push((int) 36973)
0x62: Push((int) 36972)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535302)
0x66: Push((int) -1)
0x67: Push((int) 36980)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535303)
0x6b: Push((int) -1)
0x6c: Push((int) 36981)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x9ca

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x940

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
0x92: Call2 0x9ca

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
0xa2: Call2 0x950

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x96e

0xab: Pop(0)
0xac: Push((int) 36971)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535294)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535295)
0xb9: Push((int) 36973)
0xba: Push((int) 36972)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535302)
0xbe: Push((int) -1)
0xbf: Push((int) 36980)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535303)
0xc3: Push((int) -1)
0xc4: Push((int) 36981)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36973)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535296)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535297)
0xd5: Push((int) 36975)
0xd6: Push((int) 36974)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535301)
0xda: Push((int) 36975)
0xdb: Push((int) 36978)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36975)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535298)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535299)
0xec: Push((int) -1)
0xed: Push((int) 36976)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535300)
0xf1: Push((int) -1)
0xf2: Push((int) 36977)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x9ca

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x861

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x9c4

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x9c2

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x9c6

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x9c8

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xaa1

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x975

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x8b6

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x8a5

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0x18e

0x15d: Pop(1)
0x15e: Push((int) 518021)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 518022)
0x164: Push((int) -1)
0x165: Push((int) 19155)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 531564)
0x169: Push((int) -1)
0x16a: Push((int) 32923)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x9ca

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x940

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x9ca

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x950

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x96e

0x1a9: Pop(0)
0x1aa: Push((int) 19154)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 518021)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 518022)
0x1b7: Push((int) -1)
0x1b8: Push((int) 19155)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 531564)
0x1bc: Push((int) -1)
0x1bd: Push((int) 32923)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0x9ca

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0x1a5

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d0: PushEmpty(bool, object, float)
0x1d1: Stack[-2] = Stack[-12]
0x1d2: Stack[-1] = (float) 70.0
0x1d3: Call2 0x861

0x1d4: Pop(2)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: Stack[-10] = (int) -2
0x1d8: Return(); Pop(8)

0x1d9: @ CreateDialog(Stack[-4])
0x1da: Pop(0)
0x1db: PushEmpty(int)
0x1dc: Call2 0x9c4

0x1dd: Pop(0)
0x1de: @@ SetNPCName(Stack[-1])
0x1df: Pop(1)
0x1e0: PushEmpty(int)
0x1e1: Call2 0x9c2

0x1e2: Pop(0)
0x1e3: @@ SetNPCDescription(Stack[-1])
0x1e4: Pop(1)
0x1e5: PushEmpty(string)
0x1e6: Call2 0x9c6

0x1e7: Pop(0)
0x1e8: @@ SetPhoto(Stack[-1])
0x1e9: Pop(1)
0x1ea: PushEmpty(string)
0x1eb: Call2 0x9c8

0x1ec: Pop(0)
0x1ed: @@ SetPhoto2(Stack[-1])
0x1ee: Pop(1)
0x1ef: PushEmpty(int)
0x1f0: Call2 0xaa1

0x1f1: Pop(0)
0x1f2: @@ SetPlayerName(Stack[-1])
0x1f3: Pop(1)
0x1f4: Stack[-2] = (int) -1
0x1f5: @ IsOverrideActive(Stack[-3])
0x1f6: Pop(0)
0x1f7: Push(Stack[-3])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-10] = (int) -2
0x1fa: Return(); Pop(8)

0x1fb: @ DoDialog(Stack[-4])
0x1fc: Pop(0)
0x1fd: PushEmpty(bool, object)
0x1fe: PushEmpty(object)
0x1ff: Call2 0x975

0x200: Stack[-2] = Stack[-1]
0x201: Pop(1)
0x202: Call2 0x8b6

0x203: Pop(2)
0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[-11]
0x206: Stack[-1] = Stack[-6]
0x207: Push(-2, 4); TaskCall(5)
0x208: Call2 0x21f

0x209: Pop(-2, 4); TaskReturn
0x20a: Pop(2)
0x20b: @@ IsDialogEnd(Stack[-1])
0x20c: Pop(0)
0x20d: Pop(0); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20f: @ sync()
0x210: Pop(0)
0x211: @@ IsDialogEnd(Stack[-1])
0x212: Pop(0)
0x213: GOTO 0x20d

0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[-10]
0x216: Call2 0x8a5

0x217: Pop(1)
0x218: @ StopDialog(Stack[-4])
0x219: Pop(0)
0x21a: @@ GetReturnValue(Stack[-2])
0x21b: Pop(0)
0x21c: Stack[-10] = Stack[-2]
0x21d: Return(); Pop(8)

0x21e: Stack[-4] = 0
0x21f: PushEmpty()
0x220: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x222: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call2 0xa1c

0x228: Pop(1)
0x229: Pop(1); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0x9e8

0x22f: Pop(2)
0x230: PushEmpty(string)
0x231: Stack[-1] = "Fear"
0x232: Call2 0x27d

0x233: Pop(1)
0x234: Push((int) 518548)
0x235: @@ SetMessage(Stack[-1])
0x236: Pop(1)
0x237: @@ ClearReplies()
0x238: Pop(0)
0x239: Push((int) 518549)
0x23a: Push((int) 20132)
0x23b: Push((int) 19659)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Push((int) 519021)
0x23f: Push((int) 20141)
0x240: Push((int) 20140)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: GOTO 0x25f

0x244: PushEmpty(string)
0x245: Stack[-1] = "Sympathy"
0x246: Call2 0x27d

0x247: Pop(1)
0x248: Push((int) 518550)
0x249: @@ SetMessage(Stack[-1])
0x24a: Pop(1)
0x24b: @@ ClearReplies()
0x24c: Pop(0)
0x24d: PushEmpty(bool, object)
0x24e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Call2 0xa26

0x250: Pop(1)
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: Push((int) 518551)
0x253: Push((int) 20163)
0x254: Push((int) 19661)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Push((int) 518554)
0x258: Push((int) -1)
0x259: Push((int) 19664)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: GOTO 0x25f

0x25d: Return(); Pop(0)

0x25e: GOTO 0x223

0x25f: PushEmpty(bool)
0x260: Call2 0x9ca

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x263: @ lshWaitForAnimEnd()
0x264: Pop(0)
0x265: Push( Stack[3 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: GOTO 0x26d

0x268: PushEmpty(string)
0x269: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26a: Call2 0x940

0x26b: Pop(1)
0x26c: GOTO 0x263

0x26d: GOTO 0x27c

0x26e: Push("all")
0x26f: Push("idle")
0x270: @ PlayAnimation(Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: @ WaitForAnimEnd()
0x273: Pop(0)
0x274: Push( Stack[3 + Tasks[-1].StackPointer] )
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27c

0x277: Push("all")
0x278: Push("idle")
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: GOTO 0x272

0x27c: Return(); Pop(0)

0x27d: PushEmpty()
0x27e: PushEmpty(bool)
0x27f: Call2 0x9ca

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Return(); Pop(0)

0x284: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: Return(); Pop(0)

0x287: PushEmpty(string, bool)
0x288: Stack[-2] = Stack[-3]
0x289: Push("")
0x28a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-1] = (bool) 0
0x28d: GOTO 0x28f

0x28e: Stack[-1] = (bool) 1
0x28f: Call2 0x950

0x290: Pop(2)
0x291: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x292: Return(); Pop(0)

0x293: PushEmpty()
0x294: Push((int) 1)
0x295: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x296: PushEmpty()
0x297: Call2 0x96e

0x298: Pop(0)
0x299: Push((int) 19663)
0x29a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29c: PushEmpty(object, object)
0x29d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29f: Call2 0x9cc

0x2a0: Pop(2)
0x2a1: PushEmpty(object, object)
0x2a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call2 0x9f4

0x2a5: Pop(2)
0x2a6: Push((int) 19658)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Call2 0xa1c

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2af: PushEmpty(object, object)
0x2b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b2: Call2 0x9e8

0x2b3: Pop(2)
0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Fear"
0x2b6: Call2 0x27d

0x2b7: Pop(1)
0x2b8: Push((int) 518548)
0x2b9: @@ SetMessage(Stack[-1])
0x2ba: Pop(1)
0x2bb: @@ ClearReplies()
0x2bc: Pop(0)
0x2bd: Push((int) 518549)
0x2be: Push((int) 20132)
0x2bf: Push((int) 19659)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push((int) 519021)
0x2c3: Push((int) 20141)
0x2c4: Push((int) 20140)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Sympathy"
0x2ca: Call2 0x27d

0x2cb: Pop(1)
0x2cc: Push((int) 518550)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call2 0xa26

0x2d4: Pop(1)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d6: Push((int) 518551)
0x2d7: Push((int) 20163)
0x2d8: Push((int) 19661)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Push((int) 518554)
0x2dc: Push((int) -1)
0x2dd: Push((int) 19664)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 20149)
0x2e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e4: Push((int) 20152)
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Confusion"
0x2e9: Call2 0x27d

0x2ea: Pop(1)
0x2eb: Push((int) 519032)
0x2ec: @@ SetMessage(Stack[-1])
0x2ed: Pop(1)
0x2ee: @@ ClearReplies()
0x2ef: Pop(0)
0x2f0: Push((int) 519033)
0x2f1: Push((int) 20154)
0x2f2: Push((int) 20153)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Push((int) 519035)
0x2f6: Push((int) 20154)
0x2f7: Push((int) 20155)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: Push((int) 20154)
0x2fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2fe: PushEmpty(string)
0x2ff: Stack[-1] = "Confusion"
0x300: Call2 0x27d

0x301: Pop(1)
0x302: Push((int) 519034)
0x303: @@ SetMessage(Stack[-1])
0x304: Pop(1)
0x305: @@ ClearReplies()
0x306: Pop(0)
0x307: Push((int) 519036)
0x308: Push((int) 20157)
0x309: Push((int) 20156)
0x30a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(3)
0x30c: Push((int) 519039)
0x30d: Push((int) 20157)
0x30e: Push((int) 20160)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Return(); Pop(0)

0x312: Push((int) 20157)
0x313: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x315: PushEmpty(string)
0x316: Stack[-1] = "Confusion"
0x317: Call2 0x27d

0x318: Pop(1)
0x319: Push((int) 519037)
0x31a: @@ SetMessage(Stack[-1])
0x31b: Pop(1)
0x31c: @@ ClearReplies()
0x31d: Pop(0)
0x31e: Push((int) 519038)
0x31f: Push((int) -1)
0x320: Push((int) 20158)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: Push((int) 519040)
0x324: Push((int) -1)
0x325: Push((int) 20162)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Push((int) 20163)
0x32a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "Confusion"
0x32e: Call2 0x27d

0x32f: Pop(1)
0x330: Push((int) 519041)
0x331: @@ SetMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ ClearReplies()
0x334: Pop(0)
0x335: Push((int) 519042)
0x336: Push((int) 20165)
0x337: Push((int) 20164)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Push((int) 519059)
0x33b: Push((int) 20180)
0x33c: Push((int) 20183)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 20165)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Confusion"
0x345: Call2 0x27d

0x346: Pop(1)
0x347: Push((int) 519043)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 519044)
0x34d: Push((int) 20167)
0x34e: Push((int) 20166)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Push((int) 519046)
0x352: Push((int) 20169)
0x353: Push((int) 20168)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Push((int) 20169)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x35a: PushEmpty(string)
0x35b: Stack[-1] = "Neutral"
0x35c: Call2 0x27d

0x35d: Pop(1)
0x35e: Push((int) 519047)
0x35f: @@ SetMessage(Stack[-1])
0x360: Pop(1)
0x361: @@ ClearReplies()
0x362: Pop(0)
0x363: Push((int) 519048)
0x364: Push((int) 20167)
0x365: Push((int) 20170)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 20167)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Confusion"
0x36e: Call2 0x27d

0x36f: Pop(1)
0x370: Push((int) 519045)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: Push((int) 519049)
0x376: Push((int) 20177)
0x377: Push((int) 20172)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 519050)
0x37b: Push((int) 20174)
0x37c: Push((int) 20173)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 20174)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Fear"
0x385: Call2 0x27d

0x386: Pop(1)
0x387: Push((int) 519051)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 519052)
0x38d: Push((int) -1)
0x38e: Push((int) 20175)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 519053)
0x392: Push((int) 20177)
0x393: Push((int) 20176)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 20177)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call2 0x27d

0x39d: Pop(1)
0x39e: Push((int) 519054)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 519055)
0x3a4: Push((int) 19662)
0x3a5: Push((int) 20178)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Push((int) 519056)
0x3a9: Push((int) 20180)
0x3aa: Push((int) 20179)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Return(); Pop(0)

0x3ae: Push((int) 20180)
0x3af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b1: PushEmpty(string)
0x3b2: Stack[-1] = "Neutral"
0x3b3: Call2 0x27d

0x3b4: Pop(1)
0x3b5: Push((int) 519057)
0x3b6: @@ SetMessage(Stack[-1])
0x3b7: Pop(1)
0x3b8: @@ ClearReplies()
0x3b9: Pop(0)
0x3ba: Push((int) 519058)
0x3bb: Push((int) -1)
0x3bc: Push((int) 20181)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Return(); Pop(0)

0x3c0: Push((int) 19662)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c3: PushEmpty(string)
0x3c4: Stack[-1] = "Neutral"
0x3c5: Call2 0x27d

0x3c6: Pop(1)
0x3c7: Push((int) 518552)
0x3c8: @@ SetMessage(Stack[-1])
0x3c9: Pop(1)
0x3ca: @@ ClearReplies()
0x3cb: Pop(0)
0x3cc: Push((int) 518553)
0x3cd: Push((int) -1)
0x3ce: Push((int) 19663)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Return(); Pop(0)

0x3d2: Push((int) 20141)
0x3d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d5: PushEmpty(string)
0x3d6: Stack[-1] = "Fear"
0x3d7: Call2 0x27d

0x3d8: Pop(1)
0x3d9: Push((int) 519022)
0x3da: @@ SetMessage(Stack[-1])
0x3db: Pop(1)
0x3dc: @@ ClearReplies()
0x3dd: Pop(0)
0x3de: Push((int) 519023)
0x3df: Push((int) 20138)
0x3e0: Push((int) 20142)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 20132)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Sympathy"
0x3e9: Call2 0x27d

0x3ea: Pop(1)
0x3eb: Push((int) 519014)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 519015)
0x3f1: Push((int) 20138)
0x3f2: Push((int) 20133)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 519016)
0x3f6: Push((int) 20135)
0x3f7: Push((int) 20134)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 20135)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Fear"
0x400: Call2 0x27d

0x401: Pop(1)
0x402: Push((int) 519017)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 519019)
0x408: Push((int) 20138)
0x409: Push((int) 20137)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Push((int) 519018)
0x40d: Push((int) -1)
0x40e: Push((int) 20136)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Push((int) 20138)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Confusion"
0x417: Call2 0x27d

0x418: Pop(1)
0x419: Push((int) 519020)
0x41a: @@ SetMessage(Stack[-1])
0x41b: Pop(1)
0x41c: @@ ClearReplies()
0x41d: Pop(0)
0x41e: Push((int) 519024)
0x41f: Push((int) 20145)
0x420: Push((int) 20144)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 20145)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call2 0x27d

0x42a: Pop(1)
0x42b: Push((int) 519025)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 527912)
0x431: Push((int) 29261)
0x432: Push((int) 29260)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 29261)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Tiredness"
0x43b: Call2 0x27d

0x43c: Pop(1)
0x43d: Push((int) 527913)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 519026)
0x443: Push((int) -1)
0x444: Push((int) 20146)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Push((int) 519027)
0x448: Push((int) -1)
0x449: Push((int) 20147)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x44e: PushEmpty(bool)
0x44f: Call2 0x9ca

0x450: Pop(0)
0x451: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x452: @ lshStopAnimation()
0x453: Pop(0)
0x454: GOTO 0x457

0x455: @ StopAnimation()
0x456: Pop(0)
0x457: Return(); Pop(0)

0x458: GOTO 0x294

0x459: Return(); Pop(0)

0x45a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x45b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x45c: PushEmpty(bool, object, float)
0x45d: Stack[-2] = Stack[-12]
0x45e: Stack[-1] = (float) 70.0
0x45f: Call2 0x861

0x460: Pop(2)
0x461: Pop(1); Push((bool) Stack[-1] == 0)
0x462: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x463: Stack[-10] = (int) -2
0x464: Return(); Pop(8)

0x465: @ CreateDialog(Stack[-4])
0x466: Pop(0)
0x467: PushEmpty(int)
0x468: Call2 0x9c4

0x469: Pop(0)
0x46a: @@ SetNPCName(Stack[-1])
0x46b: Pop(1)
0x46c: PushEmpty(int)
0x46d: Call2 0x9c2

0x46e: Pop(0)
0x46f: @@ SetNPCDescription(Stack[-1])
0x470: Pop(1)
0x471: PushEmpty(string)
0x472: Call2 0x9c6

0x473: Pop(0)
0x474: @@ SetPhoto(Stack[-1])
0x475: Pop(1)
0x476: PushEmpty(string)
0x477: Call2 0x9c8

0x478: Pop(0)
0x479: @@ SetPhoto2(Stack[-1])
0x47a: Pop(1)
0x47b: PushEmpty(int)
0x47c: Call2 0xaa1

0x47d: Pop(0)
0x47e: @@ SetPlayerName(Stack[-1])
0x47f: Pop(1)
0x480: Stack[-2] = (int) -1
0x481: @ IsOverrideActive(Stack[-3])
0x482: Pop(0)
0x483: Push(Stack[-3])
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-10] = (int) -2
0x486: Return(); Pop(8)

0x487: @ DoDialog(Stack[-4])
0x488: Pop(0)
0x489: PushEmpty(bool, object)
0x48a: PushEmpty(object)
0x48b: Call2 0x975

0x48c: Stack[-2] = Stack[-1]
0x48d: Pop(1)
0x48e: Call2 0x8b6

0x48f: Pop(2)
0x490: PushEmpty(object, object)
0x491: Stack[-2] = Stack[-11]
0x492: Stack[-1] = Stack[-6]
0x493: Push(-2, 4); TaskCall(7)
0x494: Call2 0x4ab

0x495: Pop(-2, 4); TaskReturn
0x496: Pop(2)
0x497: @@ IsDialogEnd(Stack[-1])
0x498: Pop(0)
0x499: Pop(0); Push((bool) Stack[-1] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: @ sync()
0x49c: Pop(0)
0x49d: @@ IsDialogEnd(Stack[-1])
0x49e: Pop(0)
0x49f: GOTO 0x499

0x4a0: PushEmpty(object)
0x4a1: Stack[-1] = Stack[-10]
0x4a2: Call2 0x8a5

0x4a3: Pop(1)
0x4a4: @ StopDialog(Stack[-4])
0x4a5: Pop(0)
0x4a6: @@ GetReturnValue(Stack[-2])
0x4a7: Pop(0)
0x4a8: Stack[-10] = Stack[-2]
0x4a9: Return(); Pop(8)

0x4aa: Stack[-4] = 0
0x4ab: PushEmpty()
0x4ac: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ad: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4ae: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4af: Push((int) 1)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4b1: PushEmpty(string)
0x4b2: Stack[-1] = "Fear"
0x4b3: Call2 0x4f3

0x4b4: Pop(1)
0x4b5: Push((int) 521486)
0x4b6: @@ SetMessage(Stack[-1])
0x4b7: Pop(1)
0x4b8: @@ ClearReplies()
0x4b9: Pop(0)
0x4ba: PushEmpty(bool)
0x4bb: Stack[-1] = (bool) 0
0x4bc: PushEmpty(bool, object)
0x4bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4be: Call2 0xa10

0x4bf: Pop(1)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c3: Call2 0xa04

0x4c4: Pop(1)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-1] = (bool) 1
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c8: Push((int) 521487)
0x4c9: Push((int) 22653)
0x4ca: Push((int) 22652)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Push((int) 521490)
0x4ce: Push((int) -1)
0x4cf: Push((int) 22655)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: GOTO 0x4d5

0x4d3: Return(); Pop(0)

0x4d4: GOTO 0x4af

0x4d5: PushEmpty(bool)
0x4d6: Call2 0x9ca

0x4d7: Pop(0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d9: @ lshWaitForAnimEnd()
0x4da: Pop(0)
0x4db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4e3

0x4de: PushEmpty(string)
0x4df: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e0: Call2 0x940

0x4e1: Pop(1)
0x4e2: GOTO 0x4d9

0x4e3: GOTO 0x4f2

0x4e4: Push("all")
0x4e5: Push("idle")
0x4e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e7: Pop(2)
0x4e8: @ WaitForAnimEnd()
0x4e9: Pop(0)
0x4ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x4f2

0x4ed: Push("all")
0x4ee: Push("idle")
0x4ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f0: Pop(2)
0x4f1: GOTO 0x4e8

0x4f2: Return(); Pop(0)

0x4f3: PushEmpty()
0x4f4: PushEmpty(bool)
0x4f5: Call2 0x9ca

0x4f6: Pop(0)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Return(); Pop(0)

0x4fa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(string, bool)
0x4fe: Stack[-2] = Stack[-3]
0x4ff: Push("")
0x500: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-1] = (bool) 0
0x503: GOTO 0x505

0x504: Stack[-1] = (bool) 1
0x505: Call2 0x950

0x506: Pop(2)
0x507: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: Push((int) 1)
0x50b: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x50c: PushEmpty()
0x50d: Call2 0x96e

0x50e: Pop(0)
0x50f: Push((int) 22652)
0x510: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x512: PushEmpty(object, object)
0x513: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x514: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x515: Call2 0x9ee

0x516: Pop(2)
0x517: Push((int) 22651)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Fear"
0x51c: Call2 0x4f3

0x51d: Pop(1)
0x51e: Push((int) 521486)
0x51f: @@ SetMessage(Stack[-1])
0x520: Pop(1)
0x521: @@ ClearReplies()
0x522: Pop(0)
0x523: PushEmpty(bool)
0x524: Stack[-1] = (bool) 0
0x525: PushEmpty(bool, object)
0x526: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x527: Call2 0xa10

0x528: Pop(1)
0x529: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52a: PushEmpty(bool, object)
0x52b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Call2 0xa04

0x52d: Pop(1)
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: Stack[-1] = (bool) 1
0x530: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x531: Push((int) 521487)
0x532: Push((int) 22653)
0x533: Push((int) 22652)
0x534: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x535: Pop(3)
0x536: Push((int) 521490)
0x537: Push((int) -1)
0x538: Push((int) 22655)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Return(); Pop(0)

0x53c: Push((int) 22653)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Confusion"
0x541: Call2 0x4f3

0x542: Pop(1)
0x543: Push((int) 521488)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 521489)
0x549: Push((int) 25167)
0x54a: Push((int) 22654)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Push((int) 523891)
0x54e: Push((int) 25171)
0x54f: Push((int) 25170)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Return(); Pop(0)

0x553: Push((int) 25171)
0x554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x556: PushEmpty(string)
0x557: Stack[-1] = "Confusion"
0x558: Call2 0x4f3

0x559: Pop(1)
0x55a: Push((int) 523892)
0x55b: @@ SetMessage(Stack[-1])
0x55c: Pop(1)
0x55d: @@ ClearReplies()
0x55e: Pop(0)
0x55f: Push((int) 523893)
0x560: Push((int) 25173)
0x561: Push((int) 25172)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Return(); Pop(0)

0x565: Push((int) 25167)
0x566: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x568: PushEmpty(string)
0x569: Stack[-1] = "Confusion"
0x56a: Call2 0x4f3

0x56b: Pop(1)
0x56c: Push((int) 523888)
0x56d: @@ SetMessage(Stack[-1])
0x56e: Pop(1)
0x56f: @@ ClearReplies()
0x570: Pop(0)
0x571: Push((int) 523889)
0x572: Push((int) 25173)
0x573: Push((int) 25168)
0x574: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x575: Pop(3)
0x576: Push((int) 523890)
0x577: Push((int) -1)
0x578: Push((int) 25169)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: Return(); Pop(0)

0x57c: Push((int) 25173)
0x57d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x57f: PushEmpty(string)
0x580: Stack[-1] = "Neutral"
0x581: Call2 0x4f3

0x582: Pop(1)
0x583: Push((int) 523894)
0x584: @@ SetMessage(Stack[-1])
0x585: Pop(1)
0x586: @@ ClearReplies()
0x587: Pop(0)
0x588: Push((int) 523895)
0x589: Push((int) 25176)
0x58a: Push((int) 25175)
0x58b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58c: Pop(3)
0x58d: Push((int) 523898)
0x58e: Push((int) -1)
0x58f: Push((int) 25178)
0x590: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(3)
0x592: Return(); Pop(0)

0x593: Push((int) 25176)
0x594: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x596: PushEmpty(string)
0x597: Stack[-1] = "Neutral"
0x598: Call2 0x4f3

0x599: Pop(1)
0x59a: Push((int) 523896)
0x59b: @@ SetMessage(Stack[-1])
0x59c: Pop(1)
0x59d: @@ ClearReplies()
0x59e: Pop(0)
0x59f: Push((int) 523897)
0x5a0: Push((int) -1)
0x5a1: Push((int) 25177)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5a6: PushEmpty(bool)
0x5a7: Call2 0x9ca

0x5a8: Pop(0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5aa: @ lshStopAnimation()
0x5ab: Pop(0)
0x5ac: GOTO 0x5af

0x5ad: @ StopAnimation()
0x5ae: Pop(0)
0x5af: Return(); Pop(0)

0x5b0: GOTO 0x50a

0x5b1: Return(); Pop(0)

0x5b2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5b4: PushEmpty(bool, object, float)
0x5b5: Stack[-2] = Stack[-12]
0x5b6: Stack[-1] = (float) 70.0
0x5b7: Call2 0x861

0x5b8: Pop(2)
0x5b9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-10] = (int) -2
0x5bc: Return(); Pop(8)

0x5bd: @ CreateDialog(Stack[-4])
0x5be: Pop(0)
0x5bf: PushEmpty(int)
0x5c0: Call2 0x9c4

0x5c1: Pop(0)
0x5c2: @@ SetNPCName(Stack[-1])
0x5c3: Pop(1)
0x5c4: PushEmpty(int)
0x5c5: Call2 0x9c2

0x5c6: Pop(0)
0x5c7: @@ SetNPCDescription(Stack[-1])
0x5c8: Pop(1)
0x5c9: PushEmpty(string)
0x5ca: Call2 0x9c6

0x5cb: Pop(0)
0x5cc: @@ SetPhoto(Stack[-1])
0x5cd: Pop(1)
0x5ce: PushEmpty(string)
0x5cf: Call2 0x9c8

0x5d0: Pop(0)
0x5d1: @@ SetPhoto2(Stack[-1])
0x5d2: Pop(1)
0x5d3: PushEmpty(int)
0x5d4: Call2 0xaa1

0x5d5: Pop(0)
0x5d6: @@ SetPlayerName(Stack[-1])
0x5d7: Pop(1)
0x5d8: Stack[-2] = (int) -1
0x5d9: @ IsOverrideActive(Stack[-3])
0x5da: Pop(0)
0x5db: Push(Stack[-3])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-10] = (int) -2
0x5de: Return(); Pop(8)

0x5df: @ DoDialog(Stack[-4])
0x5e0: Pop(0)
0x5e1: PushEmpty(bool, object)
0x5e2: PushEmpty(object)
0x5e3: Call2 0x975

0x5e4: Stack[-2] = Stack[-1]
0x5e5: Pop(1)
0x5e6: Call2 0x8b6

0x5e7: Pop(2)
0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[-11]
0x5ea: Stack[-1] = Stack[-6]
0x5eb: Push(-2, 4); TaskCall(9)
0x5ec: Call2 0x603

0x5ed: Pop(-2, 4); TaskReturn
0x5ee: Pop(2)
0x5ef: @@ IsDialogEnd(Stack[-1])
0x5f0: Pop(0)
0x5f1: Pop(0); Push((bool) Stack[-1] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f3: @ sync()
0x5f4: Pop(0)
0x5f5: @@ IsDialogEnd(Stack[-1])
0x5f6: Pop(0)
0x5f7: GOTO 0x5f1

0x5f8: PushEmpty(object)
0x5f9: Stack[-1] = Stack[-10]
0x5fa: Call2 0x8a5

0x5fb: Pop(1)
0x5fc: @ StopDialog(Stack[-4])
0x5fd: Pop(0)
0x5fe: @@ GetReturnValue(Stack[-2])
0x5ff: Pop(0)
0x600: Stack[-10] = Stack[-2]
0x601: Return(); Pop(8)

0x602: Stack[-4] = 0
0x603: PushEmpty()
0x604: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x605: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x606: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x607: Push((int) 1)
0x608: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x609: PushEmpty(string)
0x60a: Stack[-1] = "Neutral"
0x60b: Call2 0x638

0x60c: Pop(1)
0x60d: Push((int) 522629)
0x60e: @@ SetMessage(Stack[-1])
0x60f: Pop(1)
0x610: @@ ClearReplies()
0x611: Pop(0)
0x612: Push((int) 522630)
0x613: Push((int) -1)
0x614: Push((int) 23817)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: GOTO 0x61a

0x618: Return(); Pop(0)

0x619: GOTO 0x607

0x61a: PushEmpty(bool)
0x61b: Call2 0x9ca

0x61c: Pop(0)
0x61d: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x61e: @ lshWaitForAnimEnd()
0x61f: Pop(0)
0x620: Push( Stack[3 + Tasks[-1].StackPointer] )
0x621: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x622: GOTO 0x628

0x623: PushEmpty(string)
0x624: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x625: Call2 0x940

0x626: Pop(1)
0x627: GOTO 0x61e

0x628: GOTO 0x637

0x629: Push("all")
0x62a: Push("idle")
0x62b: @ PlayAnimation(Stack[-2], Stack[-1])
0x62c: Pop(2)
0x62d: @ WaitForAnimEnd()
0x62e: Pop(0)
0x62f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x630: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x631: GOTO 0x637

0x632: Push("all")
0x633: Push("idle")
0x634: @ PlayAnimation(Stack[-2], Stack[-1])
0x635: Pop(2)
0x636: GOTO 0x62d

0x637: Return(); Pop(0)

0x638: PushEmpty()
0x639: PushEmpty(bool)
0x63a: Call2 0x9ca

0x63b: Pop(0)
0x63c: Pop(1); Push((bool) Stack[-1] == 0)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Return(); Pop(0)

0x63f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x640: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x641: Return(); Pop(0)

0x642: PushEmpty(string, bool)
0x643: Stack[-2] = Stack[-3]
0x644: Push("")
0x645: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-1] = (bool) 0
0x648: GOTO 0x64a

0x649: Stack[-1] = (bool) 1
0x64a: Call2 0x950

0x64b: Pop(2)
0x64c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: Push((int) 1)
0x650: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x651: PushEmpty()
0x652: Call2 0x96e

0x653: Pop(0)
0x654: Push((int) 23816)
0x655: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x657: PushEmpty(string)
0x658: Stack[-1] = "Neutral"
0x659: Call2 0x638

0x65a: Pop(1)
0x65b: Push((int) 522629)
0x65c: @@ SetMessage(Stack[-1])
0x65d: Pop(1)
0x65e: @@ ClearReplies()
0x65f: Pop(0)
0x660: Push((int) 522630)
0x661: Push((int) -1)
0x662: Push((int) 23817)
0x663: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x664: Pop(3)
0x665: Return(); Pop(0)

0x666: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x667: PushEmpty(bool)
0x668: Call2 0x9ca

0x669: Pop(0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66b: @ lshStopAnimation()
0x66c: Pop(0)
0x66d: GOTO 0x670

0x66e: @ StopAnimation()
0x66f: Pop(0)
0x670: Return(); Pop(0)

0x671: GOTO 0x64f

0x672: Return(); Pop(0)

0x673: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x674: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x675: PushEmpty(bool, object, float)
0x676: Stack[-2] = Stack[-12]
0x677: Stack[-1] = (float) 70.0
0x678: Call2 0x861

0x679: Pop(2)
0x67a: Pop(1); Push((bool) Stack[-1] == 0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67c: Stack[-10] = (int) -2
0x67d: Return(); Pop(8)

0x67e: @ CreateDialog(Stack[-4])
0x67f: Pop(0)
0x680: PushEmpty(int)
0x681: Call2 0x9c4

0x682: Pop(0)
0x683: @@ SetNPCName(Stack[-1])
0x684: Pop(1)
0x685: PushEmpty(int)
0x686: Call2 0x9c2

0x687: Pop(0)
0x688: @@ SetNPCDescription(Stack[-1])
0x689: Pop(1)
0x68a: PushEmpty(string)
0x68b: Call2 0x9c6

0x68c: Pop(0)
0x68d: @@ SetPhoto(Stack[-1])
0x68e: Pop(1)
0x68f: PushEmpty(string)
0x690: Call2 0x9c8

0x691: Pop(0)
0x692: @@ SetPhoto2(Stack[-1])
0x693: Pop(1)
0x694: PushEmpty(int)
0x695: Call2 0xaa1

0x696: Pop(0)
0x697: @@ SetPlayerName(Stack[-1])
0x698: Pop(1)
0x699: Stack[-2] = (int) -1
0x69a: @ IsOverrideActive(Stack[-3])
0x69b: Pop(0)
0x69c: Push(Stack[-3])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-10] = (int) -2
0x69f: Return(); Pop(8)

0x6a0: @ DoDialog(Stack[-4])
0x6a1: Pop(0)
0x6a2: PushEmpty(bool, object)
0x6a3: PushEmpty(object)
0x6a4: Call2 0x975

0x6a5: Stack[-2] = Stack[-1]
0x6a6: Pop(1)
0x6a7: Call2 0x8b6

0x6a8: Pop(2)
0x6a9: PushEmpty(object, object)
0x6aa: Stack[-2] = Stack[-11]
0x6ab: Stack[-1] = Stack[-6]
0x6ac: Push(-2, 4); TaskCall(11)
0x6ad: Call2 0x6c4

0x6ae: Pop(-2, 4); TaskReturn
0x6af: Pop(2)
0x6b0: @@ IsDialogEnd(Stack[-1])
0x6b1: Pop(0)
0x6b2: Pop(0); Push((bool) Stack[-1] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b4: @ sync()
0x6b5: Pop(0)
0x6b6: @@ IsDialogEnd(Stack[-1])
0x6b7: Pop(0)
0x6b8: GOTO 0x6b2

0x6b9: PushEmpty(object)
0x6ba: Stack[-1] = Stack[-10]
0x6bb: Call2 0x8a5

0x6bc: Pop(1)
0x6bd: @ StopDialog(Stack[-4])
0x6be: Pop(0)
0x6bf: @@ GetReturnValue(Stack[-2])
0x6c0: Pop(0)
0x6c1: Stack[-10] = Stack[-2]
0x6c2: Return(); Pop(8)

0x6c3: Stack[-4] = 0
0x6c4: PushEmpty()
0x6c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6c7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6c8: Push((int) 1)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6ca: PushEmpty(string)
0x6cb: Stack[-1] = "Neutral"
0x6cc: Call2 0x6fe

0x6cd: Pop(1)
0x6ce: Push((int) 540551)
0x6cf: @@ SetMessage(Stack[-1])
0x6d0: Pop(1)
0x6d1: @@ ClearReplies()
0x6d2: Pop(0)
0x6d3: Push((int) 540552)
0x6d4: Push((int) -1)
0x6d5: Push((int) 42561)
0x6d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(3)
0x6d8: Push((int) 540795)
0x6d9: Push((int) -1)
0x6da: Push((int) 42844)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: GOTO 0x6e0

0x6de: Return(); Pop(0)

0x6df: GOTO 0x6c8

0x6e0: PushEmpty(bool)
0x6e1: Call2 0x9ca

0x6e2: Pop(0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e4: @ lshWaitForAnimEnd()
0x6e5: Pop(0)
0x6e6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e7: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e8: GOTO 0x6ee

0x6e9: PushEmpty(string)
0x6ea: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6eb: Call2 0x940

0x6ec: Pop(1)
0x6ed: GOTO 0x6e4

0x6ee: GOTO 0x6fd

0x6ef: Push("all")
0x6f0: Push("idle")
0x6f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f2: Pop(2)
0x6f3: @ WaitForAnimEnd()
0x6f4: Pop(0)
0x6f5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f7: GOTO 0x6fd

0x6f8: Push("all")
0x6f9: Push("idle")
0x6fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x6fb: Pop(2)
0x6fc: GOTO 0x6f3

0x6fd: Return(); Pop(0)

0x6fe: PushEmpty()
0x6ff: PushEmpty(bool)
0x700: Call2 0x9ca

0x701: Pop(0)
0x702: Pop(1); Push((bool) Stack[-1] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x704: Return(); Pop(0)

0x705: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x706: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x707: Return(); Pop(0)

0x708: PushEmpty(string, bool)
0x709: Stack[-2] = Stack[-3]
0x70a: Push("")
0x70b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-1] = (bool) 0
0x70e: GOTO 0x710

0x70f: Stack[-1] = (bool) 1
0x710: Call2 0x950

0x711: Pop(2)
0x712: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x713: Return(); Pop(0)

0x714: PushEmpty()
0x715: Push((int) 1)
0x716: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x717: PushEmpty()
0x718: Call2 0x96e

0x719: Pop(0)
0x71a: Push((int) 42560)
0x71b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x71d: PushEmpty(string)
0x71e: Stack[-1] = "Neutral"
0x71f: Call2 0x6fe

0x720: Pop(1)
0x721: Push((int) 540551)
0x722: @@ SetMessage(Stack[-1])
0x723: Pop(1)
0x724: @@ ClearReplies()
0x725: Pop(0)
0x726: Push((int) 540552)
0x727: Push((int) -1)
0x728: Push((int) 42561)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Push((int) 540795)
0x72c: Push((int) -1)
0x72d: Push((int) 42844)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Return(); Pop(0)

0x731: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x732: PushEmpty(bool)
0x733: Call2 0x9ca

0x734: Pop(0)
0x735: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x736: @ lshStopAnimation()
0x737: Pop(0)
0x738: GOTO 0x73b

0x739: @ StopAnimation()
0x73a: Pop(0)
0x73b: Return(); Pop(0)

0x73c: GOTO 0x715

0x73d: Return(); Pop(0)

0x73e: Push(GlobalVars[1])
0x73f: Stack[-1] = (bool) 0
0x740: GlobalVars[1] = Stack[-1]; Pop(1)
0x741: PushEmpty()
0x742: Call2 0x745

0x743: Pop(0)
0x744: Return(); Pop(0)

0x745: PushEmpty(bool)
0x746: Call2 0x85c

0x747: Pop(0)
0x748: Pop(1); Push((bool) Stack[-1] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74a: @ Hold()
0x74b: Pop(0)
0x74c: @ GetDirection(Stack[-0])
0x74d: Pop(0)
0x74e: PushEmpty()
0x74f: Call2 0x7f5

0x750: Pop(0)
0x751: GOTO 0x74e

0x752: Return(); Pop(0)

0x753: PushEmpty(object, object)
0x754: Push("player")
0x755: @ FindActor(Stack[-2], Stack[-1])
0x756: Pop(1)
0x757: Pop(0); Push((bool) Stack[-1] == 0)
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-3] = (bool) 0
0x75a: Return(); Pop(2)

0x75b: PushEmpty(bool, object)
0x75c: Stack[-1] = Stack[-3]
0x75d: Call2 0x853

0x75e: Stack[-5] = Stack[-2]
0x75f: Pop(2)
0x760: Return(); Pop(2)

0x761: Stack[-1] = 0
0x762: Push(CvectorIndex(Stack[-0], 0))
0x763: Push(CvectorIndex(Stack[-0], 2))
0x764: @ RotateAsync(Stack[-2], Stack[-1])
0x765: Pop(2)
0x766: Return(); Pop(0)

0x767: PushEmpty(object, bool, object, bool)
0x768: Push("player")
0x769: @ FindActor(Stack[-3], Stack[-1])
0x76a: Pop(1)
0x76b: Pop(0); Push((bool) Stack[-2] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76d: Stack[-5] = (bool) 0
0x76e: Return(); Pop(4)

0x76f: PushEmpty(float, object)
0x770: Stack[-1] = Stack[-4]
0x771: Call2 0x841

0x772: Pop(1)
0x773: Push((float)90000.0)
0x774: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x776: Stack[-5] = (bool) 0
0x777: Return(); Pop(4)

0x778: @ CanSee(Stack[-1], Stack[-2])
0x779: Pop(0)
0x77a: Stack[-5] = Stack[-1]
0x77b: Return(); Pop(4)

0x77c: Stack[-2] = 0
0x77d: PushEmpty(float, float)
0x77e: Push((int) 8)
0x77f: Push((int) 16)
0x780: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x781: Pop(2)
0x782: Push((int) 10)
0x783: @ SetTimer(Stack[-1], Stack[-2])
0x784: Pop(1)
0x785: Return(); Pop(2)

0x786: Push((int) 10)
0x787: @ KillTimer(Stack[-1])
0x788: Pop(1)
0x789: Return(); Pop(0)

0x78a: PushEmpty()
0x78b: Push((int) 10)
0x78c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x78e: PushEmpty()
0x78f: Call2 0x786

0x790: Pop(0)
0x791: PushEmpty(bool)
0x792: Stack[-1] = (bool) 0
0x793: PushEmpty(bool)
0x794: Call2 0x85c

0x795: Pop(0)
0x796: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x797: PushEmpty(bool)
0x798: Call2 0x767

0x799: Pop(0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: Stack[-1] = (bool) 1
0x79c: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x79d: PushEmpty(bool)
0x79e: Call2 0x753

0x79f: Pop(0)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a1: PushEmpty(bool, object)
0x7a2: PushEmpty(object)
0x7a3: Call2 0x975

0x7a4: Stack[-2] = Stack[-1]
0x7a5: Pop(1)
0x7a6: Call2 0x8f0

0x7a7: Pop(2)
0x7a8: GOTO 0x7af

0x7a9: PushEmpty()
0x7aa: Call2 0x762

0x7ab: Pop(0)
0x7ac: PushEmpty()
0x7ad: Call2 0x77d

0x7ae: Pop(0)
0x7af: Return(); Pop(0)

0x7b0: PushEmpty()
0x7b1: Call2 0x83c

0x7b2: Pop(0)
0x7b3: PushEmpty()
0x7b4: Call2 0x786

0x7b5: Pop(0)
0x7b6: @ lshStopSpeech()
0x7b7: Pop(0)
0x7b8: @ lshStopAnimation()
0x7b9: Pop(0)
0x7ba: @ StopAsync()
0x7bb: Pop(0)
0x7bc: @ Hold()
0x7bd: Pop(0)
0x7be: Return(); Pop(0)

0x7bf: @ StopGroup0()
0x7c0: Pop(0)
0x7c1: PushEmpty()
0x7c2: Call2 0x786

0x7c3: Pop(0)
0x7c4: PushEmpty(string)
0x7c5: Stack[-1] = "Neutral"
0x7c6: Call2 0x940

0x7c7: Pop(1)
0x7c8: PushEmpty()
0x7c9: Call2 0x77d

0x7ca: Pop(0)
0x7cb: Return(); Pop(0)

0x7cc: PushEmpty()
0x7cd: Push(Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cf: PushEmpty()
0x7d0: Call2 0x77d

0x7d1: Pop(0)
0x7d2: GOTO 0x7d7

0x7d3: PushEmpty(string)
0x7d4: Stack[-1] = "Neutral"
0x7d5: Call2 0x940

0x7d6: Pop(1)
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty(bool, bool)
0x7d9: @ IsOverrideActive(Stack[-1])
0x7da: Pop(0)
0x7db: Pop(0); Push((bool) Stack[-1] == 0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7dd: EventDisable(0)
0x7de: PushEmpty()
0x7df: Call2 0x83c

0x7e0: Pop(0)
0x7e1: PushEmpty(bool, object)
0x7e2: Stack[-1] = Stack[-5]
0x7e3: Call2 0x853

0x7e4: Pop(2)
0x7e5: EventEnable(0)
0x7e6: PushEmpty(object)
0x7e7: Stack[-1] = Stack[-4]
0x7e8: Call2 0xab2

0x7e9: Pop(1)
0x7ea: PushEmpty(string)
0x7eb: Stack[-1] = "Neutral"
0x7ec: Call2 0x940

0x7ed: Pop(1)
0x7ee: PushEmpty()
0x7ef: Call2 0x786

0x7f0: Pop(0)
0x7f1: PushEmpty()
0x7f2: Call2 0x77d

0x7f3: Pop(0)
0x7f4: Return(); Pop(2)

0x7f5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x7f6: @ WaitForAnimEnd()
0x7f7: Pop(0)
0x7f8: PushEmpty(bool)
0x7f9: Call2 0x85c

0x7fa: Pop(0)
0x7fb: Pop(1); Push((bool) Stack[-1] == 0)
0x7fc: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fd: Return(); Pop(12)

0x7fe: PushEmpty(int)
0x7ff: Call2 0x9b1

0x800: Stack[-7] = Stack[-1]
0x801: Pop(1)
0x802: Stack[-5] = (int) 0
0x803: PushEmpty(bool)
0x804: Stack[-1] = (bool) 0
0x805: Push((int) 5)
0x806: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x808: PushEmpty(bool)
0x809: Call2 0x85c

0x80a: Pop(0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: Stack[-1] = (bool) 1
0x80d: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x80e: Pop(0); Push((bool) Stack[-6] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x810: Push((int) 3)
0x811: @ Sleep(Stack[-1], Stack[-5])
0x812: Pop(1)
0x813: Pop(0); Push((bool) Stack[-4] == 0)
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: GOTO 0x837

0x816: GOTO 0x82c

0x817: @ irand(Stack[-3], Stack[-6])
0x818: Pop(0)
0x819: Push((int) 5)
0x81a: @ irand(Stack[-3], Stack[-1])
0x81b: Pop(1)
0x81c: Push((int) 0)
0x81d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Stack[-3] = (int) 0
0x820: Push("all")
0x821: PushEmpty(string, int)
0x822: Stack[-1] = Stack[-6]
0x823: Call2 0x9aa

0x824: Pop(1)
0x825: @ PlayAnimation(Stack[-2], Stack[-1])
0x826: Pop(2)
0x827: @ WaitForAnimEnd(Stack[-1])
0x828: Pop(0)
0x829: Pop(0); Push((bool) Stack[-1] == 0)
0x82a: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82b: GOTO 0x837

0x82c: PushEmpty(bool)
0x82d: Call2 0x83a

0x82e: Pop(0)
0x82f: Pop(1); Push((bool) Stack[-1] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x831: GOTO 0x837

0x832: @ ResetAAS()
0x833: Pop(0)
0x834: Push((int) 1)
0x835: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x836: GOTO 0x803

0x837: @ ResetAAS()
0x838: Pop(0)
0x839: Return(); Pop(12)

0x83a: Stack[-1] = (bool) 1
0x83b: Return(); Pop(0)

0x83c: @ StopAnimation()
0x83d: Pop(0)
0x83e: @ StopGroup0()
0x83f: Pop(0)
0x840: Return(); Pop(0)

0x841: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x842: @ GetPosition(Stack[-3])
0x843: Pop(0)
0x844: @@ GetPosition(Stack[-2])
0x845: Pop(0)
0x846: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x847: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x848: Return(); Pop(6)

0x849: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x84a: @ GetPosition(Stack[-3])
0x84b: Pop(0)
0x84c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x84d: Push(CvectorIndex(Stack[-2], 0))
0x84e: Push(CvectorIndex(Stack[-3], 2))
0x84f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x850: Pop(2)
0x851: Stack[-8] = Stack[-1]
0x852: Return(); Pop(6)

0x853: PushEmpty(cvector, cvector)
0x854: @@ GetPosition(Stack[-1])
0x855: Pop(0)
0x856: PushEmpty(bool, cvector)
0x857: Stack[-1] = Stack[-3]
0x858: Call2 0x849

0x859: Stack[-6] = Stack[-2]
0x85a: Pop(2)
0x85b: Return(); Pop(2)

0x85c: PushEmpty(bool, bool)
0x85d: @ IsLoaded(Stack[-1])
0x85e: Pop(0)
0x85f: Stack[-3] = Stack[-1]
0x860: Return(); Pop(2)

0x861: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x862: @@ GetPosition(Stack[-8])
0x863: Pop(0)
0x864: @@ GetEyesHeight(Stack[-9])
0x865: Pop(0)
0x866: Push(CvectorIndex(Stack[-8], 1))
0x867: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x868: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x869: @ GetPosition(Stack[-7])
0x86a: Pop(0)
0x86b: @ GetEyesHeight(Stack[-9])
0x86c: Pop(0)
0x86d: Push(CvectorIndex(Stack[-7], 1))
0x86e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x86f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x870: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x871: Push(CvectorIndex(Stack[-6], 1))
0x872: Stack[-1] = (int) 0
0x873: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x874: Pop(0); Push(Stack[-6] | Stack[-6]);
0x875: Pop(1); Push(Sqrt(Stack[-1]))
0x876: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x877: Stack[-5] = -Stack[-6]; Pop(0);
0x878: Pop(0); Push(Stack[-6] * Stack[-19]);
0x879: PushEmpty(cvector, cvector)
0x87a: Push(CVector(0.0, 1.0, 0.0))
0x87b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x87c: Call2 0x97b

0x87d: Pop(1)
0x87e: Push((int) 25)
0x87f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x880: Pop(2); Push(Stack[-2] + Stack[-1]);
0x881: Push(CVector(0.0, 10.0, 0.0))
0x882: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x883: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x884: @ IsOverrideActive(Stack[-2])
0x885: Pop(0)
0x886: Push(Stack[-2])
0x887: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x888: Stack[-21] = (bool) 0
0x889: Return(); Pop(18)

0x88a: @ StopWorld()
0x88b: Pop(0)
0x88c: @ CameraTransit(Stack[-3], Stack[-5])
0x88d: Pop(0)
0x88e: Push(CvectorIndex(Stack[-4], 0))
0x88f: Push(CvectorIndex(Stack[-5], 2))
0x890: @ Rotate(Stack[-2], Stack[-1])
0x891: Pop(2)
0x892: PushEmpty(bool)
0x893: Call2 0x9ca

0x894: Pop(0)
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: GOTO 0x89f

0x897: Push("head")
0x898: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x899: Pop(1)
0x89a: Push(Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89c: Push("head")
0x89d: @ LookAsyncCamera(Stack[-1])
0x89e: Pop(1)
0x89f: @ CameraWaitForPlayFinish()
0x8a0: Pop(0)
0x8a1: @ ResumeWorld()
0x8a2: Pop(0)
0x8a3: Stack[-21] = (bool) 1
0x8a4: Return(); Pop(18)

0x8a5: PushEmpty(bool, bool)
0x8a6: @ CameraSwitchToNormal()
0x8a7: Pop(0)
0x8a8: PushEmpty(bool)
0x8a9: Call2 0x9ca

0x8aa: Pop(0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ac: GOTO 0x8b5

0x8ad: Push("head")
0x8ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8af: Pop(1)
0x8b0: Push(Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b2: Push("head")
0x8b3: @ UnlookAsync(Stack[-1])
0x8b4: Pop(1)
0x8b5: Return(); Pop(2)

0x8b6: PushEmpty(int, int, int, int)
0x8b7: Push("voice_common")
0x8b8: @ GetVariable(Stack[-1], Stack[-3])
0x8b9: Pop(1)
0x8ba: Push(Stack[-2])
0x8bb: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8bc: PushEmpty(bool, object)
0x8bd: Stack[-1] = Stack[-7]
0x8be: Call2 0x8f0

0x8bf: Pop(1)
0x8c0: Pop(1); Push((bool) Stack[-1] == 0)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c2: PushEmpty(bool, object)
0x8c3: Stack[-1] = Stack[-7]
0x8c4: Call2 0x915

0x8c5: Pop(1)
0x8c6: Pop(1); Push((bool) Stack[-1] == 0)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c8: Stack[-6] = (bool) 0
0x8c9: Return(); Pop(4)

0x8ca: Push((int) 2)
0x8cb: @ irand(Stack[-2], Stack[-1])
0x8cc: Pop(1)
0x8cd: Push(Stack[-1])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8cf: Push("voice_common")
0x8d0: Push((int) 1)
0x8d1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8d2: Push((int) 3)
0x8d3: Pop(2); Push(Stack[-2] % Stack[-1]);
0x8d4: @ SetVariable(Stack[-2], Stack[-1])
0x8d5: Pop(2)
0x8d6: GOTO 0x8db

0x8d7: Push("voice_common")
0x8d8: Push((int) 0)
0x8d9: @ SetVariable(Stack[-2], Stack[-1])
0x8da: Pop(2)
0x8db: GOTO 0x8ee

0x8dc: PushEmpty(bool, object)
0x8dd: Stack[-1] = Stack[-7]
0x8de: Call2 0x915

0x8df: Pop(1)
0x8e0: Pop(1); Push((bool) Stack[-1] == 0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e2: PushEmpty(bool, object)
0x8e3: Stack[-1] = Stack[-7]
0x8e4: Call2 0x8f0

0x8e5: Pop(1)
0x8e6: Pop(1); Push((bool) Stack[-1] == 0)
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: Stack[-6] = (bool) 0
0x8e9: Return(); Pop(4)

0x8ea: Push("voice_common")
0x8eb: Push((int) 1)
0x8ec: @ SetVariable(Stack[-2], Stack[-1])
0x8ed: Pop(2)
0x8ee: Stack[-6] = (bool) 1
0x8ef: Return(); Pop(4)

0x8f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x8f1: Stack[-5] = "c"
0x8f2: Stack[-4] = (int) 0
0x8f3: Push((int) 1)
0x8f4: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8f5: Push((int) 1)
0x8f6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8f8: @@ HasProperty(Stack[-1], Stack[-4])
0x8f9: Pop(1)
0x8fa: Pop(0); Push((bool) Stack[-3] == 0)
0x8fb: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8fc: GOTO 0x900

0x8fd: Push((int) 1)
0x8fe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8ff: GOTO 0x8f3

0x900: Pop(0); Push((bool) Stack[-4] == 0)
0x901: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x902: Stack[-12] = (bool) 0
0x903: Return(); Pop(10)

0x904: Stack[-2] = (int) 0
0x905: Push((int) 1)
0x906: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x907: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x908: @ irand(Stack[-2], Stack[-4])
0x909: Pop(0)
0x90a: Push((int) 1)
0x90b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x90c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x90d: @@ GetProperty(Stack[-1], Stack[-2])
0x90e: Pop(1)
0x90f: PushEmpty(bool, string)
0x910: Stack[-1] = Stack[-3]
0x911: Call2 0x95f

0x912: Stack[-14] = Stack[-2]
0x913: Pop(2)
0x914: Return(); Pop(10)

0x915: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x916: Push("d")
0x917: PushEmpty(int)
0x918: Call2 0x99b

0x919: Pop(0)
0x91a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x91b: Push("m")
0x91c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x91d: Stack[-4] = (int) 0
0x91e: Push((int) 1)
0x91f: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x920: Push((int) 1)
0x921: Pop(1); Push(Stack[-5] + Stack[-1]);
0x922: Pop(1); Push(Stack[-6] + Stack[-1]);
0x923: @@ HasProperty(Stack[-1], Stack[-4])
0x924: Pop(1)
0x925: Pop(0); Push((bool) Stack[-3] == 0)
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: GOTO 0x92b

0x928: Push((int) 1)
0x929: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x92a: GOTO 0x91e

0x92b: Pop(0); Push((bool) Stack[-4] == 0)
0x92c: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92d: Stack[-12] = (bool) 0
0x92e: Return(); Pop(10)

0x92f: Stack[-2] = (int) 0
0x930: Push((int) 1)
0x931: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x932: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x933: @ irand(Stack[-2], Stack[-4])
0x934: Pop(0)
0x935: Push((int) 1)
0x936: Pop(1); Push(Stack[-3] + Stack[-1]);
0x937: Pop(1); Push(Stack[-6] + Stack[-1]);
0x938: @@ GetProperty(Stack[-1], Stack[-2])
0x939: Pop(1)
0x93a: PushEmpty(bool, string)
0x93b: Stack[-1] = Stack[-3]
0x93c: Call2 0x95f

0x93d: Stack[-14] = Stack[-2]
0x93e: Pop(2)
0x93f: Return(); Pop(10)

0x940: PushEmpty(bool, float, float, bool, float, float)
0x941: @ lshHasAnimation(Stack[-3], Stack[-7])
0x942: Pop(0)
0x943: Push(Stack[-3])
0x944: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x945: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x946: Pop(0)
0x947: Push((bool) 0)
0x948: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x949: Pop(1)
0x94a: GOTO 0x94f

0x94b: Push("Can't find lsh animation : ")
0x94c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x94d: @ Trace(Stack[-1])
0x94e: Pop(1)
0x94f: Return(); Pop(6)

0x950: PushEmpty(bool, float, float, bool, float, float)
0x951: @ lshHasAnimation(Stack[-3], Stack[-8])
0x952: Pop(0)
0x953: Push(Stack[-3])
0x954: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x955: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x956: Pop(0)
0x957: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x958: Pop(0)
0x959: GOTO 0x95e

0x95a: Push("Can't find lsh animation : ")
0x95b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x95c: @ Trace(Stack[-1])
0x95d: Pop(1)
0x95e: Return(); Pop(6)

0x95f: PushEmpty(bool, bool)
0x960: PushEmpty(bool)
0x961: Call2 0x9ca

0x962: Pop(0)
0x963: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x964: @ lshHasSpeech(Stack[-1], Stack[-3])
0x965: Pop(0)
0x966: Push(Stack[-1])
0x967: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x968: @ lshPlaySpeech(Stack[-3])
0x969: Pop(0)
0x96a: Stack[-4] = (bool) 1
0x96b: Return(); Pop(2)

0x96c: Stack[-4] = (bool) 0
0x96d: Return(); Pop(2)

0x96e: PushEmpty(bool)
0x96f: Call2 0x9ca

0x970: Pop(0)
0x971: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x972: @ lshStopSpeech()
0x973: Pop(0)
0x974: Return(); Pop(0)

0x975: PushEmpty(object, object)
0x976: @ self(Stack[-1])
0x977: Pop(0)
0x978: Stack[-3] = Stack[-1]
0x979: Return(); Pop(2)

0x97a: Stack[-1] = 0
0x97b: PushEmpty(float, float)
0x97c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x97d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x97e: Push((float)0.0)
0x97f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x980: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x981: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x982: Return(); Pop(2)

0x983: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x984: Return(); Pop(2)

0x985: PushEmpty(int, int)
0x986: @ GetVariable(Stack[-3], Stack[-1])
0x987: Pop(0)
0x988: Stack[-4] = Stack[-1]
0x989: Return(); Pop(2)

0x98a: PushEmpty(object, object)
0x98b: @ FindActor(Stack[-1], Stack[-4])
0x98c: Pop(0)
0x98d: Pop(0); Push((bool) Stack[-1] == 0)
0x98e: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98f: Stack[-5] = (bool) 0
0x990: Return(); Pop(2)

0x991: @ Trigger(Stack[-1], Stack[-3])
0x992: Pop(0)
0x993: Stack[-5] = (bool) 1
0x994: Return(); Pop(2)

0x995: Stack[-1] = 0
0x996: PushEmpty(float, float)
0x997: @ GetGameTime(Stack[-1])
0x998: Pop(0)
0x999: Stack[-3] = Stack[-1]
0x99a: Return(); Pop(2)

0x99b: PushEmpty(float, float)
0x99c: @ GetGameTime(Stack[-1])
0x99d: Pop(0)
0x99e: Push((int) 1)
0x99f: PushEmpty(int)
0x9a0: Push((int) 24)
0x9a1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9a2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9a3: Return(); Pop(2)

0x9a4: PushEmpty()
0x9a5: PushEmpty(int)
0x9a6: Call2 0x99b

0x9a7: Pop(0)
0x9a8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty(string, string)
0x9ab: Stack[-1] = "idle"
0x9ac: Push(Stack[-3])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ae: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9af: Stack[-4] = Stack[-1]
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty(int, bool, int, bool)
0x9b2: Stack[-2] = (int) 0
0x9b3: Push("all")
0x9b4: PushEmpty(string, int)
0x9b5: Stack[-1] = Stack[-5]
0x9b6: Call2 0x9aa

0x9b7: Pop(1)
0x9b8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(2)
0x9ba: Pop(0); Push((bool) Stack[-1] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bc: GOTO 0x9c0

0x9bd: Push((int) 1)
0x9be: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9bf: GOTO 0x9b3

0x9c0: Stack[-5] = Stack[-2]
0x9c1: Return(); Pop(4)

0x9c2: Stack[-1] = (int) 515541
0x9c3: Return(); Pop(0)

0x9c4: Stack[-1] = (int) 502866
0x9c5: Return(); Pop(0)

0x9c6: Stack[-1] = "ui/NPC_Lara.png"
0x9c7: Return(); Pop(0)

0x9c8: Stack[-1] = "ui/NPC_Lara_b.png"
0x9c9: Return(); Pop(0)

0x9ca: Stack[-1] = (bool) 1
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty(object, object)
0x9cd: Push("b4q01")
0x9ce: Push((int) 2)
0x9cf: @ SetVariable(Stack[-2], Stack[-1])
0x9d0: Pop(2)
0x9d1: PushEmpty(object)
0x9d2: Call2 0xa6f

0x9d3: Stack[-2] = Stack[-1]
0x9d4: Pop(1)
0x9d5: Push("b4q01LaraGotoRubin")
0x9d6: Push("pt_map_warehouse_gangster")
0x9d7: Push((int) 1)
0x9d8: Push((int) 518593)
0x9d9: PushEmpty(float)
0x9da: Call2 0x996

0x9db: Pop(0)
0x9dc: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(5)
0x9de: PushEmpty()
0x9df: Call2 0xa39

0x9e0: Pop(0)
0x9e1: PushEmpty(bool, string, string)
0x9e2: Stack[-2] = "quest_b4_01"
0x9e3: Stack[-1] = "place_rubin"
0x9e4: Call2 0x98a

0x9e5: Pop(3)
0x9e6: Return(); Pop(2)

0x9e7: Stack[-1] = 0
0x9e8: PushEmpty()
0x9e9: Push("b4q01LaraWasBadRep")
0x9ea: Push((int) 1)
0x9eb: @ SetVariable(Stack[-2], Stack[-1])
0x9ec: Pop(2)
0x9ed: Return(); Pop(0)

0x9ee: PushEmpty()
0x9ef: Push("oob8Lara1")
0x9f0: Push((int) 1)
0x9f1: @ SetVariable(Stack[-2], Stack[-1])
0x9f2: Pop(2)
0x9f3: Return(); Pop(0)

0x9f4: PushEmpty()
0x9f5: PushEmpty(object, string, float)
0x9f6: PushEmpty(object)
0x9f7: Call2 0xa6f

0x9f8: Stack[-4] = Stack[-1]
0x9f9: Pop(1)
0x9fa: Stack[-2] = "pt_map_warehouse_gangster"
0x9fb: Stack[-1] = (int) 2
0x9fc: Call2 0xa80

0x9fd: Pop(3)
0x9fe: PushEmpty(object)
0x9ff: Call2 0xa6f

0xa00: Pop(0)
0xa01: @@ ShowMap(Stack[-1])
0xa02: Pop(1)
0xa03: Return(); Pop(0)

0xa04: PushEmpty()
0xa05: PushEmpty(int, string)
0xa06: Stack[-1] = "b8q02"
0xa07: Call2 0x985

0xa08: Pop(1)
0xa09: Push((int) 1)
0xa0a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0c: Stack[-2] = (bool) 1
0xa0d: Return(); Pop(0)

0xa0e: Stack[-2] = (bool) 0
0xa0f: Return(); Pop(0)

0xa10: PushEmpty()
0xa11: PushEmpty(int, string)
0xa12: Stack[-1] = "oob8Lara1"
0xa13: Call2 0x985

0xa14: Pop(1)
0xa15: Push((int) 0)
0xa16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-2] = (bool) 1
0xa19: Return(); Pop(0)

0xa1a: Stack[-2] = (bool) 0
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty()
0xa1d: PushEmpty(bool, object)
0xa1e: Stack[-1] = Stack[-3]
0xa1f: Call2 0xa32

0xa20: Pop(1)
0xa21: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa22: Stack[-2] = (bool) 1
0xa23: Return(); Pop(0)

0xa24: Stack[-2] = (bool) 0
0xa25: Return(); Pop(0)

0xa26: PushEmpty()
0xa27: PushEmpty(int, string)
0xa28: Stack[-1] = "b4q01"
0xa29: Call2 0x985

0xa2a: Pop(1)
0xa2b: Push((int) 1)
0xa2c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa2d: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2e: Stack[-2] = (bool) 1
0xa2f: Return(); Pop(0)

0xa30: Stack[-2] = (bool) 0
0xa31: Return(); Pop(0)

0xa32: PushEmpty(float, float)
0xa33: Push("reputation")
0xa34: @@ GetProperty(Stack[-1], Stack[-2])
0xa35: Pop(1)
0xa36: Push((float)0.7)
0xa37: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0xa38: Return(); Pop(2)

0xa39: PushEmpty(object, object)
0xa3a: Push((int) 218)
0xa3b: Push((int) 1)
0xa3c: Push((int) 518596)
0xa3d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa3e: Pop(3)
0xa3f: PushEmpty(bool, object, int)
0xa40: Stack[-2] = Stack[-4]
0xa41: Stack[-1] = (int) 216
0xa42: Call2 0xa53

0xa43: Pop(3)
0xa44: Return(); Pop(2)

0xa45: Stack[-1] = 0
0xa46: PushEmpty(object, object)
0xa47: @ GetDiaryRoot(Stack[-1])
0xa48: Pop(0)
0xa49: Pop(0); Push((bool) Stack[-1] == 0)
0xa4a: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4b: Push("Can't retrieve diary root")
0xa4c: @ Trace(Stack[-1])
0xa4d: Pop(1)
0xa4e: Stack[-3] = (bool) 0
0xa4f: Return(); Pop(2)

0xa50: Stack[-3] = Stack[-1]
0xa51: Return(); Pop(2)

0xa52: Stack[-1] = 0
0xa53: PushEmpty(object, object, int, object, object, int)
0xa54: PushEmpty(object)
0xa55: Call2 0xa46

0xa56: Stack[-4] = Stack[-1]
0xa57: Pop(1)
0xa58: @@ Find(Stack[-7], Stack[-2])
0xa59: Pop(0)
0xa5a: Pop(0); Push((bool) Stack[-2] == 0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5c: Push("Can't find diary parent with id: ")
0xa5d: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa5e: @ Trace(Stack[-1])
0xa5f: Pop(1)
0xa60: Stack[-9] = (bool) 0
0xa61: Return(); Pop(6)

0xa62: @@ AddChild(Stack[-8])
0xa63: Pop(0)
0xa64: Push((int) 7)
0xa65: @ SendWorldWndMessage(Stack[-1])
0xa66: Pop(1)
0xa67: @@ GetCategory(Stack[-1])
0xa68: Pop(0)
0xa69: @ SetDiarySection(Stack[-1])
0xa6a: Pop(0)
0xa6b: Stack[-9] = (bool) 0
0xa6c: Return(); Pop(6)

0xa6d: Stack[-2] = 0
0xa6e: Stack[-3] = 0
0xa6f: PushEmpty(object, object, object, object)
0xa70: @ GetMainOutdoorScene(Stack[-2])
0xa71: Pop(0)
0xa72: Pop(0); Push((bool) Stack[-2] == 0)
0xa73: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa74: Push("Can't find main outdoor scene")
0xa75: @ Trace(Stack[-1])
0xa76: Pop(1)
0xa77: Stack[-1] = 0
0xa78: Stack[-5] = Stack[-1]
0xa79: Return(); Pop(4)

0xa7a: @@ GetMap(Stack[-1])
0xa7b: Pop(0)
0xa7c: Stack[-5] = Stack[-1]
0xa7d: Return(); Pop(4)

0xa7e: Stack[-1] = 0
0xa7f: Stack[-2] = 0
0xa80: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xa81: @ GetMainOutdoorScene(Stack[-2])
0xa82: Pop(0)
0xa83: Pop(0); Push((bool) Stack[-2] == 0)
0xa84: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa85: Push("Can't find main outdoor scene")
0xa86: @ Trace(Stack[-1])
0xa87: Pop(1)
0xa88: Return(); Pop(8)

0xa89: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xa8a: Pop(0)
0xa8b: Pop(0); Push((bool) Stack[-1] == 0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa8d: Push("Warning: outdoor scene locator ")
0xa8e: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa8f: Push(" doesnt exist")
0xa90: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa91: @ Trace(Stack[-1])
0xa92: Pop(1)
0xa93: @@ GetMap(Stack[-11])
0xa94: Pop(0)
0xa95: Pop(0); Push((bool) Stack[-11] == 0)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa97: Push("Can't find map")
0xa98: @ Trace(Stack[-1])
0xa99: Pop(1)
0xa9a: Return(); Pop(8)

0xa9b: Push(CvectorIndex(Stack[-4], 0))
0xa9c: Push(CvectorIndex(Stack[-5], 2))
0xa9d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xa9e: Pop(2)
0xa9f: Return(); Pop(8)

0xaa0: Stack[-2] = 0
0xaa1: PushEmpty(int, int)
0xaa2: Push("branch")
0xaa3: @ GetVariable(Stack[-1], Stack[-2])
0xaa4: Pop(1)
0xaa5: Push((int) 0)
0xaa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa8: Stack[-3] = (int) 1
0xaa9: Return(); Pop(2)

0xaaa: GOTO 0xab0

0xaab: Push((int) 1)
0xaac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaad: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaae: Stack[-3] = (int) 2
0xaaf: Return(); Pop(2)

0xab0: Stack[-3] = (int) 3
0xab1: Return(); Pop(2)

0xab2: PushEmpty()
0xab3: Push(GlobalVars[1])
0xab4: Pop(1); Push((bool) Stack[-1] == 0)
0xab5: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xab6: PushEmpty(int, object)
0xab7: Stack[-1] = Stack[-3]
0xab8: Push(-2, 1); TaskCall(2)
0xab9: Call2 0x103

0xaba: Pop(-2, 1); TaskReturn
0xabb: Pop(2)
0xabc: Push(GlobalVars[1])
0xabd: Stack[-1] = (bool) 1
0xabe: GlobalVars[1] = Stack[-1]; Pop(1)
0xabf: PushEmpty(bool, int)
0xac0: Stack[-1] = (int) 4
0xac1: Call2 0x9a4

0xac2: Pop(1)
0xac3: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac4: PushEmpty(int, object)
0xac5: Stack[-1] = Stack[-3]
0xac6: Push(-2, 1); TaskCall(4)
0xac7: Call2 0x1ce

0xac8: Pop(-2, 1); TaskReturn
0xac9: Pop(2)
0xaca: Return(); Pop(0)

0xacb: PushEmpty(bool, int)
0xacc: Stack[-1] = (int) 8
0xacd: Call2 0x9a4

0xace: Pop(1)
0xacf: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xad0: PushEmpty(int, object)
0xad1: Stack[-1] = Stack[-3]
0xad2: Push(-2, 1); TaskCall(6)
0xad3: Call2 0x45a

0xad4: Pop(-2, 1); TaskReturn
0xad5: Pop(2)
0xad6: Return(); Pop(0)

0xad7: PushEmpty(bool, int)
0xad8: Stack[-1] = (int) 10
0xad9: Call2 0x9a4

0xada: Pop(1)
0xadb: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xadc: PushEmpty(int, object)
0xadd: Stack[-1] = Stack[-3]
0xade: Push(-2, 1); TaskCall(8)
0xadf: Call2 0x5b2

0xae0: Pop(-2, 1); TaskReturn
0xae1: Pop(2)
0xae2: Return(); Pop(0)

0xae3: PushEmpty(bool)
0xae4: Stack[-1] = (bool) 0
0xae5: PushEmpty(bool, int)
0xae6: Stack[-1] = (int) 12
0xae7: Call2 0x9a4

0xae8: Pop(1)
0xae9: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaea: Push(GlobalVars[2])
0xaeb: Pop(1); Push((bool) Stack[-1] == 0)
0xaec: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaed: Stack[-1] = (bool) 1
0xaee: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaef: PushEmpty(int, object)
0xaf0: Stack[-1] = Stack[-3]
0xaf1: Push(-2, 1); TaskCall(0)
0xaf2: Call2 0x0

0xaf3: Pop(-2, 1); TaskReturn
0xaf4: Pop(2)
0xaf5: Push(GlobalVars[2])
0xaf6: Stack[-1] = (bool) 1
0xaf7: GlobalVars[2] = Stack[-1]; Pop(1)
0xaf8: Return(); Pop(0)

0xaf9: PushEmpty(int, object)
0xafa: Stack[-1] = Stack[-3]
0xafb: Push(-2, 1); TaskCall(10)
0xafc: Call2 0x673

0xafd: Pop(-2, 1); TaskReturn
0xafe: Pop(2)
0xaff: Return(); Pop(0)

