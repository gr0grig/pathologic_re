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
	player
	head
	lockpick
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	ook1Lisa1
	k1q01
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	health
	quest_k1_01
	doberman_dead

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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	AddItem (4 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
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
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0x212
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbc Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x21c Vars = (object)
		EVENT_7 Op = 0x251 Vars = (int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x2e6 Vars = (object)
		EVENT_22 Op = 0x365 Vars = (object, int, float, float)
		EVENT_16 Op = 0x367 Vars = (object, string)
		EVENT_41 Op = 0x369 Vars = (object)

Events:
EVENT_22 Op = 0x533 Vars = (object, int, float, float)
EVENT_43 Op = 0x53b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x545 Vars = (object, string)
EVENT_41 Op = 0x552 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3fd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x523

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x521

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x525

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x527

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4fd

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
0x41: Call2 0x441

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
0x4f: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x4e5

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4f1

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x4df

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call2 0xa6

0x66: Pop(1)
0x67: Push((int) 524677)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: Push((int) 541777)
0x6d: Push((int) 43984)
0x6e: Push((int) 43983)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: GOTO 0x88

0x72: PushEmpty(string)
0x73: Stack[-1] = "Neutral"
0x74: Call2 0xa6

0x75: Pop(1)
0x76: Push((int) 524679)
0x77: @@ SetMessage(Stack[-1])
0x78: Pop(1)
0x79: @@ ClearReplies()
0x7a: Pop(0)
0x7b: Push((int) 524680)
0x7c: Push((int) -1)
0x7d: Push((int) 26019)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: Push((int) 526801)
0x81: Push((int) -1)
0x82: Push((int) 28081)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: GOTO 0x88

0x86: Return(); Pop(0)

0x87: GOTO 0x4e

0x88: PushEmpty(bool)
0x89: Call2 0x529

0x8a: Pop(0)
0x8b: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8c: @ lshWaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: PushEmpty(string)
0x92: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x93: Call2 0x452

0x94: Pop(1)
0x95: GOTO 0x8c

0x96: GOTO 0xa5

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: @ WaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xa5

0xa0: Push("all")
0xa1: Push("idle")
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: GOTO 0x9b

0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: PushEmpty(bool)
0xa8: Call2 0x529

0xa9: Pop(0)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Return(); Pop(0)

0xad: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: PushEmpty(string, bool)
0xb1: Stack[-2] = Stack[-3]
0xb2: Push("")
0xb3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb5: Stack[-1] = (bool) 0
0xb6: GOTO 0xb8

0xb7: Stack[-1] = (bool) 1
0xb8: Call2 0x462

0xb9: Pop(2)
0xba: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Push((int) 1)
0xbe: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0xbf: PushEmpty()
0xc0: Call2 0x47c

0xc1: Pop(0)
0xc2: Push((int) 26016)
0xc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 0
0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x4e5

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x4f1

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Stack[-1] = (bool) 1
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x4df

0xd7: Pop(2)
0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0xa6

0xdb: Pop(1)
0xdc: Push((int) 524677)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 541777)
0xe2: Push((int) 43984)
0xe3: Push((int) 43983)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0xa6

0xea: Pop(1)
0xeb: Push((int) 524679)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 524680)
0xf1: Push((int) -1)
0xf2: Push((int) 26019)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Push((int) 526801)
0xf6: Push((int) -1)
0xf7: Push((int) 28081)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 43984)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call2 0xa6

0x101: Pop(1)
0x102: Push((int) 541778)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 524678)
0x108: Push((int) 28065)
0x109: Push((int) 26017)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 541766)
0x10d: Push((int) 43969)
0x10e: Push((int) 43968)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 43969)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call2 0xa6

0x118: Pop(1)
0x119: Push((int) 541767)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 541768)
0x11f: Push((int) 43971)
0x120: Push((int) 43970)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 541773)
0x124: Push((int) 43975)
0x125: Push((int) 43976)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 43971)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral"
0x12e: Call2 0xa6

0x12f: Pop(1)
0x130: Push((int) 541769)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 541770)
0x136: Push((int) 28065)
0x137: Push((int) 43972)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Push((int) 541771)
0x13b: Push((int) 43975)
0x13c: Push((int) 43974)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 43975)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xa6

0x146: Pop(1)
0x147: Push((int) 541772)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 541774)
0x14d: Push((int) 28065)
0x14e: Push((int) 43978)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 28065)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral"
0x157: Call2 0xa6

0x158: Pop(1)
0x159: Push((int) 526785)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 526786)
0x15f: Push((int) 28067)
0x160: Push((int) 28066)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 541755)
0x164: Push((int) 28069)
0x165: Push((int) 43957)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 28067)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xa6

0x16f: Pop(1)
0x170: Push((int) 526787)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 526788)
0x176: Push((int) 28069)
0x177: Push((int) 28068)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 541779)
0x17b: Push((int) -1)
0x17c: Push((int) 43985)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 28069)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call2 0xa6

0x186: Pop(1)
0x187: Push((int) 526789)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 526795)
0x18d: Push((int) 28076)
0x18e: Push((int) 28075)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 28076)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0xa6

0x198: Pop(1)
0x199: Push((int) 526796)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 526797)
0x19f: Push((int) 28078)
0x1a0: Push((int) 28077)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 541775)
0x1a4: Push((int) 28071)
0x1a5: Push((int) 43979)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 28078)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xa6

0x1af: Pop(1)
0x1b0: Push((int) 526798)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 526799)
0x1b6: Push((int) 28080)
0x1b7: Push((int) 28079)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 541776)
0x1bb: Push((int) 28071)
0x1bc: Push((int) 43981)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 28080)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call2 0xa6

0x1c6: Pop(1)
0x1c7: Push((int) 526800)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 526793)
0x1cd: Push((int) 28071)
0x1ce: Push((int) 28073)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 526790)
0x1d2: Push((int) 28082)
0x1d3: Push((int) 28070)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 28082)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call2 0xa6

0x1dd: Pop(1)
0x1de: Push((int) 526802)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 526803)
0x1e4: Push((int) -1)
0x1e5: Push((int) 28083)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 526804)
0x1e9: Push((int) -1)
0x1ea: Push((int) 28084)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 28071)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call2 0xa6

0x1f4: Pop(1)
0x1f5: Push((int) 526791)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 526792)
0x1fb: Push((int) -1)
0x1fc: Push((int) 28072)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 526794)
0x200: Push((int) -1)
0x201: Push((int) 28074)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x206: PushEmpty(bool)
0x207: Call2 0x529

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20a: @ lshStopAnimation()
0x20b: Pop(0)
0x20c: GOTO 0x20f

0x20d: @ StopAnimation()
0x20e: Pop(0)
0x20f: Return(); Pop(0)

0x210: GOTO 0xbd

0x211: Return(); Pop(0)

0x212: Push((int) 3)
0x213: @ Sleep(Stack[-1])
0x214: Pop(1)
0x215: PushEmpty(float, float)
0x216: Stack[-2] = (int) 300
0x217: Stack[-1] = (int) 100
0x218: Call2 0x227

0x219: Pop(2)
0x21a: GOTO 0x212

0x21b: Return(); Pop(0)

0x21c: PushEmpty()
0x21d: PushEmpty()
0x21e: Call2 0x268

0x21f: Pop(0)
0x220: PushEmpty(int, object)
0x221: Stack[-1] = Stack[-3]
0x222: Push(-2, 1); TaskCall(0)
0x223: Call2 0x0

0x224: Pop(-2, 1); TaskReturn
0x225: Pop(2)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: PushEmpty(bool)
0x229: Call2 0x3f8

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(0)

0x22e: Push("player")
0x22f: @ FindActor(Stack[-4], Stack[-1])
0x230: Pop(1)
0x231: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x233: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x234: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x235: Push((int) 10)
0x236: Push((float)1.0)
0x237: @ SetTimer(Stack[-2], Stack[-1])
0x238: Pop(2)
0x239: PushEmpty()
0x23a: Call2 0x276

0x23b: Pop(0)
0x23c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: Push((int) 10)
0x23f: @ KillTimer(Stack[-1])
0x240: Pop(1)
0x241: Return(); Pop(0)

0x242: PushEmpty(float, float)
0x243: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-3] = (bool) 0
0x246: Return(); Pop(2)

0x247: PushEmpty(float, object)
0x248: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x249: Call2 0x372

0x24a: Pop(1)
0x24b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x24c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x24f: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x250: Return(); Pop(2)

0x251: PushEmpty()
0x252: Push((int) 10)
0x253: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x255: PushEmpty(bool)
0x256: Call2 0x242

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x259: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25b: PushEmpty(object)
0x25c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x25d: Call2 0x471

0x25e: Pop(1)
0x25f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x260: GOTO 0x267

0x261: Push( Stack[2 + Tasks[-1].StackPointer] )
0x262: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x263: Push("head")
0x264: @ UnlookAsync(Stack[-1])
0x265: Pop(1)
0x266: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x267: Return(); Pop(0)

0x268: PushEmpty()
0x269: Call2 0x2c7

0x26a: Pop(0)
0x26b: Push((int) 10)
0x26c: @ KillTimer(Stack[-1])
0x26d: Pop(1)
0x26e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x26f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x270: Push("head")
0x271: @ UnlookAsync(Stack[-1])
0x272: Pop(1)
0x273: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x274: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x275: Return(); Pop(0)

0x276: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: PushEmpty(bool)
0x27a: Call2 0x3f8

0x27b: Pop(0)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Return(); Pop(14)

0x27f: PushEmpty(int)
0x280: Call2 0x4ce

0x281: Stack[-8] = Stack[-1]
0x282: Pop(1)
0x283: Stack[-6] = (int) 0
0x284: PushEmpty(bool)
0x285: Stack[-1] = (bool) 0
0x286: Push((int) 5)
0x287: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(bool)
0x28a: Call2 0x3f8

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: Stack[-1] = (bool) 1
0x28e: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x28f: Push((int) 3)
0x290: @ irand(Stack[-6], Stack[-1])
0x291: Pop(1)
0x292: Push((int) 0)
0x293: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x295: Push(Stack[-7])
0x296: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x297: @ irand(Stack[-4], Stack[-7])
0x298: Pop(0)
0x299: Push("all")
0x29a: PushEmpty(string, int)
0x29b: Stack[-1] = Stack[-7]
0x29c: Call2 0x4c7

0x29d: Pop(1)
0x29e: @ PlayAnimation(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: @ WaitForAnimEnd(Stack[-3])
0x2a1: Pop(0)
0x2a2: Pop(0); Push((bool) Stack[-3] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: GOTO 0x2c2

0x2a5: GOTO 0x2b7

0x2a6: Push((int) 1)
0x2a7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a9: Push((int) 4)
0x2aa: @ rand(Stack[-3], Stack[-1])
0x2ab: Pop(1)
0x2ac: Push((int) 1)
0x2ad: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2ae: @ Sleep(Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Pop(0); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2c2

0x2b3: GOTO 0x2b7

0x2b4: Push(Stack[-6])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2c2

0x2b7: PushEmpty(bool)
0x2b8: Call2 0x2c5

0x2b9: Pop(0)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: GOTO 0x2c2

0x2bd: @ ResetAAS()
0x2be: Pop(0)
0x2bf: Push((int) 1)
0x2c0: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2c1: GOTO 0x284

0x2c2: @ ResetAAS()
0x2c3: Pop(0)
0x2c4: Return(); Pop(14)

0x2c5: Stack[-1] = (bool) 1
0x2c6: Return(); Pop(0)

0x2c7: @ StopAnimation()
0x2c8: Pop(0)
0x2c9: @ StopGroup0()
0x2ca: Pop(0)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(bool, bool)
0x2cd: Push("lockpick")
0x2ce: Push((int) 0)
0x2cf: Push((int) 1)
0x2d0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(3)
0x2d2: PushEmpty(object)
0x2d3: Stack[-1] = Stack[-4]
0x2d4: Call2 0x2d7

0x2d5: Pop(1)
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty()
0x2d8: EventDisable(0)
0x2d9: PushEmpty(object)
0x2da: Stack[-1] = Stack[-2]
0x2db: Call2 0x2f0

0x2dc: Pop(1)
0x2dd: Push((int) 50)
0x2de: Push((int) 40)
0x2df: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x2e0: Pop(2)
0x2e1: EventEnable(0)
0x2e2: @ Hold()
0x2e3: Pop(0)
0x2e4: GOTO 0x2e2

0x2e5: Return(); Pop(0)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ IsOverrideActive(Stack[-1])
0x2e8: Pop(0)
0x2e9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2eb: PushEmpty(object)
0x2ec: Stack[-1] = Stack[-4]
0x2ed: Call2 0x514

0x2ee: Pop(1)
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2f1: Pop(0); Push((bool) Stack[-21] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "fdie"
0x2f5: Call2 0x34b

0x2f6: Pop(1)
0x2f7: GOTO 0x34a

0x2f8: @@ GetPosition(Stack[-10])
0x2f9: Pop(0)
0x2fa: @ GetPosition(Stack[-9])
0x2fb: Pop(0)
0x2fc: @ GetDirection(Stack[-8])
0x2fd: Pop(0)
0x2fe: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2ff: Push(CvectorIndex(Stack[-7], 0))
0x300: Push(CvectorIndex(Stack[-9], 0))
0x301: Pop(2); Push(Stack[-2] * Stack[-1]);
0x302: Push(CvectorIndex(Stack[-8], 2))
0x303: Push(CvectorIndex(Stack[-10], 2))
0x304: Pop(2); Push(Stack[-2] * Stack[-1]);
0x305: Pop(2); Push(Stack[-2] + Stack[-1]);
0x306: Push((int) 0)
0x307: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: Stack[-6] = "fdie"
0x30a: GOTO 0x30c

0x30b: Stack[-6] = "bdie"
0x30c: @ RemoveRTEnvelope()
0x30d: Pop(0)
0x30e: @ SetDeathState()
0x30f: Pop(0)
0x310: @ Stop()
0x311: Pop(0)
0x312: @ StopAsync()
0x313: Pop(0)
0x314: Stack[-5] = Stack[-21]
0x315: Push("GetScriptProperty")
0x316: Push((int) 2)
0x317: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x318: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x319: Push("Owner")
0x31a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x31b: Pop(1)
0x31c: Push(Stack[-4])
0x31d: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31e: Push("Owner")
0x31f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x320: Pop(1)
0x321: Pop(0); Push((bool) Stack[-5] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Stack[-5] = Stack[-21]
0x324: Push("@GetEyesHeight")
0x325: Push((int) 1)
0x326: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x327: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x328: @@ GetEyesHeight(Stack[-2])
0x329: Pop(0)
0x32a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x32b: Push(CvectorIndex(Stack[-1], 1))
0x32c: Stack[-1] = Stack[-3]
0x32d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x32e: Push("head")
0x32f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x330: Pop(1)
0x331: Stack[-3] = (bool) 1
0x332: GOTO 0x334

0x333: Stack[-3] = (bool) 0
0x334: PushEmpty(string)
0x335: Stack[-1] = Stack[-7]
0x336: Call2 0x483

0x337: Pop(1)
0x338: Push("all")
0x339: @ PlayAnimation(Stack[-1], Stack[-7])
0x33a: Pop(1)
0x33b: @ WaitForAnimEnd()
0x33c: Pop(0)
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: @ StopAsync()
0x340: Pop(0)
0x341: Push("head")
0x342: @ UnlookAsync(Stack[-1])
0x343: Pop(1)
0x344: Push("all")
0x345: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x346: Pop(1)
0x347: @ RemoveEnvelope()
0x348: Pop(0)
0x349: Stack[-5] = 0
0x34a: Return(); Pop(20)

0x34b: PushEmpty()
0x34c: @ RemoveRTEnvelope()
0x34d: Pop(0)
0x34e: @ SetDeathState()
0x34f: Pop(0)
0x350: @ Stop()
0x351: Pop(0)
0x352: @ StopAsync()
0x353: Pop(0)
0x354: @ StopSecondaryAnimation()
0x355: Pop(0)
0x356: PushEmpty(string)
0x357: Stack[-1] = Stack[-2]
0x358: Call2 0x483

0x359: Pop(1)
0x35a: Push("all")
0x35b: @ PlayAnimation(Stack[-1], Stack[-2])
0x35c: Pop(1)
0x35d: @ WaitForAnimEnd()
0x35e: Pop(0)
0x35f: Push("all")
0x360: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x361: Pop(1)
0x362: @ RemoveEnvelope()
0x363: Pop(0)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: Return(); Pop(0)

0x36b: PushEmpty(cvector, cvector, cvector, cvector)
0x36c: @ GetPosition(Stack[-2])
0x36d: Pop(0)
0x36e: @@ GetPosition(Stack[-1])
0x36f: Pop(0)
0x370: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x371: Return(); Pop(4)

0x372: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x373: @ GetPosition(Stack[-3])
0x374: Pop(0)
0x375: @@ GetPosition(Stack[-2])
0x376: Pop(0)
0x377: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x378: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x379: Return(); Pop(6)

0x37a: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x37b: Pop(0); Push((bool) Stack[-15] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Return(); Pop(14)

0x37e: @ IsDead(Stack[-7])
0x37f: Pop(0)
0x380: Push(Stack[-7])
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Return(); Pop(14)

0x383: @ GetSecondaryAnimationType(Stack[-6])
0x384: Pop(0)
0x385: Push((int) 0)
0x386: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(14)

0x389: @@ GetPosition(Stack[-5])
0x38a: Pop(0)
0x38b: @ GetPosition(Stack[-4])
0x38c: Pop(0)
0x38d: @ GetDirection(Stack[-3])
0x38e: Pop(0)
0x38f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x390: Push(CvectorIndex(Stack[-2], 0))
0x391: Push(CvectorIndex(Stack[-4], 0))
0x392: Pop(2); Push(Stack[-2] * Stack[-1]);
0x393: Push(CvectorIndex(Stack[-3], 2))
0x394: Push(CvectorIndex(Stack[-5], 2))
0x395: Pop(2); Push(Stack[-2] * Stack[-1]);
0x396: Pop(2); Push(Stack[-2] + Stack[-1]);
0x397: Push((int) 0)
0x398: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-1] = "fhit"
0x39b: GOTO 0x39d

0x39c: Stack[-1] = "bhit"
0x39d: Push("hit_react")
0x39e: Push("1")
0x39f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a0: Push("2")
0x3a1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a2: Push((int) -10)
0x3a3: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(4)
0x3a5: Return(); Pop(14)

0x3a6: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x3a7: PushEmpty(bool)
0x3a8: Stack[-1] = (bool) 0
0x3a9: PushEmpty(bool)
0x3aa: Stack[-1] = (bool) 0
0x3ab: Push(Stack[-23])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ad: Push((int) 4)
0x3ae: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: Stack[-1] = (bool) 1
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b2: Push((int) 5)
0x3b3: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Stack[-1] = (bool) 1
0x3b6: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3b7: PushEmpty(cvector, cvector)
0x3b8: PushEmpty(cvector, object)
0x3b9: Stack[-1] = Stack[-25]
0x3ba: Call2 0x36b

0x3bb: Stack[-3] = Stack[-2]
0x3bc: Pop(2)
0x3bd: Call2 0x4ac

0x3be: Stack[-11] = Stack[-2]
0x3bf: Pop(2)
0x3c0: @ CreateVectorVector(Stack[-8])
0x3c1: Pop(0)
0x3c2: Stack[-7] = (int) 1
0x3c3: Push("hit")
0x3c4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c5: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x3c6: Pop(1)
0x3c7: Pop(0); Push((bool) Stack[-6] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3d3

0x3ca: Pop(0); Push(Stack[-4] | Stack[-9]);
0x3cb: Push((float)0.70711)
0x3cc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: @@ add(Stack[-5])
0x3cf: Pop(0)
0x3d0: Push((int) 1)
0x3d1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x3d2: GOTO 0x3c3

0x3d3: @@ size(Stack[-3])
0x3d4: Pop(0)
0x3d5: Push(Stack[-3])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d7: @ irand(Stack[-2], Stack[-3])
0x3d8: Pop(0)
0x3d9: @@ get(Stack[-1], Stack[-2])
0x3da: Pop(0)
0x3db: PushEmpty(object, int, float, cvector, cvector)
0x3dc: Stack[-5] = Stack[-26]
0x3dd: Stack[-4] = Stack[-25]
0x3de: Stack[-3] = Stack[-24]
0x3df: Stack[-2] = Stack[-6]
0x3e0: Stack[-1] = -Stack[-14]; Pop(0);
0x3e1: Call2 0x3ea

0x3e2: Pop(5)
0x3e3: Return(); Pop(18)

0x3e4: Stack[-8] = 0
0x3e5: PushEmpty(object)
0x3e6: Stack[-1] = Stack[-22]
0x3e7: Call2 0x37a

0x3e8: Pop(1)
0x3e9: Return(); Pop(18)

0x3ea: PushEmpty(object, object, object, object)
0x3eb: @ GetScene(Stack[-2])
0x3ec: Pop(0)
0x3ed: Push("scripted")
0x3ee: Push("blood_dir.xml")
0x3ef: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x3f0: Pop(2)
0x3f1: PushEmpty(object)
0x3f2: Stack[-1] = Stack[-10]
0x3f3: Call2 0x37a

0x3f4: Pop(1)
0x3f5: Return(); Pop(4)

0x3f6: Stack[-1] = 0
0x3f7: Stack[-2] = 0
0x3f8: PushEmpty(bool, bool)
0x3f9: @ IsLoaded(Stack[-1])
0x3fa: Pop(0)
0x3fb: Stack[-3] = Stack[-1]
0x3fc: Return(); Pop(2)

0x3fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3fe: @@ GetPosition(Stack[-8])
0x3ff: Pop(0)
0x400: @@ GetEyesHeight(Stack[-9])
0x401: Pop(0)
0x402: Push(CvectorIndex(Stack[-8], 1))
0x403: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x404: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x405: @ GetPosition(Stack[-7])
0x406: Pop(0)
0x407: @ GetEyesHeight(Stack[-9])
0x408: Pop(0)
0x409: Push(CvectorIndex(Stack[-7], 1))
0x40a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x40b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x40c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x40d: Push(CvectorIndex(Stack[-6], 1))
0x40e: Stack[-1] = (int) 0
0x40f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x410: Pop(0); Push(Stack[-6] | Stack[-6]);
0x411: Pop(1); Push(Sqrt(Stack[-1]))
0x412: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x413: Stack[-5] = -Stack[-6]; Pop(0);
0x414: Pop(0); Push(Stack[-6] * Stack[-19]);
0x415: PushEmpty(cvector, cvector)
0x416: Push(CVector(0.0, 1.0, 0.0))
0x417: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x418: Call2 0x4ac

0x419: Pop(1)
0x41a: Push((int) 25)
0x41b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x41c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41d: Push(CVector(0.0, 10.0, 0.0))
0x41e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x41f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x420: @ IsOverrideActive(Stack[-2])
0x421: Pop(0)
0x422: Push(Stack[-2])
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-21] = (bool) 0
0x425: Return(); Pop(18)

0x426: @ StopWorld()
0x427: Pop(0)
0x428: @ CameraTransit(Stack[-3], Stack[-5])
0x429: Pop(0)
0x42a: Push(CvectorIndex(Stack[-4], 0))
0x42b: Push(CvectorIndex(Stack[-5], 2))
0x42c: @ Rotate(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: PushEmpty(bool)
0x42f: Call2 0x529

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: GOTO 0x43b

0x433: Push("head")
0x434: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x435: Pop(1)
0x436: Push(Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x438: Push("head")
0x439: @ LookAsyncCamera(Stack[-1])
0x43a: Pop(1)
0x43b: @ CameraWaitForPlayFinish()
0x43c: Pop(0)
0x43d: @ ResumeWorld()
0x43e: Pop(0)
0x43f: Stack[-21] = (bool) 1
0x440: Return(); Pop(18)

0x441: PushEmpty(bool, bool)
0x442: @ CameraSwitchToNormal()
0x443: Pop(0)
0x444: PushEmpty(bool)
0x445: Call2 0x529

0x446: Pop(0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: GOTO 0x451

0x449: Push("head")
0x44a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x44b: Pop(1)
0x44c: Push(Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44e: Push("head")
0x44f: @ UnlookAsync(Stack[-1])
0x450: Pop(1)
0x451: Return(); Pop(2)

0x452: PushEmpty(bool, float, float, bool, float, float)
0x453: @ lshHasAnimation(Stack[-3], Stack[-7])
0x454: Pop(0)
0x455: Push(Stack[-3])
0x456: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x457: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x458: Pop(0)
0x459: Push((bool) 0)
0x45a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(1)
0x45c: GOTO 0x461

0x45d: Push("Can't find lsh animation : ")
0x45e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45f: @ Trace(Stack[-1])
0x460: Pop(1)
0x461: Return(); Pop(6)

0x462: PushEmpty(bool, float, float, bool, float, float)
0x463: @ lshHasAnimation(Stack[-3], Stack[-8])
0x464: Pop(0)
0x465: Push(Stack[-3])
0x466: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x467: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x468: Pop(0)
0x469: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x46a: Pop(0)
0x46b: GOTO 0x470

0x46c: Push("Can't find lsh animation : ")
0x46d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x46e: @ Trace(Stack[-1])
0x46f: Pop(1)
0x470: Return(); Pop(6)

0x471: PushEmpty(float, cvector, float, cvector)
0x472: @@ GetEyesHeight(Stack[-2])
0x473: Pop(0)
0x474: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x475: Push(CvectorIndex(Stack[-1], 1))
0x476: Stack[-1] = Stack[-3]
0x477: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x478: Push("head")
0x479: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x47a: Pop(1)
0x47b: Return(); Pop(4)

0x47c: PushEmpty(bool)
0x47d: Call2 0x529

0x47e: Pop(0)
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: @ lshStopSpeech()
0x481: Pop(0)
0x482: Return(); Pop(0)

0x483: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x484: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x485: Pop(0)
0x486: Pop(0); Push((bool) Stack[-8] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x488: Stack[-7] = (int) 0
0x489: Push((int) 1)
0x48a: Pop(1); Push(Stack[-8] + Stack[-1]);
0x48b: Pop(1); Push(Stack[-18] + Stack[-1]);
0x48c: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x48d: Pop(1)
0x48e: Pop(0); Push((bool) Stack[-6] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: GOTO 0x494

0x491: Push((int) 1)
0x492: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x493: GOTO 0x489

0x494: Pop(0); Push((bool) Stack[-7] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: Return(); Pop(16)

0x497: @ irand(Stack[-5], Stack[-7])
0x498: Pop(0)
0x499: Push((int) 1)
0x49a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49b: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x49c: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x49d: Pop(0)
0x49e: Push(Stack[-4])
0x49f: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a0: @ GetEyesHeight(Stack[-3])
0x4a1: Pop(0)
0x4a2: @ GetDirection(Stack[-2])
0x4a3: Pop(0)
0x4a4: Push((int) 50)
0x4a5: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x4a6: Push(CvectorIndex(Stack[-1], 1))
0x4a7: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x4a8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4a9: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x4aa: Pop(0)
0x4ab: Return(); Pop(16)

0x4ac: PushEmpty(float, float)
0x4ad: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4ae: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4af: Push((float)0.0)
0x4b0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4b3: Return(); Pop(2)

0x4b4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4b5: Return(); Pop(2)

0x4b6: PushEmpty(int, int)
0x4b7: @ GetVariable(Stack[-3], Stack[-1])
0x4b8: Pop(0)
0x4b9: Stack[-4] = Stack[-1]
0x4ba: Return(); Pop(2)

0x4bb: PushEmpty(object, object)
0x4bc: @ FindActor(Stack[-1], Stack[-4])
0x4bd: Pop(0)
0x4be: Pop(0); Push((bool) Stack[-1] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-5] = (bool) 0
0x4c1: Return(); Pop(2)

0x4c2: @ Trigger(Stack[-1], Stack[-3])
0x4c3: Pop(0)
0x4c4: Stack[-5] = (bool) 1
0x4c5: Return(); Pop(2)

0x4c6: Stack[-1] = 0
0x4c7: PushEmpty(string, string)
0x4c8: Stack[-1] = "idle"
0x4c9: Push(Stack[-3])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4cc: Stack[-4] = Stack[-1]
0x4cd: Return(); Pop(2)

0x4ce: PushEmpty(int, bool, int, bool)
0x4cf: Stack[-2] = (int) 0
0x4d0: Push("all")
0x4d1: PushEmpty(string, int)
0x4d2: Stack[-1] = Stack[-5]
0x4d3: Call2 0x4c7

0x4d4: Pop(1)
0x4d5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(2)
0x4d7: Pop(0); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: GOTO 0x4dd

0x4da: Push((int) 1)
0x4db: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4dc: GOTO 0x4d0

0x4dd: Stack[-5] = Stack[-2]
0x4de: Return(); Pop(4)

0x4df: PushEmpty()
0x4e0: Push("ook1Lisa1")
0x4e1: Push((int) 1)
0x4e2: @ SetVariable(Stack[-2], Stack[-1])
0x4e3: Pop(2)
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty()
0x4e6: PushEmpty(int, string)
0x4e7: Stack[-1] = "k1q01"
0x4e8: Call2 0x4b6

0x4e9: Pop(1)
0x4ea: Push((int) 4)
0x4eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-2] = (bool) 1
0x4ee: Return(); Pop(0)

0x4ef: Stack[-2] = (bool) 0
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty()
0x4f2: PushEmpty(int, string)
0x4f3: Stack[-1] = "ook1Lisa1"
0x4f4: Call2 0x4b6

0x4f5: Pop(1)
0x4f6: Push((int) 0)
0x4f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-2] = (bool) 1
0x4fa: Return(); Pop(0)

0x4fb: Stack[-2] = (bool) 0
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(int, int)
0x4fe: Push("branch")
0x4ff: @ GetVariable(Stack[-1], Stack[-2])
0x500: Pop(1)
0x501: Push((int) 0)
0x502: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x504: Stack[-3] = (int) 1
0x505: Return(); Pop(2)

0x506: GOTO 0x50c

0x507: Push((int) 1)
0x508: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-3] = (int) 2
0x50b: Return(); Pop(2)

0x50c: Stack[-3] = (int) 3
0x50d: Return(); Pop(2)

0x50e: PushEmpty(int, int)
0x50f: Push("branch")
0x510: @ GetVariable(Stack[-1], Stack[-2])
0x511: Pop(1)
0x512: Stack[-3] = Stack[-1]
0x513: Return(); Pop(2)

0x514: PushEmpty()
0x515: PushEmpty(int)
0x516: Call2 0x50e

0x517: Pop(0)
0x518: Push((int) 1)
0x519: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51b: @ WorkWithCorpse(Stack[-1])
0x51c: Pop(0)
0x51d: GOTO 0x520

0x51e: @ Barter(Stack[-1])
0x51f: Pop(0)
0x520: Return(); Pop(0)

0x521: Stack[-1] = (int) 543373
0x522: Return(); Pop(0)

0x523: Stack[-1] = (int) 543372
0x524: Return(); Pop(0)

0x525: Stack[-1] = "ui/NPC_Citizen1.png"
0x526: Return(); Pop(0)

0x527: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x528: Return(); Pop(0)

0x529: Stack[-1] = (bool) 0
0x52a: Return(); Pop(0)

0x52b: PushEmpty()
0x52c: PushEmpty(object)
0x52d: Stack[-1] = Stack[-2]
0x52e: Push(-1, 0); TaskCall(3)
0x52f: Call2 0x2cc

0x530: Pop(-1, 0); TaskReturn
0x531: Pop(1)
0x532: Return(); Pop(0)

0x533: PushEmpty()
0x534: PushEmpty(object, int, float)
0x535: Stack[-3] = Stack[-7]
0x536: Stack[-2] = Stack[-6]
0x537: Stack[-1] = Stack[-5]
0x538: Call2 0x3a6

0x539: Pop(3)
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: PushEmpty(object, int, float, cvector, cvector)
0x53d: Stack[-5] = Stack[-11]
0x53e: Stack[-4] = Stack[-10]
0x53f: Stack[-3] = Stack[-9]
0x540: Stack[-2] = Stack[-7]
0x541: Stack[-1] = Stack[-6]
0x542: Call2 0x3ea

0x543: Pop(5)
0x544: Return(); Pop(0)

0x545: PushEmpty(float, float)
0x546: Push("health")
0x547: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x549: Push("health")
0x54a: @ GetProperty(Stack[-1], Stack[-2])
0x54b: Pop(1)
0x54c: Push((int) 0)
0x54d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: @ SignalDeath(Stack[-4])
0x550: Pop(0)
0x551: Return(); Pop(2)

0x552: PushEmpty(bool, bool)
0x553: @ IsPlayerActor(Stack[-3], Stack[-1])
0x554: Pop(0)
0x555: Push(Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x557: PushEmpty(bool, string, string)
0x558: Stack[-2] = "quest_k1_01"
0x559: Stack[-1] = "doberman_dead"
0x55a: Call2 0x4bb

0x55b: Pop(3)
0x55c: PushEmpty(object)
0x55d: Stack[-1] = Stack[-4]
0x55e: Call2 0x52b

0x55f: Pop(1)
0x560: Return(); Pop(2)

