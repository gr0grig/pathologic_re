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
	Grin
	Anger
	Jeer
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Georg.png
	ui/NPC_Georg_b.png
	b8q03
	b8q03GeorgGotoKaterina
	pt_map_katerina
	AddMark
	oob8Georg1
	oob8Georg2
	playsound
	givemoney
	b8GeorgVisit
	money3000 is given
	b8q03MladVladIsVictim
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x60a
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2cf Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e0 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x656 Vars = (int)
		EVENT_6 Op = 0x67c Vars = ()
		EVENT_5 Op = 0x68b Vars = ()
		EVENT_45 Op = 0x698 Vars = (bool)
		EVENT_0 Op = 0x6a4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x734

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8aa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8a8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8ac

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8ae

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x9c0

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
0x31: Call2 0x848

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x789

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
0x48: Call2 0x778

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
0x5b: Push((int) 535231)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535232)
0x61: Push((int) 36953)
0x62: Push((int) 36907)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535233)
0x66: Push((int) -1)
0x67: Push((int) 36908)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535280)
0x6b: Push((int) -1)
0x6c: Push((int) 36956)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x8b0

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x813

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
0x92: Call2 0x8b0

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
0xa2: Call2 0x823

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x841

0xab: Pop(0)
0xac: Push((int) 36906)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535231)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535232)
0xb9: Push((int) 36953)
0xba: Push((int) 36907)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535233)
0xbe: Push((int) -1)
0xbf: Push((int) 36908)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535280)
0xc3: Push((int) -1)
0xc4: Push((int) 36956)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36953)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535277)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535278)
0xd5: Push((int) 36957)
0xd6: Push((int) 36954)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535279)
0xda: Push((int) 36957)
0xdb: Push((int) 36955)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36957)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535281)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535282)
0xec: Push((int) -1)
0xed: Push((int) 36958)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535283)
0xf1: Push((int) -1)
0xf2: Push((int) 36959)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x8b0

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
0x108: Call2 0x734

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x8aa

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x8a8

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x8ac

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x8ae

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x9c0

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
0x134: Call2 0x848

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x789

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
0x14b: Call2 0x778

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
0x15e: Push((int) 518057)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 518058)
0x164: Push((int) 32643)
0x165: Push((int) 19191)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 531316)
0x169: Push((int) 32643)
0x16a: Push((int) 32642)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x8b0

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x813

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
0x190: Call2 0x8b0

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
0x1a0: Call2 0x823

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x841

0x1a9: Pop(0)
0x1aa: Push((int) 19190)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 518057)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 518058)
0x1b7: Push((int) 32643)
0x1b8: Push((int) 19191)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 531316)
0x1bc: Push((int) 32643)
0x1bd: Push((int) 32642)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 32643)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x18e

0x1c7: Pop(1)
0x1c8: Push((int) 531317)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 531318)
0x1ce: Push((int) -1)
0x1cf: Push((int) 32644)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 531319)
0x1d3: Push((int) -1)
0x1d4: Push((int) 32645)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d9: PushEmpty(bool)
0x1da: Call2 0x8b0

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dd: @ lshStopAnimation()
0x1de: Pop(0)
0x1df: GOTO 0x1e2

0x1e0: @ StopAnimation()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: GOTO 0x1a5

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e7: PushEmpty(bool, object, float)
0x1e8: Stack[-2] = Stack[-12]
0x1e9: Stack[-1] = (float) 70.0
0x1ea: Call2 0x734

0x1eb: Pop(2)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-10] = (int) -2
0x1ef: Return(); Pop(8)

0x1f0: @ CreateDialog(Stack[-4])
0x1f1: Pop(0)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x8aa

0x1f4: Pop(0)
0x1f5: @@ SetNPCName(Stack[-1])
0x1f6: Pop(1)
0x1f7: PushEmpty(int)
0x1f8: Call2 0x8a8

0x1f9: Pop(0)
0x1fa: @@ SetNPCDescription(Stack[-1])
0x1fb: Pop(1)
0x1fc: PushEmpty(string)
0x1fd: Call2 0x8ac

0x1fe: Pop(0)
0x1ff: @@ SetPhoto(Stack[-1])
0x200: Pop(1)
0x201: PushEmpty(string)
0x202: Call2 0x8ae

0x203: Pop(0)
0x204: @@ SetPhoto2(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(int)
0x207: Call2 0x9c0

0x208: Pop(0)
0x209: @@ SetPlayerName(Stack[-1])
0x20a: Pop(1)
0x20b: Stack[-2] = (int) -1
0x20c: @ IsOverrideActive(Stack[-3])
0x20d: Pop(0)
0x20e: Push(Stack[-3])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-10] = (int) -2
0x211: Return(); Pop(8)

0x212: @ DoDialog(Stack[-4])
0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: PushEmpty(object)
0x216: Call2 0x848

0x217: Stack[-2] = Stack[-1]
0x218: Pop(1)
0x219: Call2 0x789

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[-11]
0x21d: Stack[-1] = Stack[-6]
0x21e: Push(-2, 4); TaskCall(5)
0x21f: Call2 0x236

0x220: Pop(-2, 4); TaskReturn
0x221: Pop(2)
0x222: @@ IsDialogEnd(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x226: @ sync()
0x227: Pop(0)
0x228: @@ IsDialogEnd(Stack[-1])
0x229: Pop(0)
0x22a: GOTO 0x224

0x22b: PushEmpty(object)
0x22c: Stack[-1] = Stack[-10]
0x22d: Call2 0x778

0x22e: Pop(1)
0x22f: @ StopDialog(Stack[-4])
0x230: Pop(0)
0x231: @@ GetReturnValue(Stack[-2])
0x232: Pop(0)
0x233: Stack[-10] = Stack[-2]
0x234: Return(); Pop(8)

0x235: Stack[-4] = 0
0x236: PushEmpty()
0x237: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x238: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23a: Push((int) 1)
0x23b: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0x900

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x241: PushEmpty(object, object)
0x242: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x243: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x244: Call2 0x8cc

0x245: Pop(2)
0x246: PushEmpty(object, object)
0x247: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x248: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x249: Call2 0x8de

0x24a: Pop(2)
0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral"
0x24d: Call2 0x2b9

0x24e: Pop(1)
0x24f: Push((int) 521502)
0x250: @@ SetMessage(Stack[-1])
0x251: Pop(1)
0x252: @@ ClearReplies()
0x253: Pop(0)
0x254: Push((int) 523951)
0x255: Push((int) 25235)
0x256: Push((int) 25234)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: GOTO 0x29b

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call2 0x2b9

0x25d: Pop(1)
0x25e: Push((int) 521505)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: PushEmpty(bool, object)
0x264: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x265: Call2 0x90c

0x266: Pop(1)
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: Push((int) 521506)
0x269: Push((int) 22668)
0x26a: Push((int) 22667)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: PushEmpty(bool)
0x26e: Stack[-1] = (bool) 0
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x92f

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0x946

0x277: Pop(1)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Stack[-1] = (bool) 1
0x27a: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27b: Push((int) 521523)
0x27c: Push((int) 25213)
0x27d: Push((int) 22684)
0x27e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27f: Pop(3)
0x280: PushEmpty(bool)
0x281: Stack[-1] = (bool) 0
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x284: Call2 0x918

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x287: PushEmpty(bool, object)
0x288: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x289: Call2 0x946

0x28a: Pop(1)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: Stack[-1] = (bool) 1
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: Push((int) 521526)
0x28f: Push((int) 22688)
0x290: Push((int) 22687)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Push((int) 521509)
0x294: Push((int) -1)
0x295: Push((int) 22670)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: GOTO 0x29b

0x299: Return(); Pop(0)

0x29a: GOTO 0x23a

0x29b: PushEmpty(bool)
0x29c: Call2 0x8b0

0x29d: Pop(0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x29f: @ lshWaitForAnimEnd()
0x2a0: Pop(0)
0x2a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: GOTO 0x2a9

0x2a4: PushEmpty(string)
0x2a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2a6: Call2 0x813

0x2a7: Pop(1)
0x2a8: GOTO 0x29f

0x2a9: GOTO 0x2b8

0x2aa: Push("all")
0x2ab: Push("idle")
0x2ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ad: Pop(2)
0x2ae: @ WaitForAnimEnd()
0x2af: Pop(0)
0x2b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2b8

0x2b3: Push("all")
0x2b4: Push("idle")
0x2b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: GOTO 0x2ae

0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x8b0

0x2bc: Pop(0)
0x2bd: Pop(1); Push((bool) Stack[-1] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Return(); Pop(0)

0x2c0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(string, bool)
0x2c4: Stack[-2] = Stack[-3]
0x2c5: Push("")
0x2c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-1] = (bool) 0
0x2c9: GOTO 0x2cb

0x2ca: Stack[-1] = (bool) 1
0x2cb: Call2 0x823

0x2cc: Pop(2)
0x2cd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Push((int) 1)
0x2d1: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x2d2: PushEmpty()
0x2d3: Call2 0x841

0x2d4: Pop(0)
0x2d5: Push((int) 22664)
0x2d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: PushEmpty(object, object)
0x2d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2db: Call2 0x8b2

0x2dc: Pop(2)
0x2dd: Push((int) 22669)
0x2de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e0: PushEmpty(object, object)
0x2e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e3: Call2 0x8b2

0x2e4: Pop(2)
0x2e5: Push((int) 22684)
0x2e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e8: PushEmpty(object, object)
0x2e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2eb: Call2 0x8d2

0x2ec: Pop(2)
0x2ed: Push((int) 25222)
0x2ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(object, object)
0x2f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x8e4

0x2f4: Pop(2)
0x2f5: Push((int) 25223)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call2 0x8e4

0x2fc: Pop(2)
0x2fd: Push((int) 25224)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(object, object)
0x301: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x302: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x303: Call2 0x8e4

0x304: Pop(2)
0x305: Push((int) 25219)
0x306: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: PushEmpty(object, object)
0x309: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30b: Call2 0x8e4

0x30c: Pop(2)
0x30d: Push((int) 25220)
0x30e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(object, object)
0x311: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x312: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x313: Call2 0x8e4

0x314: Pop(2)
0x315: Push((int) 22687)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x318: PushEmpty(object, object)
0x319: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31b: Call2 0x8d2

0x31c: Pop(2)
0x31d: Push((int) 22689)
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x320: PushEmpty(object, object)
0x321: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x322: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x323: Call2 0x8d8

0x324: Pop(2)
0x325: PushEmpty(object, object)
0x326: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0x8f6

0x329: Pop(2)
0x32a: PushEmpty(object, object)
0x32b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call2 0x8ed

0x32e: Pop(2)
0x32f: Push((int) 25228)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x332: PushEmpty(object, object)
0x333: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x334: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x335: Call2 0x8f6

0x336: Pop(2)
0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x8d8

0x33b: Pop(2)
0x33c: PushEmpty(object, object)
0x33d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33f: Call2 0x8ed

0x340: Pop(2)
0x341: Push((int) 25229)
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: PushEmpty(object, object)
0x345: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x346: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x347: Call2 0x8ed

0x348: Pop(2)
0x349: Push((int) 25231)
0x34a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: PushEmpty(object, object)
0x34d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34f: Call2 0x8ed

0x350: Pop(2)
0x351: Push((int) 22663)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x356: Call2 0x900

0x357: Pop(1)
0x358: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x359: PushEmpty(object, object)
0x35a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35c: Call2 0x8cc

0x35d: Pop(2)
0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0x8de

0x362: Pop(2)
0x363: PushEmpty(string)
0x364: Stack[-1] = "Neutral"
0x365: Call2 0x2b9

0x366: Pop(1)
0x367: Push((int) 521502)
0x368: @@ SetMessage(Stack[-1])
0x369: Pop(1)
0x36a: @@ ClearReplies()
0x36b: Pop(0)
0x36c: Push((int) 523951)
0x36d: Push((int) 25235)
0x36e: Push((int) 25234)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: PushEmpty(string)
0x373: Stack[-1] = "Neutral"
0x374: Call2 0x2b9

0x375: Pop(1)
0x376: Push((int) 521505)
0x377: @@ SetMessage(Stack[-1])
0x378: Pop(1)
0x379: @@ ClearReplies()
0x37a: Pop(0)
0x37b: PushEmpty(bool, object)
0x37c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Call2 0x90c

0x37e: Pop(1)
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: Push((int) 521506)
0x381: Push((int) 22668)
0x382: Push((int) 22667)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: PushEmpty(bool)
0x386: Stack[-1] = (bool) 0
0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x389: Call2 0x92f

0x38a: Pop(1)
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: PushEmpty(bool, object)
0x38d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38e: Call2 0x946

0x38f: Pop(1)
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Stack[-1] = (bool) 1
0x392: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x393: Push((int) 521523)
0x394: Push((int) 25213)
0x395: Push((int) 22684)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: PushEmpty(bool)
0x399: Stack[-1] = (bool) 0
0x39a: PushEmpty(bool, object)
0x39b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Call2 0x918

0x39d: Pop(1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a1: Call2 0x946

0x3a2: Pop(1)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Stack[-1] = (bool) 1
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a6: Push((int) 521526)
0x3a7: Push((int) 22688)
0x3a8: Push((int) 22687)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Push((int) 521509)
0x3ac: Push((int) -1)
0x3ad: Push((int) 22670)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 22688)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Grin"
0x3b6: Call2 0x2b9

0x3b7: Pop(1)
0x3b8: Push((int) 521527)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 521528)
0x3be: Push((int) -1)
0x3bf: Push((int) 22689)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Push((int) 523942)
0x3c3: Push((int) 25227)
0x3c4: Push((int) 25225)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Push((int) 523943)
0x3c8: Push((int) 25230)
0x3c9: Push((int) 25226)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 25230)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Grin"
0x3d2: Call2 0x2b9

0x3d3: Pop(1)
0x3d4: Push((int) 523947)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 523948)
0x3da: Push((int) -1)
0x3db: Push((int) 25231)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Return(); Pop(0)

0x3df: Push((int) 25227)
0x3e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3e2: PushEmpty(string)
0x3e3: Stack[-1] = "Grin"
0x3e4: Call2 0x2b9

0x3e5: Pop(1)
0x3e6: Push((int) 523944)
0x3e7: @@ SetMessage(Stack[-1])
0x3e8: Pop(1)
0x3e9: @@ ClearReplies()
0x3ea: Pop(0)
0x3eb: Push((int) 523945)
0x3ec: Push((int) -1)
0x3ed: Push((int) 25228)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: Push((int) 523946)
0x3f1: Push((int) -1)
0x3f2: Push((int) 25229)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Return(); Pop(0)

0x3f6: Push((int) 25213)
0x3f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral"
0x3fb: Call2 0x2b9

0x3fc: Pop(1)
0x3fd: Push((int) 523930)
0x3fe: @@ SetMessage(Stack[-1])
0x3ff: Pop(1)
0x400: @@ ClearReplies()
0x401: Pop(0)
0x402: Push((int) 523931)
0x403: Push((int) 22685)
0x404: Push((int) 25214)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Push((int) 523932)
0x408: Push((int) 25216)
0x409: Push((int) 25215)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 25216)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Grin"
0x412: Call2 0x2b9

0x413: Pop(1)
0x414: Push((int) 523933)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 530662)
0x41a: Push((int) 22685)
0x41b: Push((int) 31958)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 22685)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Grin"
0x424: Call2 0x2b9

0x425: Pop(1)
0x426: Push((int) 521524)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 521525)
0x42c: Push((int) 25221)
0x42d: Push((int) 22686)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Push((int) 523934)
0x431: Push((int) 25218)
0x432: Push((int) 25217)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Return(); Pop(0)

0x436: Push((int) 25218)
0x437: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x439: PushEmpty(string)
0x43a: Stack[-1] = "Grin"
0x43b: Call2 0x2b9

0x43c: Pop(1)
0x43d: Push((int) 523935)
0x43e: @@ SetMessage(Stack[-1])
0x43f: Pop(1)
0x440: @@ ClearReplies()
0x441: Pop(0)
0x442: Push((int) 523936)
0x443: Push((int) -1)
0x444: Push((int) 25219)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Push((int) 523937)
0x448: Push((int) -1)
0x449: Push((int) 25220)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: Return(); Pop(0)

0x44d: Push((int) 25221)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Grin"
0x452: Call2 0x2b9

0x453: Pop(1)
0x454: Push((int) 523938)
0x455: @@ SetMessage(Stack[-1])
0x456: Pop(1)
0x457: @@ ClearReplies()
0x458: Pop(0)
0x459: Push((int) 523939)
0x45a: Push((int) -1)
0x45b: Push((int) 25222)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Push((int) 523940)
0x45f: Push((int) -1)
0x460: Push((int) 25223)
0x461: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: Push((int) 523941)
0x464: Push((int) -1)
0x465: Push((int) 25224)
0x466: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x467: Pop(3)
0x468: Return(); Pop(0)

0x469: Push((int) 22668)
0x46a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x46c: PushEmpty(string)
0x46d: Stack[-1] = "Neutral"
0x46e: Call2 0x2b9

0x46f: Pop(1)
0x470: Push((int) 521507)
0x471: @@ SetMessage(Stack[-1])
0x472: Pop(1)
0x473: @@ ClearReplies()
0x474: Pop(0)
0x475: Push((int) 523949)
0x476: Push((int) 25233)
0x477: Push((int) 25232)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Return(); Pop(0)

0x47b: Push((int) 25233)
0x47c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x47e: PushEmpty(string)
0x47f: Stack[-1] = "Neutral"
0x480: Call2 0x2b9

0x481: Pop(1)
0x482: Push((int) 523950)
0x483: @@ SetMessage(Stack[-1])
0x484: Pop(1)
0x485: @@ ClearReplies()
0x486: Pop(0)
0x487: Push((int) 521508)
0x488: Push((int) -1)
0x489: Push((int) 22669)
0x48a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48b: Pop(3)
0x48c: Return(); Pop(0)

0x48d: Push((int) 25241)
0x48e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x490: Push((int) 25235)
0x491: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Anger"
0x495: Call2 0x2b9

0x496: Pop(1)
0x497: Push((int) 523952)
0x498: @@ SetMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ ClearReplies()
0x49b: Pop(0)
0x49c: Push((int) 523953)
0x49d: Push((int) 25237)
0x49e: Push((int) 25236)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Push((int) 523960)
0x4a2: Push((int) 25245)
0x4a3: Push((int) 25244)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: Return(); Pop(0)

0x4a7: Push((int) 25245)
0x4a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = "Neutral"
0x4ac: Call2 0x2b9

0x4ad: Pop(1)
0x4ae: Push((int) 523961)
0x4af: @@ SetMessage(Stack[-1])
0x4b0: Pop(1)
0x4b1: @@ ClearReplies()
0x4b2: Pop(0)
0x4b3: Push((int) 523962)
0x4b4: Push((int) 25247)
0x4b5: Push((int) 25246)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Return(); Pop(0)

0x4b9: Push((int) 25247)
0x4ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "Neutral"
0x4be: Call2 0x2b9

0x4bf: Pop(1)
0x4c0: Push((int) 523963)
0x4c1: @@ SetMessage(Stack[-1])
0x4c2: Pop(1)
0x4c3: @@ ClearReplies()
0x4c4: Pop(0)
0x4c5: Push((int) 523964)
0x4c6: Push((int) 25237)
0x4c7: Push((int) 25248)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: Push((int) 25237)
0x4cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Anger"
0x4d0: Call2 0x2b9

0x4d1: Pop(1)
0x4d2: Push((int) 523954)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: Push((int) 523955)
0x4d8: Push((int) 25239)
0x4d9: Push((int) 25238)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Return(); Pop(0)

0x4dd: Push((int) 25239)
0x4de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e0: PushEmpty(string)
0x4e1: Stack[-1] = "Jeer"
0x4e2: Call2 0x2b9

0x4e3: Pop(1)
0x4e4: Push((int) 523956)
0x4e5: @@ SetMessage(Stack[-1])
0x4e6: Pop(1)
0x4e7: @@ ClearReplies()
0x4e8: Pop(0)
0x4e9: Push((int) 523965)
0x4ea: Push((int) 25250)
0x4eb: Push((int) 25249)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Return(); Pop(0)

0x4ef: Push((int) 25261)
0x4f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f2: Push((int) 25250)
0x4f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4f5: PushEmpty(string)
0x4f6: Stack[-1] = "Grin"
0x4f7: Call2 0x2b9

0x4f8: Pop(1)
0x4f9: Push((int) 523966)
0x4fa: @@ SetMessage(Stack[-1])
0x4fb: Pop(1)
0x4fc: @@ ClearReplies()
0x4fd: Pop(0)
0x4fe: Push((int) 523967)
0x4ff: Push((int) 25252)
0x500: Push((int) 25251)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Return(); Pop(0)

0x504: Push((int) 25252)
0x505: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x507: PushEmpty(string)
0x508: Stack[-1] = "Grin"
0x509: Call2 0x2b9

0x50a: Pop(1)
0x50b: Push((int) 523968)
0x50c: @@ SetMessage(Stack[-1])
0x50d: Pop(1)
0x50e: @@ ClearReplies()
0x50f: Pop(0)
0x510: Push((int) 523971)
0x511: Push((int) 25256)
0x512: Push((int) 25255)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Push((int) 523973)
0x516: Push((int) 25256)
0x517: Push((int) 25257)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 25256)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Grin"
0x520: Call2 0x2b9

0x521: Pop(1)
0x522: Push((int) 523972)
0x523: @@ SetMessage(Stack[-1])
0x524: Pop(1)
0x525: @@ ClearReplies()
0x526: Pop(0)
0x527: Push((int) 521503)
0x528: Push((int) -1)
0x529: Push((int) 22664)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Push((int) 521504)
0x52d: Push((int) -1)
0x52e: Push((int) 22665)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Return(); Pop(0)

0x532: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x533: PushEmpty(bool)
0x534: Call2 0x8b0

0x535: Pop(0)
0x536: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x537: @ lshStopAnimation()
0x538: Pop(0)
0x539: GOTO 0x53c

0x53a: @ StopAnimation()
0x53b: Pop(0)
0x53c: Return(); Pop(0)

0x53d: GOTO 0x2d0

0x53e: Return(); Pop(0)

0x53f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x540: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x541: PushEmpty(bool, object, float)
0x542: Stack[-2] = Stack[-12]
0x543: Stack[-1] = (float) 70.0
0x544: Call2 0x734

0x545: Pop(2)
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-10] = (int) -2
0x549: Return(); Pop(8)

0x54a: @ CreateDialog(Stack[-4])
0x54b: Pop(0)
0x54c: PushEmpty(int)
0x54d: Call2 0x8aa

0x54e: Pop(0)
0x54f: @@ SetNPCName(Stack[-1])
0x550: Pop(1)
0x551: PushEmpty(int)
0x552: Call2 0x8a8

0x553: Pop(0)
0x554: @@ SetNPCDescription(Stack[-1])
0x555: Pop(1)
0x556: PushEmpty(string)
0x557: Call2 0x8ac

0x558: Pop(0)
0x559: @@ SetPhoto(Stack[-1])
0x55a: Pop(1)
0x55b: PushEmpty(string)
0x55c: Call2 0x8ae

0x55d: Pop(0)
0x55e: @@ SetPhoto2(Stack[-1])
0x55f: Pop(1)
0x560: PushEmpty(int)
0x561: Call2 0x9c0

0x562: Pop(0)
0x563: @@ SetPlayerName(Stack[-1])
0x564: Pop(1)
0x565: Stack[-2] = (int) -1
0x566: @ IsOverrideActive(Stack[-3])
0x567: Pop(0)
0x568: Push(Stack[-3])
0x569: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56a: Stack[-10] = (int) -2
0x56b: Return(); Pop(8)

0x56c: @ DoDialog(Stack[-4])
0x56d: Pop(0)
0x56e: PushEmpty(bool, object)
0x56f: PushEmpty(object)
0x570: Call2 0x848

0x571: Stack[-2] = Stack[-1]
0x572: Pop(1)
0x573: Call2 0x789

0x574: Pop(2)
0x575: PushEmpty(object, object)
0x576: Stack[-2] = Stack[-11]
0x577: Stack[-1] = Stack[-6]
0x578: Push(-2, 4); TaskCall(7)
0x579: Call2 0x590

0x57a: Pop(-2, 4); TaskReturn
0x57b: Pop(2)
0x57c: @@ IsDialogEnd(Stack[-1])
0x57d: Pop(0)
0x57e: Pop(0); Push((bool) Stack[-1] == 0)
0x57f: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x580: @ sync()
0x581: Pop(0)
0x582: @@ IsDialogEnd(Stack[-1])
0x583: Pop(0)
0x584: GOTO 0x57e

0x585: PushEmpty(object)
0x586: Stack[-1] = Stack[-10]
0x587: Call2 0x778

0x588: Pop(1)
0x589: @ StopDialog(Stack[-4])
0x58a: Pop(0)
0x58b: @@ GetReturnValue(Stack[-2])
0x58c: Pop(0)
0x58d: Stack[-10] = Stack[-2]
0x58e: Return(); Pop(8)

0x58f: Stack[-4] = 0
0x590: PushEmpty()
0x591: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x592: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x593: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x594: Push((int) 1)
0x595: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x596: PushEmpty(string)
0x597: Stack[-1] = "Neutral"
0x598: Call2 0x5ca

0x599: Pop(1)
0x59a: Push((int) 540554)
0x59b: @@ SetMessage(Stack[-1])
0x59c: Pop(1)
0x59d: @@ ClearReplies()
0x59e: Pop(0)
0x59f: Push((int) 540555)
0x5a0: Push((int) -1)
0x5a1: Push((int) 42564)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Push((int) 540794)
0x5a5: Push((int) -1)
0x5a6: Push((int) 42843)
0x5a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a8: Pop(3)
0x5a9: GOTO 0x5ac

0x5aa: Return(); Pop(0)

0x5ab: GOTO 0x594

0x5ac: PushEmpty(bool)
0x5ad: Call2 0x8b0

0x5ae: Pop(0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b0: @ lshWaitForAnimEnd()
0x5b1: Pop(0)
0x5b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: GOTO 0x5ba

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5b7: Call2 0x813

0x5b8: Pop(1)
0x5b9: GOTO 0x5b0

0x5ba: GOTO 0x5c9

0x5bb: Push("all")
0x5bc: Push("idle")
0x5bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5be: Pop(2)
0x5bf: @ WaitForAnimEnd()
0x5c0: Pop(0)
0x5c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: GOTO 0x5c9

0x5c4: Push("all")
0x5c5: Push("idle")
0x5c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c7: Pop(2)
0x5c8: GOTO 0x5bf

0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: PushEmpty(bool)
0x5cc: Call2 0x8b0

0x5cd: Pop(0)
0x5ce: Pop(1); Push((bool) Stack[-1] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5d0: Return(); Pop(0)

0x5d1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: Return(); Pop(0)

0x5d4: PushEmpty(string, bool)
0x5d5: Stack[-2] = Stack[-3]
0x5d6: Push("")
0x5d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-1] = (bool) 0
0x5da: GOTO 0x5dc

0x5db: Stack[-1] = (bool) 1
0x5dc: Call2 0x823

0x5dd: Pop(2)
0x5de: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5df: Return(); Pop(0)

0x5e0: PushEmpty()
0x5e1: Push((int) 1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x5e3: PushEmpty()
0x5e4: Call2 0x841

0x5e5: Pop(0)
0x5e6: Push((int) 42563)
0x5e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5e9: PushEmpty(string)
0x5ea: Stack[-1] = "Neutral"
0x5eb: Call2 0x5ca

0x5ec: Pop(1)
0x5ed: Push((int) 540554)
0x5ee: @@ SetMessage(Stack[-1])
0x5ef: Pop(1)
0x5f0: @@ ClearReplies()
0x5f1: Pop(0)
0x5f2: Push((int) 540555)
0x5f3: Push((int) -1)
0x5f4: Push((int) 42564)
0x5f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: Push((int) 540794)
0x5f8: Push((int) -1)
0x5f9: Push((int) 42843)
0x5fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(3)
0x5fc: Return(); Pop(0)

0x5fd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5fe: PushEmpty(bool)
0x5ff: Call2 0x8b0

0x600: Pop(0)
0x601: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x602: @ lshStopAnimation()
0x603: Pop(0)
0x604: GOTO 0x607

0x605: @ StopAnimation()
0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: GOTO 0x5e1

0x609: Return(); Pop(0)

0x60a: Push(GlobalVars[1])
0x60b: Stack[-1] = (bool) 0
0x60c: GlobalVars[1] = Stack[-1]; Pop(1)
0x60d: PushEmpty()
0x60e: Call2 0x611

0x60f: Pop(0)
0x610: Return(); Pop(0)

0x611: PushEmpty(bool)
0x612: Call2 0x72f

0x613: Pop(0)
0x614: Pop(1); Push((bool) Stack[-1] == 0)
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: @ Hold()
0x617: Pop(0)
0x618: @ GetDirection(Stack[-0])
0x619: Pop(0)
0x61a: PushEmpty()
0x61b: Call2 0x6c1

0x61c: Pop(0)
0x61d: GOTO 0x61a

0x61e: Return(); Pop(0)

0x61f: PushEmpty(object, object)
0x620: Push("player")
0x621: @ FindActor(Stack[-2], Stack[-1])
0x622: Pop(1)
0x623: Pop(0); Push((bool) Stack[-1] == 0)
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-3] = (bool) 0
0x626: Return(); Pop(2)

0x627: PushEmpty(bool, object)
0x628: Stack[-1] = Stack[-3]
0x629: Call2 0x726

0x62a: Stack[-5] = Stack[-2]
0x62b: Pop(2)
0x62c: Return(); Pop(2)

0x62d: Stack[-1] = 0
0x62e: Push(CvectorIndex(Stack[-0], 0))
0x62f: Push(CvectorIndex(Stack[-0], 2))
0x630: @ RotateAsync(Stack[-2], Stack[-1])
0x631: Pop(2)
0x632: Return(); Pop(0)

0x633: PushEmpty(object, bool, object, bool)
0x634: Push("player")
0x635: @ FindActor(Stack[-3], Stack[-1])
0x636: Pop(1)
0x637: Pop(0); Push((bool) Stack[-2] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-5] = (bool) 0
0x63a: Return(); Pop(4)

0x63b: PushEmpty(float, object)
0x63c: Stack[-1] = Stack[-4]
0x63d: Call2 0x70d

0x63e: Pop(1)
0x63f: Push((float)90000.0)
0x640: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: Stack[-5] = (bool) 0
0x643: Return(); Pop(4)

0x644: @ CanSee(Stack[-1], Stack[-2])
0x645: Pop(0)
0x646: Stack[-5] = Stack[-1]
0x647: Return(); Pop(4)

0x648: Stack[-2] = 0
0x649: PushEmpty(float, float)
0x64a: Push((int) 8)
0x64b: Push((int) 16)
0x64c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(2)
0x64e: Push((int) 10)
0x64f: @ SetTimer(Stack[-1], Stack[-2])
0x650: Pop(1)
0x651: Return(); Pop(2)

0x652: Push((int) 10)
0x653: @ KillTimer(Stack[-1])
0x654: Pop(1)
0x655: Return(); Pop(0)

0x656: PushEmpty()
0x657: Push((int) 10)
0x658: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x65a: PushEmpty()
0x65b: Call2 0x652

0x65c: Pop(0)
0x65d: PushEmpty(bool)
0x65e: Stack[-1] = (bool) 0
0x65f: PushEmpty(bool)
0x660: Call2 0x72f

0x661: Pop(0)
0x662: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x663: PushEmpty(bool)
0x664: Call2 0x633

0x665: Pop(0)
0x666: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x667: Stack[-1] = (bool) 1
0x668: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x669: PushEmpty(bool)
0x66a: Call2 0x61f

0x66b: Pop(0)
0x66c: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x66d: PushEmpty(bool, object)
0x66e: PushEmpty(object)
0x66f: Call2 0x848

0x670: Stack[-2] = Stack[-1]
0x671: Pop(1)
0x672: Call2 0x7c3

0x673: Pop(2)
0x674: GOTO 0x67b

0x675: PushEmpty()
0x676: Call2 0x62e

0x677: Pop(0)
0x678: PushEmpty()
0x679: Call2 0x649

0x67a: Pop(0)
0x67b: Return(); Pop(0)

0x67c: PushEmpty()
0x67d: Call2 0x708

0x67e: Pop(0)
0x67f: PushEmpty()
0x680: Call2 0x652

0x681: Pop(0)
0x682: @ lshStopSpeech()
0x683: Pop(0)
0x684: @ lshStopAnimation()
0x685: Pop(0)
0x686: @ StopAsync()
0x687: Pop(0)
0x688: @ Hold()
0x689: Pop(0)
0x68a: Return(); Pop(0)

0x68b: @ StopGroup0()
0x68c: Pop(0)
0x68d: PushEmpty()
0x68e: Call2 0x652

0x68f: Pop(0)
0x690: PushEmpty(string)
0x691: Stack[-1] = "Neutral"
0x692: Call2 0x813

0x693: Pop(1)
0x694: PushEmpty()
0x695: Call2 0x649

0x696: Pop(0)
0x697: Return(); Pop(0)

0x698: PushEmpty()
0x699: Push(Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69b: PushEmpty()
0x69c: Call2 0x649

0x69d: Pop(0)
0x69e: GOTO 0x6a3

0x69f: PushEmpty(string)
0x6a0: Stack[-1] = "Neutral"
0x6a1: Call2 0x813

0x6a2: Pop(1)
0x6a3: Return(); Pop(0)

0x6a4: PushEmpty(bool, bool)
0x6a5: @ IsOverrideActive(Stack[-1])
0x6a6: Pop(0)
0x6a7: Pop(0); Push((bool) Stack[-1] == 0)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6a9: EventDisable(0)
0x6aa: PushEmpty()
0x6ab: Call2 0x708

0x6ac: Pop(0)
0x6ad: PushEmpty(bool, object)
0x6ae: Stack[-1] = Stack[-5]
0x6af: Call2 0x726

0x6b0: Pop(2)
0x6b1: EventEnable(0)
0x6b2: PushEmpty(object)
0x6b3: Stack[-1] = Stack[-4]
0x6b4: Call2 0x9d1

0x6b5: Pop(1)
0x6b6: PushEmpty(string)
0x6b7: Stack[-1] = "Neutral"
0x6b8: Call2 0x813

0x6b9: Pop(1)
0x6ba: PushEmpty()
0x6bb: Call2 0x652

0x6bc: Pop(0)
0x6bd: PushEmpty()
0x6be: Call2 0x649

0x6bf: Pop(0)
0x6c0: Return(); Pop(2)

0x6c1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6c2: @ WaitForAnimEnd()
0x6c3: Pop(0)
0x6c4: PushEmpty(bool)
0x6c5: Call2 0x72f

0x6c6: Pop(0)
0x6c7: Pop(1); Push((bool) Stack[-1] == 0)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c9: Return(); Pop(12)

0x6ca: PushEmpty(int)
0x6cb: Call2 0x897

0x6cc: Stack[-7] = Stack[-1]
0x6cd: Pop(1)
0x6ce: Stack[-5] = (int) 0
0x6cf: PushEmpty(bool)
0x6d0: Stack[-1] = (bool) 0
0x6d1: Push((int) 5)
0x6d2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d4: PushEmpty(bool)
0x6d5: Call2 0x72f

0x6d6: Pop(0)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: Stack[-1] = (bool) 1
0x6d9: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6da: Pop(0); Push((bool) Stack[-6] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6dc: Push((int) 3)
0x6dd: @ Sleep(Stack[-1], Stack[-5])
0x6de: Pop(1)
0x6df: Pop(0); Push((bool) Stack[-4] == 0)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: GOTO 0x703

0x6e2: GOTO 0x6f8

0x6e3: @ irand(Stack[-3], Stack[-6])
0x6e4: Pop(0)
0x6e5: Push((int) 5)
0x6e6: @ irand(Stack[-3], Stack[-1])
0x6e7: Pop(1)
0x6e8: Push((int) 0)
0x6e9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6eb: Stack[-3] = (int) 0
0x6ec: Push("all")
0x6ed: PushEmpty(string, int)
0x6ee: Stack[-1] = Stack[-6]
0x6ef: Call2 0x890

0x6f0: Pop(1)
0x6f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f2: Pop(2)
0x6f3: @ WaitForAnimEnd(Stack[-1])
0x6f4: Pop(0)
0x6f5: Pop(0); Push((bool) Stack[-1] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f7: GOTO 0x703

0x6f8: PushEmpty(bool)
0x6f9: Call2 0x706

0x6fa: Pop(0)
0x6fb: Pop(1); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fd: GOTO 0x703

0x6fe: @ ResetAAS()
0x6ff: Pop(0)
0x700: Push((int) 1)
0x701: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x702: GOTO 0x6cf

0x703: @ ResetAAS()
0x704: Pop(0)
0x705: Return(); Pop(12)

0x706: Stack[-1] = (bool) 1
0x707: Return(); Pop(0)

0x708: @ StopAnimation()
0x709: Pop(0)
0x70a: @ StopGroup0()
0x70b: Pop(0)
0x70c: Return(); Pop(0)

0x70d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x70e: @ GetPosition(Stack[-3])
0x70f: Pop(0)
0x710: @@ GetPosition(Stack[-2])
0x711: Pop(0)
0x712: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x713: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x714: Return(); Pop(6)

0x715: PushEmpty(int, int)
0x716: @@ GetProperty(Stack[-4], Stack[-1])
0x717: Pop(0)
0x718: Pop(0); Push(Stack[-1] + Stack[-3]);
0x719: @@ SetProperty(Stack[-5], Stack[-1])
0x71a: Pop(1)
0x71b: Return(); Pop(2)

0x71c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x71d: @ GetPosition(Stack[-3])
0x71e: Pop(0)
0x71f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x720: Push(CvectorIndex(Stack[-2], 0))
0x721: Push(CvectorIndex(Stack[-3], 2))
0x722: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x723: Pop(2)
0x724: Stack[-8] = Stack[-1]
0x725: Return(); Pop(6)

0x726: PushEmpty(cvector, cvector)
0x727: @@ GetPosition(Stack[-1])
0x728: Pop(0)
0x729: PushEmpty(bool, cvector)
0x72a: Stack[-1] = Stack[-3]
0x72b: Call2 0x71c

0x72c: Stack[-6] = Stack[-2]
0x72d: Pop(2)
0x72e: Return(); Pop(2)

0x72f: PushEmpty(bool, bool)
0x730: @ IsLoaded(Stack[-1])
0x731: Pop(0)
0x732: Stack[-3] = Stack[-1]
0x733: Return(); Pop(2)

0x734: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x735: @@ GetPosition(Stack[-8])
0x736: Pop(0)
0x737: @@ GetEyesHeight(Stack[-9])
0x738: Pop(0)
0x739: Push(CvectorIndex(Stack[-8], 1))
0x73a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x73b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x73c: @ GetPosition(Stack[-7])
0x73d: Pop(0)
0x73e: @ GetEyesHeight(Stack[-9])
0x73f: Pop(0)
0x740: Push(CvectorIndex(Stack[-7], 1))
0x741: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x742: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x743: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x744: Push(CvectorIndex(Stack[-6], 1))
0x745: Stack[-1] = (int) 0
0x746: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x747: Pop(0); Push(Stack[-6] | Stack[-6]);
0x748: Pop(1); Push(Sqrt(Stack[-1]))
0x749: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x74a: Stack[-5] = -Stack[-6]; Pop(0);
0x74b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x74c: PushEmpty(cvector, cvector)
0x74d: Push(CVector(0.0, 1.0, 0.0))
0x74e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x74f: Call2 0x84e

0x750: Pop(1)
0x751: Push((int) 25)
0x752: Pop(2); Push(Stack[-2] * Stack[-1]);
0x753: Pop(2); Push(Stack[-2] + Stack[-1]);
0x754: Push(CVector(0.0, 10.0, 0.0))
0x755: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x756: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x757: @ IsOverrideActive(Stack[-2])
0x758: Pop(0)
0x759: Push(Stack[-2])
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-21] = (bool) 0
0x75c: Return(); Pop(18)

0x75d: @ StopWorld()
0x75e: Pop(0)
0x75f: @ CameraTransit(Stack[-3], Stack[-5])
0x760: Pop(0)
0x761: Push(CvectorIndex(Stack[-4], 0))
0x762: Push(CvectorIndex(Stack[-5], 2))
0x763: @ Rotate(Stack[-2], Stack[-1])
0x764: Pop(2)
0x765: PushEmpty(bool)
0x766: Call2 0x8b0

0x767: Pop(0)
0x768: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x769: GOTO 0x772

0x76a: Push("head")
0x76b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x76c: Pop(1)
0x76d: Push(Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x76f: Push("head")
0x770: @ LookAsyncCamera(Stack[-1])
0x771: Pop(1)
0x772: @ CameraWaitForPlayFinish()
0x773: Pop(0)
0x774: @ ResumeWorld()
0x775: Pop(0)
0x776: Stack[-21] = (bool) 1
0x777: Return(); Pop(18)

0x778: PushEmpty(bool, bool)
0x779: @ CameraSwitchToNormal()
0x77a: Pop(0)
0x77b: PushEmpty(bool)
0x77c: Call2 0x8b0

0x77d: Pop(0)
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: GOTO 0x788

0x780: Push("head")
0x781: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x782: Pop(1)
0x783: Push(Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x785: Push("head")
0x786: @ UnlookAsync(Stack[-1])
0x787: Pop(1)
0x788: Return(); Pop(2)

0x789: PushEmpty(int, int, int, int)
0x78a: Push("voice_common")
0x78b: @ GetVariable(Stack[-1], Stack[-3])
0x78c: Pop(1)
0x78d: Push(Stack[-2])
0x78e: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x78f: PushEmpty(bool, object)
0x790: Stack[-1] = Stack[-7]
0x791: Call2 0x7c3

0x792: Pop(1)
0x793: Pop(1); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x795: PushEmpty(bool, object)
0x796: Stack[-1] = Stack[-7]
0x797: Call2 0x7e8

0x798: Pop(1)
0x799: Pop(1); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-6] = (bool) 0
0x79c: Return(); Pop(4)

0x79d: Push((int) 2)
0x79e: @ irand(Stack[-2], Stack[-1])
0x79f: Pop(1)
0x7a0: Push(Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a2: Push("voice_common")
0x7a3: Push((int) 1)
0x7a4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7a5: Push((int) 3)
0x7a6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7a7: @ SetVariable(Stack[-2], Stack[-1])
0x7a8: Pop(2)
0x7a9: GOTO 0x7ae

0x7aa: Push("voice_common")
0x7ab: Push((int) 0)
0x7ac: @ SetVariable(Stack[-2], Stack[-1])
0x7ad: Pop(2)
0x7ae: GOTO 0x7c1

0x7af: PushEmpty(bool, object)
0x7b0: Stack[-1] = Stack[-7]
0x7b1: Call2 0x7e8

0x7b2: Pop(1)
0x7b3: Pop(1); Push((bool) Stack[-1] == 0)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b5: PushEmpty(bool, object)
0x7b6: Stack[-1] = Stack[-7]
0x7b7: Call2 0x7c3

0x7b8: Pop(1)
0x7b9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-6] = (bool) 0
0x7bc: Return(); Pop(4)

0x7bd: Push("voice_common")
0x7be: Push((int) 1)
0x7bf: @ SetVariable(Stack[-2], Stack[-1])
0x7c0: Pop(2)
0x7c1: Stack[-6] = (bool) 1
0x7c2: Return(); Pop(4)

0x7c3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7c4: Stack[-5] = "c"
0x7c5: Stack[-4] = (int) 0
0x7c6: Push((int) 1)
0x7c7: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7c8: Push((int) 1)
0x7c9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7ca: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7cb: @@ HasProperty(Stack[-1], Stack[-4])
0x7cc: Pop(1)
0x7cd: Pop(0); Push((bool) Stack[-3] == 0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: GOTO 0x7d3

0x7d0: Push((int) 1)
0x7d1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7d2: GOTO 0x7c6

0x7d3: Pop(0); Push((bool) Stack[-4] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: Stack[-12] = (bool) 0
0x7d6: Return(); Pop(10)

0x7d7: Stack[-2] = (int) 0
0x7d8: Push((int) 1)
0x7d9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7db: @ irand(Stack[-2], Stack[-4])
0x7dc: Pop(0)
0x7dd: Push((int) 1)
0x7de: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7df: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7e0: @@ GetProperty(Stack[-1], Stack[-2])
0x7e1: Pop(1)
0x7e2: PushEmpty(bool, string)
0x7e3: Stack[-1] = Stack[-3]
0x7e4: Call2 0x832

0x7e5: Stack[-14] = Stack[-2]
0x7e6: Pop(2)
0x7e7: Return(); Pop(10)

0x7e8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7e9: Push("d")
0x7ea: PushEmpty(int)
0x7eb: Call2 0x881

0x7ec: Pop(0)
0x7ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7ee: Push("m")
0x7ef: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x7f0: Stack[-4] = (int) 0
0x7f1: Push((int) 1)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f3: Push((int) 1)
0x7f4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7f5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f6: @@ HasProperty(Stack[-1], Stack[-4])
0x7f7: Pop(1)
0x7f8: Pop(0); Push((bool) Stack[-3] == 0)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: GOTO 0x7fe

0x7fb: Push((int) 1)
0x7fc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7fd: GOTO 0x7f1

0x7fe: Pop(0); Push((bool) Stack[-4] == 0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x800: Stack[-12] = (bool) 0
0x801: Return(); Pop(10)

0x802: Stack[-2] = (int) 0
0x803: Push((int) 1)
0x804: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x806: @ irand(Stack[-2], Stack[-4])
0x807: Pop(0)
0x808: Push((int) 1)
0x809: Pop(1); Push(Stack[-3] + Stack[-1]);
0x80a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x80b: @@ GetProperty(Stack[-1], Stack[-2])
0x80c: Pop(1)
0x80d: PushEmpty(bool, string)
0x80e: Stack[-1] = Stack[-3]
0x80f: Call2 0x832

0x810: Stack[-14] = Stack[-2]
0x811: Pop(2)
0x812: Return(); Pop(10)

0x813: PushEmpty(bool, float, float, bool, float, float)
0x814: @ lshHasAnimation(Stack[-3], Stack[-7])
0x815: Pop(0)
0x816: Push(Stack[-3])
0x817: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x818: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x819: Pop(0)
0x81a: Push((bool) 0)
0x81b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x81c: Pop(1)
0x81d: GOTO 0x822

0x81e: Push("Can't find lsh animation : ")
0x81f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x820: @ Trace(Stack[-1])
0x821: Pop(1)
0x822: Return(); Pop(6)

0x823: PushEmpty(bool, float, float, bool, float, float)
0x824: @ lshHasAnimation(Stack[-3], Stack[-8])
0x825: Pop(0)
0x826: Push(Stack[-3])
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x829: Pop(0)
0x82a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x82b: Pop(0)
0x82c: GOTO 0x831

0x82d: Push("Can't find lsh animation : ")
0x82e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x82f: @ Trace(Stack[-1])
0x830: Pop(1)
0x831: Return(); Pop(6)

0x832: PushEmpty(bool, bool)
0x833: PushEmpty(bool)
0x834: Call2 0x8b0

0x835: Pop(0)
0x836: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x837: @ lshHasSpeech(Stack[-1], Stack[-3])
0x838: Pop(0)
0x839: Push(Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83b: @ lshPlaySpeech(Stack[-3])
0x83c: Pop(0)
0x83d: Stack[-4] = (bool) 1
0x83e: Return(); Pop(2)

0x83f: Stack[-4] = (bool) 0
0x840: Return(); Pop(2)

0x841: PushEmpty(bool)
0x842: Call2 0x8b0

0x843: Pop(0)
0x844: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x845: @ lshStopSpeech()
0x846: Pop(0)
0x847: Return(); Pop(0)

0x848: PushEmpty(object, object)
0x849: @ self(Stack[-1])
0x84a: Pop(0)
0x84b: Stack[-3] = Stack[-1]
0x84c: Return(); Pop(2)

0x84d: Stack[-1] = 0
0x84e: PushEmpty(float, float)
0x84f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x850: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x851: Push((float)0.0)
0x852: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x855: Return(); Pop(2)

0x856: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x857: Return(); Pop(2)

0x858: PushEmpty(int, int)
0x859: @ GetVariable(Stack[-3], Stack[-1])
0x85a: Pop(0)
0x85b: Stack[-4] = Stack[-1]
0x85c: Return(); Pop(2)

0x85d: PushEmpty(object, object)
0x85e: @ CreateIntVector(Stack[-1])
0x85f: Pop(0)
0x860: @@ add(Stack[-4])
0x861: Pop(0)
0x862: @@ add(Stack[-3])
0x863: Pop(0)
0x864: Push((int) 3)
0x865: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x866: Pop(1)
0x867: Return(); Pop(2)

0x868: Stack[-1] = 0
0x869: PushEmpty(int, int)
0x86a: PushEmpty(object, string, int)
0x86b: Stack[-3] = Stack[-7]
0x86c: Stack[-2] = "money"
0x86d: Stack[-1] = Stack[-6]
0x86e: Call2 0x715

0x86f: Pop(3)
0x870: Push((int) 0)
0x871: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x873: Push("Money")
0x874: @ GetInvItemByName(Stack[-2], Stack[-1])
0x875: Pop(1)
0x876: PushEmpty(int, int)
0x877: Stack[-2] = Stack[-3]
0x878: Stack[-1] = Stack[-5]
0x879: Call2 0x85d

0x87a: Pop(2)
0x87b: Return(); Pop(2)

0x87c: PushEmpty(float, float)
0x87d: @ GetGameTime(Stack[-1])
0x87e: Pop(0)
0x87f: Stack[-3] = Stack[-1]
0x880: Return(); Pop(2)

0x881: PushEmpty(float, float)
0x882: @ GetGameTime(Stack[-1])
0x883: Pop(0)
0x884: Push((int) 1)
0x885: PushEmpty(int)
0x886: Push((int) 24)
0x887: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x888: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x889: Return(); Pop(2)

0x88a: PushEmpty()
0x88b: PushEmpty(int)
0x88c: Call2 0x881

0x88d: Pop(0)
0x88e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x88f: Return(); Pop(0)

0x890: PushEmpty(string, string)
0x891: Stack[-1] = "idle"
0x892: Push(Stack[-3])
0x893: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x894: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x895: Stack[-4] = Stack[-1]
0x896: Return(); Pop(2)

0x897: PushEmpty(int, bool, int, bool)
0x898: Stack[-2] = (int) 0
0x899: Push("all")
0x89a: PushEmpty(string, int)
0x89b: Stack[-1] = Stack[-5]
0x89c: Call2 0x890

0x89d: Pop(1)
0x89e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x89f: Pop(2)
0x8a0: Pop(0); Push((bool) Stack[-1] == 0)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: GOTO 0x8a6

0x8a3: Push((int) 1)
0x8a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8a5: GOTO 0x899

0x8a6: Stack[-5] = Stack[-2]
0x8a7: Return(); Pop(4)

0x8a8: Stack[-1] = (int) 515534
0x8a9: Return(); Pop(0)

0x8aa: Stack[-1] = (int) 502859
0x8ab: Return(); Pop(0)

0x8ac: Stack[-1] = "ui/NPC_Georg.png"
0x8ad: Return(); Pop(0)

0x8ae: Stack[-1] = "ui/NPC_Georg_b.png"
0x8af: Return(); Pop(0)

0x8b0: Stack[-1] = (bool) 1
0x8b1: Return(); Pop(0)

0x8b2: PushEmpty(object, object)
0x8b3: Push("b8q03")
0x8b4: Push((int) 1)
0x8b5: @ SetVariable(Stack[-2], Stack[-1])
0x8b6: Pop(2)
0x8b7: PushEmpty(object)
0x8b8: Call2 0x9af

0x8b9: Stack[-2] = Stack[-1]
0x8ba: Pop(1)
0x8bb: Push("b8q03GeorgGotoKaterina")
0x8bc: Push("pt_map_katerina")
0x8bd: Push((int) 0)
0x8be: Push((int) 530663)
0x8bf: PushEmpty(float)
0x8c0: Call2 0x87c

0x8c1: Pop(0)
0x8c2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(5)
0x8c4: PushEmpty()
0x8c5: Call2 0x952

0x8c6: Pop(0)
0x8c7: PushEmpty()
0x8c8: Call2 0x95f

0x8c9: Pop(0)
0x8ca: Return(); Pop(2)

0x8cb: Stack[-1] = 0
0x8cc: PushEmpty()
0x8cd: Push("oob8Georg1")
0x8ce: Push((int) 1)
0x8cf: @ SetVariable(Stack[-2], Stack[-1])
0x8d0: Pop(2)
0x8d1: Return(); Pop(0)

0x8d2: PushEmpty()
0x8d3: Push("oob8Georg2")
0x8d4: Push((int) 1)
0x8d5: @ SetVariable(Stack[-2], Stack[-1])
0x8d6: Pop(2)
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: Push("playsound")
0x8da: Push("givemoney")
0x8db: @ TriggerWorld(Stack[-2], Stack[-1])
0x8dc: Pop(2)
0x8dd: Return(); Pop(0)

0x8de: PushEmpty()
0x8df: Push("b8GeorgVisit")
0x8e0: Push((int) 1)
0x8e1: @ SetVariable(Stack[-2], Stack[-1])
0x8e2: Pop(2)
0x8e3: Return(); Pop(0)

0x8e4: PushEmpty()
0x8e5: Push("b8q03")
0x8e6: Push((int) 1000)
0x8e7: @ SetVariable(Stack[-2], Stack[-1])
0x8e8: Pop(2)
0x8e9: PushEmpty()
0x8ea: Call2 0x96c

0x8eb: Pop(0)
0x8ec: Return(); Pop(0)

0x8ed: PushEmpty()
0x8ee: Push("b8q03")
0x8ef: Push((int) 1000)
0x8f0: @ SetVariable(Stack[-2], Stack[-1])
0x8f1: Pop(2)
0x8f2: PushEmpty()
0x8f3: Call2 0x979

0x8f4: Pop(0)
0x8f5: Return(); Pop(0)

0x8f6: PushEmpty()
0x8f7: Push("money3000 is given")
0x8f8: @ Trace(Stack[-1])
0x8f9: Pop(1)
0x8fa: PushEmpty(object, int)
0x8fb: Stack[-2] = Stack[-4]
0x8fc: Stack[-1] = (int) 3000
0x8fd: Call2 0x869

0x8fe: Pop(2)
0x8ff: Return(); Pop(0)

0x900: PushEmpty()
0x901: PushEmpty(int, string)
0x902: Stack[-1] = "oob8Georg1"
0x903: Call2 0x858

0x904: Pop(1)
0x905: Push((int) 0)
0x906: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x907: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x908: Stack[-2] = (bool) 1
0x909: Return(); Pop(0)

0x90a: Stack[-2] = (bool) 0
0x90b: Return(); Pop(0)

0x90c: PushEmpty()
0x90d: PushEmpty(int, string)
0x90e: Stack[-1] = "b8q03"
0x90f: Call2 0x858

0x910: Pop(1)
0x911: Push((int) 0)
0x912: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x914: Stack[-2] = (bool) 1
0x915: Return(); Pop(0)

0x916: Stack[-2] = (bool) 0
0x917: Return(); Pop(0)

0x918: PushEmpty()
0x919: PushEmpty(bool)
0x91a: Stack[-1] = (bool) 0
0x91b: PushEmpty(int, string)
0x91c: Stack[-1] = "b8q03"
0x91d: Call2 0x858

0x91e: Pop(1)
0x91f: Push((int) 3)
0x920: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x922: PushEmpty(int, string)
0x923: Stack[-1] = "b8q03MladVladIsVictim"
0x924: Call2 0x858

0x925: Pop(1)
0x926: Push((int) 0)
0x927: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x929: Stack[-1] = (bool) 1
0x92a: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92b: Stack[-2] = (bool) 1
0x92c: Return(); Pop(0)

0x92d: Stack[-2] = (bool) 0
0x92e: Return(); Pop(0)

0x92f: PushEmpty()
0x930: PushEmpty(bool)
0x931: Stack[-1] = (bool) 0
0x932: PushEmpty(int, string)
0x933: Stack[-1] = "b8q03"
0x934: Call2 0x858

0x935: Pop(1)
0x936: Push((int) 3)
0x937: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x939: PushEmpty(int, string)
0x93a: Stack[-1] = "b8q03MladVladIsVictim"
0x93b: Call2 0x858

0x93c: Pop(1)
0x93d: Push((int) 0)
0x93e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: Stack[-1] = (bool) 1
0x941: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x942: Stack[-2] = (bool) 1
0x943: Return(); Pop(0)

0x944: Stack[-2] = (bool) 0
0x945: Return(); Pop(0)

0x946: PushEmpty()
0x947: PushEmpty(int, string)
0x948: Stack[-1] = "oob8Georg2"
0x949: Call2 0x858

0x94a: Pop(1)
0x94b: Push((int) 0)
0x94c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x94d: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94e: Stack[-2] = (bool) 1
0x94f: Return(); Pop(0)

0x950: Stack[-2] = (bool) 0
0x951: Return(); Pop(0)

0x952: PushEmpty(object, object)
0x953: Push((int) 575)
0x954: Push((int) 2)
0x955: Push((int) 530655)
0x956: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x957: Pop(3)
0x958: PushEmpty(bool, object, int)
0x959: Stack[-2] = Stack[-4]
0x95a: Stack[-1] = (int) -1
0x95b: Call2 0x993

0x95c: Pop(3)
0x95d: Return(); Pop(2)

0x95e: Stack[-1] = 0
0x95f: PushEmpty(object, object)
0x960: Push((int) 576)
0x961: Push((int) 2)
0x962: Push((int) 530656)
0x963: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: PushEmpty(bool, object, int)
0x966: Stack[-2] = Stack[-4]
0x967: Stack[-1] = (int) 575
0x968: Call2 0x993

0x969: Pop(3)
0x96a: Return(); Pop(2)

0x96b: Stack[-1] = 0
0x96c: PushEmpty(object, object)
0x96d: Push((int) 580)
0x96e: Push((int) 2)
0x96f: Push((int) 530660)
0x970: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x971: Pop(3)
0x972: PushEmpty(bool, object, int)
0x973: Stack[-2] = Stack[-4]
0x974: Stack[-1] = (int) 575
0x975: Call2 0x993

0x976: Pop(3)
0x977: Return(); Pop(2)

0x978: Stack[-1] = 0
0x979: PushEmpty(object, object)
0x97a: Push((int) 581)
0x97b: Push((int) 2)
0x97c: Push((int) 530661)
0x97d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: PushEmpty(bool, object, int)
0x980: Stack[-2] = Stack[-4]
0x981: Stack[-1] = (int) 575
0x982: Call2 0x993

0x983: Pop(3)
0x984: Return(); Pop(2)

0x985: Stack[-1] = 0
0x986: PushEmpty(object, object)
0x987: @ GetDiaryRoot(Stack[-1])
0x988: Pop(0)
0x989: Pop(0); Push((bool) Stack[-1] == 0)
0x98a: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98b: Push("Can't retrieve diary root")
0x98c: @ Trace(Stack[-1])
0x98d: Pop(1)
0x98e: Stack[-3] = (bool) 0
0x98f: Return(); Pop(2)

0x990: Stack[-3] = Stack[-1]
0x991: Return(); Pop(2)

0x992: Stack[-1] = 0
0x993: PushEmpty(object, object, int, object, object, int)
0x994: PushEmpty(object)
0x995: Call2 0x986

0x996: Stack[-4] = Stack[-1]
0x997: Pop(1)
0x998: @@ Find(Stack[-7], Stack[-2])
0x999: Pop(0)
0x99a: Pop(0); Push((bool) Stack[-2] == 0)
0x99b: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99c: Push("Can't find diary parent with id: ")
0x99d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x99e: @ Trace(Stack[-1])
0x99f: Pop(1)
0x9a0: Stack[-9] = (bool) 0
0x9a1: Return(); Pop(6)

0x9a2: @@ AddChild(Stack[-8])
0x9a3: Pop(0)
0x9a4: Push((int) 7)
0x9a5: @ SendWorldWndMessage(Stack[-1])
0x9a6: Pop(1)
0x9a7: @@ GetCategory(Stack[-1])
0x9a8: Pop(0)
0x9a9: @ SetDiarySection(Stack[-1])
0x9aa: Pop(0)
0x9ab: Stack[-9] = (bool) 0
0x9ac: Return(); Pop(6)

0x9ad: Stack[-2] = 0
0x9ae: Stack[-3] = 0
0x9af: PushEmpty(object, object, object, object)
0x9b0: @ GetMainOutdoorScene(Stack[-2])
0x9b1: Pop(0)
0x9b2: Pop(0); Push((bool) Stack[-2] == 0)
0x9b3: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b4: Push("Can't find main outdoor scene")
0x9b5: @ Trace(Stack[-1])
0x9b6: Pop(1)
0x9b7: Stack[-1] = 0
0x9b8: Stack[-5] = Stack[-1]
0x9b9: Return(); Pop(4)

0x9ba: @@ GetMap(Stack[-1])
0x9bb: Pop(0)
0x9bc: Stack[-5] = Stack[-1]
0x9bd: Return(); Pop(4)

0x9be: Stack[-1] = 0
0x9bf: Stack[-2] = 0
0x9c0: PushEmpty(int, int)
0x9c1: Push("branch")
0x9c2: @ GetVariable(Stack[-1], Stack[-2])
0x9c3: Pop(1)
0x9c4: Push((int) 0)
0x9c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c6: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c7: Stack[-3] = (int) 1
0x9c8: Return(); Pop(2)

0x9c9: GOTO 0x9cf

0x9ca: Push((int) 1)
0x9cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9cd: Stack[-3] = (int) 2
0x9ce: Return(); Pop(2)

0x9cf: Stack[-3] = (int) 3
0x9d0: Return(); Pop(2)

0x9d1: PushEmpty()
0x9d2: Push(GlobalVars[1])
0x9d3: Pop(1); Push((bool) Stack[-1] == 0)
0x9d4: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d5: PushEmpty(int, object)
0x9d6: Stack[-1] = Stack[-3]
0x9d7: Push(-2, 1); TaskCall(2)
0x9d8: Call2 0x103

0x9d9: Pop(-2, 1); TaskReturn
0x9da: Pop(2)
0x9db: Push(GlobalVars[1])
0x9dc: Stack[-1] = (bool) 1
0x9dd: GlobalVars[1] = Stack[-1]; Pop(1)
0x9de: PushEmpty(bool, int)
0x9df: Stack[-1] = (int) 8
0x9e0: Call2 0x88a

0x9e1: Pop(1)
0x9e2: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e3: PushEmpty(int, object)
0x9e4: Stack[-1] = Stack[-3]
0x9e5: Push(-2, 1); TaskCall(4)
0x9e6: Call2 0x1e5

0x9e7: Pop(-2, 1); TaskReturn
0x9e8: Pop(2)
0x9e9: Return(); Pop(0)

0x9ea: PushEmpty(bool)
0x9eb: Stack[-1] = (bool) 0
0x9ec: PushEmpty(bool, int)
0x9ed: Stack[-1] = (int) 12
0x9ee: Call2 0x88a

0x9ef: Pop(1)
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f1: Push(GlobalVars[2])
0x9f2: Pop(1); Push((bool) Stack[-1] == 0)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f4: Stack[-1] = (bool) 1
0x9f5: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9f6: PushEmpty(int, object)
0x9f7: Stack[-1] = Stack[-3]
0x9f8: Push(-2, 1); TaskCall(0)
0x9f9: Call2 0x0

0x9fa: Pop(-2, 1); TaskReturn
0x9fb: Pop(2)
0x9fc: Push(GlobalVars[2])
0x9fd: Stack[-1] = (bool) 1
0x9fe: GlobalVars[2] = Stack[-1]; Pop(1)
0x9ff: Return(); Pop(0)

0xa00: PushEmpty(int, object)
0xa01: Stack[-1] = Stack[-3]
0xa02: Push(-2, 1); TaskCall(6)
0xa03: Call2 0x53f

0xa04: Pop(-2, 1); TaskReturn
0xa05: Pop(2)
0xa06: Return(); Pop(0)

