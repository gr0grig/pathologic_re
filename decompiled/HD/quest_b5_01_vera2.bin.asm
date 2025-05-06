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
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x196
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1a0 Vars = (object)
		EVENT_17 Op = 0x1ab Vars = (object)
		EVENT_26 Op = 0x1b5 Vars = (string)
		EVENT_7 Op = 0x1ec Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 0
		EVENT_7 Op = 0x2e3 Vars = (int)
		EVENT_41 Op = 0x31e Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x346 Vars = (object)
		EVENT_22 Op = 0x3c5 Vars = (object, int, float, float)
		EVENT_16 Op = 0x3c7 Vars = (object, string)
		EVENT_41 Op = 0x3c9 Vars = (object)

Events:
EVENT_22 Op = 0x61f Vars = (object, int, float, float)
EVENT_43 Op = 0x627 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x631 Vars = (object, string)
EVENT_41 Op = 0x63e Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x490

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5f9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x5f7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x5fb

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x5fd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x5d3

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
0x41: Call2 0x4d5

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
0x52: Call2 0x5c7

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x5c1

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
0x80: Call2 0x5ff

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x4e7

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
0x9f: Call2 0x5ff

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
0xaf: Call2 0x4f7

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x511

0xb8: Pop(0)
0xb9: Push((int) 19925)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x5ba

0xc0: Pop(2)
0xc1: Push((int) 19761)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x5ba

0xc8: Pop(2)
0xc9: Push((int) 19931)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x5ba

0xd0: Pop(2)
0xd1: Push((int) 20903)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x5ba

0xd8: Pop(2)
0xd9: Push((int) 19760)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0x5c7

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x5c1

0xe5: Pop(2)
0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral"
0xe8: Call2 0x9d

0xe9: Pop(1)
0xea: Push((int) 518668)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 518670)
0xf0: Push((int) 19916)
0xf1: Push((int) 19762)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call2 0x9d

0xf8: Pop(1)
0xf9: Push((int) 519748)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: Push((int) 519749)
0xff: Push((int) -1)
0x100: Push((int) 20903)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 519750)
0x104: Push((int) -1)
0x105: Push((int) 20904)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 19916)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0x9d

0x10f: Pop(1)
0x110: Push((int) 518811)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 518812)
0x116: Push((int) 19918)
0x117: Push((int) 19917)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 518818)
0x11b: Push((int) 19926)
0x11c: Push((int) 19923)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 19926)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x9d

0x126: Pop(1)
0x127: Push((int) 518821)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 518822)
0x12d: Push((int) 19928)
0x12e: Push((int) 19927)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 19928)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral"
0x137: Call2 0x9d

0x138: Pop(1)
0x139: Push((int) 518823)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 518824)
0x13f: Push((int) 19930)
0x140: Push((int) 19929)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 19930)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral"
0x149: Call2 0x9d

0x14a: Pop(1)
0x14b: Push((int) 518825)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 518826)
0x151: Push((int) -1)
0x152: Push((int) 19931)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 518827)
0x156: Push((int) -1)
0x157: Push((int) 19932)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 19918)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0x9d

0x161: Pop(1)
0x162: Push((int) 518813)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 518815)
0x168: Push((int) 19921)
0x169: Push((int) 19920)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 518669)
0x16d: Push((int) -1)
0x16e: Push((int) 19761)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 19921)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral"
0x177: Call2 0x9d

0x178: Pop(1)
0x179: Push((int) 518816)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 518819)
0x17f: Push((int) -1)
0x180: Push((int) 19924)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 518820)
0x184: Push((int) -1)
0x185: Push((int) 19925)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x5ff

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0xb4

0x195: Return(); Pop(0)

0x196: PushEmpty(float, float)
0x197: Stack[-2] = (int) 300
0x198: Stack[-1] = (int) 100
0x199: Call2 0x1c2

0x19a: Pop(2)
0x19b: Push((int) 3)
0x19c: @ Sleep(Stack[-1])
0x19d: Pop(1)
0x19e: GOTO 0x196

0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: PushEmpty()
0x1a2: Call2 0x203

0x1a3: Pop(0)
0x1a4: PushEmpty(int, object)
0x1a5: Stack[-1] = Stack[-3]
0x1a6: Push(-2, 1); TaskCall(0)
0x1a7: Call2 0x0

0x1a8: Pop(-2, 1); TaskReturn
0x1a9: Pop(2)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty()
0x1ad: Call2 0x203

0x1ae: Pop(0)
0x1af: PushEmpty()
0x1b0: Push(-0, 3); TaskCall(3)
0x1b1: Call2 0x267

0x1b2: Pop(-0, 3); TaskReturn
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty()
0x1b6: Push("retreat")
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: PushEmpty()
0x1ba: Call2 0x203

0x1bb: Pop(0)
0x1bc: PushEmpty()
0x1bd: Push(-0, 3); TaskCall(3)
0x1be: Call2 0x267

0x1bf: Pop(-0, 3); TaskReturn
0x1c0: Pop(0)
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty()
0x1c3: PushEmpty(bool)
0x1c4: Call2 0x48b

0x1c5: Pop(0)
0x1c6: Pop(1); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(0)

0x1c9: Push("player")
0x1ca: @ FindActor(Stack[-4], Stack[-1])
0x1cb: Pop(1)
0x1cc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1cd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1cf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d0: Push((int) 10)
0x1d1: Push((float)1.0)
0x1d2: @ SetTimer(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: PushEmpty()
0x1d5: Call2 0x211

0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: Push((int) 10)
0x1da: @ KillTimer(Stack[-1])
0x1db: Pop(1)
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(float, float)
0x1de: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-3] = (bool) 0
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty(float, object)
0x1e3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e4: Call2 0x3d7

0x1e5: Pop(1)
0x1e6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ea: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1eb: Return(); Pop(2)

0x1ec: PushEmpty()
0x1ed: Push((int) 10)
0x1ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x1dd

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f8: Call2 0x506

0x1f9: Pop(1)
0x1fa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1fb: GOTO 0x202

0x1fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fd: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fe: Push("head")
0x1ff: @ UnlookAsync(Stack[-1])
0x200: Pop(1)
0x201: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: Call2 0x262

0x205: Pop(0)
0x206: Push((int) 10)
0x207: @ KillTimer(Stack[-1])
0x208: Pop(1)
0x209: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20b: Push("head")
0x20c: @ UnlookAsync(Stack[-1])
0x20d: Pop(1)
0x20e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x210: Return(); Pop(0)

0x211: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x212: @ WaitForAnimEnd()
0x213: Pop(0)
0x214: PushEmpty(bool)
0x215: Call2 0x48b

0x216: Pop(0)
0x217: Pop(1); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Return(); Pop(14)

0x21a: PushEmpty(int)
0x21b: Call2 0x5a9

0x21c: Stack[-8] = Stack[-1]
0x21d: Pop(1)
0x21e: Stack[-6] = (int) 0
0x21f: PushEmpty(bool)
0x220: Stack[-1] = (bool) 0
0x221: Push((int) 5)
0x222: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x48b

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x22a: Push((int) 3)
0x22b: @ irand(Stack[-6], Stack[-1])
0x22c: Pop(1)
0x22d: Push((int) 0)
0x22e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x230: Push(Stack[-7])
0x231: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x232: @ irand(Stack[-4], Stack[-7])
0x233: Pop(0)
0x234: Push("all")
0x235: PushEmpty(string, int)
0x236: Stack[-1] = Stack[-7]
0x237: Call2 0x5a2

0x238: Pop(1)
0x239: @ PlayAnimation(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: @ WaitForAnimEnd(Stack[-3])
0x23c: Pop(0)
0x23d: Pop(0); Push((bool) Stack[-3] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x25d

0x240: GOTO 0x252

0x241: Push((int) 1)
0x242: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x244: Push((int) 4)
0x245: @ rand(Stack[-3], Stack[-1])
0x246: Pop(1)
0x247: Push((int) 1)
0x248: Pop(1); Push(Stack[-3] + Stack[-1]);
0x249: @ Sleep(Stack[-1], Stack[-2])
0x24a: Pop(1)
0x24b: Pop(0); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x25d

0x24e: GOTO 0x252

0x24f: Push(Stack[-6])
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x25d

0x252: PushEmpty(bool)
0x253: Call2 0x260

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x25d

0x258: @ ResetAAS()
0x259: Pop(0)
0x25a: Push((int) 1)
0x25b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x25c: GOTO 0x21f

0x25d: @ ResetAAS()
0x25e: Pop(0)
0x25f: Return(); Pop(14)

0x260: Stack[-1] = (bool) 1
0x261: Return(); Pop(0)

0x262: @ StopAnimation()
0x263: Pop(0)
0x264: @ StopGroup0()
0x265: Pop(0)
0x266: Return(); Pop(0)

0x267: PushEmpty(object, object)
0x268: @ GetScene(Stack[-1])
0x269: Pop(0)
0x26a: PushEmpty(object)
0x26b: Call2 0x541

0x26c: Pop(0)
0x26d: @@ RemoveStationaryActor(Stack[-1])
0x26e: Pop(1)
0x26f: PushEmpty(object)
0x270: PushEmpty(object)
0x271: Call2 0x3df

0x272: Stack[-2] = Stack[-1]
0x273: Pop(1)
0x274: Call2 0x29a

0x275: Pop(1)
0x276: Push((int) 1)
0x277: @ Sleep(Stack[-1])
0x278: Pop(1)
0x279: GOTO 0x26f

0x27a: Return(); Pop(2)

0x27b: Stack[-1] = 0
0x27c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x27d: @ GetPosition(Stack[-6])
0x27e: Pop(0)
0x27f: @@ GetPosition(Stack[-5])
0x280: Pop(0)
0x281: @ GetDirection(Stack[-4])
0x282: Pop(0)
0x283: PushEmpty(cvector, cvector)
0x284: PushEmpty(cvector, cvector)
0x285: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x286: Call2 0x547

0x287: Pop(1)
0x288: Push((float)0.75)
0x289: Pop(1); Push(Stack[-8] * Stack[-1]);
0x28a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x28b: Call2 0x547

0x28c: Stack[-5] = Stack[-2]
0x28d: Pop(2)
0x28e: Push((int) 32)
0x28f: Push((float)7000.0)
0x290: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: Push((int) 100)
0x293: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x294: Push((int) 0)
0x295: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Stack[-1] = (int) 0
0x298: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x299: Return(); Pop(12)

0x29a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x29b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x29c: PushEmpty(cvector, float)
0x29d: Stack[-1] = (float) 1.74533
0x29e: Call2 0x27c

0x29f: Stack[-7] = Stack[-2]
0x2a0: Pop(2)
0x2a1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2a2: Push((float)2500.0)
0x2a3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2a5: PushEmpty(cvector, float)
0x2a6: Stack[-1] = (float) 2.61799
0x2a7: Call2 0x27c

0x2a8: Stack[-7] = Stack[-2]
0x2a9: Pop(2)
0x2aa: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2ab: Push((float)2500.0)
0x2ac: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2ae: Push("Can't retreat, distance: ")
0x2af: Pop(0); Push(Sqrt(Stack[-5]))
0x2b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b1: @ Trace(Stack[-1])
0x2b2: Pop(1)
0x2b3: Push((float)0.5)
0x2b4: @ Sleep(Stack[-1])
0x2b5: Pop(1)
0x2b6: Return(); Pop(10)

0x2b7: Push(CvectorIndex(Stack[-5], 0))
0x2b8: Push(CvectorIndex(Stack[-6], 2))
0x2b9: @ Rotate(Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: PushEmpty(cvector)
0x2bc: Call2 0x3cb

0x2bd: Pop(0)
0x2be: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2bf: Push((int) 120)
0x2c0: Push((float)0.5)
0x2c1: @ SetTimer(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c4: Push((int) 1)
0x2c5: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x2c6: Pop(1)
0x2c7: Push(Stack[-3])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2c9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: GOTO 0x2e2

0x2cc: GOTO 0x2e0

0x2cd: PushEmpty(cvector, float)
0x2ce: Stack[-1] = (float) 2.61799
0x2cf: Call2 0x27c

0x2d0: Stack[-4] = Stack[-2]
0x2d1: Pop(2)
0x2d2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2d3: Push((float)2500.0)
0x2d4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2d6: PushEmpty(cvector)
0x2d7: Call2 0x3cb

0x2d8: Pop(0)
0x2d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2da: Push((int) 120)
0x2db: Push((float)0.5)
0x2dc: @ SetTimer(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: GOTO 0x2e0

0x2df: GOTO 0x2e2

0x2e0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2e2: Return(); Pop(10)

0x2e3: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2e4: Push((int) 120)
0x2e5: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: Return(); Pop(8)

0x2e8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ea: @ Stop()
0x2eb: Pop(0)
0x2ec: Push((int) 1)
0x2ed: @ KillTimer(Stack[-1])
0x2ee: Pop(1)
0x2ef: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f0: GOTO 0x316

0x2f1: @ GetDirection(Stack[-4])
0x2f2: Pop(0)
0x2f3: Push((float)7000.0)
0x2f4: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2f5: Pop(1)
0x2f6: PushEmpty(cvector, float)
0x2f7: Stack[-1] = (float) 1.74533
0x2f8: Call2 0x27c

0x2f9: Stack[-4] = Stack[-2]
0x2fa: Pop(2)
0x2fb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2fc: PushEmpty(bool)
0x2fd: Stack[-1] = (bool) 0
0x2fe: Push((float)2500.0)
0x2ff: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x301: PushEmpty(bool)
0x302: Stack[-1] = (bool) 1
0x303: Pop(0); Push(Stack[-5] * Stack[-5]);
0x304: Push((float)2.25)
0x305: Pop(2); Push(Stack[-2] * Stack[-1]);
0x306: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: PushEmpty(bool)
0x309: Call2 0x327

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30c: Stack[-1] = (bool) 0
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Stack[-1] = (bool) 1
0x30f: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x310: @ Stop()
0x311: Pop(0)
0x312: PushEmpty(cvector)
0x313: Call2 0x3cb

0x314: Pop(0)
0x315: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x316: Return(); Pop(8)

0x317: @ Stop()
0x318: Pop(0)
0x319: Push((int) 120)
0x31a: @ KillTimer(Stack[-1])
0x31b: Pop(1)
0x31c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x31d: Return(); Pop(0)

0x31e: PushEmpty()
0x31f: PushEmpty()
0x320: Call2 0x317

0x321: Pop(0)
0x322: PushEmpty(object)
0x323: Stack[-1] = Stack[-2]
0x324: Call2 0x63e

0x325: Pop(1)
0x326: Return(); Pop(0)

0x327: PushEmpty(cvector, cvector, cvector, cvector)
0x328: @ GetDirection(Stack[-2])
0x329: Pop(0)
0x32a: PushEmpty(cvector, object)
0x32b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32c: Call2 0x3d0

0x32d: Stack[-3] = Stack[-2]
0x32e: Pop(2)
0x32f: PushEmpty(float, cvector, cvector)
0x330: Stack[-2] = Stack[-5]
0x331: Stack[-1] = Stack[-4]
0x332: Call2 0x55c

0x333: Pop(2)
0x334: Push((float)-0.34202)
0x335: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x336: Return(); Pop(4)

0x337: PushEmpty()
0x338: EventDisable(0)
0x339: PushEmpty(object)
0x33a: Stack[-1] = Stack[-2]
0x33b: Call2 0x350

0x33c: Pop(1)
0x33d: Push((int) 50)
0x33e: Push((int) 40)
0x33f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: EventEnable(0)
0x342: @ Hold()
0x343: Pop(0)
0x344: GOTO 0x342

0x345: Return(); Pop(0)

0x346: PushEmpty(bool, bool)
0x347: @ IsOverrideActive(Stack[-1])
0x348: Pop(0)
0x349: Pop(0); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34b: PushEmpty(object)
0x34c: Stack[-1] = Stack[-4]
0x34d: Call2 0x5ea

0x34e: Pop(1)
0x34f: Return(); Pop(2)

0x350: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x351: Pop(0); Push((bool) Stack[-21] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x353: PushEmpty(string)
0x354: Stack[-1] = "fdie"
0x355: Call2 0x3ab

0x356: Pop(1)
0x357: GOTO 0x3aa

0x358: @@ GetPosition(Stack[-10])
0x359: Pop(0)
0x35a: @ GetPosition(Stack[-9])
0x35b: Pop(0)
0x35c: @ GetDirection(Stack[-8])
0x35d: Pop(0)
0x35e: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x35f: Push(CvectorIndex(Stack[-7], 0))
0x360: Push(CvectorIndex(Stack[-9], 0))
0x361: Pop(2); Push(Stack[-2] * Stack[-1]);
0x362: Push(CvectorIndex(Stack[-8], 2))
0x363: Push(CvectorIndex(Stack[-10], 2))
0x364: Pop(2); Push(Stack[-2] * Stack[-1]);
0x365: Pop(2); Push(Stack[-2] + Stack[-1]);
0x366: Push((int) 0)
0x367: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: Stack[-6] = "fdie"
0x36a: GOTO 0x36c

0x36b: Stack[-6] = "bdie"
0x36c: @ RemoveRTEnvelope()
0x36d: Pop(0)
0x36e: @ SetDeathState()
0x36f: Pop(0)
0x370: @ Stop()
0x371: Pop(0)
0x372: @ StopAsync()
0x373: Pop(0)
0x374: Stack[-5] = Stack[-21]
0x375: Push("GetScriptProperty")
0x376: Push((int) 2)
0x377: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x378: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x379: Push("Owner")
0x37a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x37b: Pop(1)
0x37c: Push(Stack[-4])
0x37d: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37e: Push("Owner")
0x37f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x380: Pop(1)
0x381: Pop(0); Push((bool) Stack[-5] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[-5] = Stack[-21]
0x384: Push("@GetEyesHeight")
0x385: Push((int) 1)
0x386: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x387: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x388: @@ GetEyesHeight(Stack[-2])
0x389: Pop(0)
0x38a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x38b: Push(CvectorIndex(Stack[-1], 1))
0x38c: Stack[-1] = Stack[-3]
0x38d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x38e: Push("head")
0x38f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x390: Pop(1)
0x391: Stack[-3] = (bool) 1
0x392: GOTO 0x394

0x393: Stack[-3] = (bool) 0
0x394: PushEmpty(string)
0x395: Stack[-1] = Stack[-7]
0x396: Call2 0x518

0x397: Pop(1)
0x398: Push("all")
0x399: @ PlayAnimation(Stack[-1], Stack[-7])
0x39a: Pop(1)
0x39b: @ WaitForAnimEnd()
0x39c: Pop(0)
0x39d: Push(Stack[-3])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39f: @ StopAsync()
0x3a0: Pop(0)
0x3a1: Push("head")
0x3a2: @ UnlookAsync(Stack[-1])
0x3a3: Pop(1)
0x3a4: Push("all")
0x3a5: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3a6: Pop(1)
0x3a7: @ RemoveEnvelope()
0x3a8: Pop(0)
0x3a9: Stack[-5] = 0
0x3aa: Return(); Pop(20)

0x3ab: PushEmpty()
0x3ac: @ RemoveRTEnvelope()
0x3ad: Pop(0)
0x3ae: @ SetDeathState()
0x3af: Pop(0)
0x3b0: @ Stop()
0x3b1: Pop(0)
0x3b2: @ StopAsync()
0x3b3: Pop(0)
0x3b4: @ StopSecondaryAnimation()
0x3b5: Pop(0)
0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = Stack[-2]
0x3b8: Call2 0x518

0x3b9: Pop(1)
0x3ba: Push("all")
0x3bb: @ PlayAnimation(Stack[-1], Stack[-2])
0x3bc: Pop(1)
0x3bd: @ WaitForAnimEnd()
0x3be: Pop(0)
0x3bf: Push("all")
0x3c0: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3c1: Pop(1)
0x3c2: @ RemoveEnvelope()
0x3c3: Pop(0)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty(cvector, cvector)
0x3cc: @ GetPosition(Stack[-1])
0x3cd: Pop(0)
0x3ce: Stack[-3] = Stack[-1]
0x3cf: Return(); Pop(2)

0x3d0: PushEmpty(cvector, cvector, cvector, cvector)
0x3d1: @ GetPosition(Stack[-2])
0x3d2: Pop(0)
0x3d3: @@ GetPosition(Stack[-1])
0x3d4: Pop(0)
0x3d5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3d8: @ GetPosition(Stack[-3])
0x3d9: Pop(0)
0x3da: @@ GetPosition(Stack[-2])
0x3db: Pop(0)
0x3dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3de: Return(); Pop(6)

0x3df: PushEmpty(object, object)
0x3e0: Push("player")
0x3e1: @ FindActor(Stack[-2], Stack[-1])
0x3e2: Pop(1)
0x3e3: Stack[-3] = Stack[-1]
0x3e4: Return(); Pop(2)

0x3e5: Stack[-1] = 0
0x3e6: PushEmpty(bool, bool)
0x3e7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3e8: Pop(0)
0x3e9: Stack[-4] = Stack[-1]
0x3ea: Return(); Pop(2)

0x3eb: PushEmpty(bool, bool)
0x3ec: Push("HasProperty")
0x3ed: Push((int) 2)
0x3ee: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3ef: Pop(1); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-5] = (bool) 0
0x3f2: Return(); Pop(2)

0x3f3: @@ HasProperty(Stack[-3], Stack[-1])
0x3f4: Pop(0)
0x3f5: Stack[-5] = Stack[-1]
0x3f6: Return(); Pop(2)

0x3f7: PushEmpty(float, float)
0x3f8: PushEmpty(bool, object, string)
0x3f9: Stack[-2] = Stack[-10]
0x3fa: Stack[-1] = Stack[-9]
0x3fb: Call2 0x3eb

0x3fc: Pop(2)
0x3fd: Pop(1); Push((bool) Stack[-1] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-8] = (bool) 0
0x400: Return(); Pop(2)

0x401: @@ GetProperty(Stack[-6], Stack[-1])
0x402: Pop(0)
0x403: PushEmpty(float, float, float, float)
0x404: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x405: Stack[-2] = Stack[-8]
0x406: Stack[-1] = Stack[-7]
0x407: Call2 0x551

0x408: Pop(3)
0x409: @@ SetProperty(Stack[-7], Stack[-1])
0x40a: Pop(1)
0x40b: Stack[-8] = (bool) 1
0x40c: Return(); Pop(2)

0x40d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x40e: Pop(0); Push((bool) Stack[-15] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: Return(); Pop(14)

0x411: @ IsDead(Stack[-7])
0x412: Pop(0)
0x413: Push(Stack[-7])
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Return(); Pop(14)

0x416: @ GetSecondaryAnimationType(Stack[-6])
0x417: Pop(0)
0x418: Push((int) 0)
0x419: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: Return(); Pop(14)

0x41c: @@ GetPosition(Stack[-5])
0x41d: Pop(0)
0x41e: @ GetPosition(Stack[-4])
0x41f: Pop(0)
0x420: @ GetDirection(Stack[-3])
0x421: Pop(0)
0x422: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x423: Push(CvectorIndex(Stack[-2], 0))
0x424: Push(CvectorIndex(Stack[-4], 0))
0x425: Pop(2); Push(Stack[-2] * Stack[-1]);
0x426: Push(CvectorIndex(Stack[-3], 2))
0x427: Push(CvectorIndex(Stack[-5], 2))
0x428: Pop(2); Push(Stack[-2] * Stack[-1]);
0x429: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42a: Push((int) 0)
0x42b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-1] = "fhit"
0x42e: GOTO 0x430

0x42f: Stack[-1] = "bhit"
0x430: Push("hit_react")
0x431: Push("1")
0x432: Pop(1); Push(Stack[-3] + Stack[-1]);
0x433: Push("2")
0x434: Pop(1); Push(Stack[-4] + Stack[-1]);
0x435: Push((int) -10)
0x436: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(4)
0x438: Return(); Pop(14)

0x439: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x43a: PushEmpty(bool)
0x43b: Stack[-1] = (bool) 0
0x43c: PushEmpty(bool)
0x43d: Stack[-1] = (bool) 0
0x43e: Push(Stack[-23])
0x43f: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x440: Push((int) 4)
0x441: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: Stack[-1] = (bool) 1
0x444: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x445: Push((int) 5)
0x446: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: Stack[-1] = (bool) 1
0x449: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x44a: PushEmpty(cvector, cvector)
0x44b: PushEmpty(cvector, object)
0x44c: Stack[-1] = Stack[-25]
0x44d: Call2 0x3d0

0x44e: Stack[-3] = Stack[-2]
0x44f: Pop(2)
0x450: Call2 0x547

0x451: Stack[-11] = Stack[-2]
0x452: Pop(2)
0x453: @ CreateVectorVector(Stack[-8])
0x454: Pop(0)
0x455: Stack[-7] = (int) 1
0x456: Push("hit")
0x457: Pop(1); Push(Stack[-1] + Stack[-8]);
0x458: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x459: Pop(1)
0x45a: Pop(0); Push((bool) Stack[-6] == 0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: GOTO 0x466

0x45d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x45e: Push((float)0.70711)
0x45f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: @@ add(Stack[-5])
0x462: Pop(0)
0x463: Push((int) 1)
0x464: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x465: GOTO 0x456

0x466: @@ size(Stack[-3])
0x467: Pop(0)
0x468: Push(Stack[-3])
0x469: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x46a: @ irand(Stack[-2], Stack[-3])
0x46b: Pop(0)
0x46c: @@ get(Stack[-1], Stack[-2])
0x46d: Pop(0)
0x46e: PushEmpty(object, int, float, cvector, cvector)
0x46f: Stack[-5] = Stack[-26]
0x470: Stack[-4] = Stack[-25]
0x471: Stack[-3] = Stack[-24]
0x472: Stack[-2] = Stack[-6]
0x473: Stack[-1] = -Stack[-14]; Pop(0);
0x474: Call2 0x47d

0x475: Pop(5)
0x476: Return(); Pop(18)

0x477: Stack[-8] = 0
0x478: PushEmpty(object)
0x479: Stack[-1] = Stack[-22]
0x47a: Call2 0x40d

0x47b: Pop(1)
0x47c: Return(); Pop(18)

0x47d: PushEmpty(object, object, object, object)
0x47e: @ GetScene(Stack[-2])
0x47f: Pop(0)
0x480: Push("scripted")
0x481: Push("blood_dir.xml")
0x482: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x483: Pop(2)
0x484: PushEmpty(object)
0x485: Stack[-1] = Stack[-10]
0x486: Call2 0x40d

0x487: Pop(1)
0x488: Return(); Pop(4)

0x489: Stack[-1] = 0
0x48a: Stack[-2] = 0
0x48b: PushEmpty(bool, bool)
0x48c: @ IsLoaded(Stack[-1])
0x48d: Pop(0)
0x48e: Stack[-3] = Stack[-1]
0x48f: Return(); Pop(2)

0x490: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x491: @@ GetPosition(Stack[-8])
0x492: Pop(0)
0x493: @@ GetEyesHeight(Stack[-9])
0x494: Pop(0)
0x495: Push(CvectorIndex(Stack[-8], 1))
0x496: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x497: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x498: @ GetPosition(Stack[-7])
0x499: Pop(0)
0x49a: @ GetEyesHeight(Stack[-9])
0x49b: Pop(0)
0x49c: Push(CvectorIndex(Stack[-7], 1))
0x49d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x49e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x49f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4a0: Push(CvectorIndex(Stack[-6], 1))
0x4a1: Stack[-1] = (int) 0
0x4a2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4a3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4a4: Pop(1); Push(Sqrt(Stack[-1]))
0x4a5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4a6: Stack[-5] = -Stack[-6]; Pop(0);
0x4a7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4a8: PushEmpty(cvector, cvector)
0x4a9: Push(CVector(0.0, 1.0, 0.0))
0x4aa: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4ab: Call2 0x547

0x4ac: Pop(1)
0x4ad: Push((int) 25)
0x4ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b0: Push(CVector(0.0, 10.0, 0.0))
0x4b1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4b2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4b3: @ IsOverrideActive(Stack[-2])
0x4b4: Pop(0)
0x4b5: Push(Stack[-2])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-21] = (bool) 0
0x4b8: Return(); Pop(18)

0x4b9: @ StopWorld()
0x4ba: Pop(0)
0x4bb: Push((bool) 1)
0x4bc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x4bd: Pop(1)
0x4be: Push(CvectorIndex(Stack[-4], 0))
0x4bf: Push(CvectorIndex(Stack[-5], 2))
0x4c0: @ Rotate(Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: PushEmpty(bool)
0x4c3: Call2 0x5ff

0x4c4: Pop(0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: GOTO 0x4cf

0x4c7: Push("head")
0x4c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4c9: Pop(1)
0x4ca: Push(Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cc: Push("head")
0x4cd: @ LookAsyncCamera(Stack[-1])
0x4ce: Pop(1)
0x4cf: @ CameraWaitForPlayFinish()
0x4d0: Pop(0)
0x4d1: @ ResumeWorld()
0x4d2: Pop(0)
0x4d3: Stack[-21] = (bool) 1
0x4d4: Return(); Pop(18)

0x4d5: PushEmpty(bool, bool)
0x4d6: Push((bool) 1)
0x4d7: @ CameraSwitchToNormal(Stack[-1])
0x4d8: Pop(1)
0x4d9: PushEmpty(bool)
0x4da: Call2 0x5ff

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4e6

0x4de: Push("head")
0x4df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4e0: Pop(1)
0x4e1: Push(Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e3: Push("head")
0x4e4: @ UnlookAsync(Stack[-1])
0x4e5: Pop(1)
0x4e6: Return(); Pop(2)

0x4e7: PushEmpty(bool, float, float, bool, float, float)
0x4e8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4e9: Pop(0)
0x4ea: Push(Stack[-3])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ec: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4ed: Pop(0)
0x4ee: Push((bool) 0)
0x4ef: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(1)
0x4f1: GOTO 0x4f6

0x4f2: Push("Can't find lsh animation : ")
0x4f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f4: @ Trace(Stack[-1])
0x4f5: Pop(1)
0x4f6: Return(); Pop(6)

0x4f7: PushEmpty(bool, float, float, bool, float, float)
0x4f8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4f9: Pop(0)
0x4fa: Push(Stack[-3])
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4fd: Pop(0)
0x4fe: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4ff: Pop(0)
0x500: GOTO 0x505

0x501: Push("Can't find lsh animation : ")
0x502: Pop(1); Push(Stack[-1] + Stack[-9]);
0x503: @ Trace(Stack[-1])
0x504: Pop(1)
0x505: Return(); Pop(6)

0x506: PushEmpty(float, cvector, float, cvector)
0x507: @@ GetEyesHeight(Stack[-2])
0x508: Pop(0)
0x509: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x50a: Push(CvectorIndex(Stack[-1], 1))
0x50b: Stack[-1] = Stack[-3]
0x50c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x50d: Push("head")
0x50e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x50f: Pop(1)
0x510: Return(); Pop(4)

0x511: PushEmpty(bool)
0x512: Call2 0x5ff

0x513: Pop(0)
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: @ lshStopSpeech()
0x516: Pop(0)
0x517: Return(); Pop(0)

0x518: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x519: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x51a: Pop(0)
0x51b: Pop(0); Push((bool) Stack[-8] == 0)
0x51c: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x51d: Stack[-7] = (int) 0
0x51e: Push((int) 1)
0x51f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x520: Pop(1); Push(Stack[-18] + Stack[-1]);
0x521: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x522: Pop(1)
0x523: Pop(0); Push((bool) Stack[-6] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: GOTO 0x529

0x526: Push((int) 1)
0x527: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x528: GOTO 0x51e

0x529: Pop(0); Push((bool) Stack[-7] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Return(); Pop(16)

0x52c: @ irand(Stack[-5], Stack[-7])
0x52d: Pop(0)
0x52e: Push((int) 1)
0x52f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x530: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x531: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x532: Pop(0)
0x533: Push(Stack[-4])
0x534: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x535: @ GetEyesHeight(Stack[-3])
0x536: Pop(0)
0x537: @ GetDirection(Stack[-2])
0x538: Pop(0)
0x539: Push((int) 50)
0x53a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x53b: Push(CvectorIndex(Stack[-1], 1))
0x53c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x53d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x53e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x53f: Pop(0)
0x540: Return(); Pop(16)

0x541: PushEmpty(object, object)
0x542: @ self(Stack[-1])
0x543: Pop(0)
0x544: Stack[-3] = Stack[-1]
0x545: Return(); Pop(2)

0x546: Stack[-1] = 0
0x547: PushEmpty(float, float)
0x548: Pop(0); Push(Stack[-3] | Stack[-3]);
0x549: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x54a: Push((float)0.0)
0x54b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x54e: Return(); Pop(2)

0x54f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x550: Return(); Pop(2)

0x551: PushEmpty()
0x552: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-4] = Stack[-2]
0x555: Return(); Pop(0)

0x556: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-4] = Stack[-1]
0x559: Return(); Pop(0)

0x55a: Stack[-4] = Stack[-3]
0x55b: Return(); Pop(0)

0x55c: PushEmpty()
0x55d: Pop(0); Push(Stack[-2] | Stack[-1]);
0x55e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x55f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x560: Pop(2); Push(Stack[-2] * Stack[-1]);
0x561: Pop(1); Push(Sqrt(Stack[-1]))
0x562: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x563: Return(); Pop(0)

0x564: PushEmpty(int, int)
0x565: @ GetVariable(Stack[-3], Stack[-1])
0x566: Pop(0)
0x567: Stack[-4] = Stack[-1]
0x568: Return(); Pop(2)

0x569: PushEmpty()
0x56a: Pop(0); Push((bool) Stack[-2] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: Stack[-3] = (bool) 0
0x56d: Return(); Pop(0)

0x56e: Push((int) 0)
0x56f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x571: Push((int) 8)
0x572: @ SendWorldWndMessage(Stack[-1])
0x573: Pop(1)
0x574: GOTO 0x57e

0x575: Push((int) 0)
0x576: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x578: Push((int) 9)
0x579: @ SendWorldWndMessage(Stack[-1])
0x57a: Pop(1)
0x57b: GOTO 0x57e

0x57c: Stack[-3] = (bool) 0
0x57d: Return(); Pop(0)

0x57e: PushEmpty(float)
0x57f: Stack[-1] = Stack[-2]
0x580: Call2 0x58c

0x581: Pop(1)
0x582: PushEmpty(bool, object, string, float, float, float)
0x583: Stack[-5] = Stack[-8]
0x584: Stack[-4] = "reputation"
0x585: Stack[-3] = Stack[-7]
0x586: Stack[-2] = (int) 0
0x587: Stack[-1] = (int) 1
0x588: Call2 0x3f7

0x589: Pop(6)
0x58a: Stack[-3] = (bool) 1
0x58b: Return(); Pop(0)

0x58c: PushEmpty(object, object)
0x58d: @ CreateFloatVector(Stack[-1])
0x58e: Pop(0)
0x58f: @@ add(Stack[-3])
0x590: Pop(0)
0x591: Push((int) 16)
0x592: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x593: Pop(1)
0x594: Return(); Pop(2)

0x595: Stack[-1] = 0
0x596: PushEmpty(object, object)
0x597: @ FindActor(Stack[-1], Stack[-4])
0x598: Pop(0)
0x599: Pop(0); Push((bool) Stack[-1] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59b: Stack[-5] = (bool) 0
0x59c: Return(); Pop(2)

0x59d: @ Trigger(Stack[-1], Stack[-3])
0x59e: Pop(0)
0x59f: Stack[-5] = (bool) 1
0x5a0: Return(); Pop(2)

0x5a1: Stack[-1] = 0
0x5a2: PushEmpty(string, string)
0x5a3: Stack[-1] = "idle"
0x5a4: Push(Stack[-3])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5a7: Stack[-4] = Stack[-1]
0x5a8: Return(); Pop(2)

0x5a9: PushEmpty(int, bool, int, bool)
0x5aa: Stack[-2] = (int) 0
0x5ab: Push("all")
0x5ac: PushEmpty(string, int)
0x5ad: Stack[-1] = Stack[-5]
0x5ae: Call2 0x5a2

0x5af: Pop(1)
0x5b0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(2)
0x5b2: Pop(0); Push((bool) Stack[-1] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: GOTO 0x5b8

0x5b5: Push((int) 1)
0x5b6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5b7: GOTO 0x5ab

0x5b8: Stack[-5] = Stack[-2]
0x5b9: Return(); Pop(4)

0x5ba: PushEmpty()
0x5bb: PushEmpty(bool, string, string)
0x5bc: Stack[-2] = "quest_b5_01"
0x5bd: Stack[-1] = "vera_retreat"
0x5be: Call2 0x596

0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: PushEmpty()
0x5c2: Push("oob5Vera2_1")
0x5c3: Push((int) 1)
0x5c4: @ SetVariable(Stack[-2], Stack[-1])
0x5c5: Pop(2)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: PushEmpty(int, string)
0x5c9: Stack[-1] = "oob5Vera2_1"
0x5ca: Call2 0x564

0x5cb: Pop(1)
0x5cc: Push((int) 0)
0x5cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5cf: Stack[-2] = (bool) 1
0x5d0: Return(); Pop(0)

0x5d1: Stack[-2] = (bool) 0
0x5d2: Return(); Pop(0)

0x5d3: PushEmpty(int, int)
0x5d4: Push("branch")
0x5d5: @ GetVariable(Stack[-1], Stack[-2])
0x5d6: Pop(1)
0x5d7: Push((int) 0)
0x5d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5da: Stack[-3] = (int) 1
0x5db: Return(); Pop(2)

0x5dc: GOTO 0x5e2

0x5dd: Push((int) 1)
0x5de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-3] = (int) 2
0x5e1: Return(); Pop(2)

0x5e2: Stack[-3] = (int) 3
0x5e3: Return(); Pop(2)

0x5e4: PushEmpty(int, int)
0x5e5: Push("branch")
0x5e6: @ GetVariable(Stack[-1], Stack[-2])
0x5e7: Pop(1)
0x5e8: Stack[-3] = Stack[-1]
0x5e9: Return(); Pop(2)

0x5ea: PushEmpty()
0x5eb: PushEmpty(int)
0x5ec: Call2 0x5e4

0x5ed: Pop(0)
0x5ee: Push((int) 1)
0x5ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f1: @ WorkWithCorpse(Stack[-1])
0x5f2: Pop(0)
0x5f3: GOTO 0x5f6

0x5f4: @ Barter(Stack[-1])
0x5f5: Pop(0)
0x5f6: Return(); Pop(0)

0x5f7: Stack[-1] = (int) 515593
0x5f8: Return(); Pop(0)

0x5f9: Stack[-1] = (int) 512582
0x5fa: Return(); Pop(0)

0x5fb: Stack[-1] = "ui/NPC_Citizen1.png"
0x5fc: Return(); Pop(0)

0x5fd: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x5fe: Return(); Pop(0)

0x5ff: Stack[-1] = (bool) 0
0x600: Return(); Pop(0)

0x601: PushEmpty(object, object)
0x602: @ GetScene(Stack[-1])
0x603: Pop(0)
0x604: PushEmpty(object)
0x605: Call2 0x541

0x606: Pop(0)
0x607: @@ RemoveStationaryActor(Stack[-1])
0x608: Pop(1)
0x609: PushEmpty(bool, object)
0x60a: Stack[-1] = Stack[-5]
0x60b: Call2 0x3e6

0x60c: Pop(1)
0x60d: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60e: PushEmpty(bool, object, float)
0x60f: Stack[-2] = Stack[-6]
0x610: Stack[-1] = (float) -0.1
0x611: Call2 0x569

0x612: Pop(3)
0x613: Push("b5q01VeraDead")
0x614: Push((bool) 1)
0x615: @ SetVariable(Stack[-2], Stack[-1])
0x616: Pop(2)
0x617: PushEmpty(object)
0x618: Stack[-1] = Stack[-4]
0x619: Push(-1, 0); TaskCall(4)
0x61a: Call2 0x337

0x61b: Pop(-1, 0); TaskReturn
0x61c: Pop(1)
0x61d: Return(); Pop(2)

0x61e: Stack[-1] = 0
0x61f: PushEmpty()
0x620: PushEmpty(object, int, float)
0x621: Stack[-3] = Stack[-7]
0x622: Stack[-2] = Stack[-6]
0x623: Stack[-1] = Stack[-5]
0x624: Call2 0x439

0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: PushEmpty(object, int, float, cvector, cvector)
0x629: Stack[-5] = Stack[-11]
0x62a: Stack[-4] = Stack[-10]
0x62b: Stack[-3] = Stack[-9]
0x62c: Stack[-2] = Stack[-7]
0x62d: Stack[-1] = Stack[-6]
0x62e: Call2 0x47d

0x62f: Pop(5)
0x630: Return(); Pop(0)

0x631: PushEmpty(float, float)
0x632: Push("health")
0x633: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x635: Push("health")
0x636: @ GetProperty(Stack[-1], Stack[-2])
0x637: Pop(1)
0x638: Push((int) 0)
0x639: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: @ SignalDeath(Stack[-4])
0x63c: Pop(0)
0x63d: Return(); Pop(2)

0x63e: PushEmpty()
0x63f: PushEmpty(object)
0x640: Stack[-1] = Stack[-2]
0x641: Call2 0x601

0x642: Pop(1)
0x643: Return(); Pop(0)

