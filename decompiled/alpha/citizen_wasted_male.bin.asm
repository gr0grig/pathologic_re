GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
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
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
	IsAttacking
	IsAttacking
	walk
	run
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	fire
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	playing 
	start: 
	end: 
	killme
	player
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
	ui/NPC_None.png
	class
	littleboy
	littlegirl
	wasted_male
	wasted_girl
	woman

Import:
	DoTrade (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	StopAnimation (0 args)
	StopTrade (0 args)
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
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)
	SetRTEnvelope (2 args)

RunOp = 0xaa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0xf Vars = (int)
	GTASK_1  Params = 1
		EVENT_0 Op = 0x25 Vars = (object)
		EVENT_6 Op = 0x33 Vars = ()
		EVENT_22 Op = 0xa4 Vars = (object, int, float, float)
		EVENT_16 Op = 0xa6 Vars = (object, string)
		EVENT_41 Op = 0xa8 Vars = (object)
	GTASK_2 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xc2 Vars = (object)
		EVENT_17 Op = 0xd6 Vars = (object)
		EVENT_30 Op = 0xea Vars = (object, object)
		EVENT_40 Op = 0x104 Vars = (object)
		EVENT_42 Op = 0x118 Vars = (object, string)
		EVENT_1 Op = 0x12e Vars = (object)
		EVENT_3 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x13a Vars = (int)
		EVENT_6 Op = 0x146 Vars = ()
		EVENT_41 Op = 0x15d Vars = (object)
		EVENT_10 Op = 0x1c7 Vars = (object)
		EVENT_28 Op = 0x1cb Vars = ()
	GTASK_3  Params = 0
		EVENT_0 Op = 0x1de Vars = (object)
		EVENT_17 Op = 0x1f2 Vars = (object)
		EVENT_30 Op = 0x206 Vars = (object, object)
		EVENT_40 Op = 0x220 Vars = (object)
		EVENT_42 Op = 0x234 Vars = (object, string)
		EVENT_6 Op = 0x24a Vars = ()
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x2d3 Vars = (object)
		EVENT_17 Op = 0x2e7 Vars = (object)
		EVENT_30 Op = 0x2fb Vars = (object, object)
		EVENT_40 Op = 0x315 Vars = (object)
		EVENT_42 Op = 0x329 Vars = (object, string)
		EVENT_41 Op = 0x34a Vars = (object)
		EVENT_7 Op = 0x353 Vars = (int)
		EVENT_6 Op = 0x376 Vars = ()
	GTASK_5 Vars = (object, int, int, bool, int) Params = 1
	GTASK_6 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x576 Vars = ()
		EVENT_7 Op = 0x5e3 Vars = (int)
		EVENT_10 Op = 0x5f5 Vars = (object)
		EVENT_41 Op = 0x600 Vars = (object)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6bb Vars = (int, int)

Events:
EVENT_16 Op = 0x91f Vars = (object, string)
EVENT_41 Op = 0x92c Vars = (object)
EVENT_22 Op = 0x932 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: @ WaitForAnimEnd()
0x5: Pop(0)
0x6: Push("all")
0x7: Push("idle")
0x8: @ PlayAnimation(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Return(); Pop(0)

0xd: GOTO 0x4

0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: @ StopAnimation()
0x11: Pop(0)
0x12: @ StopTrade()
0x13: Pop(0)
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: EventDisable(0)
0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-2]
0x1a: Call 0x37

0x1b: Pop(1)
0x1c: PushEmpty(object)
0x1d: Stack[-1] = Stack[-2]
0x1e: Call 0xb2d

0x1f: Pop(1)
0x20: EventEnable(0)
0x21: @ Hold()
0x22: Pop(0)
0x23: GOTO 0x21

0x24: Return(); Pop(0)

0x25: PushEmpty(int, int)
0x26: PushEmpty(int, object)
0x27: Stack[-1] = Stack[-5]
0x28: Call 0x9b5

0x29: Stack[-3] = Stack[-2]
0x2a: Pop(2)
0x2b: Push((int) 0)
0x2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: PushEmpty(object)
0x2f: Stack[-1] = Stack[-4]
0x30: Call 0x9b8

0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: PushEmpty()
0x34: Call 0x9be

0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x38: Pop(0); Push((bool) Stack[-21] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(string)
0x3b: Stack[-1] = "fdie"
0x3c: Call 0x8e

0x3d: Pop(1)
0x3e: GOTO 0x8d

0x3f: @@ GetPosition(Stack[-10])
0x40: Pop(0)
0x41: @ GetPosition(Stack[-9])
0x42: Pop(0)
0x43: @ GetDirection(Stack[-8])
0x44: Pop(0)
0x45: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x46: Push(CvectorIndex(Stack[-7], 0))
0x47: Push(CvectorIndex(Stack[-9], 0))
0x48: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49: Push(CvectorIndex(Stack[-8], 2))
0x4a: Push(CvectorIndex(Stack[-10], 2))
0x4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d: Push((int) 0)
0x4e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: Stack[-6] = "fdie"
0x51: GOTO 0x53

0x52: Stack[-6] = "bdie"
0x53: @ RemoveRTEnvelope()
0x54: Pop(0)
0x55: @ SetDeathState()
0x56: Pop(0)
0x57: @ Stop()
0x58: Pop(0)
0x59: @ StopAsync()
0x5a: Pop(0)
0x5b: Stack[-5] = Stack[-21]
0x5c: Push("GetScriptProperty")
0x5d: Push((int) 2)
0x5e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: Push("Owner")
0x61: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x62: Pop(1)
0x63: Push(Stack[-4])
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: Push("Owner")
0x66: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x67: Pop(1)
0x68: Pop(0); Push((bool) Stack[-5] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-5] = Stack[-21]
0x6b: Push("@GetEyesHeight")
0x6c: Push((int) 1)
0x6d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @@ GetEyesHeight(Stack[-2])
0x70: Pop(0)
0x71: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x72: Push(CvectorIndex(Stack[-1], 1))
0x73: Stack[-1] = Stack[-3]
0x74: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75: Push("head")
0x76: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x77: Pop(1)
0x78: Stack[-3] = (bool) 1
0x79: GOTO 0x7b

0x7a: Stack[-3] = (bool) 0
0x7b: Push("all")
0x7c: @ PlayAnimation(Stack[-1], Stack[-7])
0x7d: Pop(1)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push(Stack[-3])
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: @ StopAsync()
0x83: Pop(0)
0x84: Push("head")
0x85: @ UnlookAsync(Stack[-1])
0x86: Pop(1)
0x87: Push("all")
0x88: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x89: Pop(1)
0x8a: @ RemoveEnvelope()
0x8b: Pop(0)
0x8c: Stack[-5] = 0
0x8d: Return(); Pop(20)

0x8e: PushEmpty()
0x8f: @ RemoveRTEnvelope()
0x90: Pop(0)
0x91: @ SetDeathState()
0x92: Pop(0)
0x93: @ Stop()
0x94: Pop(0)
0x95: @ StopAsync()
0x96: Pop(0)
0x97: @ StopSecondaryAnimation()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ PlayAnimation(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push("all")
0x9f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xa0: Pop(1)
0xa1: @ RemoveEnvelope()
0xa2: Pop(0)
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Return(); Pop(0)

0xaa: Push((bool) 1)
0xab: @ SensePlayerOnly(Stack[-1])
0xac: Pop(1)
0xad: PushEmpty()
0xae: Call 0xaa8

0xaf: Pop(0)
0xb0: PushEmpty()
0xb1: Call 0xb9

0xb2: Pop(0)
0xb3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb4: PushEmpty()
0xb5: Call 0x18e

0xb6: Pop(0)
0xb7: GOTO 0xb3

0xb8: Return(); Pop(0)

0xb9: PushEmpty(bool)
0xba: Call 0x835

0xbb: Pop(0)
0xbc: Pop(1); Push((bool) Stack[-1] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0x9be

0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: PushEmpty(int, int)
0xc3: PushEmpty(int, object)
0xc4: Stack[-1] = Stack[-5]
0xc5: Call 0x9b5

0xc6: Stack[-3] = Stack[-2]
0xc7: Pop(2)
0xc8: Push((int) 0)
0xc9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcb: Push((int) 1)
0xcc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: PushEmpty()
0xcf: Call 0x14d

0xd0: Pop(0)
0xd1: PushEmpty(object)
0xd2: Stack[-1] = Stack[-4]
0xd3: Call 0x9b8

0xd4: Pop(1)
0xd5: Return(); Pop(2)

0xd6: PushEmpty(int, int)
0xd7: PushEmpty(int, object)
0xd8: Stack[-1] = Stack[-5]
0xd9: Call 0x963

0xda: Stack[-3] = Stack[-2]
0xdb: Pop(2)
0xdc: Push((int) 0)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdf: Push((int) 1)
0xe0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: PushEmpty()
0xe3: Call 0x14d

0xe4: Pop(0)
0xe5: PushEmpty(object)
0xe6: Stack[-1] = Stack[-4]
0xe7: Call 0x96d

0xe8: Pop(1)
0xe9: Return(); Pop(2)

0xea: PushEmpty(int, int)
0xeb: PushEmpty(bool, object, object)
0xec: Stack[-2] = Stack[-7]
0xed: Stack[-1] = Stack[-6]
0xee: Call 0xadb

0xef: Pop(2)
0xf0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf1: PushEmpty(int, object)
0xf2: Stack[-1] = Stack[-6]
0xf3: Call 0x975

0xf4: Stack[-3] = Stack[-2]
0xf5: Pop(2)
0xf6: Push((int) 0)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf9: Push((int) 1)
0xfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: PushEmpty()
0xfd: Call 0x14d

0xfe: Pop(0)
0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-5]
0x101: Call 0x97c

0x102: Pop(1)
0x103: Return(); Pop(2)

0x104: PushEmpty(int, int)
0x105: PushEmpty(int, object)
0x106: Stack[-1] = Stack[-5]
0x107: Call 0x982

0x108: Stack[-3] = Stack[-2]
0x109: Pop(2)
0x10a: Push((int) 0)
0x10b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10d: Push((int) 1)
0x10e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: PushEmpty()
0x111: Call 0x14d

0x112: Pop(0)
0x113: PushEmpty(object)
0x114: Stack[-1] = Stack[-4]
0x115: Call 0x985

0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: PushEmpty(int, int)
0x119: PushEmpty(int, string, object)
0x11a: Stack[-2] = Stack[-6]
0x11b: Stack[-1] = Stack[-7]
0x11c: Call 0x987

0x11d: Stack[-4] = Stack[-3]
0x11e: Pop(3)
0x11f: Push((int) 0)
0x120: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x122: Push((int) 1)
0x123: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call 0x14d

0x127: Pop(0)
0x128: PushEmpty(string, object)
0x129: Stack[-2] = Stack[-5]
0x12a: Stack[-1] = Stack[-6]
0x12b: Call 0x993

0x12c: Pop(2)
0x12d: Return(); Pop(2)

0x12e: PushEmpty()
0x12f: PushEmpty(object)
0x130: Stack[-1] = Stack[-2]
0x131: Call 0x166

0x132: Pop(1)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-2]
0x137: Call 0x166

0x138: Pop(1)
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: Push((int) 110)
0x13c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Return(); Pop(0)

0x13f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x140: Push((int) 110)
0x141: @ KillTimer(Stack[-1])
0x142: Pop(1)
0x143: @ ResetAAS()
0x144: Pop(0)
0x145: Return(); Pop(0)

0x146: PushEmpty()
0x147: Call 0x14d

0x148: Pop(0)
0x149: PushEmpty()
0x14a: Call 0x9be

0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: Push((int) 110)
0x14e: @ KillTimer(Stack[-1])
0x14f: Pop(1)
0x150: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x151: PushEmpty()
0x152: Call 0x1ce

0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: Push((int) 110)
0x156: @ KillTimer(Stack[-1])
0x157: Pop(1)
0x158: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x159: PushEmpty()
0x15a: Call 0x1d5

0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty()
0x15f: Call 0x14d

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x92c

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(bool, int, bool, int)
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[-7]
0x169: Call 0x7cf

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Return(); Pop(4)

0x16e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Return(); Pop(4)

0x171: @ IsPlayerActor(Stack[-5], Stack[-2])
0x172: Pop(0)
0x173: Pop(0); Push((bool) Stack[-2] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Return(); Pop(4)

0x176: PushEmpty(int, object)
0x177: Stack[-1] = Stack[-7]
0x178: Call 0x952

0x179: Stack[-3] = Stack[-2]
0x17a: Pop(2)
0x17b: Push((int) 0)
0x17c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: Push((int) 1)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: PushEmpty()
0x182: Call 0x155

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-6]
0x186: Call 0x95b

0x187: Pop(1)
0x188: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x189: Push((int) 110)
0x18a: Push((float)10.0)
0x18b: @ SetTimer(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: Return(); Pop(4)

0x18e: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x18f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x190: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x191: Push((float)0.5)
0x192: @ rand(Stack[-8], Stack[-1])
0x193: Pop(1)
0x194: @ Sleep(Stack[-7])
0x195: Pop(0)
0x196: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x198: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19a: @ GetPosition(Stack[-5])
0x19b: Pop(0)
0x19c: @ GetCameraFarDistance(Stack[-4])
0x19d: Pop(0)
0x19e: Push((float)2.5)
0x19f: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x1a0: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x1a1: Pop(0)
0x1a2: Push(Stack[-3])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1a9

0x1a5: Push((int) 1)
0x1a6: @ Sleep(Stack[-1])
0x1a7: Pop(1)
0x1a8: GOTO 0x19a

0x1a9: GOTO 0x1ab

0x1aa: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ab: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x1ac: Pop(0)
0x1ad: Pop(0); Push(( Stack[-2] != 0 )
0x1ae: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1af: @ RotatePath(Stack[-2], Stack[-1])
0x1b0: Pop(0)
0x1b1: Push(Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call 0x1dc

0x1b5: Pop(0)
0x1b6: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1b7: Pop(1)
0x1b8: Stack[-2] = 0
0x1b9: Push(Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty()
0x1bc: Push(-0, 0); TaskCall(3)
0x1bd: Call 0x251

0x1be: Pop(-0, 0); TaskReturn
0x1bf: Pop(0)
0x1c0: GOTO 0x1c4

0x1c1: Push((int) 1)
0x1c2: @ Sleep(Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-2] = 0
0x1c5: GOTO 0x196

0x1c6: Return(); Pop(14)

0x1c7: PushEmpty()
0x1c8: @ RequestClearPath(Stack[-1])
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: @ Stop()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1cf: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d0: @ Stop()
0x1d1: Pop(0)
0x1d2: @ StopGroup0()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d6: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d7: @ Stop()
0x1d8: Pop(0)
0x1d9: @ StopGroup0()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: Stack[-1] = (bool) 0
0x1dd: Return(); Pop(0)

0x1de: PushEmpty(int, int)
0x1df: PushEmpty(int, object)
0x1e0: Stack[-1] = Stack[-5]
0x1e1: Call 0x9b5

0x1e2: Stack[-3] = Stack[-2]
0x1e3: Pop(2)
0x1e4: Push((int) 0)
0x1e5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e7: Push((int) 1)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: PushEmpty()
0x1eb: Call 0x296

0x1ec: Pop(0)
0x1ed: PushEmpty(object)
0x1ee: Stack[-1] = Stack[-4]
0x1ef: Call 0x9b8

0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(int, int)
0x1f3: PushEmpty(int, object)
0x1f4: Stack[-1] = Stack[-5]
0x1f5: Call 0x963

0x1f6: Stack[-3] = Stack[-2]
0x1f7: Pop(2)
0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fb: Push((int) 1)
0x1fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fe: PushEmpty()
0x1ff: Call 0x296

0x200: Pop(0)
0x201: PushEmpty(object)
0x202: Stack[-1] = Stack[-4]
0x203: Call 0x96d

0x204: Pop(1)
0x205: Return(); Pop(2)

0x206: PushEmpty(int, int)
0x207: PushEmpty(bool, object, object)
0x208: Stack[-2] = Stack[-7]
0x209: Stack[-1] = Stack[-6]
0x20a: Call 0xadb

0x20b: Pop(2)
0x20c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20d: PushEmpty(int, object)
0x20e: Stack[-1] = Stack[-6]
0x20f: Call 0x975

0x210: Stack[-3] = Stack[-2]
0x211: Pop(2)
0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x215: Push((int) 1)
0x216: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x218: PushEmpty()
0x219: Call 0x296

0x21a: Pop(0)
0x21b: PushEmpty(object)
0x21c: Stack[-1] = Stack[-5]
0x21d: Call 0x97c

0x21e: Pop(1)
0x21f: Return(); Pop(2)

0x220: PushEmpty(int, int)
0x221: PushEmpty(int, object)
0x222: Stack[-1] = Stack[-5]
0x223: Call 0x982

0x224: Stack[-3] = Stack[-2]
0x225: Pop(2)
0x226: Push((int) 0)
0x227: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x229: Push((int) 1)
0x22a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22c: PushEmpty()
0x22d: Call 0x296

0x22e: Pop(0)
0x22f: PushEmpty(object)
0x230: Stack[-1] = Stack[-4]
0x231: Call 0x985

0x232: Pop(1)
0x233: Return(); Pop(2)

0x234: PushEmpty(int, int)
0x235: PushEmpty(int, string, object)
0x236: Stack[-2] = Stack[-6]
0x237: Stack[-1] = Stack[-7]
0x238: Call 0x987

0x239: Stack[-4] = Stack[-3]
0x23a: Pop(3)
0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23e: Push((int) 1)
0x23f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: PushEmpty()
0x242: Call 0x296

0x243: Pop(0)
0x244: PushEmpty(string, object)
0x245: Stack[-2] = Stack[-5]
0x246: Stack[-1] = Stack[-6]
0x247: Call 0x993

0x248: Pop(2)
0x249: Return(); Pop(2)

0x24a: PushEmpty()
0x24b: Call 0x296

0x24c: Pop(0)
0x24d: PushEmpty()
0x24e: Call 0x9be

0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x252: @ WaitForAnimEnd()
0x253: Pop(0)
0x254: PushEmpty(bool)
0x255: Call 0x835

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(14)

0x25a: PushEmpty(int)
0x25b: Call 0x941

0x25c: Stack[-8] = Stack[-1]
0x25d: Pop(1)
0x25e: Stack[-6] = (int) 0
0x25f: PushEmpty(bool)
0x260: Stack[-1] = (bool) 0
0x261: Push((int) 5)
0x262: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: PushEmpty(bool)
0x265: Call 0x835

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x26a: Push((int) 3)
0x26b: @ irand(Stack[-6], Stack[-1])
0x26c: Pop(1)
0x26d: Push((int) 0)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x270: Push(Stack[-7])
0x271: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x272: @ irand(Stack[-4], Stack[-7])
0x273: Pop(0)
0x274: Push("all")
0x275: PushEmpty(string, int)
0x276: Stack[-1] = Stack[-7]
0x277: Call 0x93a

0x278: Pop(1)
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: @ WaitForAnimEnd(Stack[-3])
0x27c: Pop(0)
0x27d: Pop(0); Push((bool) Stack[-3] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x295

0x280: GOTO 0x292

0x281: Push((int) 1)
0x282: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x284: Push((int) 4)
0x285: @ rand(Stack[-3], Stack[-1])
0x286: Pop(1)
0x287: Push((int) 1)
0x288: Pop(1); Push(Stack[-3] + Stack[-1]);
0x289: @ Sleep(Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x295

0x28e: GOTO 0x292

0x28f: Push(Stack[-6])
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x295

0x292: Push((int) 1)
0x293: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x294: GOTO 0x25f

0x295: Return(); Pop(14)

0x296: @ StopAnimation()
0x297: Pop(0)
0x298: @ StopGroup0()
0x299: Pop(0)
0x29a: Return(); Pop(0)

0x29b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x29c: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x29d: PushEmpty()
0x29e: Call 0x2ce

0x29f: Pop(0)
0x2a0: @ GetDirection(Stack[-3])
0x2a1: Pop(0)
0x2a2: PushEmpty(cvector, object)
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call 0x74b

0x2a5: Stack[-4] = Stack[-2]
0x2a6: Pop(2)
0x2a7: PushEmpty(float, cvector, cvector)
0x2a8: Stack[-2] = Stack[-6]
0x2a9: Stack[-1] = Stack[-5]
0x2aa: Call 0x8fd

0x2ab: Pop(2)
0x2ac: Push((int) 0)
0x2ad: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: PushEmpty(object)
0x2b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b1: Call 0x82a

0x2b2: Pop(1)
0x2b3: Stack[-1] = (bool) 1
0x2b4: GOTO 0x2b8

0x2b5: Push((float)1.5)
0x2b6: @ Sleep(Stack[-1], Stack[-2])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2ba: PushEmpty(object)
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0x82a

0x2bd: Pop(1)
0x2be: Push((int) 111)
0x2bf: Push((float)0.5)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: Push((float)5.0)
0x2c3: @ Sleep(Stack[-1])
0x2c4: Pop(1)
0x2c5: Push((int) 111)
0x2c6: @ KillTimer(Stack[-1])
0x2c7: Pop(1)
0x2c8: @ StopAsync()
0x2c9: Pop(0)
0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(object)
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call 0x8bc

0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(int, int)
0x2d4: PushEmpty(int, object)
0x2d5: Stack[-1] = Stack[-5]
0x2d6: Call 0x9b5

0x2d7: Stack[-3] = Stack[-2]
0x2d8: Pop(2)
0x2d9: Push((int) 0)
0x2da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2dc: Push((int) 1)
0x2dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: PushEmpty()
0x2e0: Call 0x33f

0x2e1: Pop(0)
0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[-4]
0x2e4: Call 0x9b8

0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, int)
0x2e8: PushEmpty(int, object)
0x2e9: Stack[-1] = Stack[-5]
0x2ea: Call 0x963

0x2eb: Stack[-3] = Stack[-2]
0x2ec: Pop(2)
0x2ed: Push((int) 0)
0x2ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f0: Push((int) 1)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: PushEmpty()
0x2f4: Call 0x33f

0x2f5: Pop(0)
0x2f6: PushEmpty(object)
0x2f7: Stack[-1] = Stack[-4]
0x2f8: Call 0x96d

0x2f9: Pop(1)
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, int)
0x2fc: PushEmpty(bool, object, object)
0x2fd: Stack[-2] = Stack[-7]
0x2fe: Stack[-1] = Stack[-6]
0x2ff: Call 0xadb

0x300: Pop(2)
0x301: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x302: PushEmpty(int, object)
0x303: Stack[-1] = Stack[-6]
0x304: Call 0x975

0x305: Stack[-3] = Stack[-2]
0x306: Pop(2)
0x307: Push((int) 0)
0x308: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30a: Push((int) 1)
0x30b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: PushEmpty()
0x30e: Call 0x33f

0x30f: Pop(0)
0x310: PushEmpty(object)
0x311: Stack[-1] = Stack[-5]
0x312: Call 0x97c

0x313: Pop(1)
0x314: Return(); Pop(2)

0x315: PushEmpty(int, int)
0x316: PushEmpty(int, object)
0x317: Stack[-1] = Stack[-5]
0x318: Call 0x982

0x319: Stack[-3] = Stack[-2]
0x31a: Pop(2)
0x31b: Push((int) 0)
0x31c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x321: PushEmpty()
0x322: Call 0x33f

0x323: Pop(0)
0x324: PushEmpty(object)
0x325: Stack[-1] = Stack[-4]
0x326: Call 0x985

0x327: Pop(1)
0x328: Return(); Pop(2)

0x329: PushEmpty(int, int)
0x32a: PushEmpty(int, string, object)
0x32b: Stack[-2] = Stack[-6]
0x32c: Stack[-1] = Stack[-7]
0x32d: Call 0x987

0x32e: Stack[-4] = Stack[-3]
0x32f: Pop(3)
0x330: Push((int) 0)
0x331: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x333: Push((int) 1)
0x334: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x336: PushEmpty()
0x337: Call 0x33f

0x338: Pop(0)
0x339: PushEmpty(string, object)
0x33a: Stack[-2] = Stack[-5]
0x33b: Stack[-1] = Stack[-6]
0x33c: Call 0x993

0x33d: Pop(2)
0x33e: Return(); Pop(2)

0x33f: @ StopGroup0()
0x340: Pop(0)
0x341: @ StopAsync()
0x342: Pop(0)
0x343: Push("head")
0x344: @ UnlookAsync(Stack[-1])
0x345: Pop(1)
0x346: Push((int) 111)
0x347: @ KillTimer(Stack[-1])
0x348: Pop(1)
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty()
0x34c: Call 0x33f

0x34d: Pop(0)
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-2]
0x350: Call 0x92c

0x351: Pop(1)
0x352: Return(); Pop(0)

0x353: PushEmpty(cvector, cvector, cvector, cvector)
0x354: Push((int) 111)
0x355: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(4)

0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35a: Call 0x7cf

0x35b: Pop(1)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35e: PushEmpty()
0x35f: Call 0x33f

0x360: Pop(0)
0x361: Return(); Pop(4)

0x362: @ GetDirection(Stack[-2])
0x363: Pop(0)
0x364: PushEmpty(cvector, object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call 0x74b

0x367: Stack[-3] = Stack[-2]
0x368: Pop(2)
0x369: PushEmpty(float, cvector, cvector)
0x36a: Stack[-2] = Stack[-5]
0x36b: Stack[-1] = Stack[-4]
0x36c: Call 0x8fd

0x36d: Pop(2)
0x36e: Push((float)0.5)
0x36f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x371: PushEmpty(object)
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call 0x82a

0x374: Pop(1)
0x375: Return(); Pop(4)

0x376: PushEmpty()
0x377: Call 0x33f

0x378: Pop(0)
0x379: PushEmpty()
0x37a: Call 0x9be

0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(object, bool, float)
0x37f: Stack[-3] = Stack[-4]
0x380: Stack[-2] = (bool) 1
0x381: Stack[-1] = (float) 180.0
0x382: Call 0x38b

0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: Stack[-3] = (float) 0.1
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: Stack[-3] = (int) 0
0x38a: Return(); Pop(0)

0x38b: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x38c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x38d: Push("all")
0x38e: Push("attack_begin")
0x38f: Push((int) 1)
0x390: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x391: Pop(2); Push(Stack[-2] + Stack[-1]);
0x392: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x393: Pop(2)
0x394: Pop(0); Push((bool) Stack[-10] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x39a

0x397: Push((int) 1)
0x398: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x399: GOTO 0x38d

0x39a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x39b: Push("attack")
0x39c: Push((int) 1)
0x39d: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x39e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39f: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x3a0: Pop(1)
0x3a1: Pop(0); Push((bool) Stack[-9] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a7

0x3a4: Push((int) 1)
0x3a5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a6: GOTO 0x39b

0x3a7: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x3a8: Push("@GetAttackDistance")
0x3a9: Push((int) 1)
0x3aa: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: @@ GetAttackDistance(Stack[-8])
0x3ad: Pop(0)
0x3ae: Push((int) 50)
0x3af: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x3b0: GOTO 0x3b2

0x3b1: Stack[-8] = Stack[-21]
0x3b2: Push((int) 150)
0x3b3: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Stack[-8] = (int) 150
0x3b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x3b8: @ IsPlayerActor(Stack[-0], Stack[-5])
0x3b9: Pop(0)
0x3ba: Push(Stack[-22])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-4] = (bool) 0
0x3bd: GOTO 0x3bf

0x3be: Stack[-4] = (bool) 1
0x3bf: PushEmpty(bool)
0x3c0: Stack[-1] = (bool) 0
0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c3: Call 0x7cf

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[-1] = (bool) 1
0x3c9: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x3ca: @@ GetPFPosition(Stack[-7])
0x3cb: Pop(0)
0x3cc: @ GetPFPosition(Stack[-6])
0x3cd: Pop(0)
0x3ce: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3cf: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3d0: Push((float)400.0)
0x3d1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3d2: Push((float)400.0)
0x3d3: Pop(1); Push(Stack[-1] + Stack[-10]);
0x3d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d7: PushEmpty(bool, object, float, float, bool, bool)
0x3d8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Stack[-4] = Stack[-14]
0x3da: Stack[-3] = (float) 3000.0
0x3db: Stack[-2] = (bool) 1
0x3dc: Stack[-1] = (bool) 0
0x3dd: Push(-6, 2); TaskCall(6)
0x3de: Call 0x57d

0x3df: Pop(-6, 2); TaskReturn
0x3e0: Pop(5)
0x3e1: Pop(1); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: GOTO 0x447

0x3e4: Stack[-4] = (bool) 0
0x3e5: GOTO 0x446

0x3e6: Pop(0); Push(Stack[-21] * Stack[-21]);
0x3e7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x3e9: Pop(0); Push((bool) Stack[-4] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3eb: PushEmpty(object)
0x3ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ed: Call 0x82a

0x3ee: Pop(1)
0x3ef: Push("all")
0x3f0: Push("attack_on")
0x3f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: @ WaitForAnimEnd()
0x3f4: Pop(0)
0x3f5: @ StopAsync()
0x3f6: Pop(0)
0x3f7: Stack[-4] = (bool) 1
0x3f8: @ rand(Stack[-1])
0x3f9: Pop(0)
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 1
0x3fc: Push((float)0.6)
0x3fd: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3ff: PushEmpty(bool)
0x400: Call 0x543

0x401: Pop(0)
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: Stack[-1] = (bool) 0
0x404: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x405: @ Face(Stack[-0])
0x406: Pop(0)
0x407: Push("all")
0x408: Push("attack_stay")
0x409: @ PlayAnimation(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: PushEmpty(bool, float)
0x40c: Stack[-1] = Stack[-23]
0x40d: Call 0x4e7

0x40e: Pop(2)
0x40f: @ StopAsync()
0x410: Pop(0)
0x411: GOTO 0x43d

0x412: @ Face(Stack[-0])
0x413: Pop(0)
0x414: Push("all")
0x415: Push("fjump")
0x416: @ PlayAnimation(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: @ WaitForAnimEnd()
0x419: Pop(0)
0x41a: Push(CVector(0.0, 0.0, 0.0))
0x41b: @ SetSpeed(Stack[-1])
0x41c: Pop(1)
0x41d: @ Stop()
0x41e: Pop(0)
0x41f: @ StopAsync()
0x420: Pop(0)
0x421: PushEmpty(bool)
0x422: Call 0x543

0x423: Pop(0)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x428: Call 0x7cf

0x429: Pop(1)
0x42a: Pop(1); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: GOTO 0x447

0x42d: @@ GetPFPosition(Stack[-7])
0x42e: Pop(0)
0x42f: @ GetPFPosition(Stack[-6])
0x430: Pop(0)
0x431: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x432: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x433: Pop(0); Push(Stack[-21] * Stack[-21]);
0x434: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x436: PushEmpty(bool, float)
0x437: Stack[-1] = Stack[-23]
0x438: Call 0x47f

0x439: Pop(1)
0x43a: Pop(1); Push((bool) Stack[-1] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: GOTO 0x447

0x43d: GOTO 0x446

0x43e: PushEmpty(bool, float)
0x43f: Stack[-1] = Stack[-23]
0x440: Call 0x47f

0x441: Pop(1)
0x442: Pop(1); Push((bool) Stack[-1] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: GOTO 0x447

0x445: Stack[-4] = (bool) 1
0x446: GOTO 0x3bf

0x447: @ WaitForAnimEnd()
0x448: Pop(0)
0x449: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Return(); Pop(20)

0x44c: Push("all")
0x44d: Push("attack_off")
0x44e: @ PlayAnimation(Stack[-2], Stack[-1])
0x44f: Pop(2)
0x450: @ WaitForAnimEnd()
0x451: Pop(0)
0x452: Push(Stack[-5])
0x453: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x454: Push((float)2.0)
0x455: @ Sleep(Stack[-1])
0x456: Pop(1)
0x457: Return(); Pop(20)

0x458: PushEmpty(object, float, float, object, float, float)
0x459: Push((float)0.9)
0x45a: Pop(1); Push(Stack[-9] * Stack[-1]);
0x45b: @ GetVictim(Stack[-1], Stack[-4])
0x45c: Pop(1)
0x45d: @ ReportAttack(Stack[-0])
0x45e: Pop(0)
0x45f: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x460: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x461: PushEmpty(float, object, int)
0x462: Stack[-2] = Stack[-6]
0x463: Stack[-1] = Stack[-10]
0x464: Call 0x385

0x465: Stack[-5] = Stack[-3]
0x466: Pop(3)
0x467: PushEmpty(float, object, float, int)
0x468: Stack[-3] = Stack[-7]
0x469: Stack[-2] = Stack[-6]
0x46a: PushEmpty(int, object, int)
0x46b: Stack[-2] = Stack[-10]
0x46c: Stack[-1] = Stack[-14]
0x46d: Call 0x388

0x46e: Stack[-4] = Stack[-3]
0x46f: Pop(3)
0x470: Call 0x766

0x471: Stack[-5] = Stack[-4]
0x472: Pop(4)
0x473: PushEmpty(int)
0x474: Call 0x56e

0x475: Pop(0)
0x476: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x477: Pop(1)
0x478: PushEmpty(object, float)
0x479: Stack[-2] = Stack[-5]
0x47a: Stack[-1] = Stack[-3]
0x47b: Call 0x570

0x47c: Pop(2)
0x47d: Return(); Pop(6)

0x47e: Stack[-3] = 0
0x47f: PushEmpty(int, bool, int, bool)
0x480: @ irand(Stack[-2], Stack[-1])
0x481: Pop(0)
0x482: Push((int) 1)
0x483: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x484: @ Face(Stack[-0])
0x485: Pop(0)
0x486: Push((bool) 1)
0x487: @ SetAttackState(Stack[-1])
0x488: Pop(1)
0x489: Push("all")
0x48a: Push("attack_begin")
0x48b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x48c: @ PlayAnimation(Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: @ WaitForAnimEnd()
0x48f: Pop(0)
0x490: PushEmpty()
0x491: Call 0x54e

0x492: Pop(0)
0x493: PushEmpty(bool, object)
0x494: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x495: Call 0x7cf

0x496: Pop(1)
0x497: Pop(1); Push((bool) Stack[-1] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x499: @ StopAsync()
0x49a: Pop(0)
0x49b: Stack[-6] = (bool) 0
0x49c: Return(); Pop(4)

0x49d: PushEmpty(float, int)
0x49e: Stack[-2] = Stack[-7]
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call 0x458

0x4a1: Pop(2)
0x4a2: Push("all")
0x4a3: Push("attack_middle")
0x4a4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4a5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(2)
0x4a7: Push(Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4a9: Push("all")
0x4aa: Push("attack_middle")
0x4ab: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ad: Pop(2)
0x4ae: @ WaitForAnimEnd()
0x4af: Pop(0)
0x4b0: PushEmpty(bool, object)
0x4b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b2: Call 0x7cf

0x4b3: Pop(1)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b6: @ StopAsync()
0x4b7: Pop(0)
0x4b8: Stack[-6] = (bool) 0
0x4b9: Return(); Pop(4)

0x4ba: PushEmpty(float, int)
0x4bb: Stack[-2] = Stack[-7]
0x4bc: Stack[-1] = Stack[-4]
0x4bd: Call 0x458

0x4be: Pop(2)
0x4bf: Push((bool) 0)
0x4c0: @ SetAttackState(Stack[-1])
0x4c1: Pop(1)
0x4c2: Push("all")
0x4c3: Push("attack_end")
0x4c4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c6: Pop(2)
0x4c7: PushEmpty(bool, float)
0x4c8: Stack[-1] = (float) 0.75
0x4c9: Call 0x4cf

0x4ca: Pop(2)
0x4cb: @ StopAsync()
0x4cc: Pop(0)
0x4cd: Stack[-6] = (bool) 1
0x4ce: Return(); Pop(4)

0x4cf: PushEmpty(float, bool, float, bool)
0x4d0: @ rand(Stack[-2])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4d4: @ IsAnimationPlaying(Stack[-1])
0x4d5: Pop(0)
0x4d6: Pop(0); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: GOTO 0x4e2

0x4d9: PushEmpty(bool)
0x4da: Call 0x50f

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-6] = (bool) 1
0x4de: Return(); Pop(4)

0x4df: @ sync()
0x4e0: Pop(0)
0x4e1: GOTO 0x4d4

0x4e2: GOTO 0x4e5

0x4e3: @ WaitForAnimEnd()
0x4e4: Pop(0)
0x4e5: Stack[-6] = (bool) 0
0x4e6: Return(); Pop(4)

0x4e7: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4e8: @ IsAnimationPlaying(Stack[-5])
0x4e9: Pop(0)
0x4ea: Pop(0); Push((bool) Stack[-5] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x50d

0x4ed: PushEmpty(bool)
0x4ee: Call 0x50f

0x4ef: Pop(0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-12] = (bool) 1
0x4f2: Return(); Pop(10)

0x4f3: PushEmpty(bool, object)
0x4f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f5: Call 0x7cf

0x4f6: Pop(1)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-12] = (bool) 0
0x4fa: Return(); Pop(10)

0x4fb: @@ GetPFPosition(Stack[-4])
0x4fc: Pop(0)
0x4fd: @ GetPFPosition(Stack[-3])
0x4fe: Pop(0)
0x4ff: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x500: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x501: Pop(0); Push(Stack[-11] * Stack[-11]);
0x502: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x504: PushEmpty(bool, float)
0x505: Stack[-1] = Stack[-13]
0x506: Call 0x47f

0x507: Pop(2)
0x508: Stack[-12] = (bool) 1
0x509: Return(); Pop(10)

0x50a: @ sync()
0x50b: Pop(0)
0x50c: GOTO 0x4e8

0x50d: Stack[-12] = (bool) 0
0x50e: Return(); Pop(10)

0x50f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x512: Call 0x7cf

0x513: Pop(1)
0x514: Pop(1); Push((bool) Stack[-1] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-11] = (bool) 0
0x517: Return(); Pop(10)

0x518: PushEmpty(bool)
0x519: Call 0x543

0x51a: Pop(0)
0x51b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51c: @@ GetPFPosition(Stack[-5])
0x51d: Pop(0)
0x51e: @ GetPFPosition(Stack[-4])
0x51f: Pop(0)
0x520: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x521: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x522: @@ GetAttackDistance(Stack[-1])
0x523: Pop(0)
0x524: Push((int) 50)
0x525: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x526: Pop(0); Push(Stack[-1] * Stack[-1]);
0x527: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: PushEmpty()
0x52a: Call 0x530

0x52b: Pop(0)
0x52c: Stack[-11] = (bool) 1
0x52d: Return(); Pop(10)

0x52e: Stack[-11] = (bool) 0
0x52f: Return(); Pop(10)

0x530: PushEmpty(cvector, cvector, cvector, cvector)
0x531: @ Face(Stack[-0])
0x532: Pop(0)
0x533: Push("all")
0x534: Push("bjump")
0x535: @ PlayAnimation(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: @@ GetPFPosition(Stack[-2])
0x538: Pop(0)
0x539: @ GetPFPosition(Stack[-1])
0x53a: Pop(0)
0x53b: @ WaitForAnimEnd()
0x53c: Pop(0)
0x53d: @ StopAsync()
0x53e: Pop(0)
0x53f: Push(CVector(0.0, 0.0, 0.0))
0x540: @ SetSpeed(Stack[-1])
0x541: Pop(1)
0x542: Return(); Pop(4)

0x543: PushEmpty(bool, bool)
0x544: Push("IsAttacking")
0x545: Push((int) 1)
0x546: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x547: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x548: @@ IsAttacking(Stack[-1])
0x549: Pop(0)
0x54a: Stack[-3] = Stack[-1]
0x54b: Return(); Pop(2)

0x54c: Stack[-3] = (bool) 0
0x54d: Return(); Pop(2)

0x54e: PushEmpty(float, int, float, int)
0x54f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: Return(); Pop(4)

0x552: Push( Stack[4 + Tasks[-1].StackPointer] )
0x553: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x554: Push((int) -1)
0x555: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x556: Push((int) 0)
0x557: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x559: Return(); Pop(4)

0x55a: @ rand(Stack[-2])
0x55b: Pop(0)
0x55c: PushEmpty(float)
0x55d: Call 0x574

0x55e: Pop(0)
0x55f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x561: @ irand(Stack[-1], Stack[-2])
0x562: Pop(0)
0x563: Push((int) 1)
0x564: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x565: Push("attack")
0x566: Pop(1); Push(Stack[-1] + Stack[-2]);
0x567: @ Speak(Stack[-1])
0x568: Pop(1)
0x569: PushEmpty(int)
0x56a: Call 0x572

0x56b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x56c: Pop(1)
0x56d: Return(); Pop(4)

0x56e: Stack[-1] = (int) 0
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: Return(); Pop(0)

0x572: Stack[-1] = (int) 1
0x573: Return(); Pop(0)

0x574: Stack[-1] = (float) 0.5
0x575: Return(); Pop(0)

0x576: PushEmpty()
0x577: Call 0x5f9

0x578: Pop(0)
0x579: PushEmpty()
0x57a: Call 0x9be

0x57b: Pop(0)
0x57c: Return(); Pop(0)

0x57d: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x57e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x57f: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x580: Stack[-7] = Stack[-17]
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[-23]
0x583: Call 0x609

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-22] = (bool) 0
0x588: Return(); Pop(16)

0x589: @@ GetPosition(Stack[-5])
0x58a: Pop(0)
0x58b: @ GetPosition(Stack[-4])
0x58c: Pop(0)
0x58d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x58e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x58f: PushEmpty(bool)
0x590: Stack[-1] = (bool) 0
0x591: Push((int) 0)
0x592: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x594: Pop(0); Push(Stack[-20] * Stack[-20]);
0x595: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: Stack[-1] = (bool) 1
0x598: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x599: @ Stop()
0x59a: Pop(0)
0x59b: Stack[-22] = (bool) 0
0x59c: Return(); Pop(16)

0x59d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x59e: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5a0: @@ GetPFPosition(Stack[-5])
0x5a1: Pop(0)
0x5a2: @ FindPathTo(Stack[-1], Stack[-5])
0x5a3: Pop(0)
0x5a4: Pop(0); Push(( Stack[-1] != 0 )
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-6] = Stack[-1]
0x5a7: Stack[-1] = 0
0x5a8: Pop(0); Push(( Stack[-6] != 0 )
0x5a9: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5aa: Push(Stack[-7])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ac: Stack[-7] = (bool) 0
0x5ad: @ RotatePath(Stack[-6], Stack[-8])
0x5ae: Pop(0)
0x5af: Pop(0); Push((bool) Stack[-8] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: GOTO 0x5e1

0x5b2: Push((int) 0)
0x5b3: Push((float)0.3)
0x5b4: @ SetTimer(Stack[-2], Stack[-1])
0x5b5: Pop(2)
0x5b6: PushEmpty(string)
0x5b7: Call 0x610

0x5b8: Pop(0)
0x5b9: PushEmpty(string)
0x5ba: Call 0x612

0x5bb: Pop(0)
0x5bc: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5bd: Pop(2)
0x5be: Pop(0); Push((bool) Stack[-8] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c2: Stack[-6] = 0
0x5c3: GOTO 0x5e1

0x5c4: GOTO 0x5c6

0x5c5: GOTO 0x5e0

0x5c6: GOTO 0x5c8

0x5c7: Stack[-6] = 0
0x5c8: GOTO 0x5d9

0x5c9: Push((int) 0)
0x5ca: @ KillTimer(Stack[-1])
0x5cb: Pop(1)
0x5cc: Push((float)0.5)
0x5cd: @ Sleep(Stack[-1], Stack[-9])
0x5ce: Pop(1)
0x5cf: Pop(0); Push((bool) Stack[-8] == 0)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-6] = 0
0x5d4: GOTO 0x5e1

0x5d5: Push((int) 0)
0x5d6: Push((float)0.3)
0x5d7: @ SetTimer(Stack[-2], Stack[-1])
0x5d8: Pop(2)
0x5d9: Stack[-1] = 0
0x5da: GOTO 0x5df

0x5db: Push((int) 0)
0x5dc: @ KillTimer(Stack[-1])
0x5dd: Pop(1)
0x5de: GOTO 0x5e1

0x5df: Stack[-6] = 0
0x5e0: GOTO 0x581

0x5e1: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5e2: Return(); Pop(16)

0x5e3: PushEmpty()
0x5e4: Push((int) 0)
0x5e5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Return(); Pop(0)

0x5e8: PushEmpty(bool, object)
0x5e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Call 0x609

0x5eb: Pop(1)
0x5ec: Pop(1); Push((bool) Stack[-1] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5ef: Push((int) 0)
0x5f0: @ KillTimer(Stack[-1])
0x5f1: Pop(1)
0x5f2: @ Stop()
0x5f3: Pop(0)
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: @ RequestClearPath(Stack[-1])
0x5f7: Pop(0)
0x5f8: Return(); Pop(0)

0x5f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5fa: Push((int) 0)
0x5fb: @ KillTimer(Stack[-1])
0x5fc: Pop(1)
0x5fd: @ Stop()
0x5fe: Pop(0)
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty()
0x602: Call 0x5f9

0x603: Pop(0)
0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[-2]
0x606: Call 0x92c

0x607: Pop(1)
0x608: Return(); Pop(0)

0x609: PushEmpty()
0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[-3]
0x60c: Call 0x7cf

0x60d: Stack[-4] = Stack[-2]
0x60e: Pop(2)
0x60f: Return(); Pop(0)

0x610: Stack[-1] = "walk"
0x611: Return(); Pop(0)

0x612: Stack[-1] = "run"
0x613: Return(); Pop(0)

0x614: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x615: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x616: PushEmpty(bool, object)
0x617: Stack[-1] = Stack[-11]
0x618: Call 0x83a

0x619: Pop(1)
0x61a: Pop(1); Push((bool) Stack[-1] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-10] = (int) -2
0x61d: Return(); Pop(8)

0x61e: @ CreateDialog(Stack[-4])
0x61f: Pop(0)
0x620: PushEmpty(int)
0x621: Call 0xaa2

0x622: Pop(0)
0x623: @@ SetNPCName(Stack[-1])
0x624: Pop(1)
0x625: PushEmpty(string)
0x626: Call 0xaa4

0x627: Pop(0)
0x628: @@ SetPhoto(Stack[-1])
0x629: Pop(1)
0x62a: PushEmpty(int)
0x62b: Call 0x9bf

0x62c: Pop(0)
0x62d: @@ SetPlayerName(Stack[-1])
0x62e: Pop(1)
0x62f: Stack[-2] = (int) -1
0x630: @ IsOverrideActive(Stack[-3])
0x631: Pop(0)
0x632: Push(Stack[-3])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-10] = (int) -2
0x635: Return(); Pop(8)

0x636: @ DoDialog(Stack[-4])
0x637: Pop(0)
0x638: PushEmpty(object, object)
0x639: Stack[-2] = Stack[-11]
0x63a: Stack[-1] = Stack[-6]
0x63b: Push(-2, 4); TaskCall(8)
0x63c: Call 0x653

0x63d: Pop(-2, 4); TaskReturn
0x63e: Pop(2)
0x63f: @@ IsDialogEnd(Stack[-1])
0x640: Pop(0)
0x641: Pop(0); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x643: @ sync()
0x644: Pop(0)
0x645: @@ IsDialogEnd(Stack[-1])
0x646: Pop(0)
0x647: GOTO 0x641

0x648: PushEmpty(object)
0x649: Stack[-1] = Stack[-10]
0x64a: Call 0x872

0x64b: Pop(1)
0x64c: @ StopDialog(Stack[-4])
0x64d: Pop(0)
0x64e: @@ GetReturnValue(Stack[-2])
0x64f: Pop(0)
0x650: Stack[-10] = Stack[-2]
0x651: Return(); Pop(8)

0x652: Stack[-4] = 0
0x653: PushEmpty()
0x654: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x655: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x656: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x657: Push((int) 1)
0x658: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call 0x6ab

0x65c: Pop(1)
0x65d: Push((int) 14593)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 14594)
0x663: Push((int) 15829)
0x664: Push((int) 15828)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Push((int) 14598)
0x668: Push((int) 15829)
0x669: Push((int) 15832)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Push((int) 14599)
0x66d: Push((int) 15835)
0x66e: Push((int) 15834)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: GOTO 0x68d

0x672: PushEmpty(string)
0x673: Stack[-1] = "Neutral"
0x674: Call 0x6ab

0x675: Pop(1)
0x676: Push((int) 14602)
0x677: @@ SetMessage(Stack[-1])
0x678: Pop(1)
0x679: @@ ClearReplies()
0x67a: Pop(0)
0x67b: Push((int) 14603)
0x67c: Push((int) 15839)
0x67d: Push((int) 15838)
0x67e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: Push((int) 14607)
0x681: Push((int) 15839)
0x682: Push((int) 15842)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Push((int) 14608)
0x686: Push((int) -1)
0x687: Push((int) 15844)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: GOTO 0x68d

0x68b: Return(); Pop(0)

0x68c: GOTO 0x657

0x68d: PushEmpty(bool)
0x68e: Call 0xaa6

0x68f: Pop(0)
0x690: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x691: @ lshWaitForAnimEnd()
0x692: Pop(0)
0x693: Push( Stack[3 + Tasks[-1].StackPointer] )
0x694: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x695: GOTO 0x69b

0x696: PushEmpty(string)
0x697: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x698: Call 0x8aa

0x699: Pop(1)
0x69a: GOTO 0x691

0x69b: GOTO 0x6aa

0x69c: Push("all")
0x69d: Push("idle")
0x69e: @ PlayAnimation(Stack[-2], Stack[-1])
0x69f: Pop(2)
0x6a0: @ WaitForAnimEnd()
0x6a1: Pop(0)
0x6a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: GOTO 0x6aa

0x6a5: Push("all")
0x6a6: Push("idle")
0x6a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a8: Pop(2)
0x6a9: GOTO 0x6a0

0x6aa: Return(); Pop(0)

0x6ab: PushEmpty()
0x6ac: PushEmpty(bool)
0x6ad: Call 0xaa6

0x6ae: Pop(0)
0x6af: Pop(1); Push((bool) Stack[-1] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b1: Return(); Pop(0)

0x6b2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b4: Return(); Pop(0)

0x6b5: PushEmpty(string)
0x6b6: Stack[-1] = Stack[-2]
0x6b7: Call 0x8aa

0x6b8: Pop(1)
0x6b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty()
0x6bc: Push((int) 1)
0x6bd: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x6be: PushEmpty()
0x6bf: Call 0x8c7

0x6c0: Pop(0)
0x6c1: Push((int) 15827)
0x6c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6c4: PushEmpty(string)
0x6c5: Stack[-1] = "Neutral"
0x6c6: Call 0x6ab

0x6c7: Pop(1)
0x6c8: Push((int) 14593)
0x6c9: @@ SetMessage(Stack[-1])
0x6ca: Pop(1)
0x6cb: @@ ClearReplies()
0x6cc: Pop(0)
0x6cd: Push((int) 14594)
0x6ce: Push((int) 15829)
0x6cf: Push((int) 15828)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Push((int) 14598)
0x6d3: Push((int) 15829)
0x6d4: Push((int) 15832)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Push((int) 14599)
0x6d8: Push((int) 15835)
0x6d9: Push((int) 15834)
0x6da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(3)
0x6dc: Return(); Pop(0)

0x6dd: PushEmpty(string)
0x6de: Stack[-1] = "Neutral"
0x6df: Call 0x6ab

0x6e0: Pop(1)
0x6e1: Push((int) 14602)
0x6e2: @@ SetMessage(Stack[-1])
0x6e3: Pop(1)
0x6e4: @@ ClearReplies()
0x6e5: Pop(0)
0x6e6: Push((int) 14603)
0x6e7: Push((int) 15839)
0x6e8: Push((int) 15838)
0x6e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(3)
0x6eb: Push((int) 14607)
0x6ec: Push((int) 15839)
0x6ed: Push((int) 15842)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: Push((int) 14608)
0x6f1: Push((int) -1)
0x6f2: Push((int) 15844)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Return(); Pop(0)

0x6f6: Push((int) 15839)
0x6f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f8: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x6f9: PushEmpty(string)
0x6fa: Stack[-1] = "Neutral"
0x6fb: Call 0x6ab

0x6fc: Pop(1)
0x6fd: Push((int) 14604)
0x6fe: @@ SetMessage(Stack[-1])
0x6ff: Pop(1)
0x700: @@ ClearReplies()
0x701: Pop(0)
0x702: Push((int) 14605)
0x703: Push((int) -1)
0x704: Push((int) 15840)
0x705: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x706: Pop(3)
0x707: Push((int) 14606)
0x708: Push((int) -1)
0x709: Push((int) 15841)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Return(); Pop(0)

0x70d: Push((int) 15835)
0x70e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x710: PushEmpty(string)
0x711: Stack[-1] = "Neutral"
0x712: Call 0x6ab

0x713: Pop(1)
0x714: Push((int) 14600)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 14601)
0x71a: Push((int) -1)
0x71b: Push((int) 15836)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Return(); Pop(0)

0x71f: Push((int) 15829)
0x720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x722: PushEmpty(string)
0x723: Stack[-1] = "Neutral"
0x724: Call 0x6ab

0x725: Pop(1)
0x726: Push((int) 14595)
0x727: @@ SetMessage(Stack[-1])
0x728: Pop(1)
0x729: @@ ClearReplies()
0x72a: Pop(0)
0x72b: Push((int) 14596)
0x72c: Push((int) -1)
0x72d: Push((int) 15830)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Push((int) 14597)
0x731: Push((int) -1)
0x732: Push((int) 15831)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Return(); Pop(0)

0x736: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x737: PushEmpty(bool)
0x738: Call 0xaa6

0x739: Pop(0)
0x73a: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73b: @ lshStopAnimation()
0x73c: Pop(0)
0x73d: GOTO 0x740

0x73e: @ StopAnimation()
0x73f: Pop(0)
0x740: Return(); Pop(0)

0x741: GOTO 0x6bc

0x742: Return(); Pop(0)

0x743: PushEmpty()
0x744: Push((int) 1)
0x745: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x747: Stack[-2] = "fire"
0x748: Return(); Pop(0)

0x749: Stack[-2] = "phys"
0x74a: Return(); Pop(0)

0x74b: PushEmpty(cvector, cvector, cvector, cvector)
0x74c: @ GetPosition(Stack[-2])
0x74d: Pop(0)
0x74e: @@ GetPosition(Stack[-1])
0x74f: Pop(0)
0x750: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x751: Return(); Pop(4)

0x752: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x753: @ GetPosition(Stack[-3])
0x754: Pop(0)
0x755: @@ GetPosition(Stack[-2])
0x756: Pop(0)
0x757: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x758: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x759: Return(); Pop(6)

0x75a: PushEmpty(bool, bool)
0x75b: Push("HasProperty")
0x75c: Push((int) 2)
0x75d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x75e: Pop(1); Push((bool) Stack[-1] == 0)
0x75f: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x760: Stack[-5] = (bool) 0
0x761: Return(); Pop(2)

0x762: @@ HasProperty(Stack[-3], Stack[-1])
0x763: Pop(0)
0x764: Stack[-5] = Stack[-1]
0x765: Return(); Pop(2)

0x766: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x767: PushEmpty(bool, object, string)
0x768: Stack[-2] = Stack[-18]
0x769: Stack[-1] = "health"
0x76a: Call 0x75a

0x76b: Pop(2)
0x76c: Pop(1); Push((bool) Stack[-1] == 0)
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-16] = (float) 0.0
0x76f: Return(); Pop(12)

0x770: PushEmpty(bool, object, string)
0x771: Stack[-2] = Stack[-18]
0x772: Stack[-1] = "armor"
0x773: Call 0x75a

0x774: Pop(2)
0x775: Pop(1); Push((bool) Stack[-1] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x777: Stack[-6] = (int) 0
0x778: GOTO 0x77c

0x779: Push("armor")
0x77a: @@ GetProperty(Stack[-1], Stack[-7])
0x77b: Pop(1)
0x77c: Push("armor_")
0x77d: PushEmpty(string, int)
0x77e: Stack[-1] = Stack[-16]
0x77f: Call 0x743

0x780: Pop(1)
0x781: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x782: PushEmpty(bool, object, string)
0x783: Stack[-2] = Stack[-18]
0x784: Stack[-1] = Stack[-8]
0x785: Call 0x75a

0x786: Pop(2)
0x787: Pop(1); Push((bool) Stack[-1] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-4] = (int) 0
0x78a: GOTO 0x78d

0x78b: @@ GetProperty(Stack[-5], Stack[-4])
0x78c: Pop(0)
0x78d: PushEmpty(float, float, float)
0x78e: Pop(0); Push(Stack[-9] + Stack[-7]);
0x78f: Push((float)100.0)
0x790: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x791: Stack[-1] = (int) 1
0x792: Call 0x8d8

0x793: Stack[-6] = Stack[-3]
0x794: Pop(3)
0x795: Push("health")
0x796: @@ GetProperty(Stack[-1], Stack[-3])
0x797: Pop(1)
0x798: Push((int) 1)
0x799: Pop(1); Push(Stack[-1] - Stack[-4]);
0x79a: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x79b: Push("health")
0x79c: PushEmpty(float, float, float, float)
0x79d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x79e: Stack[-2] = (int) 0
0x79f: Stack[-1] = (int) 1
0x7a0: Call 0x8df

0x7a1: Pop(3)
0x7a2: @@ SetProperty(Stack[-2], Stack[-1])
0x7a3: Pop(2)
0x7a4: Stack[-16] = Stack[-1]
0x7a5: Return(); Pop(12)

0x7a6: PushEmpty(bool, bool)
0x7a7: @@ IsDead(Stack[-1])
0x7a8: Pop(0)
0x7a9: Stack[-4] = Stack[-1]
0x7aa: Return(); Pop(2)

0x7ab: PushEmpty(object, object, object, object)
0x7ac: Pop(0); Push((bool) Stack[-5] == 0)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ae: Stack[-6] = (bool) 0
0x7af: Return(); Pop(4)

0x7b0: PushEmpty(bool)
0x7b1: Stack[-1] = (bool) 0
0x7b2: Push("IsDead")
0x7b3: Push((int) 1)
0x7b4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x7b5: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7b6: PushEmpty(bool, object)
0x7b7: Stack[-1] = Stack[-8]
0x7b8: Call 0x7a6

0x7b9: Pop(1)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7bb: Stack[-1] = (bool) 1
0x7bc: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bd: Stack[-6] = (bool) 0
0x7be: Return(); Pop(4)

0x7bf: @ GetScene(Stack[-2])
0x7c0: Pop(0)
0x7c1: Pop(0); Push((bool) Stack[-2] == 0)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-6] = (bool) 0
0x7c4: Return(); Pop(4)

0x7c5: @@ GetScene(Stack[-1])
0x7c6: Pop(0)
0x7c7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c9: Stack[-6] = (bool) 0
0x7ca: Return(); Pop(4)

0x7cb: Stack[-6] = (bool) 1
0x7cc: Return(); Pop(4)

0x7cd: Stack[-1] = 0
0x7ce: Stack[-2] = 0
0x7cf: PushEmpty(int, int)
0x7d0: PushEmpty(bool, object)
0x7d1: Stack[-1] = Stack[-5]
0x7d2: Call 0x7ab

0x7d3: Pop(1)
0x7d4: Pop(1); Push((bool) Stack[-1] == 0)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-4] = (bool) 0
0x7d7: Return(); Pop(2)

0x7d8: PushEmpty(bool, object, string)
0x7d9: Stack[-2] = Stack[-6]
0x7da: Stack[-1] = "noaccess"
0x7db: Call 0x75a

0x7dc: Pop(2)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-4] = (bool) 1
0x7e0: Return(); Pop(2)

0x7e1: Push("noaccess")
0x7e2: @@ GetProperty(Stack[-1], Stack[-2])
0x7e3: Pop(1)
0x7e4: Push((int) 0)
0x7e5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7e6: Return(); Pop(2)

0x7e7: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x7e8: PushEmpty(bool)
0x7e9: Stack[-1] = (bool) 0
0x7ea: Push((int) 4)
0x7eb: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ed: Push((int) 5)
0x7ee: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Stack[-1] = (bool) 1
0x7f1: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7f2: @ GetScene(Stack[-10])
0x7f3: Pop(0)
0x7f4: @ GetPosition(Stack[-8])
0x7f5: Pop(0)
0x7f6: @ GetEyesHeight(Stack[-7])
0x7f7: Pop(0)
0x7f8: Push(CvectorIndex(Stack[-8], 1))
0x7f9: Push((int) 2)
0x7fa: Pop(1); Push(Stack[-9] / Stack[-1]);
0x7fb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x7fc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7fd: Push("scripted")
0x7fe: Push(CVector(0.0, 0.0, 1.0))
0x7ff: Push("blood.xml")
0x800: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Stack[-9] = 0
0x803: Stack[-10] = 0
0x804: Pop(0); Push((bool) Stack[-23] == 0)
0x805: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x806: Return(); Pop(20)

0x807: @ GetSecondaryAnimationType(Stack[-6])
0x808: Pop(0)
0x809: Push((int) 0)
0x80a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: Return(); Pop(20)

0x80d: @@ GetPosition(Stack[-5])
0x80e: Pop(0)
0x80f: @ GetPosition(Stack[-4])
0x810: Pop(0)
0x811: @ GetDirection(Stack[-3])
0x812: Pop(0)
0x813: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x814: Push(CvectorIndex(Stack[-2], 0))
0x815: Push(CvectorIndex(Stack[-4], 0))
0x816: Pop(2); Push(Stack[-2] * Stack[-1]);
0x817: Push(CvectorIndex(Stack[-3], 2))
0x818: Push(CvectorIndex(Stack[-5], 2))
0x819: Pop(2); Push(Stack[-2] * Stack[-1]);
0x81a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81b: Push((int) 0)
0x81c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81e: Stack[-1] = "fhit"
0x81f: GOTO 0x821

0x820: Stack[-1] = "bhit"
0x821: Push("hit_react")
0x822: Push("1")
0x823: Pop(1); Push(Stack[-3] + Stack[-1]);
0x824: Push("2")
0x825: Pop(1); Push(Stack[-4] + Stack[-1]);
0x826: Push((int) -10)
0x827: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(4)
0x829: Return(); Pop(20)

0x82a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x82b: @@ GetPosition(Stack[-3])
0x82c: Pop(0)
0x82d: @ GetPosition(Stack[-2])
0x82e: Pop(0)
0x82f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x830: Push(CvectorIndex(Stack[-1], 0))
0x831: Push(CvectorIndex(Stack[-2], 2))
0x832: @ RotateAsync(Stack[-2], Stack[-1])
0x833: Pop(2)
0x834: Return(); Pop(6)

0x835: PushEmpty(bool, bool)
0x836: @ IsLoaded(Stack[-1])
0x837: Pop(0)
0x838: Stack[-3] = Stack[-1]
0x839: Return(); Pop(2)

0x83a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x83b: @@ GetPosition(Stack[-7])
0x83c: Pop(0)
0x83d: @@ GetEyesHeight(Stack[-8])
0x83e: Pop(0)
0x83f: Push(CvectorIndex(Stack[-7], 1))
0x840: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x841: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x842: @ GetPosition(Stack[-6])
0x843: Pop(0)
0x844: @ GetEyesHeight(Stack[-8])
0x845: Pop(0)
0x846: Push(CvectorIndex(Stack[-6], 1))
0x847: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x848: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x849: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x84a: Push(CvectorIndex(Stack[-5], 1))
0x84b: Stack[-1] = (int) 0
0x84c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x84d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x84e: Pop(1); Push(Sqrt(Stack[-1]))
0x84f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x850: Stack[-4] = -Stack[-5]; Pop(0);
0x851: Push((int) 70)
0x852: Pop(1); Push(Stack[-6] * Stack[-1]);
0x853: PushEmpty(cvector, cvector)
0x854: Push(CVector(0.0, 1.0, 0.0))
0x855: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x856: Call 0x8ce

0x857: Pop(1)
0x858: Push((int) 25)
0x859: Pop(2); Push(Stack[-2] * Stack[-1]);
0x85a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x85b: Push(CVector(0.0, 10.0, 0.0))
0x85c: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x85d: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x85e: @ IsOverrideActive(Stack[-1])
0x85f: Pop(0)
0x860: Push(Stack[-1])
0x861: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x862: Stack[-18] = (bool) 0
0x863: Return(); Pop(16)

0x864: @ StopWorld()
0x865: Pop(0)
0x866: @ CameraTransit(Stack[-2], Stack[-4])
0x867: Pop(0)
0x868: Push(CvectorIndex(Stack[-3], 0))
0x869: Push(CvectorIndex(Stack[-4], 2))
0x86a: @ Rotate(Stack[-2], Stack[-1])
0x86b: Pop(2)
0x86c: @ CameraWaitForPlayFinish()
0x86d: Pop(0)
0x86e: @ ResumeWorld()
0x86f: Pop(0)
0x870: Stack[-18] = (bool) 1
0x871: Return(); Pop(16)

0x872: PushEmpty()
0x873: @ CameraSwitchToNormal()
0x874: Pop(0)
0x875: Return(); Pop(0)

0x876: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x877: @@ GetPosition(Stack[-7])
0x878: Pop(0)
0x879: @@ GetEyesHeight(Stack[-8])
0x87a: Pop(0)
0x87b: Push(CvectorIndex(Stack[-7], 1))
0x87c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x87d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x87e: @ GetPosition(Stack[-6])
0x87f: Pop(0)
0x880: @ GetEyesHeight(Stack[-8])
0x881: Pop(0)
0x882: Push(CvectorIndex(Stack[-6], 1))
0x883: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x884: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x885: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x886: Push(CvectorIndex(Stack[-5], 1))
0x887: Stack[-1] = (int) 0
0x888: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x889: Pop(0); Push(Stack[-5] | Stack[-5]);
0x88a: Pop(1); Push(Sqrt(Stack[-1]))
0x88b: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x88c: Stack[-4] = -Stack[-5]; Pop(0);
0x88d: Push((int) 70)
0x88e: Pop(1); Push(Stack[-6] * Stack[-1]);
0x88f: Push(CVector(0.0, 10.0, 0.0))
0x890: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x891: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x892: @ IsOverrideActive(Stack[-1])
0x893: Pop(0)
0x894: Push(Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x896: Stack[-18] = (bool) 0
0x897: Return(); Pop(16)

0x898: @ StopWorld()
0x899: Pop(0)
0x89a: @ CameraTransit(Stack[-2], Stack[-4])
0x89b: Pop(0)
0x89c: Push(CvectorIndex(Stack[-3], 0))
0x89d: Push(CvectorIndex(Stack[-4], 2))
0x89e: @ Rotate(Stack[-2], Stack[-1])
0x89f: Pop(2)
0x8a0: @ CameraWaitForPlayFinish()
0x8a1: Pop(0)
0x8a2: @ ResumeWorld()
0x8a3: Pop(0)
0x8a4: Stack[-18] = (bool) 1
0x8a5: Return(); Pop(16)

0x8a6: PushEmpty()
0x8a7: @ CameraSwitchToNormal()
0x8a8: Pop(0)
0x8a9: Return(); Pop(0)

0x8aa: PushEmpty(float, float, float, float)
0x8ab: Push("playing ")
0x8ac: Pop(1); Push(Stack[-1] + Stack[-6]);
0x8ad: @ Trace(Stack[-1])
0x8ae: Pop(1)
0x8af: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x8b0: Pop(0)
0x8b1: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x8b2: Pop(0)
0x8b3: Push("start: ")
0x8b4: Pop(1); Push(Stack[-1] + Stack[-3]);
0x8b5: @ Trace(Stack[-1])
0x8b6: Pop(1)
0x8b7: Push("end: ")
0x8b8: Pop(1); Push(Stack[-1] + Stack[-2]);
0x8b9: @ Trace(Stack[-1])
0x8ba: Pop(1)
0x8bb: Return(); Pop(4)

0x8bc: PushEmpty(float, cvector, float, cvector)
0x8bd: @@ GetEyesHeight(Stack[-2])
0x8be: Pop(0)
0x8bf: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x8c0: Push(CvectorIndex(Stack[-1], 1))
0x8c1: Stack[-1] = Stack[-3]
0x8c2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8c3: Push("head")
0x8c4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x8c5: Pop(1)
0x8c6: Return(); Pop(4)

0x8c7: PushEmpty(bool)
0x8c8: Call 0xaa6

0x8c9: Pop(0)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cb: @ lshStopSpeech()
0x8cc: Pop(0)
0x8cd: Return(); Pop(0)

0x8ce: PushEmpty(float, float)
0x8cf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8d0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8d1: Push((float)0.0)
0x8d2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8d5: Return(); Pop(2)

0x8d6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8d7: Return(); Pop(2)

0x8d8: PushEmpty()
0x8d9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8db: Stack[-3] = Stack[-2]
0x8dc: GOTO 0x8de

0x8dd: Stack[-3] = Stack[-1]
0x8de: Return(); Pop(0)

0x8df: PushEmpty()
0x8e0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: Stack[-4] = Stack[-2]
0x8e3: Return(); Pop(0)

0x8e4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e6: Stack[-4] = Stack[-1]
0x8e7: Return(); Pop(0)

0x8e8: Stack[-4] = Stack[-3]
0x8e9: Return(); Pop(0)

0x8ea: PushEmpty()
0x8eb: Push(CvectorIndex(Stack[-2], 0))
0x8ec: Push(CvectorIndex(Stack[-2], 0))
0x8ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8ee: Push(CvectorIndex(Stack[-3], 2))
0x8ef: Push(CvectorIndex(Stack[-3], 2))
0x8f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8f2: Return(); Pop(0)

0x8f3: PushEmpty()
0x8f4: Push(CvectorIndex(Stack[-1], 0))
0x8f5: Push(CvectorIndex(Stack[-2], 0))
0x8f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f7: Push(CvectorIndex(Stack[-2], 2))
0x8f8: Push(CvectorIndex(Stack[-3], 2))
0x8f9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8fa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8fb: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x8fc: Return(); Pop(0)

0x8fd: PushEmpty()
0x8fe: PushEmpty(float, cvector, cvector)
0x8ff: Stack[-2] = Stack[-5]
0x900: Stack[-1] = Stack[-4]
0x901: Call 0x8ea

0x902: Pop(2)
0x903: PushEmpty(float, cvector)
0x904: Stack[-1] = Stack[-5]
0x905: Call 0x8f3

0x906: Pop(1)
0x907: PushEmpty(float, cvector)
0x908: Stack[-1] = Stack[-5]
0x909: Call 0x8f3

0x90a: Pop(1)
0x90b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x90c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x90d: Return(); Pop(0)

0x90e: PushEmpty(float, float)
0x90f: @ GetGameTime(Stack[-1])
0x910: Pop(0)
0x911: Push((int) 1)
0x912: PushEmpty(int)
0x913: Push((int) 24)
0x914: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x915: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x916: Return(); Pop(2)

0x917: PushEmpty()
0x918: PushEmpty(object)
0x919: Stack[-1] = Stack[-2]
0x91a: Push(-1, 0); TaskCall(1)
0x91b: Call 0x16

0x91c: Pop(-1, 0); TaskReturn
0x91d: Pop(1)
0x91e: Return(); Pop(0)

0x91f: PushEmpty(float, float)
0x920: Push("health")
0x921: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x923: Push("health")
0x924: @ GetProperty(Stack[-1], Stack[-2])
0x925: Pop(1)
0x926: Push((int) 0)
0x927: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: @ SignalDeath(Stack[-4])
0x92a: Pop(0)
0x92b: Return(); Pop(2)

0x92c: PushEmpty()
0x92d: PushEmpty(object)
0x92e: Stack[-1] = Stack[-2]
0x92f: Call 0x917

0x930: Pop(1)
0x931: Return(); Pop(0)

0x932: PushEmpty()
0x933: PushEmpty(object, int, float)
0x934: Stack[-3] = Stack[-7]
0x935: Stack[-2] = Stack[-6]
0x936: Stack[-1] = Stack[-5]
0x937: Call 0x7e7

0x938: Pop(3)
0x939: Return(); Pop(0)

0x93a: PushEmpty(string, string)
0x93b: Stack[-1] = "idle"
0x93c: Push(Stack[-3])
0x93d: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x93f: Stack[-4] = Stack[-1]
0x940: Return(); Pop(2)

0x941: PushEmpty(int, bool, int, bool)
0x942: Stack[-2] = (int) 0
0x943: Push("all")
0x944: PushEmpty(string, int)
0x945: Stack[-1] = Stack[-5]
0x946: Call 0x93a

0x947: Pop(1)
0x948: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x949: Pop(2)
0x94a: Pop(0); Push((bool) Stack[-1] == 0)
0x94b: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94c: GOTO 0x950

0x94d: Push((int) 1)
0x94e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x94f: GOTO 0x943

0x950: Stack[-5] = Stack[-2]
0x951: Return(); Pop(4)

0x952: PushEmpty()
0x953: PushEmpty(bool)
0x954: Call 0xad6

0x955: Pop(0)
0x956: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x957: Stack[-2] = (int) 2
0x958: GOTO 0x95a

0x959: Stack[-2] = (int) 0
0x95a: Return(); Pop(0)

0x95b: PushEmpty()
0x95c: PushEmpty(object)
0x95d: Stack[-1] = Stack[-2]
0x95e: Push(-1, 1); TaskCall(4)
0x95f: Call 0x29b

0x960: Pop(-1, 1); TaskReturn
0x961: Pop(1)
0x962: Return(); Pop(0)

0x963: PushEmpty()
0x964: PushEmpty(bool, object)
0x965: Stack[-1] = Stack[-3]
0x966: Call 0x7cf

0x967: Pop(1)
0x968: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x969: Stack[-2] = (int) 2
0x96a: GOTO 0x96c

0x96b: Stack[-2] = (int) 0
0x96c: Return(); Pop(0)

0x96d: PushEmpty()
0x96e: PushEmpty(object)
0x96f: Stack[-1] = Stack[-2]
0x970: Push(-1, 5); TaskCall(5)
0x971: Call 0x37d

0x972: Pop(-1, 5); TaskReturn
0x973: Pop(1)
0x974: Return(); Pop(0)

0x975: PushEmpty()
0x976: PushEmpty(int, object)
0x977: Stack[-1] = Stack[-3]
0x978: Call 0x963

0x979: Stack[-4] = Stack[-2]
0x97a: Pop(2)
0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: PushEmpty(object)
0x97e: Stack[-1] = Stack[-2]
0x97f: Call 0x96d

0x980: Pop(1)
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: Stack[-2] = (int) 0
0x984: Return(); Pop(0)

0x985: PushEmpty()
0x986: Return(); Pop(0)

0x987: PushEmpty()
0x988: Push("killme")
0x989: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98b: PushEmpty(int, object)
0x98c: Stack[-1] = Stack[-3]
0x98d: Call 0x99d

0x98e: Stack[-5] = Stack[-2]
0x98f: Pop(2)
0x990: Return(); Pop(0)

0x991: Stack[-3] = (int) 0
0x992: Return(); Pop(0)

0x993: PushEmpty()
0x994: Push("killme")
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x997: PushEmpty(object)
0x998: Stack[-1] = Stack[-2]
0x999: Call 0x9af

0x99a: Pop(1)
0x99b: Return(); Pop(0)

0x99c: Return(); Pop(0)

0x99d: PushEmpty()
0x99e: PushEmpty(bool, object)
0x99f: Stack[-1] = Stack[-3]
0x9a0: Call 0x7cf

0x9a1: Pop(1)
0x9a2: Pop(1); Push((bool) Stack[-1] == 0)
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a4: Stack[-2] = (int) 0
0x9a5: Return(); Pop(0)

0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[-3]
0x9a8: Call 0xad8

0x9a9: Pop(1)
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ab: Stack[-2] = (int) 2
0x9ac: GOTO 0x9ae

0x9ad: Stack[-2] = (int) 0
0x9ae: Return(); Pop(0)

0x9af: PushEmpty()
0x9b0: PushEmpty(object)
0x9b1: Stack[-1] = Stack[-2]
0x9b2: Call 0x96d

0x9b3: Pop(1)
0x9b4: Return(); Pop(0)

0x9b5: PushEmpty()
0x9b6: Stack[-2] = (int) 2
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty()
0x9b9: PushEmpty(object)
0x9ba: Stack[-1] = Stack[-2]
0x9bb: Call 0xab0

0x9bc: Pop(1)
0x9bd: Return(); Pop(0)

0x9be: Return(); Pop(0)

0x9bf: PushEmpty(int, int)
0x9c0: Push("player")
0x9c1: @ GetVariable(Stack[-1], Stack[-2])
0x9c2: Pop(1)
0x9c3: Push((int) 0)
0x9c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c6: Stack[-3] = (int) 200001
0x9c7: Return(); Pop(2)

0x9c8: GOTO 0x9ce

0x9c9: Push((int) 1)
0x9ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cc: Stack[-3] = (int) 200002
0x9cd: Return(); Pop(2)

0x9ce: Stack[-3] = (int) 200003
0x9cf: Return(); Pop(2)

0x9d0: PushEmpty(int, int, int, bool, int, int, int, bool)
0x9d1: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d3: Push("GenerateMoney: iMin > iMax")
0x9d4: @ Trace(Stack[-1])
0x9d5: Pop(1)
0x9d6: Return(); Pop(8)

0x9d7: Stack[-4] = (int) 0
0x9d8: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9da: Pop(0); Push(Stack[-9] - Stack[-10]);
0x9db: @ irand(Stack[-4], Stack[-1])
0x9dc: Pop(1)
0x9dd: GOTO 0x9e2

0x9de: Push((int) 0)
0x9df: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e1: Return(); Pop(8)

0x9e2: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x9e3: Push((int) 0)
0x9e4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e6: Return(); Pop(8)

0x9e7: Push("Money")
0x9e8: @ GetInvItemByName(Stack[-3], Stack[-1])
0x9e9: Pop(1)
0x9ea: Push((int) 0)
0x9eb: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x9ec: Pop(1)
0x9ed: Return(); Pop(8)

0x9ee: PushEmpty(int, bool, int, bool)
0x9ef: Push(Stack[-5])
0x9f0: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0x9f1: PushEmpty(int, int)
0x9f2: Stack[-2] = (int) 0
0x9f3: Push((int) 100)
0x9f4: PushEmpty(int)
0x9f5: Call 0x90e

0x9f6: Pop(0)
0x9f7: Push((int) 100)
0x9f8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9f9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x9fa: Call 0x9d0

0x9fb: Pop(2)
0x9fc: Push((int) 9)
0x9fd: @ irand(Stack[-3], Stack[-1])
0x9fe: Pop(1)
0x9ff: Push((int) 0)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa02: PushEmpty(int, string)
0xa03: Stack[-1] = "lemon"
0xa04: Call 0xa9d

0xa05: Pop(1)
0xa06: Push((int) 0)
0xa07: Push((int) 1)
0xa08: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: GOTO 0xa46

0xa0b: Push((int) 1)
0xa0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa0e: PushEmpty(int, string)
0xa0f: Stack[-1] = "rusk"
0xa10: Call 0xa9d

0xa11: Pop(1)
0xa12: Push((int) 0)
0xa13: Push((int) 1)
0xa14: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa15: Pop(3)
0xa16: GOTO 0xa46

0xa17: Push((int) 2)
0xa18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa1a: PushEmpty(int, string)
0xa1b: Stack[-1] = "hook"
0xa1c: Call 0xa9d

0xa1d: Pop(1)
0xa1e: Push((int) 0)
0xa1f: Push((int) 1)
0xa20: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa21: Pop(3)
0xa22: GOTO 0xa46

0xa23: Push((int) 4)
0xa24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa25: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa26: PushEmpty(int, string)
0xa27: Stack[-1] = "syringe"
0xa28: Call 0xa9d

0xa29: Pop(1)
0xa2a: Push((int) 0)
0xa2b: Push((int) 1)
0xa2c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(3)
0xa2e: GOTO 0xa46

0xa2f: Push((int) 5)
0xa30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa32: PushEmpty(int, string)
0xa33: Stack[-1] = "watch"
0xa34: Call 0xa9d

0xa35: Pop(1)
0xa36: Push((int) 0)
0xa37: Push((int) 1)
0xa38: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa39: Pop(3)
0xa3a: GOTO 0xa46

0xa3b: Push((int) 6)
0xa3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa3e: PushEmpty(int, string)
0xa3f: Stack[-1] = "razor"
0xa40: Call 0xa9d

0xa41: Pop(1)
0xa42: Push((int) 0)
0xa43: Push((int) 1)
0xa44: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa45: Pop(3)
0xa46: GOTO 0xa9c

0xa47: PushEmpty(int, int)
0xa48: Stack[-2] = (int) 0
0xa49: Push((int) 50)
0xa4a: PushEmpty(int)
0xa4b: Call 0x90e

0xa4c: Pop(0)
0xa4d: Push((int) 50)
0xa4e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa4f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa50: Call 0x9d0

0xa51: Pop(2)
0xa52: Push((int) 8)
0xa53: @ irand(Stack[-3], Stack[-1])
0xa54: Pop(1)
0xa55: Push((int) 0)
0xa56: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa57: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa58: PushEmpty(int, string)
0xa59: Stack[-1] = "beads"
0xa5a: Call 0xa9d

0xa5b: Pop(1)
0xa5c: Push((int) 0)
0xa5d: Push((int) 1)
0xa5e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: GOTO 0xa9c

0xa61: Push((int) 1)
0xa62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa63: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa64: PushEmpty(int, string)
0xa65: Stack[-1] = "bracelet"
0xa66: Call 0xa9d

0xa67: Pop(1)
0xa68: Push((int) 0)
0xa69: Push((int) 1)
0xa6a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: GOTO 0xa9c

0xa6d: Push((int) 2)
0xa6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa70: PushEmpty(int, string)
0xa71: Stack[-1] = "ear_ring"
0xa72: Call 0xa9d

0xa73: Pop(1)
0xa74: Push((int) 0)
0xa75: Push((int) 1)
0xa76: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa77: Pop(3)
0xa78: GOTO 0xa9c

0xa79: Push((int) 3)
0xa7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7b: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa7c: PushEmpty(int, string)
0xa7d: Stack[-1] = "gold_ring"
0xa7e: Call 0xa9d

0xa7f: Pop(1)
0xa80: Push((int) 0)
0xa81: Push((int) 1)
0xa82: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: GOTO 0xa9c

0xa85: Push((int) 4)
0xa86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa87: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa88: PushEmpty(int, string)
0xa89: Stack[-1] = "silver_ring"
0xa8a: Call 0xa9d

0xa8b: Pop(1)
0xa8c: Push((int) 0)
0xa8d: Push((int) 1)
0xa8e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: GOTO 0xa9c

0xa91: Push((int) 5)
0xa92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa94: PushEmpty(int, string)
0xa95: Stack[-1] = "flower"
0xa96: Call 0xa9d

0xa97: Pop(1)
0xa98: Push((int) 0)
0xa99: Push((int) 1)
0xa9a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9b: Pop(3)
0xa9c: Return(); Pop(4)

0xa9d: PushEmpty(int, int)
0xa9e: @ GetInvItemByName(Stack[-1], Stack[-3])
0xa9f: Pop(0)
0xaa0: Stack[-4] = Stack[-1]
0xaa1: Return(); Pop(2)

0xaa2: Stack[-1] = (int) 3341
0xaa3: Return(); Pop(0)

0xaa4: Stack[-1] = "ui/NPC_None.png"
0xaa5: Return(); Pop(0)

0xaa6: Stack[-1] = (bool) 0
0xaa7: Return(); Pop(0)

0xaa8: Push(GlobalVars[1])
0xaa9: Stack[-1] = (bool) 0
0xaaa: GlobalVars[1] = Stack[-1]; Pop(1)
0xaab: PushEmpty(bool)
0xaac: Stack[-1] = (bool) 1
0xaad: Call 0x9ee

0xaae: Pop(1)
0xaaf: Return(); Pop(0)

0xab0: PushEmpty(bool, bool)
0xab1: Push(GlobalVars[1])
0xab2: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab3: @ IsOverrideActive(Stack[-1])
0xab4: Pop(0)
0xab5: Pop(0); Push((bool) Stack[-1] == 0)
0xab6: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xab7: @ WorkWithCorpse(Stack[-3])
0xab8: Pop(0)
0xab9: Return(); Pop(2)

0xaba: GOTO 0xad5

0xabb: Push((int) 1000)
0xabc: PushEmpty(int, object)
0xabd: Stack[-1] = Stack[-6]
0xabe: Push(-2, 1); TaskCall(7)
0xabf: Call 0x614

0xac0: Pop(-2, 1); TaskReturn
0xac1: Pop(1)
0xac2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xac3: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac4: PushEmpty(bool, object)
0xac5: Stack[-1] = Stack[-5]
0xac6: Call 0x876

0xac7: Pop(1)
0xac8: Pop(1); Push((bool) Stack[-1] == 0)
0xac9: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xaca: Return(); Pop(2)

0xacb: PushEmpty(object)
0xacc: Stack[-1] = Stack[-4]
0xacd: Push(-1, 1); TaskCall(0)
0xace: Call 0x0

0xacf: Pop(-1, 1); TaskReturn
0xad0: Pop(1)
0xad1: PushEmpty(object)
0xad2: Stack[-1] = Stack[-4]
0xad3: Call 0x8a6

0xad4: Pop(1)
0xad5: Return(); Pop(2)

0xad6: Stack[-1] = (bool) 0
0xad7: Return(); Pop(0)

0xad8: PushEmpty()
0xad9: Stack[-2] = (bool) 1
0xada: Return(); Pop(0)

0xadb: PushEmpty(string, bool, string, bool)
0xadc: PushEmpty(bool, object, string)
0xadd: Stack[-2] = Stack[-8]
0xade: Stack[-1] = "class"
0xadf: Call 0x75a

0xae0: Pop(2)
0xae1: Pop(1); Push((bool) Stack[-1] == 0)
0xae2: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae3: Stack[-7] = (bool) 0
0xae4: Return(); Pop(4)

0xae5: Push("class")
0xae6: @@ GetProperty(Stack[-1], Stack[-3])
0xae7: Pop(1)
0xae8: PushEmpty(bool)
0xae9: Stack[-1] = (bool) 0
0xaea: PushEmpty(bool)
0xaeb: Stack[-1] = (bool) 0
0xaec: PushEmpty(bool)
0xaed: Stack[-1] = (bool) 0
0xaee: PushEmpty(bool)
0xaef: Stack[-1] = (bool) 0
0xaf0: PushEmpty(bool)
0xaf1: Stack[-1] = (bool) 0
0xaf2: PushEmpty(bool)
0xaf3: Stack[-1] = (bool) 0
0xaf4: Push("littleboy")
0xaf5: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0xaf6: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf7: Push("littlegirl")
0xaf8: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0xaf9: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xafa: Stack[-1] = (bool) 1
0xafb: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafc: Push("boy")
0xafd: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xafe: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaff: Stack[-1] = (bool) 1
0xb00: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb01: Push("girl")
0xb02: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0xb03: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb04: Stack[-1] = (bool) 1
0xb05: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb06: Push("wasted_male")
0xb07: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xb08: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb09: Stack[-1] = (bool) 1
0xb0a: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0b: Push("wasted_girl")
0xb0c: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0e: Stack[-1] = (bool) 1
0xb0f: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb10: Push("woman")
0xb11: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xb12: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb13: Stack[-1] = (bool) 1
0xb14: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb15: Stack[-7] = (bool) 0
0xb16: Return(); Pop(4)

0xb17: @ CanSee(Stack[-1], Stack[-6])
0xb18: Pop(0)
0xb19: PushEmpty(bool)
0xb1a: Stack[-1] = (bool) 1
0xb1b: Push(Stack[-2])
0xb1c: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb1d: PushEmpty(float, object)
0xb1e: Stack[-1] = Stack[-9]
0xb1f: Call 0x752

0xb20: Pop(1)
0xb21: Push((float)250000.0)
0xb22: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb24: Stack[-1] = (bool) 0
0xb25: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb26: Push((float)-0.3)
0xb27: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0xb28: Pop(1)
0xb29: Stack[-7] = (bool) 1
0xb2a: Return(); Pop(4)

0xb2b: Stack[-7] = (bool) 0
0xb2c: Return(); Pop(4)

0xb2d: PushEmpty()
0xb2e: Push(GlobalVars[1])
0xb2f: Stack[-1] = (bool) 1
0xb30: GlobalVars[1] = Stack[-1]; Pop(1)
0xb31: Push((int) 50)
0xb32: Push((int) 40)
0xb33: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xb34: Pop(2)
0xb35: Return(); Pop(0)

