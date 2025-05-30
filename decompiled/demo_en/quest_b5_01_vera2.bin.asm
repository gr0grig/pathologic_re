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
	retreat
	player
	head
	RemoveStationaryActor
	GetPosition
	Can't retreat, distance: 
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	HasProperty
	HasProperty
	GetProperty
	SetProperty
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
	reputation
	quest_b5_01
	vera_retreat
	oob5Vera2_1
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	b5q01VeraDead
	health

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
	GetScene (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	FindDirLength (3 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x17a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x184 Vars = (object)
		EVENT_17 Op = 0x18f Vars = (object)
		EVENT_26 Op = 0x199 Vars = (string)
		EVENT_7 Op = 0x1d0 Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 0
		EVENT_7 Op = 0x2c7 Vars = (int)
		EVENT_41 Op = 0x302 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x32a Vars = (object)
		EVENT_22 Op = 0x3a9 Vars = (object, int, float, float)
		EVENT_16 Op = 0x3ab Vars = (object, string)
		EVENT_41 Op = 0x3ad Vars = (object)

Events:
EVENT_22 Op = 0x601 Vars = (object, int, float, float)
EVENT_43 Op = 0x609 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x613 Vars = (object, string)
EVENT_41 Op = 0x620 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x474

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5db

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x5d9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x5dd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x5df

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x5b5

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
0x41: Call2 0x4b8

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
0x52: Call2 0x5a9

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x5a3

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 518668)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 518670)
0x64: Push((int) 19916)
0x65: Push((int) 19762)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 519748)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 519749)
0x73: Push((int) -1)
0x74: Push((int) 20903)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 519750)
0x78: Push((int) -1)
0x79: Push((int) 20904)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x5e1

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x4c9

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
0x9f: Call2 0x5e1

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
0xaf: Call2 0x4d9

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x4f3

0xb8: Pop(0)
0xb9: Push((int) 19925)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x59c

0xc0: Pop(2)
0xc1: Push((int) 19761)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x59c

0xc8: Pop(2)
0xc9: Push((int) 20903)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x59c

0xd0: Pop(2)
0xd1: Push((int) 19760)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0x5a9

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x5a3

0xdd: Pop(2)
0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x9d

0xe1: Pop(1)
0xe2: Push((int) 518668)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 518670)
0xe8: Push((int) 19916)
0xe9: Push((int) 19762)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x9d

0xf0: Pop(1)
0xf1: Push((int) 519748)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 519749)
0xf7: Push((int) -1)
0xf8: Push((int) 20903)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 519750)
0xfc: Push((int) -1)
0xfd: Push((int) 20904)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 19916)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x9d

0x107: Pop(1)
0x108: Push((int) 518811)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 518812)
0x10e: Push((int) 19918)
0x10f: Push((int) 19917)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 19926)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x116: Push((int) 19928)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0x9d

0x11c: Pop(1)
0x11d: Push((int) 518823)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 518824)
0x123: Push((int) 19930)
0x124: Push((int) 19929)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 19930)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0x9d

0x12e: Pop(1)
0x12f: Push((int) 518825)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 518826)
0x135: Push((int) -1)
0x136: Push((int) 19931)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 518827)
0x13a: Push((int) -1)
0x13b: Push((int) 19932)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 19918)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call2 0x9d

0x145: Pop(1)
0x146: Push((int) 518813)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 518815)
0x14c: Push((int) 19921)
0x14d: Push((int) 19920)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Push((int) 518669)
0x151: Push((int) -1)
0x152: Push((int) 19761)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: Push((int) 19921)
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Neutral"
0x15b: Call2 0x9d

0x15c: Pop(1)
0x15d: Push((int) 518816)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 518819)
0x163: Push((int) -1)
0x164: Push((int) 19924)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 518820)
0x168: Push((int) -1)
0x169: Push((int) 19925)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16e: PushEmpty(bool)
0x16f: Call2 0x5e1

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x172: @ lshStopAnimation()
0x173: Pop(0)
0x174: GOTO 0x177

0x175: @ StopAnimation()
0x176: Pop(0)
0x177: Return(); Pop(0)

0x178: GOTO 0xb4

0x179: Return(); Pop(0)

0x17a: PushEmpty(float, float)
0x17b: Stack[-2] = (int) 300
0x17c: Stack[-1] = (int) 100
0x17d: Call2 0x1a6

0x17e: Pop(2)
0x17f: Push((int) 3)
0x180: @ Sleep(Stack[-1])
0x181: Pop(1)
0x182: GOTO 0x17a

0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: PushEmpty()
0x186: Call2 0x1e7

0x187: Pop(0)
0x188: PushEmpty(int, object)
0x189: Stack[-1] = Stack[-3]
0x18a: Push(-2, 1); TaskCall(0)
0x18b: Call2 0x0

0x18c: Pop(-2, 1); TaskReturn
0x18d: Pop(2)
0x18e: Return(); Pop(0)

0x18f: PushEmpty()
0x190: PushEmpty()
0x191: Call2 0x1e7

0x192: Pop(0)
0x193: PushEmpty()
0x194: Push(-0, 3); TaskCall(3)
0x195: Call2 0x24b

0x196: Pop(-0, 3); TaskReturn
0x197: Pop(0)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Push("retreat")
0x19b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x19d: PushEmpty()
0x19e: Call2 0x1e7

0x19f: Pop(0)
0x1a0: PushEmpty()
0x1a1: Push(-0, 3); TaskCall(3)
0x1a2: Call2 0x24b

0x1a3: Pop(-0, 3); TaskReturn
0x1a4: Pop(0)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: PushEmpty(bool)
0x1a8: Call2 0x46f

0x1a9: Pop(0)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Return(); Pop(0)

0x1ad: Push("player")
0x1ae: @ FindActor(Stack[-4], Stack[-1])
0x1af: Pop(1)
0x1b0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b4: Push((int) 10)
0x1b5: Push((float)1.0)
0x1b6: @ SetTimer(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: PushEmpty()
0x1b9: Call2 0x1f5

0x1ba: Pop(0)
0x1bb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: Push((int) 10)
0x1be: @ KillTimer(Stack[-1])
0x1bf: Pop(1)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty(float, float)
0x1c2: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c4: Stack[-3] = (bool) 0
0x1c5: Return(); Pop(2)

0x1c6: PushEmpty(float, object)
0x1c7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c8: Call2 0x3bb

0x1c9: Pop(1)
0x1ca: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1cb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ce: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1cf: Return(); Pop(2)

0x1d0: PushEmpty()
0x1d1: Push((int) 10)
0x1d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d4: PushEmpty(bool)
0x1d5: Call2 0x1c1

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1da: PushEmpty(object)
0x1db: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1dc: Call2 0x4e8

0x1dd: Pop(1)
0x1de: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1df: GOTO 0x1e6

0x1e0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e2: Push("head")
0x1e3: @ UnlookAsync(Stack[-1])
0x1e4: Pop(1)
0x1e5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty()
0x1e8: Call2 0x246

0x1e9: Pop(0)
0x1ea: Push((int) 10)
0x1eb: @ KillTimer(Stack[-1])
0x1ec: Pop(1)
0x1ed: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ef: Push("head")
0x1f0: @ UnlookAsync(Stack[-1])
0x1f1: Pop(1)
0x1f2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f6: @ WaitForAnimEnd()
0x1f7: Pop(0)
0x1f8: PushEmpty(bool)
0x1f9: Call2 0x46f

0x1fa: Pop(0)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Return(); Pop(14)

0x1fe: PushEmpty(int)
0x1ff: Call2 0x58b

0x200: Stack[-8] = Stack[-1]
0x201: Pop(1)
0x202: Stack[-6] = (int) 0
0x203: PushEmpty(bool)
0x204: Stack[-1] = (bool) 0
0x205: Push((int) 5)
0x206: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: PushEmpty(bool)
0x209: Call2 0x46f

0x20a: Pop(0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = (bool) 1
0x20d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x20e: Push((int) 3)
0x20f: @ irand(Stack[-6], Stack[-1])
0x210: Pop(1)
0x211: Push((int) 0)
0x212: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x214: Push(Stack[-7])
0x215: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x216: @ irand(Stack[-4], Stack[-7])
0x217: Pop(0)
0x218: Push("all")
0x219: PushEmpty(string, int)
0x21a: Stack[-1] = Stack[-7]
0x21b: Call2 0x584

0x21c: Pop(1)
0x21d: @ PlayAnimation(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: @ WaitForAnimEnd(Stack[-3])
0x220: Pop(0)
0x221: Pop(0); Push((bool) Stack[-3] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x241

0x224: GOTO 0x236

0x225: Push((int) 1)
0x226: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x228: Push((int) 4)
0x229: @ rand(Stack[-3], Stack[-1])
0x22a: Pop(1)
0x22b: Push((int) 1)
0x22c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22d: @ Sleep(Stack[-1], Stack[-2])
0x22e: Pop(1)
0x22f: Pop(0); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x241

0x232: GOTO 0x236

0x233: Push(Stack[-6])
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: GOTO 0x241

0x236: PushEmpty(bool)
0x237: Call2 0x244

0x238: Pop(0)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: GOTO 0x241

0x23c: @ ResetAAS()
0x23d: Pop(0)
0x23e: Push((int) 1)
0x23f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x240: GOTO 0x203

0x241: @ ResetAAS()
0x242: Pop(0)
0x243: Return(); Pop(14)

0x244: Stack[-1] = (bool) 1
0x245: Return(); Pop(0)

0x246: @ StopAnimation()
0x247: Pop(0)
0x248: @ StopGroup0()
0x249: Pop(0)
0x24a: Return(); Pop(0)

0x24b: PushEmpty(object, object)
0x24c: @ GetScene(Stack[-1])
0x24d: Pop(0)
0x24e: PushEmpty(object)
0x24f: Call2 0x523

0x250: Pop(0)
0x251: @@ RemoveStationaryActor(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(object)
0x254: PushEmpty(object)
0x255: Call2 0x3c3

0x256: Stack[-2] = Stack[-1]
0x257: Pop(1)
0x258: Call2 0x27e

0x259: Pop(1)
0x25a: Push((int) 1)
0x25b: @ Sleep(Stack[-1])
0x25c: Pop(1)
0x25d: GOTO 0x253

0x25e: Return(); Pop(2)

0x25f: Stack[-1] = 0
0x260: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x261: @ GetPosition(Stack[-6])
0x262: Pop(0)
0x263: @@ GetPosition(Stack[-5])
0x264: Pop(0)
0x265: @ GetDirection(Stack[-4])
0x266: Pop(0)
0x267: PushEmpty(cvector, cvector)
0x268: PushEmpty(cvector, cvector)
0x269: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x26a: Call2 0x529

0x26b: Pop(1)
0x26c: Push((float)0.75)
0x26d: Pop(1); Push(Stack[-8] * Stack[-1]);
0x26e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x26f: Call2 0x529

0x270: Stack[-5] = Stack[-2]
0x271: Pop(2)
0x272: Push((int) 32)
0x273: Push((float)7000.0)
0x274: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: Push((int) 100)
0x277: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x278: Push((int) 0)
0x279: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: Stack[-1] = (int) 0
0x27c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x27d: Return(); Pop(12)

0x27e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x27f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x280: PushEmpty(cvector, float)
0x281: Stack[-1] = (float) 1.74533
0x282: Call2 0x260

0x283: Stack[-7] = Stack[-2]
0x284: Pop(2)
0x285: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x286: Push((float)2500.0)
0x287: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x289: PushEmpty(cvector, float)
0x28a: Stack[-1] = (float) 2.61799
0x28b: Call2 0x260

0x28c: Stack[-7] = Stack[-2]
0x28d: Pop(2)
0x28e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x28f: Push((float)2500.0)
0x290: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x292: Push("Can't retreat, distance: ")
0x293: Pop(0); Push(Sqrt(Stack[-5]))
0x294: Pop(2); Push(Stack[-2] + Stack[-1]);
0x295: @ Trace(Stack[-1])
0x296: Pop(1)
0x297: Push((float)0.5)
0x298: @ Sleep(Stack[-1])
0x299: Pop(1)
0x29a: Return(); Pop(10)

0x29b: Push(CvectorIndex(Stack[-5], 0))
0x29c: Push(CvectorIndex(Stack[-6], 2))
0x29d: @ Rotate(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: PushEmpty(cvector)
0x2a0: Call2 0x3af

0x2a1: Pop(0)
0x2a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2a3: Push((int) 120)
0x2a4: Push((float)0.5)
0x2a5: @ SetTimer(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2a8: Push((int) 1)
0x2a9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x2aa: Pop(1)
0x2ab: Push(Stack[-3])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2ad: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: GOTO 0x2c6

0x2b0: GOTO 0x2c4

0x2b1: PushEmpty(cvector, float)
0x2b2: Stack[-1] = (float) 2.61799
0x2b3: Call2 0x260

0x2b4: Stack[-4] = Stack[-2]
0x2b5: Pop(2)
0x2b6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2b7: Push((float)2500.0)
0x2b8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2ba: PushEmpty(cvector)
0x2bb: Call2 0x3af

0x2bc: Pop(0)
0x2bd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2be: Push((int) 120)
0x2bf: Push((float)0.5)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: GOTO 0x2c4

0x2c3: GOTO 0x2c6

0x2c4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2c6: Return(); Pop(10)

0x2c7: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2c8: Push((int) 120)
0x2c9: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Return(); Pop(8)

0x2cc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2ce: @ Stop()
0x2cf: Pop(0)
0x2d0: Push((int) 1)
0x2d1: @ KillTimer(Stack[-1])
0x2d2: Pop(1)
0x2d3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2d4: GOTO 0x2fa

0x2d5: @ GetDirection(Stack[-4])
0x2d6: Pop(0)
0x2d7: Push((float)7000.0)
0x2d8: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2d9: Pop(1)
0x2da: PushEmpty(cvector, float)
0x2db: Stack[-1] = (float) 1.74533
0x2dc: Call2 0x260

0x2dd: Stack[-4] = Stack[-2]
0x2de: Pop(2)
0x2df: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2e0: PushEmpty(bool)
0x2e1: Stack[-1] = (bool) 0
0x2e2: Push((float)2500.0)
0x2e3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2e5: PushEmpty(bool)
0x2e6: Stack[-1] = (bool) 1
0x2e7: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2e8: Push((float)2.25)
0x2e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ea: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: PushEmpty(bool)
0x2ed: Call2 0x30b

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: Stack[-1] = (bool) 0
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 1
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f4: @ Stop()
0x2f5: Pop(0)
0x2f6: PushEmpty(cvector)
0x2f7: Call2 0x3af

0x2f8: Pop(0)
0x2f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2fa: Return(); Pop(8)

0x2fb: @ Stop()
0x2fc: Pop(0)
0x2fd: Push((int) 120)
0x2fe: @ KillTimer(Stack[-1])
0x2ff: Pop(1)
0x300: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x301: Return(); Pop(0)

0x302: PushEmpty()
0x303: PushEmpty()
0x304: Call2 0x2fb

0x305: Pop(0)
0x306: PushEmpty(object)
0x307: Stack[-1] = Stack[-2]
0x308: Call2 0x620

0x309: Pop(1)
0x30a: Return(); Pop(0)

0x30b: PushEmpty(cvector, cvector, cvector, cvector)
0x30c: @ GetDirection(Stack[-2])
0x30d: Pop(0)
0x30e: PushEmpty(cvector, object)
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x3b4

0x311: Stack[-3] = Stack[-2]
0x312: Pop(2)
0x313: PushEmpty(float, cvector, cvector)
0x314: Stack[-2] = Stack[-5]
0x315: Stack[-1] = Stack[-4]
0x316: Call2 0x53e

0x317: Pop(2)
0x318: Push((float)-0.34202)
0x319: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x31a: Return(); Pop(4)

0x31b: PushEmpty()
0x31c: EventDisable(0)
0x31d: PushEmpty(object)
0x31e: Stack[-1] = Stack[-2]
0x31f: Call2 0x334

0x320: Pop(1)
0x321: Push((int) 50)
0x322: Push((int) 40)
0x323: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: EventEnable(0)
0x326: @ Hold()
0x327: Pop(0)
0x328: GOTO 0x326

0x329: Return(); Pop(0)

0x32a: PushEmpty(bool, bool)
0x32b: @ IsOverrideActive(Stack[-1])
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32f: PushEmpty(object)
0x330: Stack[-1] = Stack[-4]
0x331: Call2 0x5cc

0x332: Pop(1)
0x333: Return(); Pop(2)

0x334: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x335: Pop(0); Push((bool) Stack[-21] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: PushEmpty(string)
0x338: Stack[-1] = "fdie"
0x339: Call2 0x38f

0x33a: Pop(1)
0x33b: GOTO 0x38e

0x33c: @@ GetPosition(Stack[-10])
0x33d: Pop(0)
0x33e: @ GetPosition(Stack[-9])
0x33f: Pop(0)
0x340: @ GetDirection(Stack[-8])
0x341: Pop(0)
0x342: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x343: Push(CvectorIndex(Stack[-7], 0))
0x344: Push(CvectorIndex(Stack[-9], 0))
0x345: Pop(2); Push(Stack[-2] * Stack[-1]);
0x346: Push(CvectorIndex(Stack[-8], 2))
0x347: Push(CvectorIndex(Stack[-10], 2))
0x348: Pop(2); Push(Stack[-2] * Stack[-1]);
0x349: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34a: Push((int) 0)
0x34b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-6] = "fdie"
0x34e: GOTO 0x350

0x34f: Stack[-6] = "bdie"
0x350: @ RemoveRTEnvelope()
0x351: Pop(0)
0x352: @ SetDeathState()
0x353: Pop(0)
0x354: @ Stop()
0x355: Pop(0)
0x356: @ StopAsync()
0x357: Pop(0)
0x358: Stack[-5] = Stack[-21]
0x359: Push("GetScriptProperty")
0x35a: Push((int) 2)
0x35b: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x35c: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x35d: Push("Owner")
0x35e: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x35f: Pop(1)
0x360: Push(Stack[-4])
0x361: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x362: Push("Owner")
0x363: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x364: Pop(1)
0x365: Pop(0); Push((bool) Stack[-5] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: Stack[-5] = Stack[-21]
0x368: Push("@GetEyesHeight")
0x369: Push((int) 1)
0x36a: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x36b: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x36c: @@ GetEyesHeight(Stack[-2])
0x36d: Pop(0)
0x36e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x36f: Push(CvectorIndex(Stack[-1], 1))
0x370: Stack[-1] = Stack[-3]
0x371: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x372: Push("head")
0x373: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x374: Pop(1)
0x375: Stack[-3] = (bool) 1
0x376: GOTO 0x378

0x377: Stack[-3] = (bool) 0
0x378: PushEmpty(string)
0x379: Stack[-1] = Stack[-7]
0x37a: Call2 0x4fa

0x37b: Pop(1)
0x37c: Push("all")
0x37d: @ PlayAnimation(Stack[-1], Stack[-7])
0x37e: Pop(1)
0x37f: @ WaitForAnimEnd()
0x380: Pop(0)
0x381: Push(Stack[-3])
0x382: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x383: @ StopAsync()
0x384: Pop(0)
0x385: Push("head")
0x386: @ UnlookAsync(Stack[-1])
0x387: Pop(1)
0x388: Push("all")
0x389: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x38a: Pop(1)
0x38b: @ RemoveEnvelope()
0x38c: Pop(0)
0x38d: Stack[-5] = 0
0x38e: Return(); Pop(20)

0x38f: PushEmpty()
0x390: @ RemoveRTEnvelope()
0x391: Pop(0)
0x392: @ SetDeathState()
0x393: Pop(0)
0x394: @ Stop()
0x395: Pop(0)
0x396: @ StopAsync()
0x397: Pop(0)
0x398: @ StopSecondaryAnimation()
0x399: Pop(0)
0x39a: PushEmpty(string)
0x39b: Stack[-1] = Stack[-2]
0x39c: Call2 0x4fa

0x39d: Pop(1)
0x39e: Push("all")
0x39f: @ PlayAnimation(Stack[-1], Stack[-2])
0x3a0: Pop(1)
0x3a1: @ WaitForAnimEnd()
0x3a2: Pop(0)
0x3a3: Push("all")
0x3a4: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3a5: Pop(1)
0x3a6: @ RemoveEnvelope()
0x3a7: Pop(0)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty()
0x3ae: Return(); Pop(0)

0x3af: PushEmpty(cvector, cvector)
0x3b0: @ GetPosition(Stack[-1])
0x3b1: Pop(0)
0x3b2: Stack[-3] = Stack[-1]
0x3b3: Return(); Pop(2)

0x3b4: PushEmpty(cvector, cvector, cvector, cvector)
0x3b5: @ GetPosition(Stack[-2])
0x3b6: Pop(0)
0x3b7: @@ GetPosition(Stack[-1])
0x3b8: Pop(0)
0x3b9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3ba: Return(); Pop(4)

0x3bb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3bc: @ GetPosition(Stack[-3])
0x3bd: Pop(0)
0x3be: @@ GetPosition(Stack[-2])
0x3bf: Pop(0)
0x3c0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3c1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3c2: Return(); Pop(6)

0x3c3: PushEmpty(object, object)
0x3c4: Push("player")
0x3c5: @ FindActor(Stack[-2], Stack[-1])
0x3c6: Pop(1)
0x3c7: Stack[-3] = Stack[-1]
0x3c8: Return(); Pop(2)

0x3c9: Stack[-1] = 0
0x3ca: PushEmpty(bool, bool)
0x3cb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3cc: Pop(0)
0x3cd: Stack[-4] = Stack[-1]
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(bool, bool)
0x3d0: Push("HasProperty")
0x3d1: Push((int) 2)
0x3d2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3d3: Pop(1); Push((bool) Stack[-1] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-5] = (bool) 0
0x3d6: Return(); Pop(2)

0x3d7: @@ HasProperty(Stack[-3], Stack[-1])
0x3d8: Pop(0)
0x3d9: Stack[-5] = Stack[-1]
0x3da: Return(); Pop(2)

0x3db: PushEmpty(float, float)
0x3dc: PushEmpty(bool, object, string)
0x3dd: Stack[-2] = Stack[-10]
0x3de: Stack[-1] = Stack[-9]
0x3df: Call2 0x3cf

0x3e0: Pop(2)
0x3e1: Pop(1); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: Stack[-8] = (bool) 0
0x3e4: Return(); Pop(2)

0x3e5: @@ GetProperty(Stack[-6], Stack[-1])
0x3e6: Pop(0)
0x3e7: PushEmpty(float, float, float, float)
0x3e8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x3e9: Stack[-2] = Stack[-8]
0x3ea: Stack[-1] = Stack[-7]
0x3eb: Call2 0x533

0x3ec: Pop(3)
0x3ed: @@ SetProperty(Stack[-7], Stack[-1])
0x3ee: Pop(1)
0x3ef: Stack[-8] = (bool) 1
0x3f0: Return(); Pop(2)

0x3f1: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x3f2: Pop(0); Push((bool) Stack[-15] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Return(); Pop(14)

0x3f5: @ IsDead(Stack[-7])
0x3f6: Pop(0)
0x3f7: Push(Stack[-7])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: Return(); Pop(14)

0x3fa: @ GetSecondaryAnimationType(Stack[-6])
0x3fb: Pop(0)
0x3fc: Push((int) 0)
0x3fd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Return(); Pop(14)

0x400: @@ GetPosition(Stack[-5])
0x401: Pop(0)
0x402: @ GetPosition(Stack[-4])
0x403: Pop(0)
0x404: @ GetDirection(Stack[-3])
0x405: Pop(0)
0x406: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x407: Push(CvectorIndex(Stack[-2], 0))
0x408: Push(CvectorIndex(Stack[-4], 0))
0x409: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40a: Push(CvectorIndex(Stack[-3], 2))
0x40b: Push(CvectorIndex(Stack[-5], 2))
0x40c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40e: Push((int) 0)
0x40f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-1] = "fhit"
0x412: GOTO 0x414

0x413: Stack[-1] = "bhit"
0x414: Push("hit_react")
0x415: Push("1")
0x416: Pop(1); Push(Stack[-3] + Stack[-1]);
0x417: Push("2")
0x418: Pop(1); Push(Stack[-4] + Stack[-1]);
0x419: Push((int) -10)
0x41a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(4)
0x41c: Return(); Pop(14)

0x41d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x41e: PushEmpty(bool)
0x41f: Stack[-1] = (bool) 0
0x420: PushEmpty(bool)
0x421: Stack[-1] = (bool) 0
0x422: Push(Stack[-23])
0x423: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x424: Push((int) 4)
0x425: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 1
0x428: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x429: Push((int) 5)
0x42a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: Stack[-1] = (bool) 1
0x42d: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x42e: PushEmpty(cvector, cvector)
0x42f: PushEmpty(cvector, object)
0x430: Stack[-1] = Stack[-25]
0x431: Call2 0x3b4

0x432: Stack[-3] = Stack[-2]
0x433: Pop(2)
0x434: Call2 0x529

0x435: Stack[-11] = Stack[-2]
0x436: Pop(2)
0x437: @ CreateVectorVector(Stack[-8])
0x438: Pop(0)
0x439: Stack[-7] = (int) 1
0x43a: Push("hit")
0x43b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x43c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x43d: Pop(1)
0x43e: Pop(0); Push((bool) Stack[-6] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x44a

0x441: Pop(0); Push(Stack[-4] | Stack[-9]);
0x442: Push((float)0.70711)
0x443: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: @@ add(Stack[-5])
0x446: Pop(0)
0x447: Push((int) 1)
0x448: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x449: GOTO 0x43a

0x44a: @@ size(Stack[-3])
0x44b: Pop(0)
0x44c: Push(Stack[-3])
0x44d: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x44e: @ irand(Stack[-2], Stack[-3])
0x44f: Pop(0)
0x450: @@ get(Stack[-1], Stack[-2])
0x451: Pop(0)
0x452: PushEmpty(object, int, float, cvector, cvector)
0x453: Stack[-5] = Stack[-26]
0x454: Stack[-4] = Stack[-25]
0x455: Stack[-3] = Stack[-24]
0x456: Stack[-2] = Stack[-6]
0x457: Stack[-1] = -Stack[-14]; Pop(0);
0x458: Call2 0x461

0x459: Pop(5)
0x45a: Return(); Pop(18)

0x45b: Stack[-8] = 0
0x45c: PushEmpty(object)
0x45d: Stack[-1] = Stack[-22]
0x45e: Call2 0x3f1

0x45f: Pop(1)
0x460: Return(); Pop(18)

0x461: PushEmpty(object, object, object, object)
0x462: @ GetScene(Stack[-2])
0x463: Pop(0)
0x464: Push("scripted")
0x465: Push("blood_dir.xml")
0x466: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x467: Pop(2)
0x468: PushEmpty(object)
0x469: Stack[-1] = Stack[-10]
0x46a: Call2 0x3f1

0x46b: Pop(1)
0x46c: Return(); Pop(4)

0x46d: Stack[-1] = 0
0x46e: Stack[-2] = 0
0x46f: PushEmpty(bool, bool)
0x470: @ IsLoaded(Stack[-1])
0x471: Pop(0)
0x472: Stack[-3] = Stack[-1]
0x473: Return(); Pop(2)

0x474: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x475: @@ GetPosition(Stack[-8])
0x476: Pop(0)
0x477: @@ GetEyesHeight(Stack[-9])
0x478: Pop(0)
0x479: Push(CvectorIndex(Stack[-8], 1))
0x47a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x47b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x47c: @ GetPosition(Stack[-7])
0x47d: Pop(0)
0x47e: @ GetEyesHeight(Stack[-9])
0x47f: Pop(0)
0x480: Push(CvectorIndex(Stack[-7], 1))
0x481: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x482: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x483: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x484: Push(CvectorIndex(Stack[-6], 1))
0x485: Stack[-1] = (int) 0
0x486: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x487: Pop(0); Push(Stack[-6] | Stack[-6]);
0x488: Pop(1); Push(Sqrt(Stack[-1]))
0x489: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x48a: Stack[-5] = -Stack[-6]; Pop(0);
0x48b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x48c: PushEmpty(cvector, cvector)
0x48d: Push(CVector(0.0, 1.0, 0.0))
0x48e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x48f: Call2 0x529

0x490: Pop(1)
0x491: Push((int) 25)
0x492: Pop(2); Push(Stack[-2] * Stack[-1]);
0x493: Pop(2); Push(Stack[-2] + Stack[-1]);
0x494: Push(CVector(0.0, 10.0, 0.0))
0x495: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x496: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x497: @ IsOverrideActive(Stack[-2])
0x498: Pop(0)
0x499: Push(Stack[-2])
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-21] = (bool) 0
0x49c: Return(); Pop(18)

0x49d: @ StopWorld()
0x49e: Pop(0)
0x49f: @ CameraTransit(Stack[-3], Stack[-5])
0x4a0: Pop(0)
0x4a1: Push(CvectorIndex(Stack[-4], 0))
0x4a2: Push(CvectorIndex(Stack[-5], 2))
0x4a3: @ Rotate(Stack[-2], Stack[-1])
0x4a4: Pop(2)
0x4a5: PushEmpty(bool)
0x4a6: Call2 0x5e1

0x4a7: Pop(0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: GOTO 0x4b2

0x4aa: Push("head")
0x4ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ac: Pop(1)
0x4ad: Push(Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4af: Push("head")
0x4b0: @ LookAsyncCamera(Stack[-1])
0x4b1: Pop(1)
0x4b2: @ CameraWaitForPlayFinish()
0x4b3: Pop(0)
0x4b4: @ ResumeWorld()
0x4b5: Pop(0)
0x4b6: Stack[-21] = (bool) 1
0x4b7: Return(); Pop(18)

0x4b8: PushEmpty(bool, bool)
0x4b9: @ CameraSwitchToNormal()
0x4ba: Pop(0)
0x4bb: PushEmpty(bool)
0x4bc: Call2 0x5e1

0x4bd: Pop(0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bf: GOTO 0x4c8

0x4c0: Push("head")
0x4c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4c2: Pop(1)
0x4c3: Push(Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c5: Push("head")
0x4c6: @ UnlookAsync(Stack[-1])
0x4c7: Pop(1)
0x4c8: Return(); Pop(2)

0x4c9: PushEmpty(bool, float, float, bool, float, float)
0x4ca: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4cb: Pop(0)
0x4cc: Push(Stack[-3])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4ce: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4cf: Pop(0)
0x4d0: Push((bool) 0)
0x4d1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(1)
0x4d3: GOTO 0x4d8

0x4d4: Push("Can't find lsh animation : ")
0x4d5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d6: @ Trace(Stack[-1])
0x4d7: Pop(1)
0x4d8: Return(); Pop(6)

0x4d9: PushEmpty(bool, float, float, bool, float, float)
0x4da: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4db: Pop(0)
0x4dc: Push(Stack[-3])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4df: Pop(0)
0x4e0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4e1: Pop(0)
0x4e2: GOTO 0x4e7

0x4e3: Push("Can't find lsh animation : ")
0x4e4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4e5: @ Trace(Stack[-1])
0x4e6: Pop(1)
0x4e7: Return(); Pop(6)

0x4e8: PushEmpty(float, cvector, float, cvector)
0x4e9: @@ GetEyesHeight(Stack[-2])
0x4ea: Pop(0)
0x4eb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4ec: Push(CvectorIndex(Stack[-1], 1))
0x4ed: Stack[-1] = Stack[-3]
0x4ee: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4ef: Push("head")
0x4f0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4f1: Pop(1)
0x4f2: Return(); Pop(4)

0x4f3: PushEmpty(bool)
0x4f4: Call2 0x5e1

0x4f5: Pop(0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: @ lshStopSpeech()
0x4f8: Pop(0)
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x4fb: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x4fc: Pop(0)
0x4fd: Pop(0); Push((bool) Stack[-8] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x4ff: Stack[-7] = (int) 0
0x500: Push((int) 1)
0x501: Pop(1); Push(Stack[-8] + Stack[-1]);
0x502: Pop(1); Push(Stack[-18] + Stack[-1]);
0x503: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x504: Pop(1)
0x505: Pop(0); Push((bool) Stack[-6] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: GOTO 0x50b

0x508: Push((int) 1)
0x509: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x50a: GOTO 0x500

0x50b: Pop(0); Push((bool) Stack[-7] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: Return(); Pop(16)

0x50e: @ irand(Stack[-5], Stack[-7])
0x50f: Pop(0)
0x510: Push((int) 1)
0x511: Pop(1); Push(Stack[-6] + Stack[-1]);
0x512: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x513: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x514: Pop(0)
0x515: Push(Stack[-4])
0x516: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x517: @ GetEyesHeight(Stack[-3])
0x518: Pop(0)
0x519: @ GetDirection(Stack[-2])
0x51a: Pop(0)
0x51b: Push((int) 50)
0x51c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x51d: Push(CvectorIndex(Stack[-1], 1))
0x51e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x51f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x520: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x521: Pop(0)
0x522: Return(); Pop(16)

0x523: PushEmpty(object, object)
0x524: @ self(Stack[-1])
0x525: Pop(0)
0x526: Stack[-3] = Stack[-1]
0x527: Return(); Pop(2)

0x528: Stack[-1] = 0
0x529: PushEmpty(float, float)
0x52a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x52b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x52c: Push((float)0.0)
0x52d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x530: Return(); Pop(2)

0x531: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x532: Return(); Pop(2)

0x533: PushEmpty()
0x534: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-4] = Stack[-2]
0x537: Return(); Pop(0)

0x538: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-4] = Stack[-1]
0x53b: Return(); Pop(0)

0x53c: Stack[-4] = Stack[-3]
0x53d: Return(); Pop(0)

0x53e: PushEmpty()
0x53f: Pop(0); Push(Stack[-2] | Stack[-1]);
0x540: Pop(0); Push(Stack[-3] | Stack[-3]);
0x541: Pop(0); Push(Stack[-3] | Stack[-3]);
0x542: Pop(2); Push(Stack[-2] * Stack[-1]);
0x543: Pop(1); Push(Sqrt(Stack[-1]))
0x544: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x545: Return(); Pop(0)

0x546: PushEmpty(int, int)
0x547: @ GetVariable(Stack[-3], Stack[-1])
0x548: Pop(0)
0x549: Stack[-4] = Stack[-1]
0x54a: Return(); Pop(2)

0x54b: PushEmpty()
0x54c: Pop(0); Push((bool) Stack[-2] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54e: Stack[-3] = (bool) 0
0x54f: Return(); Pop(0)

0x550: Push((int) 0)
0x551: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x553: Push((int) 8)
0x554: @ SendWorldWndMessage(Stack[-1])
0x555: Pop(1)
0x556: GOTO 0x560

0x557: Push((int) 0)
0x558: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55a: Push((int) 9)
0x55b: @ SendWorldWndMessage(Stack[-1])
0x55c: Pop(1)
0x55d: GOTO 0x560

0x55e: Stack[-3] = (bool) 0
0x55f: Return(); Pop(0)

0x560: PushEmpty(float)
0x561: Stack[-1] = Stack[-2]
0x562: Call2 0x56e

0x563: Pop(1)
0x564: PushEmpty(bool, object, string, float, float, float)
0x565: Stack[-5] = Stack[-8]
0x566: Stack[-4] = "reputation"
0x567: Stack[-3] = Stack[-7]
0x568: Stack[-2] = (int) 0
0x569: Stack[-1] = (int) 1
0x56a: Call2 0x3db

0x56b: Pop(6)
0x56c: Stack[-3] = (bool) 1
0x56d: Return(); Pop(0)

0x56e: PushEmpty(object, object)
0x56f: @ CreateFloatVector(Stack[-1])
0x570: Pop(0)
0x571: @@ add(Stack[-3])
0x572: Pop(0)
0x573: Push((int) 16)
0x574: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x575: Pop(1)
0x576: Return(); Pop(2)

0x577: Stack[-1] = 0
0x578: PushEmpty(object, object)
0x579: @ FindActor(Stack[-1], Stack[-4])
0x57a: Pop(0)
0x57b: Pop(0); Push((bool) Stack[-1] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57d: Stack[-5] = (bool) 0
0x57e: Return(); Pop(2)

0x57f: @ Trigger(Stack[-1], Stack[-3])
0x580: Pop(0)
0x581: Stack[-5] = (bool) 1
0x582: Return(); Pop(2)

0x583: Stack[-1] = 0
0x584: PushEmpty(string, string)
0x585: Stack[-1] = "idle"
0x586: Push(Stack[-3])
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x589: Stack[-4] = Stack[-1]
0x58a: Return(); Pop(2)

0x58b: PushEmpty(int, bool, int, bool)
0x58c: Stack[-2] = (int) 0
0x58d: Push("all")
0x58e: PushEmpty(string, int)
0x58f: Stack[-1] = Stack[-5]
0x590: Call2 0x584

0x591: Pop(1)
0x592: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(2)
0x594: Pop(0); Push((bool) Stack[-1] == 0)
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: GOTO 0x59a

0x597: Push((int) 1)
0x598: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x599: GOTO 0x58d

0x59a: Stack[-5] = Stack[-2]
0x59b: Return(); Pop(4)

0x59c: PushEmpty()
0x59d: PushEmpty(bool, string, string)
0x59e: Stack[-2] = "quest_b5_01"
0x59f: Stack[-1] = "vera_retreat"
0x5a0: Call2 0x578

0x5a1: Pop(3)
0x5a2: Return(); Pop(0)

0x5a3: PushEmpty()
0x5a4: Push("oob5Vera2_1")
0x5a5: Push((int) 1)
0x5a6: @ SetVariable(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: Return(); Pop(0)

0x5a9: PushEmpty()
0x5aa: PushEmpty(int, string)
0x5ab: Stack[-1] = "oob5Vera2_1"
0x5ac: Call2 0x546

0x5ad: Pop(1)
0x5ae: Push((int) 0)
0x5af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-2] = (bool) 1
0x5b2: Return(); Pop(0)

0x5b3: Stack[-2] = (bool) 0
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty(int, int)
0x5b6: Push("branch")
0x5b7: @ GetVariable(Stack[-1], Stack[-2])
0x5b8: Pop(1)
0x5b9: Push((int) 0)
0x5ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bc: Stack[-3] = (int) 1
0x5bd: Return(); Pop(2)

0x5be: GOTO 0x5c4

0x5bf: Push((int) 1)
0x5c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-3] = (int) 2
0x5c3: Return(); Pop(2)

0x5c4: Stack[-3] = (int) 3
0x5c5: Return(); Pop(2)

0x5c6: PushEmpty(int, int)
0x5c7: Push("branch")
0x5c8: @ GetVariable(Stack[-1], Stack[-2])
0x5c9: Pop(1)
0x5ca: Stack[-3] = Stack[-1]
0x5cb: Return(); Pop(2)

0x5cc: PushEmpty()
0x5cd: PushEmpty(int)
0x5ce: Call2 0x5c6

0x5cf: Pop(0)
0x5d0: Push((int) 1)
0x5d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d3: @ WorkWithCorpse(Stack[-1])
0x5d4: Pop(0)
0x5d5: GOTO 0x5d8

0x5d6: @ Barter(Stack[-1])
0x5d7: Pop(0)
0x5d8: Return(); Pop(0)

0x5d9: Stack[-1] = (int) 515593
0x5da: Return(); Pop(0)

0x5db: Stack[-1] = (int) 512582
0x5dc: Return(); Pop(0)

0x5dd: Stack[-1] = "ui/NPC_Citizen1.png"
0x5de: Return(); Pop(0)

0x5df: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x5e0: Return(); Pop(0)

0x5e1: Stack[-1] = (bool) 0
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty(object, object)
0x5e4: @ GetScene(Stack[-1])
0x5e5: Pop(0)
0x5e6: PushEmpty(object)
0x5e7: Call2 0x523

0x5e8: Pop(0)
0x5e9: @@ RemoveStationaryActor(Stack[-1])
0x5ea: Pop(1)
0x5eb: PushEmpty(bool, object)
0x5ec: Stack[-1] = Stack[-5]
0x5ed: Call2 0x3ca

0x5ee: Pop(1)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f0: PushEmpty(bool, object, float)
0x5f1: Stack[-2] = Stack[-6]
0x5f2: Stack[-1] = (float) -0.1
0x5f3: Call2 0x54b

0x5f4: Pop(3)
0x5f5: Push("b5q01VeraDead")
0x5f6: Push((bool) 1)
0x5f7: @ SetVariable(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[-4]
0x5fb: Push(-1, 0); TaskCall(4)
0x5fc: Call2 0x31b

0x5fd: Pop(-1, 0); TaskReturn
0x5fe: Pop(1)
0x5ff: Return(); Pop(2)

0x600: Stack[-1] = 0
0x601: PushEmpty()
0x602: PushEmpty(object, int, float)
0x603: Stack[-3] = Stack[-7]
0x604: Stack[-2] = Stack[-6]
0x605: Stack[-1] = Stack[-5]
0x606: Call2 0x41d

0x607: Pop(3)
0x608: Return(); Pop(0)

0x609: PushEmpty()
0x60a: PushEmpty(object, int, float, cvector, cvector)
0x60b: Stack[-5] = Stack[-11]
0x60c: Stack[-4] = Stack[-10]
0x60d: Stack[-3] = Stack[-9]
0x60e: Stack[-2] = Stack[-7]
0x60f: Stack[-1] = Stack[-6]
0x610: Call2 0x461

0x611: Pop(5)
0x612: Return(); Pop(0)

0x613: PushEmpty(float, float)
0x614: Push("health")
0x615: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x617: Push("health")
0x618: @ GetProperty(Stack[-1], Stack[-2])
0x619: Pop(1)
0x61a: Push((int) 0)
0x61b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: @ SignalDeath(Stack[-4])
0x61e: Pop(0)
0x61f: Return(); Pop(2)

0x620: PushEmpty()
0x621: PushEmpty(object)
0x622: Stack[-1] = Stack[-2]
0x623: Call2 0x5e3

0x624: Pop(1)
0x625: Return(); Pop(0)

