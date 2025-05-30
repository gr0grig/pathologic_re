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
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
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
	branch
	GenerateMoney: iMin > iMax
	Money
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
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
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	FindShiftedPathTo (2 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
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
	GetGameTime (1 args)
	GetVariable (2 args)
	AddItem (4 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	RemoveActor (1 args)

RunOp = 0x25a
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0xd3 Vars = (object)
		EVENT_6 Op = 0xe1 Vars = ()
		EVENT_22 Op = 0x15a Vars = (object, int, float, float)
		EVENT_16 Op = 0x15c Vars = (object, string)
		EVENT_41 Op = 0x15e Vars = (object)
	GTASK_3  Params = 0
		EVENT_0 Op = 0x160 Vars = (object)
		EVENT_17 Op = 0x174 Vars = (object)
		EVENT_30 Op = 0x18c Vars = (object, object, bool)
		EVENT_40 Op = 0x1a8 Vars = (object)
		EVENT_42 Op = 0x1bc Vars = (object, string)
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1ef Vars = ()
		EVENT_1 Op = 0x1f6 Vars = (object)
	GTASK_4 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x271 Vars = (object)
		EVENT_17 Op = 0x285 Vars = (object)
		EVENT_30 Op = 0x29d Vars = (object, object, bool)
		EVENT_40 Op = 0x2b9 Vars = (object)
		EVENT_42 Op = 0x2cd Vars = (object, string)
		EVENT_26 Op = 0x2f2 Vars = (string)
		EVENT_1 Op = 0x300 Vars = (object)
		EVENT_6 Op = 0x30e Vars = ()
		EVENT_10 Op = 0x355 Vars = (object)
		EVENT_28 Op = 0x359 Vars = ()
		EVENT_41 Op = 0x363 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x390 Vars = ()
		EVENT_7 Op = 0x3fe Vars = (int)
		EVENT_41 Op = 0x439 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4b9 Vars = (int)
		EVENT_41 Op = 0x4f4 Vars = (object)

Events:
EVENT_16 Op = 0x79f Vars = (object, string)
EVENT_41 Op = 0x7ac Vars = (object)
EVENT_22 Op = 0x7b2 Vars = (object, int, float, float)
EVENT_43 Op = 0x7ba Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8a9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8a7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8ab

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8ad

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6b3

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
0x41: Call2 0x632

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 518110)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 518111)
0x5a: Push((int) -1)
0x5b: Push((int) 19230)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 534585)
0x5f: Push((int) -1)
0x60: Push((int) 36223)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x8af

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x643

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x8af

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x653

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x662

0x9f: Pop(0)
0xa0: Push((int) 19229)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 518110)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 518111)
0xad: Push((int) -1)
0xae: Push((int) 19230)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 534585)
0xb2: Push((int) -1)
0xb3: Push((int) 36223)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x8af

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: EventDisable(0)
0xc6: PushEmpty(object)
0xc7: Stack[-1] = Stack[-2]
0xc8: Call2 0xe5

0xc9: Pop(1)
0xca: PushEmpty(object)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x8c9

0xcd: Pop(1)
0xce: EventEnable(0)
0xcf: @ Hold()
0xd0: Pop(0)
0xd1: GOTO 0xcf

0xd2: Return(); Pop(0)

0xd3: PushEmpty(int, int)
0xd4: PushEmpty(int, object)
0xd5: Stack[-1] = Stack[-5]
0xd6: Call2 0x88a

0xd7: Stack[-3] = Stack[-2]
0xd8: Pop(2)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-4]
0xde: Call2 0x88d

0xdf: Pop(1)
0xe0: Return(); Pop(2)

0xe1: PushEmpty()
0xe2: Call2 0x8c1

0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xe6: Pop(0); Push((bool) Stack[-21] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "fdie"
0xea: Call2 0x140

0xeb: Pop(1)
0xec: GOTO 0x13f

0xed: @@ GetPosition(Stack[-10])
0xee: Pop(0)
0xef: @ GetPosition(Stack[-9])
0xf0: Pop(0)
0xf1: @ GetDirection(Stack[-8])
0xf2: Pop(0)
0xf3: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xf4: Push(CvectorIndex(Stack[-7], 0))
0xf5: Push(CvectorIndex(Stack[-9], 0))
0xf6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7: Push(CvectorIndex(Stack[-8], 2))
0xf8: Push(CvectorIndex(Stack[-10], 2))
0xf9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfb: Push((int) 0)
0xfc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfe: Stack[-6] = "fdie"
0xff: GOTO 0x101

0x100: Stack[-6] = "bdie"
0x101: @ RemoveRTEnvelope()
0x102: Pop(0)
0x103: @ SetDeathState()
0x104: Pop(0)
0x105: @ Stop()
0x106: Pop(0)
0x107: @ StopAsync()
0x108: Pop(0)
0x109: Stack[-5] = Stack[-21]
0x10a: Push("GetScriptProperty")
0x10b: Push((int) 2)
0x10c: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x10d: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10e: Push("Owner")
0x10f: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x110: Pop(1)
0x111: Push(Stack[-4])
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: Push("Owner")
0x114: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x115: Pop(1)
0x116: Pop(0); Push((bool) Stack[-5] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-5] = Stack[-21]
0x119: Push("@GetEyesHeight")
0x11a: Push((int) 1)
0x11b: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x11c: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11d: @@ GetEyesHeight(Stack[-2])
0x11e: Pop(0)
0x11f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x120: Push(CvectorIndex(Stack[-1], 1))
0x121: Stack[-1] = Stack[-3]
0x122: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x123: Push("head")
0x124: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x125: Pop(1)
0x126: Stack[-3] = (bool) 1
0x127: GOTO 0x129

0x128: Stack[-3] = (bool) 0
0x129: PushEmpty(string)
0x12a: Stack[-1] = Stack[-7]
0x12b: Call2 0x669

0x12c: Pop(1)
0x12d: Push("all")
0x12e: @ PlayAnimation(Stack[-1], Stack[-7])
0x12f: Pop(1)
0x130: @ WaitForAnimEnd()
0x131: Pop(0)
0x132: Push(Stack[-3])
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: @ StopAsync()
0x135: Pop(0)
0x136: Push("head")
0x137: @ UnlookAsync(Stack[-1])
0x138: Pop(1)
0x139: Push("all")
0x13a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x13b: Pop(1)
0x13c: @ RemoveEnvelope()
0x13d: Pop(0)
0x13e: Stack[-5] = 0
0x13f: Return(); Pop(20)

0x140: PushEmpty()
0x141: @ RemoveRTEnvelope()
0x142: Pop(0)
0x143: @ SetDeathState()
0x144: Pop(0)
0x145: @ Stop()
0x146: Pop(0)
0x147: @ StopAsync()
0x148: Pop(0)
0x149: @ StopSecondaryAnimation()
0x14a: Pop(0)
0x14b: PushEmpty(string)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call2 0x669

0x14e: Pop(1)
0x14f: Push("all")
0x150: @ PlayAnimation(Stack[-1], Stack[-2])
0x151: Pop(1)
0x152: @ WaitForAnimEnd()
0x153: Pop(0)
0x154: Push("all")
0x155: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x156: Pop(1)
0x157: @ RemoveEnvelope()
0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: Return(); Pop(0)

0x15c: PushEmpty()
0x15d: Return(); Pop(0)

0x15e: PushEmpty()
0x15f: Return(); Pop(0)

0x160: PushEmpty(int, int)
0x161: PushEmpty(int, object)
0x162: Stack[-1] = Stack[-5]
0x163: Call2 0x88a

0x164: Stack[-3] = Stack[-2]
0x165: Pop(2)
0x166: Push((int) 0)
0x167: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x169: Push((int) 1)
0x16a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x255

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-4]
0x171: Call2 0x88d

0x172: Pop(1)
0x173: Return(); Pop(2)

0x174: PushEmpty(int, int)
0x175: PushEmpty(object)
0x176: Stack[-1] = Stack[-4]
0x177: Call2 0x81a

0x178: Pop(1)
0x179: PushEmpty(int, object)
0x17a: Stack[-1] = Stack[-5]
0x17b: Call2 0x85c

0x17c: Stack[-3] = Stack[-2]
0x17d: Pop(2)
0x17e: Push((int) 0)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x181: Push((int) 1)
0x182: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: PushEmpty()
0x185: Call2 0x255

0x186: Pop(0)
0x187: PushEmpty(object)
0x188: Stack[-1] = Stack[-4]
0x189: Call2 0x866

0x18a: Pop(1)
0x18b: Return(); Pop(2)

0x18c: PushEmpty(int, int)
0x18d: PushEmpty(bool, object, object, bool)
0x18e: Stack[-3] = Stack[-9]
0x18f: Stack[-2] = Stack[-8]
0x190: Stack[-1] = Stack[-7]
0x191: Call2 0x8be

0x192: Pop(3)
0x193: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x194: PushEmpty(int, object, bool)
0x195: Stack[-2] = Stack[-8]
0x196: Stack[-1] = Stack[-6]
0x197: Call2 0x86e

0x198: Stack[-4] = Stack[-3]
0x199: Pop(3)
0x19a: Push((int) 0)
0x19b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19d: Push((int) 1)
0x19e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: PushEmpty()
0x1a1: Call2 0x255

0x1a2: Pop(0)
0x1a3: PushEmpty(object)
0x1a4: Stack[-1] = Stack[-6]
0x1a5: Call2 0x878

0x1a6: Pop(1)
0x1a7: Return(); Pop(2)

0x1a8: PushEmpty(int, int)
0x1a9: PushEmpty(int, object)
0x1aa: Stack[-1] = Stack[-5]
0x1ab: Call2 0x880

0x1ac: Stack[-3] = Stack[-2]
0x1ad: Pop(2)
0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b1: Push((int) 1)
0x1b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x255

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[-4]
0x1b9: Call2 0x883

0x1ba: Pop(1)
0x1bb: Return(); Pop(2)

0x1bc: PushEmpty(int, int)
0x1bd: PushEmpty(bool, object, string)
0x1be: Stack[-2] = Stack[-7]
0x1bf: Stack[-1] = Stack[-6]
0x1c0: Call2 0x7c4

0x1c1: Pop(2)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x255

0x1c5: Pop(0)
0x1c6: PushEmpty(object, string)
0x1c7: Stack[-2] = Stack[-6]
0x1c8: Stack[-1] = Stack[-5]
0x1c9: Call2 0x7e4

0x1ca: Pop(2)
0x1cb: GOTO 0x1e0

0x1cc: PushEmpty(int, string, object)
0x1cd: Stack[-2] = Stack[-6]
0x1ce: Stack[-1] = Stack[-7]
0x1cf: Call2 0x885

0x1d0: Stack[-4] = Stack[-3]
0x1d1: Pop(3)
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d5: Push((int) 1)
0x1d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x255

0x1da: Pop(0)
0x1db: PushEmpty(string, object)
0x1dc: Stack[-2] = Stack[-5]
0x1dd: Stack[-1] = Stack[-6]
0x1de: Call2 0x888

0x1df: Pop(2)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty()
0x1e2: PushEmpty(bool, string)
0x1e3: Stack[-1] = Stack[-3]
0x1e4: Call2 0x827

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0x255

0x1e9: Pop(0)
0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = Stack[-2]
0x1ec: Call2 0x837

0x1ed: Pop(1)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Call2 0x255

0x1f1: Pop(0)
0x1f2: PushEmpty()
0x1f3: Call2 0x8c1

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[-3]
0x1f9: Call2 0x7fd

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x255

0x1fe: Pop(0)
0x1ff: PushEmpty(object)
0x200: Stack[-1] = Stack[-2]
0x201: Call2 0x814

0x202: Pop(1)
0x203: Return(); Pop(0)

0x204: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x205: @ WaitForAnimEnd()
0x206: Pop(0)
0x207: PushEmpty(bool)
0x208: Call2 0x5e9

0x209: Pop(0)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Return(); Pop(14)

0x20d: PushEmpty(int)
0x20e: Call2 0x84b

0x20f: Stack[-8] = Stack[-1]
0x210: Pop(1)
0x211: Stack[-6] = (int) 0
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: Push((int) 5)
0x215: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: PushEmpty(bool)
0x218: Call2 0x5e9

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Stack[-1] = (bool) 1
0x21c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x21d: Push((int) 3)
0x21e: @ irand(Stack[-6], Stack[-1])
0x21f: Pop(1)
0x220: Push((int) 0)
0x221: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x223: Push(Stack[-7])
0x224: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x225: @ irand(Stack[-4], Stack[-7])
0x226: Pop(0)
0x227: Push("all")
0x228: PushEmpty(string, int)
0x229: Stack[-1] = Stack[-7]
0x22a: Call2 0x844

0x22b: Pop(1)
0x22c: @ PlayAnimation(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: @ WaitForAnimEnd(Stack[-3])
0x22f: Pop(0)
0x230: Pop(0); Push((bool) Stack[-3] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x250

0x233: GOTO 0x245

0x234: Push((int) 1)
0x235: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x237: Push((int) 4)
0x238: @ rand(Stack[-3], Stack[-1])
0x239: Pop(1)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23c: @ Sleep(Stack[-1], Stack[-2])
0x23d: Pop(1)
0x23e: Pop(0); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x250

0x241: GOTO 0x245

0x242: Push(Stack[-6])
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x250

0x245: PushEmpty(bool)
0x246: Call2 0x253

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x250

0x24b: @ ResetAAS()
0x24c: Pop(0)
0x24d: Push((int) 1)
0x24e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24f: GOTO 0x212

0x250: @ ResetAAS()
0x251: Pop(0)
0x252: Return(); Pop(14)

0x253: Stack[-1] = (bool) 1
0x254: Return(); Pop(0)

0x255: @ StopAnimation()
0x256: Pop(0)
0x257: @ StopGroup0()
0x258: Pop(0)
0x259: Return(); Pop(0)

0x25a: Push((bool) 1)
0x25b: @ SensePlayerOnly(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty()
0x25e: Call2 0x8b1

0x25f: Pop(0)
0x260: PushEmpty()
0x261: Call2 0x268

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x315

0x265: Pop(0)
0x266: GOTO 0x263

0x267: Return(); Pop(0)

0x268: PushEmpty(bool)
0x269: Call2 0x5e9

0x26a: Pop(0)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26d: PushEmpty()
0x26e: Call2 0x8c1

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty(int, int)
0x272: PushEmpty(int, object)
0x273: Stack[-1] = Stack[-5]
0x274: Call2 0x88a

0x275: Stack[-3] = Stack[-2]
0x276: Pop(2)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27a: Push((int) 1)
0x27b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27d: PushEmpty()
0x27e: Call2 0x35c

0x27f: Pop(0)
0x280: PushEmpty(object)
0x281: Stack[-1] = Stack[-4]
0x282: Call2 0x88d

0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(int, int)
0x286: PushEmpty(object)
0x287: Stack[-1] = Stack[-4]
0x288: Call2 0x81a

0x289: Pop(1)
0x28a: PushEmpty(int, object)
0x28b: Stack[-1] = Stack[-5]
0x28c: Call2 0x85c

0x28d: Stack[-3] = Stack[-2]
0x28e: Pop(2)
0x28f: Push((int) 0)
0x290: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x292: Push((int) 1)
0x293: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x295: PushEmpty()
0x296: Call2 0x35c

0x297: Pop(0)
0x298: PushEmpty(object)
0x299: Stack[-1] = Stack[-4]
0x29a: Call2 0x866

0x29b: Pop(1)
0x29c: Return(); Pop(2)

0x29d: PushEmpty(int, int)
0x29e: PushEmpty(bool, object, object, bool)
0x29f: Stack[-3] = Stack[-9]
0x2a0: Stack[-2] = Stack[-8]
0x2a1: Stack[-1] = Stack[-7]
0x2a2: Call2 0x8be

0x2a3: Pop(3)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a5: PushEmpty(int, object, bool)
0x2a6: Stack[-2] = Stack[-8]
0x2a7: Stack[-1] = Stack[-6]
0x2a8: Call2 0x86e

0x2a9: Stack[-4] = Stack[-3]
0x2aa: Pop(3)
0x2ab: Push((int) 0)
0x2ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ae: Push((int) 1)
0x2af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b1: PushEmpty()
0x2b2: Call2 0x35c

0x2b3: Pop(0)
0x2b4: PushEmpty(object)
0x2b5: Stack[-1] = Stack[-6]
0x2b6: Call2 0x878

0x2b7: Pop(1)
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(int, int)
0x2ba: PushEmpty(int, object)
0x2bb: Stack[-1] = Stack[-5]
0x2bc: Call2 0x880

0x2bd: Stack[-3] = Stack[-2]
0x2be: Pop(2)
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c2: Push((int) 1)
0x2c3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x35c

0x2c7: Pop(0)
0x2c8: PushEmpty(object)
0x2c9: Stack[-1] = Stack[-4]
0x2ca: Call2 0x883

0x2cb: Pop(1)
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int)
0x2ce: PushEmpty(bool, object, string)
0x2cf: Stack[-2] = Stack[-7]
0x2d0: Stack[-1] = Stack[-6]
0x2d1: Call2 0x7c4

0x2d2: Pop(2)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d4: PushEmpty()
0x2d5: Call2 0x35c

0x2d6: Pop(0)
0x2d7: PushEmpty(object, string)
0x2d8: Stack[-2] = Stack[-6]
0x2d9: Stack[-1] = Stack[-5]
0x2da: Call2 0x7e4

0x2db: Pop(2)
0x2dc: GOTO 0x2f1

0x2dd: PushEmpty(int, string, object)
0x2de: Stack[-2] = Stack[-6]
0x2df: Stack[-1] = Stack[-7]
0x2e0: Call2 0x885

0x2e1: Stack[-4] = Stack[-3]
0x2e2: Pop(3)
0x2e3: Push((int) 0)
0x2e4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e6: Push((int) 1)
0x2e7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e9: PushEmpty()
0x2ea: Call2 0x35c

0x2eb: Pop(0)
0x2ec: PushEmpty(string, object)
0x2ed: Stack[-2] = Stack[-5]
0x2ee: Stack[-1] = Stack[-6]
0x2ef: Call2 0x888

0x2f0: Pop(2)
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty()
0x2f3: PushEmpty(bool, string)
0x2f4: Stack[-1] = Stack[-3]
0x2f5: Call2 0x827

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f8: PushEmpty()
0x2f9: Call2 0x35c

0x2fa: Pop(0)
0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = Stack[-2]
0x2fd: Call2 0x837

0x2fe: Pop(1)
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: PushEmpty(bool, object)
0x302: Stack[-1] = Stack[-3]
0x303: Call2 0x7fd

0x304: Pop(1)
0x305: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x35c

0x308: Pop(0)
0x309: PushEmpty(object)
0x30a: Stack[-1] = Stack[-2]
0x30b: Call2 0x814

0x30c: Pop(1)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: Call2 0x35c

0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x8c1

0x313: Pop(0)
0x314: Return(); Pop(0)

0x315: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x316: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x317: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x318: Push((float)0.5)
0x319: @ rand(Stack[-7], Stack[-1])
0x31a: Pop(1)
0x31b: @ Sleep(Stack[-6])
0x31c: Pop(0)
0x31d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x31f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: @ GetPosition(Stack[-4])
0x322: Pop(0)
0x323: PushEmpty(float)
0x324: Call2 0x350

0x325: Pop(0)
0x326: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x327: Pop(1)
0x328: Push(Stack[-3])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x32f

0x32b: Push((int) 1)
0x32c: @ Sleep(Stack[-1])
0x32d: Pop(1)
0x32e: GOTO 0x321

0x32f: GOTO 0x331

0x330: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x331: PushEmpty(object, cvector)
0x332: Stack[-1] = Stack[-7]
0x333: Call2 0x36e

0x334: Stack[-4] = Stack[-2]
0x335: Pop(2)
0x336: Pop(0); Push(( Stack[-2] != 0 )
0x337: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x338: @ RotatePath(Stack[-2], Stack[-1])
0x339: Pop(0)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33c: PushEmpty(bool)
0x33d: Call2 0x36c

0x33e: Pop(0)
0x33f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x340: Pop(1)
0x341: Stack[-2] = 0
0x342: Push(Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: PushEmpty()
0x345: Push(-0, 0); TaskCall(3)
0x346: Call2 0x204

0x347: Pop(-0, 0); TaskReturn
0x348: Pop(0)
0x349: GOTO 0x34d

0x34a: Push((int) 1)
0x34b: @ Sleep(Stack[-1])
0x34c: Pop(1)
0x34d: Stack[-2] = 0
0x34e: GOTO 0x31d

0x34f: Return(); Pop(12)

0x350: PushEmpty(float, float)
0x351: @ GetCameraFarDistance(Stack[-1])
0x352: Pop(0)
0x353: Stack[-3] = Stack[-1]
0x354: Return(); Pop(2)

0x355: PushEmpty()
0x356: @ RequestClearPath(Stack[-1])
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: @ Stop()
0x35a: Pop(0)
0x35b: Return(); Pop(0)

0x35c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x35d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x35e: @ Stop()
0x35f: Pop(0)
0x360: @ StopGroup0()
0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: PushEmpty()
0x365: Call2 0x35c

0x366: Pop(0)
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[-2]
0x369: Call2 0x7ac

0x36a: Pop(1)
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (bool) 0
0x36d: Return(); Pop(0)

0x36e: PushEmpty(object, object)
0x36f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x370: Pop(0)
0x371: Stack[-4] = Stack[-1]
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty()
0x375: @ Face(Stack[-1])
0x376: Pop(0)
0x377: Push("all")
0x378: Push("attack_on")
0x379: @ PlayAnimation(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: @ WaitForAnimEnd()
0x37c: Pop(0)
0x37d: Push("all")
0x37e: Push("attack_stay")
0x37f: @ PlayAnimation(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: @ WaitForAnimEnd()
0x382: Pop(0)
0x383: Push("all")
0x384: Push("attack_off")
0x385: @ PlayAnimation(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: @ WaitForAnimEnd()
0x388: Pop(0)
0x389: @ StopAsync()
0x38a: Pop(0)
0x38b: PushEmpty(object)
0x38c: Stack[-1] = Stack[-2]
0x38d: Call2 0x3b5

0x38e: Pop(1)
0x38f: Return(); Pop(0)

0x390: PushEmpty()
0x391: Call2 0x432

0x392: Pop(0)
0x393: PushEmpty()
0x394: Call2 0x8c1

0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x398: @ GetPosition(Stack[-6])
0x399: Pop(0)
0x39a: @@ GetPosition(Stack[-5])
0x39b: Pop(0)
0x39c: @ GetDirection(Stack[-4])
0x39d: Pop(0)
0x39e: PushEmpty(cvector, cvector)
0x39f: PushEmpty(cvector, cvector)
0x3a0: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3a1: Call2 0x698

0x3a2: Pop(1)
0x3a3: Push((float)0.75)
0x3a4: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3a5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3a6: Call2 0x698

0x3a7: Stack[-5] = Stack[-2]
0x3a8: Pop(2)
0x3a9: Push((int) 32)
0x3aa: Push((float)7000.0)
0x3ab: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Push((int) 100)
0x3ae: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3af: Push((int) 0)
0x3b0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (int) 0
0x3b3: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3b4: Return(); Pop(12)

0x3b5: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3b7: PushEmpty(cvector, float)
0x3b8: Stack[-1] = (float) 1.74533
0x3b9: Call2 0x397

0x3ba: Stack[-7] = Stack[-2]
0x3bb: Pop(2)
0x3bc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3bd: Push((float)2500.0)
0x3be: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c0: PushEmpty(cvector, float)
0x3c1: Stack[-1] = (float) 2.61799
0x3c2: Call2 0x397

0x3c3: Stack[-7] = Stack[-2]
0x3c4: Pop(2)
0x3c5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3c6: Push((float)2500.0)
0x3c7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c9: Push("Can't retreat, distance: ")
0x3ca: Pop(0); Push(Sqrt(Stack[-5]))
0x3cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cc: @ Trace(Stack[-1])
0x3cd: Pop(1)
0x3ce: Push((float)0.5)
0x3cf: @ Sleep(Stack[-1])
0x3d0: Pop(1)
0x3d1: Return(); Pop(10)

0x3d2: Push(CvectorIndex(Stack[-5], 0))
0x3d3: Push(CvectorIndex(Stack[-6], 2))
0x3d4: @ Rotate(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: PushEmpty(cvector)
0x3d7: Call2 0x50d

0x3d8: Pop(0)
0x3d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3da: Push((int) 120)
0x3db: Push((float)0.5)
0x3dc: @ SetTimer(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3df: Push((int) 1)
0x3e0: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3e1: Pop(1)
0x3e2: Push(Stack[-3])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: GOTO 0x3fd

0x3e7: GOTO 0x3fb

0x3e8: PushEmpty(cvector, float)
0x3e9: Stack[-1] = (float) 2.61799
0x3ea: Call2 0x397

0x3eb: Stack[-4] = Stack[-2]
0x3ec: Pop(2)
0x3ed: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ee: Push((float)2500.0)
0x3ef: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f1: PushEmpty(cvector)
0x3f2: Call2 0x50d

0x3f3: Pop(0)
0x3f4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3f5: Push((int) 120)
0x3f6: Push((float)0.5)
0x3f7: @ SetTimer(Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: GOTO 0x3fb

0x3fa: GOTO 0x3fd

0x3fb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3fd: Return(); Pop(10)

0x3fe: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3ff: Push((int) 120)
0x400: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Return(); Pop(8)

0x403: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x405: @ Stop()
0x406: Pop(0)
0x407: Push((int) 1)
0x408: @ KillTimer(Stack[-1])
0x409: Pop(1)
0x40a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40b: GOTO 0x431

0x40c: @ GetDirection(Stack[-4])
0x40d: Pop(0)
0x40e: Push((float)7000.0)
0x40f: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x410: Pop(1)
0x411: PushEmpty(cvector, float)
0x412: Stack[-1] = (float) 1.74533
0x413: Call2 0x397

0x414: Stack[-4] = Stack[-2]
0x415: Pop(2)
0x416: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: Push((float)2500.0)
0x41a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41c: PushEmpty(bool)
0x41d: Stack[-1] = (bool) 1
0x41e: Pop(0); Push(Stack[-5] * Stack[-5]);
0x41f: Push((float)2.25)
0x420: Pop(2); Push(Stack[-2] * Stack[-1]);
0x421: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: PushEmpty(bool)
0x424: Call2 0x442

0x425: Pop(0)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 0
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42b: @ Stop()
0x42c: Pop(0)
0x42d: PushEmpty(cvector)
0x42e: Call2 0x50d

0x42f: Pop(0)
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x431: Return(); Pop(8)

0x432: @ Stop()
0x433: Pop(0)
0x434: Push((int) 120)
0x435: @ KillTimer(Stack[-1])
0x436: Pop(1)
0x437: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty()
0x43b: Call2 0x432

0x43c: Pop(0)
0x43d: PushEmpty(object)
0x43e: Stack[-1] = Stack[-2]
0x43f: Call2 0x7ac

0x440: Pop(1)
0x441: Return(); Pop(0)

0x442: PushEmpty(cvector, cvector, cvector, cvector)
0x443: @ GetDirection(Stack[-2])
0x444: Pop(0)
0x445: PushEmpty(cvector, object)
0x446: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x447: Call2 0x512

0x448: Stack[-3] = Stack[-2]
0x449: Pop(2)
0x44a: PushEmpty(float, cvector, cvector)
0x44b: Stack[-2] = Stack[-5]
0x44c: Stack[-1] = Stack[-4]
0x44d: Call2 0x6a2

0x44e: Pop(2)
0x44f: Push((float)-0.34202)
0x450: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x451: Return(); Pop(4)

0x452: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x453: @ GetPosition(Stack[-6])
0x454: Pop(0)
0x455: @@ GetPosition(Stack[-5])
0x456: Pop(0)
0x457: @ GetDirection(Stack[-4])
0x458: Pop(0)
0x459: PushEmpty(cvector, cvector)
0x45a: PushEmpty(cvector, cvector)
0x45b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x45c: Call2 0x698

0x45d: Pop(1)
0x45e: Push((float)0.75)
0x45f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x460: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x461: Call2 0x698

0x462: Stack[-5] = Stack[-2]
0x463: Pop(2)
0x464: Push((int) 32)
0x465: Push((float)7000.0)
0x466: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: Push((int) 100)
0x469: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x46a: Push((int) 0)
0x46b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (int) 0
0x46e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x46f: Return(); Pop(12)

0x470: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x472: PushEmpty(cvector, float)
0x473: Stack[-1] = (float) 1.74533
0x474: Call2 0x452

0x475: Stack[-7] = Stack[-2]
0x476: Pop(2)
0x477: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x478: Push((float)2500.0)
0x479: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x47b: PushEmpty(cvector, float)
0x47c: Stack[-1] = (float) 2.61799
0x47d: Call2 0x452

0x47e: Stack[-7] = Stack[-2]
0x47f: Pop(2)
0x480: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x481: Push((float)2500.0)
0x482: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x484: Push("Can't retreat, distance: ")
0x485: Pop(0); Push(Sqrt(Stack[-5]))
0x486: Pop(2); Push(Stack[-2] + Stack[-1]);
0x487: @ Trace(Stack[-1])
0x488: Pop(1)
0x489: Push((float)0.5)
0x48a: @ Sleep(Stack[-1])
0x48b: Pop(1)
0x48c: Return(); Pop(10)

0x48d: Push(CvectorIndex(Stack[-5], 0))
0x48e: Push(CvectorIndex(Stack[-6], 2))
0x48f: @ Rotate(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: PushEmpty(cvector)
0x492: Call2 0x50d

0x493: Pop(0)
0x494: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x495: Push((int) 120)
0x496: Push((float)0.5)
0x497: @ SetTimer(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x49a: Push((int) 1)
0x49b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x49c: Pop(1)
0x49d: Push(Stack[-3])
0x49e: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x49f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: GOTO 0x4b8

0x4a2: GOTO 0x4b6

0x4a3: PushEmpty(cvector, float)
0x4a4: Stack[-1] = (float) 2.61799
0x4a5: Call2 0x452

0x4a6: Stack[-4] = Stack[-2]
0x4a7: Pop(2)
0x4a8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4a9: Push((float)2500.0)
0x4aa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4ac: PushEmpty(cvector)
0x4ad: Call2 0x50d

0x4ae: Pop(0)
0x4af: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4b0: Push((int) 120)
0x4b1: Push((float)0.5)
0x4b2: @ SetTimer(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: GOTO 0x4b6

0x4b5: GOTO 0x4b8

0x4b6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x4b8: Return(); Pop(10)

0x4b9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ba: Push((int) 120)
0x4bb: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Return(); Pop(8)

0x4be: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c0: @ Stop()
0x4c1: Pop(0)
0x4c2: Push((int) 1)
0x4c3: @ KillTimer(Stack[-1])
0x4c4: Pop(1)
0x4c5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c6: GOTO 0x4ec

0x4c7: @ GetDirection(Stack[-4])
0x4c8: Pop(0)
0x4c9: Push((float)7000.0)
0x4ca: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4cb: Pop(1)
0x4cc: PushEmpty(cvector, float)
0x4cd: Stack[-1] = (float) 1.74533
0x4ce: Call2 0x452

0x4cf: Stack[-4] = Stack[-2]
0x4d0: Pop(2)
0x4d1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 0
0x4d4: Push((float)2500.0)
0x4d5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 1
0x4d9: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4da: Push((float)2.25)
0x4db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4dc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: PushEmpty(bool)
0x4df: Call2 0x4fd

0x4e0: Pop(0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e2: Stack[-1] = (bool) 0
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: Stack[-1] = (bool) 1
0x4e5: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e6: @ Stop()
0x4e7: Pop(0)
0x4e8: PushEmpty(cvector)
0x4e9: Call2 0x50d

0x4ea: Pop(0)
0x4eb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4ec: Return(); Pop(8)

0x4ed: @ Stop()
0x4ee: Pop(0)
0x4ef: Push((int) 120)
0x4f0: @ KillTimer(Stack[-1])
0x4f1: Pop(1)
0x4f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty()
0x4f5: PushEmpty()
0x4f6: Call2 0x4ed

0x4f7: Pop(0)
0x4f8: PushEmpty(object)
0x4f9: Stack[-1] = Stack[-2]
0x4fa: Call2 0x7ac

0x4fb: Pop(1)
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(cvector, cvector, cvector, cvector)
0x4fe: @ GetDirection(Stack[-2])
0x4ff: Pop(0)
0x500: PushEmpty(cvector, object)
0x501: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x502: Call2 0x512

0x503: Stack[-3] = Stack[-2]
0x504: Pop(2)
0x505: PushEmpty(float, cvector, cvector)
0x506: Stack[-2] = Stack[-5]
0x507: Stack[-1] = Stack[-4]
0x508: Call2 0x6a2

0x509: Pop(2)
0x50a: Push((float)-0.34202)
0x50b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x50c: Return(); Pop(4)

0x50d: PushEmpty(cvector, cvector)
0x50e: @ GetPosition(Stack[-1])
0x50f: Pop(0)
0x510: Stack[-3] = Stack[-1]
0x511: Return(); Pop(2)

0x512: PushEmpty(cvector, cvector, cvector, cvector)
0x513: @ GetPosition(Stack[-2])
0x514: Pop(0)
0x515: @@ GetPosition(Stack[-1])
0x516: Pop(0)
0x517: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x518: Return(); Pop(4)

0x519: PushEmpty(bool, bool)
0x51a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-4] = Stack[-1]
0x51d: Return(); Pop(2)

0x51e: PushEmpty(bool, bool)
0x51f: Push("HasProperty")
0x520: Push((int) 2)
0x521: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-5] = (bool) 0
0x525: Return(); Pop(2)

0x526: @@ HasProperty(Stack[-3], Stack[-1])
0x527: Pop(0)
0x528: Stack[-5] = Stack[-1]
0x529: Return(); Pop(2)

0x52a: PushEmpty(bool, bool)
0x52b: @@ IsDead(Stack[-1])
0x52c: Pop(0)
0x52d: Stack[-4] = Stack[-1]
0x52e: Return(); Pop(2)

0x52f: PushEmpty(object, object, object, object)
0x530: Pop(0); Push((bool) Stack[-5] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: Stack[-6] = (bool) 0
0x533: Return(); Pop(4)

0x534: PushEmpty(bool)
0x535: Stack[-1] = (bool) 0
0x536: Push("IsDead")
0x537: Push((int) 1)
0x538: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x539: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[-8]
0x53c: Call2 0x52a

0x53d: Pop(1)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-6] = (bool) 0
0x542: Return(); Pop(4)

0x543: @ GetScene(Stack[-2])
0x544: Pop(0)
0x545: Pop(0); Push((bool) Stack[-2] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-6] = (bool) 0
0x548: Return(); Pop(4)

0x549: @@ GetScene(Stack[-1])
0x54a: Pop(0)
0x54b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-6] = (bool) 0
0x54e: Return(); Pop(4)

0x54f: Stack[-6] = (bool) 1
0x550: Return(); Pop(4)

0x551: Stack[-1] = 0
0x552: Stack[-2] = 0
0x553: PushEmpty(int, int)
0x554: PushEmpty(bool, object)
0x555: Stack[-1] = Stack[-5]
0x556: Call2 0x52f

0x557: Pop(1)
0x558: Pop(1); Push((bool) Stack[-1] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-4] = (bool) 0
0x55b: Return(); Pop(2)

0x55c: PushEmpty(bool, object, string)
0x55d: Stack[-2] = Stack[-6]
0x55e: Stack[-1] = "noaccess"
0x55f: Call2 0x51e

0x560: Pop(2)
0x561: Pop(1); Push((bool) Stack[-1] == 0)
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-4] = (bool) 1
0x564: Return(); Pop(2)

0x565: Push("noaccess")
0x566: @@ GetProperty(Stack[-1], Stack[-2])
0x567: Pop(1)
0x568: Push((int) 0)
0x569: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x56a: Return(); Pop(2)

0x56b: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x56c: Pop(0); Push((bool) Stack[-15] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Return(); Pop(14)

0x56f: @ IsDead(Stack[-7])
0x570: Pop(0)
0x571: Push(Stack[-7])
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Return(); Pop(14)

0x574: @ GetSecondaryAnimationType(Stack[-6])
0x575: Pop(0)
0x576: Push((int) 0)
0x577: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x579: Return(); Pop(14)

0x57a: @@ GetPosition(Stack[-5])
0x57b: Pop(0)
0x57c: @ GetPosition(Stack[-4])
0x57d: Pop(0)
0x57e: @ GetDirection(Stack[-3])
0x57f: Pop(0)
0x580: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x581: Push(CvectorIndex(Stack[-2], 0))
0x582: Push(CvectorIndex(Stack[-4], 0))
0x583: Pop(2); Push(Stack[-2] * Stack[-1]);
0x584: Push(CvectorIndex(Stack[-3], 2))
0x585: Push(CvectorIndex(Stack[-5], 2))
0x586: Pop(2); Push(Stack[-2] * Stack[-1]);
0x587: Pop(2); Push(Stack[-2] + Stack[-1]);
0x588: Push((int) 0)
0x589: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-1] = "fhit"
0x58c: GOTO 0x58e

0x58d: Stack[-1] = "bhit"
0x58e: Push("hit_react")
0x58f: Push("1")
0x590: Pop(1); Push(Stack[-3] + Stack[-1]);
0x591: Push("2")
0x592: Pop(1); Push(Stack[-4] + Stack[-1]);
0x593: Push((int) -10)
0x594: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(4)
0x596: Return(); Pop(14)

0x597: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x598: PushEmpty(bool)
0x599: Stack[-1] = (bool) 0
0x59a: PushEmpty(bool)
0x59b: Stack[-1] = (bool) 0
0x59c: Push(Stack[-23])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59e: Push((int) 4)
0x59f: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Stack[-1] = (bool) 1
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a3: Push((int) 5)
0x5a4: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-1] = (bool) 1
0x5a7: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5a8: PushEmpty(cvector, cvector)
0x5a9: PushEmpty(cvector, object)
0x5aa: Stack[-1] = Stack[-25]
0x5ab: Call2 0x512

0x5ac: Stack[-3] = Stack[-2]
0x5ad: Pop(2)
0x5ae: Call2 0x698

0x5af: Stack[-11] = Stack[-2]
0x5b0: Pop(2)
0x5b1: @ CreateVectorVector(Stack[-8])
0x5b2: Pop(0)
0x5b3: Stack[-7] = (int) 1
0x5b4: Push("hit")
0x5b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b6: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5b7: Pop(1)
0x5b8: Pop(0); Push((bool) Stack[-6] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ba: GOTO 0x5c4

0x5bb: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5bc: Push((float)0.70711)
0x5bd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: @@ add(Stack[-5])
0x5c0: Pop(0)
0x5c1: Push((int) 1)
0x5c2: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5c3: GOTO 0x5b4

0x5c4: @@ size(Stack[-3])
0x5c5: Pop(0)
0x5c6: Push(Stack[-3])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5c8: @ irand(Stack[-2], Stack[-3])
0x5c9: Pop(0)
0x5ca: @@ get(Stack[-1], Stack[-2])
0x5cb: Pop(0)
0x5cc: PushEmpty(object, int, float, cvector, cvector)
0x5cd: Stack[-5] = Stack[-26]
0x5ce: Stack[-4] = Stack[-25]
0x5cf: Stack[-3] = Stack[-24]
0x5d0: Stack[-2] = Stack[-6]
0x5d1: Stack[-1] = -Stack[-14]; Pop(0);
0x5d2: Call2 0x5db

0x5d3: Pop(5)
0x5d4: Return(); Pop(18)

0x5d5: Stack[-8] = 0
0x5d6: PushEmpty(object)
0x5d7: Stack[-1] = Stack[-22]
0x5d8: Call2 0x56b

0x5d9: Pop(1)
0x5da: Return(); Pop(18)

0x5db: PushEmpty(object, object, object, object)
0x5dc: @ GetScene(Stack[-2])
0x5dd: Pop(0)
0x5de: Push("scripted")
0x5df: Push("blood_dir.xml")
0x5e0: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5e1: Pop(2)
0x5e2: PushEmpty(object)
0x5e3: Stack[-1] = Stack[-10]
0x5e4: Call2 0x56b

0x5e5: Pop(1)
0x5e6: Return(); Pop(4)

0x5e7: Stack[-1] = 0
0x5e8: Stack[-2] = 0
0x5e9: PushEmpty(bool, bool)
0x5ea: @ IsLoaded(Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-3] = Stack[-1]
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5ef: @@ GetPosition(Stack[-8])
0x5f0: Pop(0)
0x5f1: @@ GetEyesHeight(Stack[-9])
0x5f2: Pop(0)
0x5f3: Push(CvectorIndex(Stack[-8], 1))
0x5f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5f6: @ GetPosition(Stack[-7])
0x5f7: Pop(0)
0x5f8: @ GetEyesHeight(Stack[-9])
0x5f9: Pop(0)
0x5fa: Push(CvectorIndex(Stack[-7], 1))
0x5fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5fe: Push(CvectorIndex(Stack[-6], 1))
0x5ff: Stack[-1] = (int) 0
0x600: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x601: Pop(0); Push(Stack[-6] | Stack[-6]);
0x602: Pop(1); Push(Sqrt(Stack[-1]))
0x603: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x604: Stack[-5] = -Stack[-6]; Pop(0);
0x605: Pop(0); Push(Stack[-6] * Stack[-19]);
0x606: PushEmpty(cvector, cvector)
0x607: Push(CVector(0.0, 1.0, 0.0))
0x608: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x609: Call2 0x698

0x60a: Pop(1)
0x60b: Push((int) 25)
0x60c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60e: Push(CVector(0.0, 10.0, 0.0))
0x60f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x610: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x611: @ IsOverrideActive(Stack[-2])
0x612: Pop(0)
0x613: Push(Stack[-2])
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-21] = (bool) 0
0x616: Return(); Pop(18)

0x617: @ StopWorld()
0x618: Pop(0)
0x619: @ CameraTransit(Stack[-3], Stack[-5])
0x61a: Pop(0)
0x61b: Push(CvectorIndex(Stack[-4], 0))
0x61c: Push(CvectorIndex(Stack[-5], 2))
0x61d: @ Rotate(Stack[-2], Stack[-1])
0x61e: Pop(2)
0x61f: PushEmpty(bool)
0x620: Call2 0x8af

0x621: Pop(0)
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: GOTO 0x62c

0x624: Push("head")
0x625: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x626: Pop(1)
0x627: Push(Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x629: Push("head")
0x62a: @ LookAsyncCamera(Stack[-1])
0x62b: Pop(1)
0x62c: @ CameraWaitForPlayFinish()
0x62d: Pop(0)
0x62e: @ ResumeWorld()
0x62f: Pop(0)
0x630: Stack[-21] = (bool) 1
0x631: Return(); Pop(18)

0x632: PushEmpty(bool, bool)
0x633: @ CameraSwitchToNormal()
0x634: Pop(0)
0x635: PushEmpty(bool)
0x636: Call2 0x8af

0x637: Pop(0)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: GOTO 0x642

0x63a: Push("head")
0x63b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x63c: Pop(1)
0x63d: Push(Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63f: Push("head")
0x640: @ UnlookAsync(Stack[-1])
0x641: Pop(1)
0x642: Return(); Pop(2)

0x643: PushEmpty(bool, float, float, bool, float, float)
0x644: @ lshHasAnimation(Stack[-3], Stack[-7])
0x645: Pop(0)
0x646: Push(Stack[-3])
0x647: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x648: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x649: Pop(0)
0x64a: Push((bool) 0)
0x64b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(1)
0x64d: GOTO 0x652

0x64e: Push("Can't find lsh animation : ")
0x64f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x650: @ Trace(Stack[-1])
0x651: Pop(1)
0x652: Return(); Pop(6)

0x653: PushEmpty(bool, float, float, bool, float, float)
0x654: @ lshHasAnimation(Stack[-3], Stack[-8])
0x655: Pop(0)
0x656: Push(Stack[-3])
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x659: Pop(0)
0x65a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x65b: Pop(0)
0x65c: GOTO 0x661

0x65d: Push("Can't find lsh animation : ")
0x65e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x65f: @ Trace(Stack[-1])
0x660: Pop(1)
0x661: Return(); Pop(6)

0x662: PushEmpty(bool)
0x663: Call2 0x8af

0x664: Pop(0)
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: @ lshStopSpeech()
0x667: Pop(0)
0x668: Return(); Pop(0)

0x669: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x66a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x66b: Pop(0)
0x66c: Pop(0); Push((bool) Stack[-8] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x66e: Stack[-7] = (int) 0
0x66f: Push((int) 1)
0x670: Pop(1); Push(Stack[-8] + Stack[-1]);
0x671: Pop(1); Push(Stack[-18] + Stack[-1]);
0x672: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x673: Pop(1)
0x674: Pop(0); Push((bool) Stack[-6] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x676: GOTO 0x67a

0x677: Push((int) 1)
0x678: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x679: GOTO 0x66f

0x67a: Pop(0); Push((bool) Stack[-7] == 0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67c: Return(); Pop(16)

0x67d: @ irand(Stack[-5], Stack[-7])
0x67e: Pop(0)
0x67f: Push((int) 1)
0x680: Pop(1); Push(Stack[-6] + Stack[-1]);
0x681: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x682: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x683: Pop(0)
0x684: Push(Stack[-4])
0x685: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x686: @ GetEyesHeight(Stack[-3])
0x687: Pop(0)
0x688: @ GetDirection(Stack[-2])
0x689: Pop(0)
0x68a: Push((int) 50)
0x68b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x68c: Push(CvectorIndex(Stack[-1], 1))
0x68d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x68e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x68f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x690: Pop(0)
0x691: Return(); Pop(16)

0x692: PushEmpty(object, object)
0x693: @ self(Stack[-1])
0x694: Pop(0)
0x695: Stack[-3] = Stack[-1]
0x696: Return(); Pop(2)

0x697: Stack[-1] = 0
0x698: PushEmpty(float, float)
0x699: Pop(0); Push(Stack[-3] | Stack[-3]);
0x69a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x69b: Push((float)0.0)
0x69c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x69f: Return(); Pop(2)

0x6a0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6a1: Return(); Pop(2)

0x6a2: PushEmpty()
0x6a3: Pop(0); Push(Stack[-2] | Stack[-1]);
0x6a4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6a5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6a6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a7: Pop(1); Push(Sqrt(Stack[-1]))
0x6a8: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty(float, float)
0x6ab: @ GetGameTime(Stack[-1])
0x6ac: Pop(0)
0x6ad: Push((int) 1)
0x6ae: PushEmpty(int)
0x6af: Push((int) 24)
0x6b0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6b1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6b2: Return(); Pop(2)

0x6b3: PushEmpty(int, int)
0x6b4: Push("branch")
0x6b5: @ GetVariable(Stack[-1], Stack[-2])
0x6b6: Pop(1)
0x6b7: Push((int) 0)
0x6b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6ba: Stack[-3] = (int) 1
0x6bb: Return(); Pop(2)

0x6bc: GOTO 0x6c2

0x6bd: Push((int) 1)
0x6be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c0: Stack[-3] = (int) 2
0x6c1: Return(); Pop(2)

0x6c2: Stack[-3] = (int) 3
0x6c3: Return(); Pop(2)

0x6c4: PushEmpty(int, bool, int, bool)
0x6c5: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c7: Push("GenerateMoney: iMin > iMax")
0x6c8: @ Trace(Stack[-1])
0x6c9: Pop(1)
0x6ca: Return(); Pop(4)

0x6cb: Stack[-2] = (int) 0
0x6cc: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6ce: Pop(0); Push(Stack[-5] - Stack[-6]);
0x6cf: @ irand(Stack[-3], Stack[-1])
0x6d0: Pop(1)
0x6d1: GOTO 0x6d6

0x6d2: Push((int) 0)
0x6d3: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Return(); Pop(4)

0x6d6: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x6d7: Push((int) 0)
0x6d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Return(); Pop(4)

0x6db: PushEmpty(int, string)
0x6dc: Stack[-1] = "Money"
0x6dd: Call2 0x792

0x6de: Pop(1)
0x6df: Push((int) 0)
0x6e0: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x6e1: Pop(2)
0x6e2: Return(); Pop(4)

0x6e3: PushEmpty(int, bool, int, bool)
0x6e4: Push(Stack[-5])
0x6e5: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x6e6: PushEmpty(int, int)
0x6e7: Stack[-2] = (int) 0
0x6e8: Push((int) 100)
0x6e9: PushEmpty(int)
0x6ea: Call2 0x6aa

0x6eb: Pop(0)
0x6ec: Push((int) 100)
0x6ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ee: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6ef: Call2 0x6c4

0x6f0: Pop(2)
0x6f1: Push((int) 8)
0x6f2: @ irand(Stack[-3], Stack[-1])
0x6f3: Pop(1)
0x6f4: Push((int) 0)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f7: PushEmpty(int, string)
0x6f8: Stack[-1] = "lemon"
0x6f9: Call2 0x792

0x6fa: Pop(1)
0x6fb: Push((int) 0)
0x6fc: Push((int) 1)
0x6fd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6fe: Pop(3)
0x6ff: GOTO 0x73b

0x700: Push((int) 1)
0x701: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x703: PushEmpty(int, string)
0x704: Stack[-1] = "rusk"
0x705: Call2 0x792

0x706: Pop(1)
0x707: Push((int) 0)
0x708: Push((int) 1)
0x709: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: GOTO 0x73b

0x70c: Push((int) 2)
0x70d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x70f: PushEmpty(int, string)
0x710: Stack[-1] = "hook"
0x711: Call2 0x792

0x712: Pop(1)
0x713: Push((int) 0)
0x714: Push((int) 1)
0x715: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: GOTO 0x73b

0x718: Push((int) 4)
0x719: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x71b: PushEmpty(int, string)
0x71c: Stack[-1] = "syringe"
0x71d: Call2 0x792

0x71e: Pop(1)
0x71f: Push((int) 0)
0x720: Push((int) 1)
0x721: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: GOTO 0x73b

0x724: Push((int) 5)
0x725: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x727: PushEmpty(int, string)
0x728: Stack[-1] = "watch"
0x729: Call2 0x792

0x72a: Pop(1)
0x72b: Push((int) 0)
0x72c: Push((int) 1)
0x72d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x72e: Pop(3)
0x72f: GOTO 0x73b

0x730: Push((int) 6)
0x731: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x732: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x733: PushEmpty(int, string)
0x734: Stack[-1] = "razor"
0x735: Call2 0x792

0x736: Pop(1)
0x737: Push((int) 0)
0x738: Push((int) 1)
0x739: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: GOTO 0x791

0x73c: PushEmpty(int, int)
0x73d: Stack[-2] = (int) 0
0x73e: Push((int) 50)
0x73f: PushEmpty(int)
0x740: Call2 0x6aa

0x741: Pop(0)
0x742: Push((int) 50)
0x743: Pop(2); Push(Stack[-2] * Stack[-1]);
0x744: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x745: Call2 0x6c4

0x746: Pop(2)
0x747: Push((int) 7)
0x748: @ irand(Stack[-3], Stack[-1])
0x749: Pop(1)
0x74a: Push((int) 0)
0x74b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x74d: PushEmpty(int, string)
0x74e: Stack[-1] = "beads"
0x74f: Call2 0x792

0x750: Pop(1)
0x751: Push((int) 0)
0x752: Push((int) 1)
0x753: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x754: Pop(3)
0x755: GOTO 0x791

0x756: Push((int) 1)
0x757: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x759: PushEmpty(int, string)
0x75a: Stack[-1] = "bracelet"
0x75b: Call2 0x792

0x75c: Pop(1)
0x75d: Push((int) 0)
0x75e: Push((int) 1)
0x75f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: GOTO 0x791

0x762: Push((int) 2)
0x763: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x765: PushEmpty(int, string)
0x766: Stack[-1] = "ear_ring"
0x767: Call2 0x792

0x768: Pop(1)
0x769: Push((int) 0)
0x76a: Push((int) 1)
0x76b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: GOTO 0x791

0x76e: Push((int) 3)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x771: PushEmpty(int, string)
0x772: Stack[-1] = "gold_ring"
0x773: Call2 0x792

0x774: Pop(1)
0x775: Push((int) 0)
0x776: Push((int) 1)
0x777: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: GOTO 0x791

0x77a: Push((int) 4)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x77d: PushEmpty(int, string)
0x77e: Stack[-1] = "silver_ring"
0x77f: Call2 0x792

0x780: Pop(1)
0x781: Push((int) 0)
0x782: Push((int) 1)
0x783: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x784: Pop(3)
0x785: GOTO 0x791

0x786: Push((int) 5)
0x787: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x789: PushEmpty(int, string)
0x78a: Stack[-1] = "flower"
0x78b: Call2 0x792

0x78c: Pop(1)
0x78d: Push((int) 0)
0x78e: Push((int) 1)
0x78f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: Return(); Pop(4)

0x792: PushEmpty(int, int)
0x793: @ GetInvItemByName(Stack[-1], Stack[-3])
0x794: Pop(0)
0x795: Stack[-4] = Stack[-1]
0x796: Return(); Pop(2)

0x797: PushEmpty()
0x798: PushEmpty(object)
0x799: Stack[-1] = Stack[-2]
0x79a: Push(-1, 0); TaskCall(2)
0x79b: Call2 0xc4

0x79c: Pop(-1, 0); TaskReturn
0x79d: Pop(1)
0x79e: Return(); Pop(0)

0x79f: PushEmpty(float, float)
0x7a0: Push("health")
0x7a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a3: Push("health")
0x7a4: @ GetProperty(Stack[-1], Stack[-2])
0x7a5: Pop(1)
0x7a6: Push((int) 0)
0x7a7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: @ SignalDeath(Stack[-4])
0x7aa: Pop(0)
0x7ab: Return(); Pop(2)

0x7ac: PushEmpty()
0x7ad: PushEmpty(object)
0x7ae: Stack[-1] = Stack[-2]
0x7af: Call2 0x797

0x7b0: Pop(1)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty()
0x7b3: PushEmpty(object, int, float)
0x7b4: Stack[-3] = Stack[-7]
0x7b5: Stack[-2] = Stack[-6]
0x7b6: Stack[-1] = Stack[-5]
0x7b7: Call2 0x597

0x7b8: Pop(3)
0x7b9: Return(); Pop(0)

0x7ba: PushEmpty()
0x7bb: PushEmpty(object, int, float, cvector, cvector)
0x7bc: Stack[-5] = Stack[-11]
0x7bd: Stack[-4] = Stack[-10]
0x7be: Stack[-3] = Stack[-9]
0x7bf: Stack[-2] = Stack[-7]
0x7c0: Stack[-1] = Stack[-6]
0x7c1: Call2 0x5db

0x7c2: Pop(5)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty()
0x7c5: Push("unholster")
0x7c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c8: PushEmpty(bool, object)
0x7c9: Stack[-1] = Stack[-4]
0x7ca: Call2 0x893

0x7cb: Stack[-5] = Stack[-2]
0x7cc: Pop(2)
0x7cd: Return(); Pop(0)

0x7ce: GOTO 0x7e2

0x7cf: Push("player_shot")
0x7d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d2: PushEmpty(bool, object)
0x7d3: Stack[-1] = Stack[-4]
0x7d4: Call2 0x898

0x7d5: Stack[-5] = Stack[-2]
0x7d6: Pop(2)
0x7d7: Return(); Pop(0)

0x7d8: GOTO 0x7e2

0x7d9: Push("battle")
0x7da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7dc: PushEmpty(bool, object)
0x7dd: Stack[-1] = Stack[-4]
0x7de: Call2 0x89d

0x7df: Stack[-5] = Stack[-2]
0x7e0: Pop(2)
0x7e1: Return(); Pop(0)

0x7e2: Stack[-3] = (bool) 0
0x7e3: Return(); Pop(0)

0x7e4: PushEmpty()
0x7e5: Push("unholster")
0x7e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e8: PushEmpty(object)
0x7e9: Stack[-1] = Stack[-3]
0x7ea: Call2 0x896

0x7eb: Pop(1)
0x7ec: GOTO 0x7fc

0x7ed: Push("player_shot")
0x7ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f0: PushEmpty(object)
0x7f1: Stack[-1] = Stack[-3]
0x7f2: Call2 0x89b

0x7f3: Pop(1)
0x7f4: GOTO 0x7fc

0x7f5: Push("battle")
0x7f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f8: PushEmpty(object)
0x7f9: Stack[-1] = Stack[-3]
0x7fa: Call2 0x8a0

0x7fb: Pop(1)
0x7fc: Return(); Pop(0)

0x7fd: PushEmpty(bool, bool)
0x7fe: PushEmpty(bool)
0x7ff: Stack[-1] = (bool) 0
0x800: PushEmpty(bool, object)
0x801: Stack[-1] = Stack[-6]
0x802: Call2 0x893

0x803: Pop(1)
0x804: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x805: PushEmpty(bool, object)
0x806: Stack[-1] = Stack[-6]
0x807: Call2 0x519

0x808: Pop(1)
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: Stack[-1] = (bool) 1
0x80b: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80c: @@ IsWeaponHolstered(Stack[-1])
0x80d: Pop(0)
0x80e: Pop(0); Push((bool) Stack[-1] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x810: Stack[-4] = (bool) 1
0x811: Return(); Pop(2)

0x812: Stack[-4] = (bool) 0
0x813: Return(); Pop(2)

0x814: PushEmpty()
0x815: PushEmpty(object)
0x816: Stack[-1] = Stack[-2]
0x817: Call2 0x896

0x818: Pop(1)
0x819: Return(); Pop(0)

0x81a: PushEmpty()
0x81b: PushEmpty(bool, object)
0x81c: Stack[-1] = Stack[-3]
0x81d: Call2 0x519

0x81e: Pop(1)
0x81f: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x820: PushEmpty(object)
0x821: Call2 0x692

0x822: Pop(0)
0x823: Push((float)-0.05)
0x824: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(2)
0x826: Return(); Pop(0)

0x827: PushEmpty(object, object)
0x828: Push("heal")
0x829: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x82b: Push("player")
0x82c: @ FindActor(Stack[-2], Stack[-1])
0x82d: Pop(1)
0x82e: PushEmpty(bool, object)
0x82f: Stack[-1] = Stack[-3]
0x830: Call2 0x8a2

0x831: Stack[-6] = Stack[-2]
0x832: Pop(2)
0x833: Return(); Pop(2)

0x834: Stack[-1] = 0
0x835: Stack[-4] = (bool) 0
0x836: Return(); Pop(2)

0x837: PushEmpty(object, object)
0x838: Push("heal")
0x839: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x83b: Push("player")
0x83c: @ FindActor(Stack[-2], Stack[-1])
0x83d: Pop(1)
0x83e: PushEmpty(object)
0x83f: Stack[-1] = Stack[-2]
0x840: Call2 0x8a5

0x841: Pop(1)
0x842: Stack[-1] = 0
0x843: Return(); Pop(2)

0x844: PushEmpty(string, string)
0x845: Stack[-1] = "idle"
0x846: Push(Stack[-3])
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x849: Stack[-4] = Stack[-1]
0x84a: Return(); Pop(2)

0x84b: PushEmpty(int, bool, int, bool)
0x84c: Stack[-2] = (int) 0
0x84d: Push("all")
0x84e: PushEmpty(string, int)
0x84f: Stack[-1] = Stack[-5]
0x850: Call2 0x844

0x851: Pop(1)
0x852: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(2)
0x854: Pop(0); Push((bool) Stack[-1] == 0)
0x855: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x856: GOTO 0x85a

0x857: Push((int) 1)
0x858: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x859: GOTO 0x84d

0x85a: Stack[-5] = Stack[-2]
0x85b: Return(); Pop(4)

0x85c: PushEmpty()
0x85d: PushEmpty(bool, object)
0x85e: Stack[-1] = Stack[-3]
0x85f: Call2 0x553

0x860: Pop(1)
0x861: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x862: Stack[-2] = (int) 2
0x863: GOTO 0x865

0x864: Stack[-2] = (int) 0
0x865: Return(); Pop(0)

0x866: PushEmpty()
0x867: PushEmpty(object)
0x868: Stack[-1] = Stack[-2]
0x869: Push(-1, 3); TaskCall(5)
0x86a: Call2 0x374

0x86b: Pop(-1, 3); TaskReturn
0x86c: Pop(1)
0x86d: Return(); Pop(0)

0x86e: PushEmpty()
0x86f: PushEmpty(bool, object)
0x870: Stack[-1] = Stack[-4]
0x871: Call2 0x553

0x872: Pop(1)
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-3] = (int) 2
0x875: GOTO 0x877

0x876: Stack[-3] = (int) 0
0x877: Return(); Pop(0)

0x878: PushEmpty()
0x879: PushEmpty(object)
0x87a: Stack[-1] = Stack[-2]
0x87b: Push(-1, 3); TaskCall(6)
0x87c: Call2 0x470

0x87d: Pop(-1, 3); TaskReturn
0x87e: Pop(1)
0x87f: Return(); Pop(0)

0x880: PushEmpty()
0x881: Stack[-2] = (int) 0
0x882: Return(); Pop(0)

0x883: PushEmpty()
0x884: Return(); Pop(0)

0x885: PushEmpty()
0x886: Stack[-3] = (int) 0
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: Return(); Pop(0)

0x88a: PushEmpty()
0x88b: Stack[-2] = (int) 2
0x88c: Return(); Pop(0)

0x88d: PushEmpty()
0x88e: PushEmpty(object)
0x88f: Stack[-1] = Stack[-2]
0x890: Call2 0x8b6

0x891: Pop(1)
0x892: Return(); Pop(0)

0x893: PushEmpty()
0x894: Stack[-2] = (bool) 0
0x895: Return(); Pop(0)

0x896: PushEmpty()
0x897: Return(); Pop(0)

0x898: PushEmpty()
0x899: Stack[-2] = (bool) 0
0x89a: Return(); Pop(0)

0x89b: PushEmpty()
0x89c: Return(); Pop(0)

0x89d: PushEmpty()
0x89e: Stack[-2] = (bool) 0
0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: Return(); Pop(0)

0x8a2: PushEmpty()
0x8a3: Stack[-2] = (bool) 0
0x8a4: Return(); Pop(0)

0x8a5: PushEmpty()
0x8a6: Return(); Pop(0)

0x8a7: Stack[-1] = (int) 515567
0x8a8: Return(); Pop(0)

0x8a9: Stack[-1] = (int) 503352
0x8aa: Return(); Pop(0)

0x8ab: Stack[-1] = "ui/NPC_Citizen3.png"
0x8ac: Return(); Pop(0)

0x8ad: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x8ae: Return(); Pop(0)

0x8af: Stack[-1] = (bool) 0
0x8b0: Return(); Pop(0)

0x8b1: PushEmpty(bool)
0x8b2: Stack[-1] = (bool) 1
0x8b3: Call2 0x6e3

0x8b4: Pop(1)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty()
0x8b7: PushEmpty(int, object)
0x8b8: Stack[-1] = Stack[-3]
0x8b9: Push(-2, 1); TaskCall(0)
0x8ba: Call2 0x0

0x8bb: Pop(-2, 1); TaskReturn
0x8bc: Pop(2)
0x8bd: Return(); Pop(0)

0x8be: PushEmpty()
0x8bf: Stack[-4] = (bool) 1
0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(object)
0x8c2: Call2 0x692

0x8c3: Pop(0)
0x8c4: @ RemoveActor(Stack[-1])
0x8c5: Pop(1)
0x8c6: @ Hold()
0x8c7: Pop(0)
0x8c8: Return(); Pop(0)

0x8c9: PushEmpty()
0x8ca: Return(); Pop(0)

