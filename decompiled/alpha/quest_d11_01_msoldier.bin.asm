GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 object 

Strings:
	SetNPCName
	SetPhoto
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
	shoot_begin
	shot
	shoot_end
	attack_on
	attack_off
	hunt
	@Stop hunt
	attack_begin1
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	quest_d11_01
	soldier_attack
	in
	fire
	phys
	player
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
	blood.xml
	fhit
	bhit
	hit_react
	2
	playing 
	start: 
	end: 
	d11q01
	restore_andrei
	ood11Officer1
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	add
	reputation
	ui/NPC_Black.png
	RemoveStationaryActor

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
	SetRTEnvelope (2 args)
	Hold (0 args)
	WorkWithCorpse (1 args)
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
	Face (1 args)
	Sleep (2 args)
	KillTimer (1 args)
	StopGroup0 (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Speak (1 args)
	SetAttackState (1 args)
	Sleep (1 args)
	Trace (1 args)
	ReportAttack (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateObjectSet (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	ReportReputationChange (3 args)

RunOp = 0x40c
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x93 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x158 Vars = (object)
		EVENT_22 Op = 0x1cd Vars = (object, int, float, float)
		EVENT_16 Op = 0x1cf Vars = (object, string)
		EVENT_41 Op = 0x1d1 Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_41 Op = 0x1f3 Vars = (object)
		EVENT_3 Op = 0x1fc Vars = (object)
		EVENT_4 Op = 0x205 Vars = (object)
		EVENT_17 Op = 0x211 Vars = (object)
		EVENT_30 Op = 0x225 Vars = (object, object)
		EVENT_1 Op = 0x231 Vars = (object)
		EVENT_7 Op = 0x23f Vars = (int)
	GTASK_4 Vars = (object, bool) Params = 1
		EVENT_17 Op = 0x2b5 Vars = (object)
		EVENT_30 Op = 0x2c9 Vars = (object, object)
		EVENT_41 Op = 0x2dc Vars = (object)
	GTASK_5 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x36a Vars = (object)
		EVENT_1 Op = 0x378 Vars = (object)
		EVENT_17 Op = 0x3e8 Vars = (object)
		EVENT_30 Op = 0x400 Vars = (object, object)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x410 Vars = (object)
		EVENT_17 Op = 0x418 Vars = (object)
	GTASK_7 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x43e Vars = (object)
		EVENT_17 Op = 0x45c Vars = (object)
		EVENT_30 Op = 0x470 Vars = (object, object)
		EVENT_1 Op = 0x47c Vars = (object)

Events:
EVENT_22 Op = 0x716 Vars = (object, int, float, float)
EVENT_16 Op = 0x71e Vars = (object, string)
EVENT_41 Op = 0x72b Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x5dd

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x7c1

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x7c3

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x6b5

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x615

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x6a9

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x6a3

0x4e: Pop(2)
0x4f: PushEmpty(string)
0x50: Stack[-1] = "Neutral"
0x51: Call 0x83

0x52: Pop(1)
0x53: Push((int) 14445)
0x54: @@ SetMessage(Stack[-1])
0x55: Pop(1)
0x56: @@ ClearReplies()
0x57: Pop(0)
0x58: Push((int) 14446)
0x59: Push((int) 15675)
0x5a: Push((int) 15674)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: Push((int) 14456)
0x5e: Push((int) 15687)
0x5f: Push((int) 15686)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x65

0x63: Return(); Pop(0)

0x64: GOTO 0x43

0x65: PushEmpty(bool)
0x66: Call 0x7c5

0x67: Pop(0)
0x68: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x69: @ lshWaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x70: Call 0x619

0x71: Pop(1)
0x72: GOTO 0x69

0x73: GOTO 0x82

0x74: Push("all")
0x75: Push("idle")
0x76: @ PlayAnimation(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: @ WaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: Push("all")
0x7e: Push("idle")
0x7f: @ PlayAnimation(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: GOTO 0x78

0x82: Return(); Pop(0)

0x83: PushEmpty()
0x84: PushEmpty(bool)
0x85: Call 0x7c5

0x86: Pop(0)
0x87: Pop(1); Push((bool) Stack[-1] == 0)
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Return(); Pop(0)

0x8a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[-2]
0x8f: Call 0x619

0x90: Pop(1)
0x91: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 1)
0x95: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x96: PushEmpty()
0x97: Call 0x62b

0x98: Pop(0)
0x99: Push((int) 15678)
0x9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: PushEmpty(object, object)
0x9d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Call 0x693

0xa0: Pop(2)
0xa1: Push((int) 15679)
0xa2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: PushEmpty(object, object)
0xa5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7: Call 0x693

0xa8: Pop(2)
0xa9: Push((int) 15673)
0xaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call 0x6a9

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb1: PushEmpty(object, object)
0xb2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Call 0x6a3

0xb5: Pop(2)
0xb6: PushEmpty(string)
0xb7: Stack[-1] = "Neutral"
0xb8: Call 0x83

0xb9: Pop(1)
0xba: Push((int) 14445)
0xbb: @@ SetMessage(Stack[-1])
0xbc: Pop(1)
0xbd: @@ ClearReplies()
0xbe: Pop(0)
0xbf: Push((int) 14446)
0xc0: Push((int) 15675)
0xc1: Push((int) 15674)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: Push((int) 14456)
0xc5: Push((int) 15687)
0xc6: Push((int) 15686)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Return(); Pop(0)

0xca: Push((int) 15687)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0x83

0xd0: Pop(1)
0xd1: Push((int) 14457)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 14458)
0xd7: Push((int) 15689)
0xd8: Push((int) 15688)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Return(); Pop(0)

0xdc: Push((int) 15689)
0xdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call 0x83

0xe2: Pop(1)
0xe3: Push((int) 14459)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 14460)
0xe9: Push((int) 15681)
0xea: Push((int) 15690)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: Push((int) 15675)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf1: PushEmpty(string)
0xf2: Stack[-1] = "Neutral"
0xf3: Call 0x83

0xf4: Pop(1)
0xf5: Push((int) 14447)
0xf6: @@ SetMessage(Stack[-1])
0xf7: Pop(1)
0xf8: @@ ClearReplies()
0xf9: Pop(0)
0xfa: Push((int) 14448)
0xfb: Push((int) 15677)
0xfc: Push((int) 15676)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 14452)
0x100: Push((int) 15681)
0x101: Push((int) 15680)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 15681)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call 0x83

0x10b: Pop(1)
0x10c: Push((int) 14453)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 14454)
0x112: Push((int) 15677)
0x113: Push((int) 15682)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 14455)
0x117: Push((int) 15677)
0x118: Push((int) 15684)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 15677)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call 0x83

0x122: Pop(1)
0x123: Push((int) 14449)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 14450)
0x129: Push((int) -1)
0x12a: Push((int) 15678)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 14451)
0x12e: Push((int) -1)
0x12f: Push((int) 15679)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x134: PushEmpty(bool)
0x135: Call 0x7c5

0x136: Pop(0)
0x137: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x138: @ lshStopAnimation()
0x139: Pop(0)
0x13a: GOTO 0x13d

0x13b: @ StopAnimation()
0x13c: Pop(0)
0x13d: Return(); Pop(0)

0x13e: GOTO 0x94

0x13f: Return(); Pop(0)

0x140: PushEmpty()
0x141: PushEmpty()
0x142: Call 0x6e4

0x143: Pop(0)
0x144: PushEmpty(object)
0x145: Stack[-1] = Stack[-2]
0x146: Call 0x149

0x147: Pop(1)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: EventDisable(0)
0x14b: PushEmpty(object)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call 0x160

0x14e: Pop(1)
0x14f: Push((int) 50)
0x150: Push((int) 40)
0x151: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x152: Pop(2)
0x153: EventEnable(0)
0x154: @ Hold()
0x155: Pop(0)
0x156: GOTO 0x154

0x157: Return(); Pop(0)

0x158: PushEmpty(bool, bool)
0x159: @ IsOverrideActive(Stack[-1])
0x15a: Pop(0)
0x15b: Pop(0); Push((bool) Stack[-1] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15d: @ WorkWithCorpse(Stack[-3])
0x15e: Pop(0)
0x15f: Return(); Pop(2)

0x160: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x161: Pop(0); Push((bool) Stack[-21] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "fdie"
0x165: Call 0x1b7

0x166: Pop(1)
0x167: GOTO 0x1b6

0x168: @@ GetPosition(Stack[-10])
0x169: Pop(0)
0x16a: @ GetPosition(Stack[-9])
0x16b: Pop(0)
0x16c: @ GetDirection(Stack[-8])
0x16d: Pop(0)
0x16e: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x16f: Push(CvectorIndex(Stack[-7], 0))
0x170: Push(CvectorIndex(Stack[-9], 0))
0x171: Pop(2); Push(Stack[-2] * Stack[-1]);
0x172: Push(CvectorIndex(Stack[-8], 2))
0x173: Push(CvectorIndex(Stack[-10], 2))
0x174: Pop(2); Push(Stack[-2] * Stack[-1]);
0x175: Pop(2); Push(Stack[-2] + Stack[-1]);
0x176: Push((int) 0)
0x177: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x179: Stack[-6] = "fdie"
0x17a: GOTO 0x17c

0x17b: Stack[-6] = "bdie"
0x17c: @ RemoveRTEnvelope()
0x17d: Pop(0)
0x17e: @ SetDeathState()
0x17f: Pop(0)
0x180: @ Stop()
0x181: Pop(0)
0x182: @ StopAsync()
0x183: Pop(0)
0x184: Stack[-5] = Stack[-21]
0x185: Push("GetScriptProperty")
0x186: Push((int) 2)
0x187: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x188: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x189: Push("Owner")
0x18a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x18b: Pop(1)
0x18c: Push(Stack[-4])
0x18d: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18e: Push("Owner")
0x18f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x190: Pop(1)
0x191: Pop(0); Push((bool) Stack[-5] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Stack[-5] = Stack[-21]
0x194: Push("@GetEyesHeight")
0x195: Push((int) 1)
0x196: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x197: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x198: @@ GetEyesHeight(Stack[-2])
0x199: Pop(0)
0x19a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x19b: Push(CvectorIndex(Stack[-1], 1))
0x19c: Stack[-1] = Stack[-3]
0x19d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x19e: Push("head")
0x19f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x1a0: Pop(1)
0x1a1: Stack[-3] = (bool) 1
0x1a2: GOTO 0x1a4

0x1a3: Stack[-3] = (bool) 0
0x1a4: Push("all")
0x1a5: @ PlayAnimation(Stack[-1], Stack[-7])
0x1a6: Pop(1)
0x1a7: @ WaitForAnimEnd()
0x1a8: Pop(0)
0x1a9: Push(Stack[-3])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: @ StopAsync()
0x1ac: Pop(0)
0x1ad: Push("head")
0x1ae: @ UnlookAsync(Stack[-1])
0x1af: Pop(1)
0x1b0: Push("all")
0x1b1: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x1b2: Pop(1)
0x1b3: @ RemoveEnvelope()
0x1b4: Pop(0)
0x1b5: Stack[-5] = 0
0x1b6: Return(); Pop(20)

0x1b7: PushEmpty()
0x1b8: @ RemoveRTEnvelope()
0x1b9: Pop(0)
0x1ba: @ SetDeathState()
0x1bb: Pop(0)
0x1bc: @ Stop()
0x1bd: Pop(0)
0x1be: @ StopAsync()
0x1bf: Pop(0)
0x1c0: @ StopSecondaryAnimation()
0x1c1: Pop(0)
0x1c2: Push("all")
0x1c3: @ PlayAnimation(Stack[-1], Stack[-2])
0x1c4: Pop(1)
0x1c5: @ WaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: Push("all")
0x1c8: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x1c9: Pop(1)
0x1ca: @ RemoveEnvelope()
0x1cb: Pop(0)
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty()
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty()
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(bool, bool)
0x1d4: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x1d5: @ Face(Stack[-3])
0x1d6: Pop(0)
0x1d7: Push((float)0.5)
0x1d8: @ Sleep(Stack[-1], Stack[-2])
0x1d9: Pop(1)
0x1da: PushEmpty(bool)
0x1db: Stack[-1] = (bool) 1
0x1dc: Pop(0); Push((bool) Stack[-2] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call 0x570

0x1e1: Pop(1)
0x1e2: Pop(1); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Stack[-1] = (bool) 0
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: GOTO 0x1e8

0x1e7: GOTO 0x1d7

0x1e8: @ StopAsync()
0x1e9: Pop(0)
0x1ea: Return(); Pop(2)

0x1eb: @ StopAsync()
0x1ec: Pop(0)
0x1ed: Push((int) 100)
0x1ee: @ KillTimer(Stack[-1])
0x1ef: Pop(1)
0x1f0: @ StopGroup0()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: PushEmpty()
0x1f5: Call 0x1eb

0x1f6: Pop(0)
0x1f7: PushEmpty(object)
0x1f8: Stack[-1] = Stack[-2]
0x1f9: Call 0x72b

0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: Push((int) 100)
0x200: @ KillTimer(Stack[-1])
0x201: Pop(1)
0x202: @ Face(Stack[-0])
0x203: Pop(0)
0x204: Return(); Pop(0)

0x205: PushEmpty()
0x206: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x207: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x208: Push((int) 100)
0x209: Push((float)3.0)
0x20a: @ SetTimer(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: PushEmpty(object)
0x20d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20e: Call 0x5cb

0x20f: Pop(1)
0x210: Return(); Pop(0)

0x211: PushEmpty()
0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[-3]
0x214: Call 0x570

0x215: Pop(1)
0x216: Pop(1); Push((bool) Stack[-1] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: PushEmpty(object)
0x219: Stack[-1] = Stack[-2]
0x21a: Call 0x743

0x21b: Pop(1)
0x21c: Return(); Pop(0)

0x21d: PushEmpty()
0x21e: Call 0x1eb

0x21f: Pop(0)
0x220: PushEmpty(object)
0x221: Stack[-1] = Stack[-2]
0x222: Call 0x750

0x223: Pop(1)
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: PushEmpty(bool, object, object)
0x227: Stack[-2] = Stack[-5]
0x228: Stack[-1] = Stack[-4]
0x229: Call 0x799

0x22a: Pop(2)
0x22b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22c: PushEmpty(object)
0x22d: Stack[-1] = Stack[-3]
0x22e: Call 0x211

0x22f: Pop(1)
0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[-3]
0x234: Call 0x77d

0x235: Pop(1)
0x236: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x237: PushEmpty()
0x238: Call 0x1eb

0x239: Pop(0)
0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-2]
0x23c: Call 0x793

0x23d: Pop(1)
0x23e: Return(); Pop(0)

0x23f: PushEmpty()
0x240: Push((int) 100)
0x241: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(0)

0x244: Push((int) 100)
0x245: @ KillTimer(Stack[-1])
0x246: Pop(1)
0x247: @ StopGroup0()
0x248: Pop(0)
0x249: Return(); Pop(0)

0x24a: PushEmpty(bool, int, int, bool, int, int)
0x24b: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x24c: @ CanSee(Stack[-1], Stack[-0])
0x24d: Pop(0)
0x24e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x24f: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call 0x770

0x253: Pop(1)
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: PushEmpty(object, bool)
0x256: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x257: Stack[-1] = (bool) 1
0x258: Call 0x738

0x259: Pop(2)
0x25a: Return(); Pop(6)

0x25b: @ Face(Stack[-0])
0x25c: Pop(0)
0x25d: Push("all")
0x25e: Push("shoot_begin")
0x25f: @ PlayAnimation(Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: @ WaitForAnimEnd(Stack[-3])
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-3] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x265: @ StopAsync()
0x266: Pop(0)
0x267: Return(); Pop(6)

0x268: Push("shot")
0x269: @ Speak(Stack[-1])
0x26a: Pop(1)
0x26b: Push("all")
0x26c: Push("shoot_end")
0x26d: @ PlayAnimation(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: @ WaitForAnimEnd(Stack[-3])
0x270: Pop(0)
0x271: Pop(0); Push((bool) Stack[-3] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x273: @ StopAsync()
0x274: Pop(0)
0x275: Return(); Pop(6)

0x276: Push("all")
0x277: Push("attack_on")
0x278: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: Stack[-2] = (int) 0
0x27b: Stack[-1] = (int) 0
0x27c: Push((int) 20)
0x27d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x27f: Push((float)0.5)
0x280: @ Sleep(Stack[-1], Stack[-4])
0x281: Pop(1)
0x282: Pop(0); Push((bool) Stack[-3] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Return(); Pop(6)

0x285: @ CanSee(Stack[-1], Stack[-0])
0x286: Pop(0)
0x287: Push( Stack[1 + Tasks[-1].StackPointer] )
0x288: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x289: Stack[-2] = (int) 0
0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call 0x770

0x28d: Pop(1)
0x28e: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x28f: PushEmpty()
0x290: Call 0x2d5

0x291: Pop(0)
0x292: PushEmpty(object, bool)
0x293: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x294: Stack[-1] = (bool) 0
0x295: Call 0x738

0x296: Pop(2)
0x297: Return(); Pop(6)

0x298: @ Face(Stack[-0])
0x299: Pop(0)
0x29a: GOTO 0x2a9

0x29b: @ StopAsync()
0x29c: Pop(0)
0x29d: Push((int) 1)
0x29e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x29f: Push((int) 4)
0x2a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a2: Push("all")
0x2a3: Push("attack_off")
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: @ WaitForAnimEnd()
0x2a7: Pop(0)
0x2a8: Return(); Pop(6)

0x2a9: Push((int) 1)
0x2aa: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ab: GOTO 0x27c

0x2ac: PushEmpty()
0x2ad: Call 0x2d5

0x2ae: Pop(0)
0x2af: PushEmpty(object, bool)
0x2b0: Stack[-2] = Stack[-9]
0x2b1: Stack[-1] = (bool) 0
0x2b2: Call 0x738

0x2b3: Pop(2)
0x2b4: Return(); Pop(6)

0x2b5: PushEmpty()
0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[-3]
0x2b8: Call 0x570

0x2b9: Pop(1)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: PushEmpty(object)
0x2bd: Stack[-1] = Stack[-2]
0x2be: Call 0x743

0x2bf: Pop(1)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: Call 0x2d5

0x2c3: Pop(0)
0x2c4: PushEmpty(object)
0x2c5: Stack[-1] = Stack[-2]
0x2c6: Call 0x750

0x2c7: Pop(1)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: PushEmpty(bool, object, object)
0x2cb: Stack[-2] = Stack[-5]
0x2cc: Stack[-1] = Stack[-4]
0x2cd: Call 0x799

0x2ce: Pop(2)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d0: PushEmpty(object)
0x2d1: Stack[-1] = Stack[-3]
0x2d2: Call 0x2b5

0x2d3: Pop(1)
0x2d4: Return(); Pop(0)

0x2d5: @ StopAsync()
0x2d6: Pop(0)
0x2d7: @ StopGroup0()
0x2d8: Pop(0)
0x2d9: @ Stop()
0x2da: Pop(0)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty()
0x2dd: PushEmpty()
0x2de: Call 0x2d5

0x2df: Pop(0)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-2]
0x2e2: Call 0x72b

0x2e3: Pop(1)
0x2e4: Return(); Pop(0)

0x2e5: PushEmpty(bool, bool, bool, bool)
0x2e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x2e7: @ Face(Stack[-0])
0x2e8: Pop(0)
0x2e9: Push(Stack[-5])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2eb: Push("all")
0x2ec: Push("attack_on")
0x2ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: @ WaitForAnimEnd()
0x2f0: Pop(0)
0x2f1: Push("all")
0x2f2: Push("attack_on")
0x2f3: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: Push((bool) 1)
0x2f6: @ SetAttackState(Stack[-1])
0x2f7: Pop(1)
0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call 0x570

0x2fb: Pop(1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x2fd: @ CanSee(Stack[-1], Stack[-0])
0x2fe: Pop(0)
0x2ff: Push(Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x301: PushEmpty()
0x302: Call 0x38e

0x303: Pop(0)
0x304: GOTO 0x354

0x305: PushEmpty(object)
0x306: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x307: Call 0x5cb

0x308: Pop(1)
0x309: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x30a: Push("all")
0x30b: Push("hunt")
0x30c: @ PlayAnimation(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: @ WaitForAnimEnd(Stack[-2])
0x30f: Pop(0)
0x310: Pop(0); Push((bool) Stack[-2] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x312: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x313: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x314: PushEmpty()
0x315: Call 0x389

0x316: Pop(0)
0x317: Push("all")
0x318: Push("attack_on")
0x319: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: GOTO 0x2f8

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31e: Call 0x570

0x31f: Pop(1)
0x320: Pop(1); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x322: GOTO 0x35e

0x323: @ CanSee(Stack[-1], Stack[-0])
0x324: Pop(0)
0x325: Push(Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x327: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x328: @ Face(Stack[-0])
0x329: Pop(0)
0x32a: PushEmpty()
0x32b: Call 0x38e

0x32c: Pop(0)
0x32d: GOTO 0x354

0x32e: Push("all")
0x32f: Push("attack_on")
0x330: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x331: Pop(2)
0x332: Push((int) 3)
0x333: @ Sleep(Stack[-1], Stack[-3])
0x334: Pop(1)
0x335: Pop(0); Push((bool) Stack[-2] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x337: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x338: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x339: PushEmpty()
0x33a: Call 0x389

0x33b: Pop(0)
0x33c: Push("all")
0x33d: Push("attack_on")
0x33e: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: GOTO 0x2f8

0x341: PushEmpty(bool, object)
0x342: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x343: Call 0x570

0x344: Pop(1)
0x345: Pop(1); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x35e

0x348: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x349: @ CanSee(Stack[-1], Stack[-0])
0x34a: Pop(0)
0x34b: Push(Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: @ Face(Stack[-0])
0x34e: Pop(0)
0x34f: PushEmpty()
0x350: Call 0x38e

0x351: Pop(0)
0x352: GOTO 0x354

0x353: GOTO 0x35e

0x354: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x355: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x356: PushEmpty()
0x357: Call 0x389

0x358: Pop(0)
0x359: GOTO 0x35d

0x35a: Push((int) 2)
0x35b: @ Sleep(Stack[-1])
0x35c: Pop(1)
0x35d: GOTO 0x2f8

0x35e: Push((bool) 0)
0x35f: @ SetAttackState(Stack[-1])
0x360: Pop(1)
0x361: @ StopAsync()
0x362: Pop(0)
0x363: Push("all")
0x364: Push("attack_off")
0x365: @ PlayAnimation(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: @ WaitForAnimEnd()
0x368: Pop(0)
0x369: Return(); Pop(4)

0x36a: PushEmpty()
0x36b: PushEmpty(bool)
0x36c: Stack[-1] = (bool) 0
0x36d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x36e: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36f: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Stack[-1] = (bool) 1
0x372: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x373: PushEmpty(object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call 0x5cb

0x376: Pop(1)
0x377: Return(); Pop(0)

0x378: PushEmpty()
0x379: PushEmpty(bool)
0x37a: Stack[-1] = (bool) 0
0x37b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37d: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x37e: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37f: Stack[-1] = (bool) 1
0x380: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x381: Push("@Stop hunt")
0x382: @ Trace(Stack[-1])
0x383: Pop(1)
0x384: @ StopAnimation()
0x385: Pop(0)
0x386: @ StopGroup0()
0x387: Pop(0)
0x388: Return(); Pop(0)

0x389: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x38a: Stack[1 + Tasks[-1].StackPointer] = 0
0x38b: @ Face(Stack[-0])
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: PushEmpty(cvector, cvector, cvector, object, int, cvector, float, object, object, cvector, cvector, cvector, object, int, cvector, float, object, object)
0x38f: @ ReportAttack(Stack[-0])
0x390: Pop(0)
0x391: @ GetDirection(Stack[-9])
0x392: Pop(0)
0x393: PushEmpty(cvector, object)
0x394: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x395: Call 0x4e5

0x396: Stack[-10] = Stack[-2]
0x397: Pop(2)
0x398: PushEmpty(float, cvector, cvector)
0x399: Stack[-2] = Stack[-12]
0x39a: Stack[-1] = Stack[-11]
0x39b: Call 0x671

0x39c: Pop(2)
0x39d: Push((float)0.96593)
0x39e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Return(); Pop(18)

0x3a1: Push("all")
0x3a2: Push("attack_begin1")
0x3a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a4: Pop(2)
0x3a5: @ WaitForAnimEnd()
0x3a6: Pop(0)
0x3a7: Push("shot")
0x3a8: @ Speak(Stack[-1])
0x3a9: Pop(1)
0x3aa: @ GetDirection(Stack[-9])
0x3ab: Pop(0)
0x3ac: PushEmpty(cvector, object)
0x3ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ae: Call 0x4e5

0x3af: Stack[-10] = Stack[-2]
0x3b0: Pop(2)
0x3b1: Push(CvectorIndex(Stack[-8], 1))
0x3b2: PushEmpty(float, object)
0x3b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b4: Call 0x5d6

0x3b5: Pop(1)
0x3b6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3b7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3b8: Push((float)0.2618)
0x3b9: @ RandVecCone3D(Stack[-8], Stack[-9], Stack[-1])
0x3ba: Pop(1)
0x3bb: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x3bc: Pop(0)
0x3bd: Pop(0); Push(( Stack[-6] != 0 )
0x3be: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3bf: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c1: PushEmpty(float, object, float, int)
0x3c2: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x3c3: Stack[-2] = (float) 1.5
0x3c4: Stack[-1] = (int) 0
0x3c5: Call 0x507

0x3c6: Stack[-7] = Stack[-4]
0x3c7: Pop(4)
0x3c8: Push((int) 2)
0x3c9: Push((float)1.5)
0x3ca: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x3cb: Pop(2)
0x3cc: GOTO 0x3dc

0x3cd: Push((int) -1)
0x3ce: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d0: @ GetScene(Stack[-2])
0x3d1: Pop(0)
0x3d2: Push("scripted")
0x3d3: Push(CVector(0.0, 0.0, 1.0))
0x3d4: Push("richochet.xml")
0x3d5: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Push("Material")
0x3d8: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x3d9: Pop(1)
0x3da: Stack[-1] = 0
0x3db: Stack[-2] = 0
0x3dc: Push("all")
0x3dd: Push("attack_end1")
0x3de: @ PlayAnimation(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: @ WaitForAnimEnd()
0x3e1: Pop(0)
0x3e2: Push("all")
0x3e3: Push("attack_on")
0x3e4: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: Return(); Pop(18)

0x3e7: Stack[-6] = 0
0x3e8: PushEmpty()
0x3e9: PushEmpty(bool, object)
0x3ea: Stack[-1] = Stack[-3]
0x3eb: Call 0x570

0x3ec: Pop(1)
0x3ed: Pop(1); Push((bool) Stack[-1] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: Return(); Pop(0)

0x3f0: PushEmpty(object)
0x3f1: Stack[-1] = Stack[-2]
0x3f2: Call 0x743

0x3f3: Pop(1)
0x3f4: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[1 + Tasks[-1].StackPointer] = 0
0x3f7: GOTO 0x3ff

0x3f8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3f9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fa: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fb: @ StopAnimation()
0x3fc: Pop(0)
0x3fd: @ StopGroup0()
0x3fe: Pop(0)
0x3ff: Return(); Pop(0)

0x400: PushEmpty()
0x401: PushEmpty(bool, object, object)
0x402: Stack[-2] = Stack[-5]
0x403: Stack[-1] = Stack[-4]
0x404: Call 0x799

0x405: Pop(2)
0x406: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x407: PushEmpty(object)
0x408: Stack[-1] = Stack[-3]
0x409: Call 0x3e8

0x40a: Pop(1)
0x40b: Return(); Pop(0)

0x40c: @ Hold()
0x40d: Pop(0)
0x40e: GOTO 0x40c

0x40f: Return(); Pop(0)

0x410: PushEmpty()
0x411: PushEmpty(int, object)
0x412: Stack[-1] = Stack[-3]
0x413: Push(-2, 1); TaskCall(0)
0x414: Call 0x0

0x415: Pop(-2, 1); TaskReturn
0x416: Pop(2)
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: PushEmpty(bool, string, string)
0x41a: Stack[-2] = "quest_d11_01"
0x41b: Stack[-1] = "soldier_attack"
0x41c: Call 0x687

0x41d: Pop(3)
0x41e: PushEmpty(object)
0x41f: PushEmpty(object)
0x420: Call 0x4f4

0x421: Stack[-2] = Stack[-1]
0x422: Pop(1)
0x423: Push(-1, 2); TaskCall(7)
0x424: Call 0x428

0x425: Pop(-1, 2); TaskReturn
0x426: Pop(1)
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: PushEmpty()
0x42a: Call 0x731

0x42b: Pop(0)
0x42c: PushEmpty(object)
0x42d: Stack[-1] = Stack[-2]
0x42e: Call 0x45c

0x42f: Pop(1)
0x430: PushEmpty()
0x431: Call 0x435

0x432: Pop(0)
0x433: GOTO 0x430

0x434: Return(); Pop(0)

0x435: PushEmpty()
0x436: Call 0x731

0x437: Pop(0)
0x438: PushEmpty()
0x439: Call 0x48a

0x43a: Pop(0)
0x43b: GOTO 0x438

0x43c: Return(); Pop(0)

0x43d: Return(); Pop(0)

0x43e: PushEmpty(bool, bool)
0x43f: PushEmpty(bool, object)
0x440: Stack[-1] = Stack[-5]
0x441: Call 0x570

0x442: Pop(1)
0x443: Pop(1); Push((bool) Stack[-1] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Return(); Pop(2)

0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[-5]
0x448: Call 0x778

0x449: Pop(1)
0x44a: Pop(1); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44c: Push(GlobalVars[0])
0x44d: @@ in(Stack[-2], Stack[-4])
0x44e: Pop(1)
0x44f: Pop(0); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x451: Return(); Pop(2)

0x452: PushEmpty()
0x453: Call 0x4d8

0x454: Pop(0)
0x455: PushEmpty(object)
0x456: Stack[-1] = Stack[-4]
0x457: Push(-1, 1); TaskCall(3)
0x458: Call 0x1d3

0x459: Pop(-1, 1); TaskReturn
0x45a: Pop(1)
0x45b: Return(); Pop(2)

0x45c: PushEmpty()
0x45d: PushEmpty(bool, object)
0x45e: Stack[-1] = Stack[-3]
0x45f: Call 0x570

0x460: Pop(1)
0x461: Pop(1); Push((bool) Stack[-1] == 0)
0x462: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x463: PushEmpty(object)
0x464: Stack[-1] = Stack[-2]
0x465: Call 0x743

0x466: Pop(1)
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: Call 0x4d8

0x46a: Pop(0)
0x46b: PushEmpty(object)
0x46c: Stack[-1] = Stack[-2]
0x46d: Call 0x750

0x46e: Pop(1)
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: PushEmpty(bool, object, object)
0x472: Stack[-2] = Stack[-5]
0x473: Stack[-1] = Stack[-4]
0x474: Call 0x799

0x475: Pop(2)
0x476: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x477: PushEmpty(object)
0x478: Stack[-1] = Stack[-3]
0x479: Call 0x45c

0x47a: Pop(1)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: PushEmpty(bool, object)
0x47e: Stack[-1] = Stack[-3]
0x47f: Call 0x77d

0x480: Pop(1)
0x481: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x482: PushEmpty()
0x483: Call 0x4d8

0x484: Pop(0)
0x485: PushEmpty(object)
0x486: Stack[-1] = Stack[-2]
0x487: Call 0x7c7

0x488: Pop(1)
0x489: Return(); Pop(0)

0x48a: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x48b: @ GetPFPosition(Stack[-1])
0x48c: Pop(0)
0x48d: @ GetDirection(Stack[-0])
0x48e: Pop(0)
0x48f: Push((int) 60)
0x490: @ irand(Stack[-5], Stack[-1])
0x491: Pop(1)
0x492: Push((int) 30)
0x493: Pop(1); Push(Stack[-5] + Stack[-1]);
0x494: @ Sleep(Stack[-1], Stack[-4])
0x495: Pop(1)
0x496: Push(Stack[-3])
0x497: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x498: PushEmpty()
0x499: Call 0x43d

0x49a: Pop(0)
0x49b: GOTO 0x4d6

0x49c: @ GetPFPosition(Stack[-2])
0x49d: Pop(0)
0x49e: PushEmpty(float, cvector, cvector)
0x49f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Stack[-1] = Stack[-5]
0x4a1: Call 0x642

0x4a2: Pop(2)
0x4a3: Push((int) 40000)
0x4a4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4a6: @ FindPathTo(Stack[-1], Stack[-1])
0x4a7: Pop(0)
0x4a8: Pop(0); Push(( Stack[-1] != 0 )
0x4a9: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4aa: @ RotatePath(Stack[-1], Stack[-3])
0x4ab: Pop(0)
0x4ac: Pop(0); Push((bool) Stack[-3] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: GOTO 0x4d5

0x4af: Push((bool) 0)
0x4b0: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x4b1: Pop(1)
0x4b2: Pop(0); Push((bool) Stack[-3] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: GOTO 0x4d5

0x4b5: Push(CvectorIndex(Stack[-0], 0))
0x4b6: Push(CvectorIndex(Stack[-0], 2))
0x4b7: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x4b8: Pop(2)
0x4b9: Pop(0); Push((bool) Stack[-3] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: GOTO 0x4d5

0x4bc: @ WaitForAnimEnd(Stack[-3])
0x4bd: Pop(0)
0x4be: Pop(0); Push((bool) Stack[-3] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4c0: GOTO 0x4d5

0x4c1: GOTO 0x4d6

0x4c2: GOTO 0x4c6

0x4c3: Push((int) 1)
0x4c4: @ Sleep(Stack[-1])
0x4c5: Pop(1)
0x4c6: Stack[-1] = 0
0x4c7: GOTO 0x4d5

0x4c8: Push(CvectorIndex(Stack[-0], 0))
0x4c9: Push(CvectorIndex(Stack[-0], 2))
0x4ca: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x4cb: Pop(2)
0x4cc: Pop(0); Push((bool) Stack[-3] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: GOTO 0x4d5

0x4cf: @ WaitForAnimEnd(Stack[-3])
0x4d0: Pop(0)
0x4d1: Pop(0); Push((bool) Stack[-3] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: GOTO 0x4d5

0x4d4: GOTO 0x4d6

0x4d5: GOTO 0x49c

0x4d6: GOTO 0x48f

0x4d7: Return(); Pop(8)

0x4d8: @ StopGroup0()
0x4d9: Pop(0)
0x4da: @ Stop()
0x4db: Pop(0)
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Push((int) 1)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-2] = "fire"
0x4e2: Return(); Pop(0)

0x4e3: Stack[-2] = "phys"
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty(cvector, cvector, cvector, cvector)
0x4e6: @ GetPosition(Stack[-2])
0x4e7: Pop(0)
0x4e8: @@ GetPosition(Stack[-1])
0x4e9: Pop(0)
0x4ea: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4eb: Return(); Pop(4)

0x4ec: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4ed: @ GetPosition(Stack[-3])
0x4ee: Pop(0)
0x4ef: @@ GetPosition(Stack[-2])
0x4f0: Pop(0)
0x4f1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4f2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4f3: Return(); Pop(6)

0x4f4: PushEmpty(object, object)
0x4f5: Push("player")
0x4f6: @ FindActor(Stack[-2], Stack[-1])
0x4f7: Pop(1)
0x4f8: Stack[-3] = Stack[-1]
0x4f9: Return(); Pop(2)

0x4fa: Stack[-1] = 0
0x4fb: PushEmpty(bool, bool)
0x4fc: Push("HasProperty")
0x4fd: Push((int) 2)
0x4fe: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-5] = (bool) 0
0x502: Return(); Pop(2)

0x503: @@ HasProperty(Stack[-3], Stack[-1])
0x504: Pop(0)
0x505: Stack[-5] = Stack[-1]
0x506: Return(); Pop(2)

0x507: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x508: PushEmpty(bool, object, string)
0x509: Stack[-2] = Stack[-18]
0x50a: Stack[-1] = "health"
0x50b: Call 0x4fb

0x50c: Pop(2)
0x50d: Pop(1); Push((bool) Stack[-1] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: Stack[-16] = (float) 0.0
0x510: Return(); Pop(12)

0x511: PushEmpty(bool, object, string)
0x512: Stack[-2] = Stack[-18]
0x513: Stack[-1] = "armor"
0x514: Call 0x4fb

0x515: Pop(2)
0x516: Pop(1); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x518: Stack[-6] = (int) 0
0x519: GOTO 0x51d

0x51a: Push("armor")
0x51b: @@ GetProperty(Stack[-1], Stack[-7])
0x51c: Pop(1)
0x51d: Push("armor_")
0x51e: PushEmpty(string, int)
0x51f: Stack[-1] = Stack[-16]
0x520: Call 0x4dd

0x521: Pop(1)
0x522: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x523: PushEmpty(bool, object, string)
0x524: Stack[-2] = Stack[-18]
0x525: Stack[-1] = Stack[-8]
0x526: Call 0x4fb

0x527: Pop(2)
0x528: Pop(1); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-4] = (int) 0
0x52b: GOTO 0x52e

0x52c: @@ GetProperty(Stack[-5], Stack[-4])
0x52d: Pop(0)
0x52e: PushEmpty(float, float, float)
0x52f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x530: Push((float)100.0)
0x531: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x532: Stack[-1] = (int) 1
0x533: Call 0x646

0x534: Stack[-6] = Stack[-3]
0x535: Pop(3)
0x536: Push("health")
0x537: @@ GetProperty(Stack[-1], Stack[-3])
0x538: Pop(1)
0x539: Push((int) 1)
0x53a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x53b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x53c: Push("health")
0x53d: PushEmpty(float, float, float, float)
0x53e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x53f: Stack[-2] = (int) 0
0x540: Stack[-1] = (int) 1
0x541: Call 0x64d

0x542: Pop(3)
0x543: @@ SetProperty(Stack[-2], Stack[-1])
0x544: Pop(2)
0x545: Stack[-16] = Stack[-1]
0x546: Return(); Pop(12)

0x547: PushEmpty(bool, bool)
0x548: @@ IsDead(Stack[-1])
0x549: Pop(0)
0x54a: Stack[-4] = Stack[-1]
0x54b: Return(); Pop(2)

0x54c: PushEmpty(object, object, object, object)
0x54d: Pop(0); Push((bool) Stack[-5] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-6] = (bool) 0
0x550: Return(); Pop(4)

0x551: PushEmpty(bool)
0x552: Stack[-1] = (bool) 0
0x553: Push("IsDead")
0x554: Push((int) 1)
0x555: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x556: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x557: PushEmpty(bool, object)
0x558: Stack[-1] = Stack[-8]
0x559: Call 0x547

0x55a: Pop(1)
0x55b: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55c: Stack[-1] = (bool) 1
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-6] = (bool) 0
0x55f: Return(); Pop(4)

0x560: @ GetScene(Stack[-2])
0x561: Pop(0)
0x562: Pop(0); Push((bool) Stack[-2] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x564: Stack[-6] = (bool) 0
0x565: Return(); Pop(4)

0x566: @@ GetScene(Stack[-1])
0x567: Pop(0)
0x568: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56a: Stack[-6] = (bool) 0
0x56b: Return(); Pop(4)

0x56c: Stack[-6] = (bool) 1
0x56d: Return(); Pop(4)

0x56e: Stack[-1] = 0
0x56f: Stack[-2] = 0
0x570: PushEmpty(int, int)
0x571: PushEmpty(bool, object)
0x572: Stack[-1] = Stack[-5]
0x573: Call 0x54c

0x574: Pop(1)
0x575: Pop(1); Push((bool) Stack[-1] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x577: Stack[-4] = (bool) 0
0x578: Return(); Pop(2)

0x579: PushEmpty(bool, object, string)
0x57a: Stack[-2] = Stack[-6]
0x57b: Stack[-1] = "noaccess"
0x57c: Call 0x4fb

0x57d: Pop(2)
0x57e: Pop(1); Push((bool) Stack[-1] == 0)
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: Stack[-4] = (bool) 1
0x581: Return(); Pop(2)

0x582: Push("noaccess")
0x583: @@ GetProperty(Stack[-1], Stack[-2])
0x584: Pop(1)
0x585: Push((int) 0)
0x586: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x587: Return(); Pop(2)

0x588: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x589: PushEmpty(bool)
0x58a: Stack[-1] = (bool) 0
0x58b: Push((int) 4)
0x58c: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58e: Push((int) 5)
0x58f: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: Stack[-1] = (bool) 1
0x592: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x593: @ GetScene(Stack[-10])
0x594: Pop(0)
0x595: @ GetPosition(Stack[-8])
0x596: Pop(0)
0x597: @ GetEyesHeight(Stack[-7])
0x598: Pop(0)
0x599: Push(CvectorIndex(Stack[-8], 1))
0x59a: Push((int) 2)
0x59b: Pop(1); Push(Stack[-9] / Stack[-1]);
0x59c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x59d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x59e: Push("scripted")
0x59f: Push(CVector(0.0, 0.0, 1.0))
0x5a0: Push("blood.xml")
0x5a1: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Stack[-9] = 0
0x5a4: Stack[-10] = 0
0x5a5: Pop(0); Push((bool) Stack[-23] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a7: Return(); Pop(20)

0x5a8: @ GetSecondaryAnimationType(Stack[-6])
0x5a9: Pop(0)
0x5aa: Push((int) 0)
0x5ab: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Return(); Pop(20)

0x5ae: @@ GetPosition(Stack[-5])
0x5af: Pop(0)
0x5b0: @ GetPosition(Stack[-4])
0x5b1: Pop(0)
0x5b2: @ GetDirection(Stack[-3])
0x5b3: Pop(0)
0x5b4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5b5: Push(CvectorIndex(Stack[-2], 0))
0x5b6: Push(CvectorIndex(Stack[-4], 0))
0x5b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5b8: Push(CvectorIndex(Stack[-3], 2))
0x5b9: Push(CvectorIndex(Stack[-5], 2))
0x5ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5bc: Push((int) 0)
0x5bd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-1] = "fhit"
0x5c0: GOTO 0x5c2

0x5c1: Stack[-1] = "bhit"
0x5c2: Push("hit_react")
0x5c3: Push("1")
0x5c4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5c5: Push("2")
0x5c6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5c7: Push((int) -10)
0x5c8: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c9: Pop(4)
0x5ca: Return(); Pop(20)

0x5cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5cc: @@ GetPosition(Stack[-3])
0x5cd: Pop(0)
0x5ce: @ GetPosition(Stack[-2])
0x5cf: Pop(0)
0x5d0: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5d1: Push(CvectorIndex(Stack[-1], 0))
0x5d2: Push(CvectorIndex(Stack[-2], 2))
0x5d3: @ RotateAsync(Stack[-2], Stack[-1])
0x5d4: Pop(2)
0x5d5: Return(); Pop(6)

0x5d6: PushEmpty(float, float, float, float)
0x5d7: @ GetEyesHeight(Stack[-2])
0x5d8: Pop(0)
0x5d9: @@ GetEyesHeight(Stack[-1])
0x5da: Pop(0)
0x5db: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5dc: Return(); Pop(4)

0x5dd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x5de: @@ GetPosition(Stack[-7])
0x5df: Pop(0)
0x5e0: @@ GetEyesHeight(Stack[-8])
0x5e1: Pop(0)
0x5e2: Push(CvectorIndex(Stack[-7], 1))
0x5e3: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x5e4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5e5: @ GetPosition(Stack[-6])
0x5e6: Pop(0)
0x5e7: @ GetEyesHeight(Stack[-8])
0x5e8: Pop(0)
0x5e9: Push(CvectorIndex(Stack[-6], 1))
0x5ea: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x5eb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5ec: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x5ed: Push(CvectorIndex(Stack[-5], 1))
0x5ee: Stack[-1] = (int) 0
0x5ef: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x5f0: Pop(0); Push(Stack[-5] | Stack[-5]);
0x5f1: Pop(1); Push(Sqrt(Stack[-1]))
0x5f2: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x5f3: Stack[-4] = -Stack[-5]; Pop(0);
0x5f4: Push((int) 70)
0x5f5: Pop(1); Push(Stack[-6] * Stack[-1]);
0x5f6: PushEmpty(cvector, cvector)
0x5f7: Push(CVector(0.0, 1.0, 0.0))
0x5f8: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x5f9: Call 0x638

0x5fa: Pop(1)
0x5fb: Push((int) 25)
0x5fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5fe: Push(CVector(0.0, 10.0, 0.0))
0x5ff: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x600: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x601: @ IsOverrideActive(Stack[-1])
0x602: Pop(0)
0x603: Push(Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-18] = (bool) 0
0x606: Return(); Pop(16)

0x607: @ StopWorld()
0x608: Pop(0)
0x609: @ CameraTransit(Stack[-2], Stack[-4])
0x60a: Pop(0)
0x60b: Push(CvectorIndex(Stack[-3], 0))
0x60c: Push(CvectorIndex(Stack[-4], 2))
0x60d: @ Rotate(Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: @ CameraWaitForPlayFinish()
0x610: Pop(0)
0x611: @ ResumeWorld()
0x612: Pop(0)
0x613: Stack[-18] = (bool) 1
0x614: Return(); Pop(16)

0x615: PushEmpty()
0x616: @ CameraSwitchToNormal()
0x617: Pop(0)
0x618: Return(); Pop(0)

0x619: PushEmpty(float, float, float, float)
0x61a: Push("playing ")
0x61b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x61c: @ Trace(Stack[-1])
0x61d: Pop(1)
0x61e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x61f: Pop(0)
0x620: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x621: Pop(0)
0x622: Push("start: ")
0x623: Pop(1); Push(Stack[-1] + Stack[-3]);
0x624: @ Trace(Stack[-1])
0x625: Pop(1)
0x626: Push("end: ")
0x627: Pop(1); Push(Stack[-1] + Stack[-2]);
0x628: @ Trace(Stack[-1])
0x629: Pop(1)
0x62a: Return(); Pop(4)

0x62b: PushEmpty(bool)
0x62c: Call 0x7c5

0x62d: Pop(0)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: @ lshStopSpeech()
0x630: Pop(0)
0x631: Return(); Pop(0)

0x632: PushEmpty(object, object)
0x633: @ self(Stack[-1])
0x634: Pop(0)
0x635: Stack[-3] = Stack[-1]
0x636: Return(); Pop(2)

0x637: Stack[-1] = 0
0x638: PushEmpty(float, float)
0x639: Pop(0); Push(Stack[-3] | Stack[-3]);
0x63a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x63b: Push((float)0.0)
0x63c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x63f: Return(); Pop(2)

0x640: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x641: Return(); Pop(2)

0x642: PushEmpty(cvector, cvector)
0x643: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x644: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x645: Return(); Pop(2)

0x646: PushEmpty()
0x647: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-3] = Stack[-2]
0x64a: GOTO 0x64c

0x64b: Stack[-3] = Stack[-1]
0x64c: Return(); Pop(0)

0x64d: PushEmpty()
0x64e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-4] = Stack[-2]
0x651: Return(); Pop(0)

0x652: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-4] = Stack[-1]
0x655: Return(); Pop(0)

0x656: Stack[-4] = Stack[-3]
0x657: Return(); Pop(0)

0x658: PushEmpty(object, object)
0x659: @ CreateObjectSet(Stack[-1])
0x65a: Pop(0)
0x65b: Stack[-3] = Stack[-1]
0x65c: Return(); Pop(2)

0x65d: Stack[-1] = 0
0x65e: PushEmpty()
0x65f: Push(CvectorIndex(Stack[-2], 0))
0x660: Push(CvectorIndex(Stack[-2], 0))
0x661: Pop(2); Push(Stack[-2] * Stack[-1]);
0x662: Push(CvectorIndex(Stack[-3], 2))
0x663: Push(CvectorIndex(Stack[-3], 2))
0x664: Pop(2); Push(Stack[-2] * Stack[-1]);
0x665: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x666: Return(); Pop(0)

0x667: PushEmpty()
0x668: Push(CvectorIndex(Stack[-1], 0))
0x669: Push(CvectorIndex(Stack[-2], 0))
0x66a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66b: Push(CvectorIndex(Stack[-2], 2))
0x66c: Push(CvectorIndex(Stack[-3], 2))
0x66d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66f: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: PushEmpty(float, cvector, cvector)
0x673: Stack[-2] = Stack[-5]
0x674: Stack[-1] = Stack[-4]
0x675: Call 0x65e

0x676: Pop(2)
0x677: PushEmpty(float, cvector)
0x678: Stack[-1] = Stack[-5]
0x679: Call 0x667

0x67a: Pop(1)
0x67b: PushEmpty(float, cvector)
0x67c: Stack[-1] = Stack[-5]
0x67d: Call 0x667

0x67e: Pop(1)
0x67f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x680: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x681: Return(); Pop(0)

0x682: PushEmpty(int, int)
0x683: @ GetVariable(Stack[-3], Stack[-1])
0x684: Pop(0)
0x685: Stack[-4] = Stack[-1]
0x686: Return(); Pop(2)

0x687: PushEmpty(object, object)
0x688: @ FindActor(Stack[-1], Stack[-4])
0x689: Pop(0)
0x68a: Pop(0); Push((bool) Stack[-1] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-5] = (bool) 0
0x68d: Return(); Pop(2)

0x68e: @ Trigger(Stack[-1], Stack[-3])
0x68f: Pop(0)
0x690: Stack[-5] = (bool) 1
0x691: Return(); Pop(2)

0x692: Stack[-1] = 0
0x693: PushEmpty()
0x694: Push("d11q01")
0x695: Push((int) 3)
0x696: @ SetVariable(Stack[-2], Stack[-1])
0x697: Pop(2)
0x698: PushEmpty(bool, string, string)
0x699: Stack[-2] = "quest_d11_01"
0x69a: Stack[-1] = "soldier_attack"
0x69b: Call 0x687

0x69c: Pop(3)
0x69d: PushEmpty(bool, string, string)
0x69e: Stack[-2] = "quest_d11_01"
0x69f: Stack[-1] = "restore_andrei"
0x6a0: Call 0x687

0x6a1: Pop(3)
0x6a2: Return(); Pop(0)

0x6a3: PushEmpty()
0x6a4: Push("ood11Officer1")
0x6a5: Push((int) 1)
0x6a6: @ SetVariable(Stack[-2], Stack[-1])
0x6a7: Pop(2)
0x6a8: Return(); Pop(0)

0x6a9: PushEmpty()
0x6aa: PushEmpty(int, string)
0x6ab: Stack[-1] = "ood11Officer1"
0x6ac: Call 0x682

0x6ad: Pop(1)
0x6ae: Push((int) 0)
0x6af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-2] = (bool) 1
0x6b2: Return(); Pop(0)

0x6b3: Stack[-2] = (bool) 0
0x6b4: Return(); Pop(0)

0x6b5: PushEmpty(int, int)
0x6b6: Push("player")
0x6b7: @ GetVariable(Stack[-1], Stack[-2])
0x6b8: Pop(1)
0x6b9: Push((int) 0)
0x6ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6bc: Stack[-3] = (int) 200001
0x6bd: Return(); Pop(2)

0x6be: GOTO 0x6c4

0x6bf: Push((int) 1)
0x6c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c2: Stack[-3] = (int) 200002
0x6c3: Return(); Pop(2)

0x6c4: Stack[-3] = (int) 200003
0x6c5: Return(); Pop(2)

0x6c6: PushEmpty(int, int, int, bool, int, int, int, bool)
0x6c7: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6c9: Push("GenerateMoney: iMin > iMax")
0x6ca: @ Trace(Stack[-1])
0x6cb: Pop(1)
0x6cc: Return(); Pop(8)

0x6cd: Stack[-4] = (int) 0
0x6ce: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d0: Pop(0); Push(Stack[-9] - Stack[-10]);
0x6d1: @ irand(Stack[-4], Stack[-1])
0x6d2: Pop(1)
0x6d3: GOTO 0x6d8

0x6d4: Push((int) 0)
0x6d5: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d7: Return(); Pop(8)

0x6d8: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x6d9: Push((int) 0)
0x6da: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6dc: Return(); Pop(8)

0x6dd: Push("Money")
0x6de: @ GetInvItemByName(Stack[-3], Stack[-1])
0x6df: Pop(1)
0x6e0: Push((int) 0)
0x6e1: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x6e2: Pop(1)
0x6e3: Return(); Pop(8)

0x6e4: PushEmpty(int, bool, int, bool)
0x6e5: Push((int) 0)
0x6e6: @ ClearSubContainer(Stack[-1])
0x6e7: Pop(1)
0x6e8: PushEmpty(int, int)
0x6e9: Stack[-2] = (int) 500
0x6ea: Stack[-1] = (int) 1000
0x6eb: Call 0x6c6

0x6ec: Pop(2)
0x6ed: Push((int) 4)
0x6ee: @ irand(Stack[-3], Stack[-1])
0x6ef: Pop(1)
0x6f0: Push((int) 0)
0x6f1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f3: PushEmpty(int, string)
0x6f4: Stack[-1] = "rifle_ammo"
0x6f5: Call 0x709

0x6f6: Pop(1)
0x6f7: Push((int) 0)
0x6f8: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x6f9: Pop(2)
0x6fa: Push((int) 3)
0x6fb: @ irand(Stack[-3], Stack[-1])
0x6fc: Pop(1)
0x6fd: Push((int) 0)
0x6fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x700: PushEmpty(int, string)
0x701: Stack[-1] = "rusk"
0x702: Call 0x709

0x703: Pop(1)
0x704: Push((int) 0)
0x705: Push((int) 1)
0x706: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: Return(); Pop(4)

0x709: PushEmpty(int, int)
0x70a: @ GetInvItemByName(Stack[-1], Stack[-3])
0x70b: Pop(0)
0x70c: Stack[-4] = Stack[-1]
0x70d: Return(); Pop(2)

0x70e: PushEmpty()
0x70f: PushEmpty(object)
0x710: Stack[-1] = Stack[-2]
0x711: Push(-1, 0); TaskCall(2)
0x712: Call 0x140

0x713: Pop(-1, 0); TaskReturn
0x714: Pop(1)
0x715: Return(); Pop(0)

0x716: PushEmpty()
0x717: PushEmpty(object, int, float)
0x718: Stack[-3] = Stack[-7]
0x719: Stack[-2] = Stack[-6]
0x71a: Stack[-1] = Stack[-5]
0x71b: Call 0x588

0x71c: Pop(3)
0x71d: Return(); Pop(0)

0x71e: PushEmpty(float, float)
0x71f: Push("health")
0x720: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x722: Push("health")
0x723: @ GetProperty(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Push((int) 0)
0x726: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: @ SignalDeath(Stack[-4])
0x729: Pop(0)
0x72a: Return(); Pop(2)

0x72b: PushEmpty()
0x72c: PushEmpty(object)
0x72d: Stack[-1] = Stack[-2]
0x72e: Call 0x7cd

0x72f: Pop(1)
0x730: Return(); Pop(0)

0x731: Push(GlobalVars[0])
0x732: PushEmpty(object)
0x733: Call 0x658

0x734: Stack[-2] = Stack[-1]
0x735: Pop(1)
0x736: GlobalVars[0] = Stack[-1]; Pop(1)
0x737: Return(); Pop(0)

0x738: PushEmpty()
0x739: PushEmpty(object, bool)
0x73a: Stack[-2] = Stack[-4]
0x73b: Stack[-1] = Stack[-3]
0x73c: Push(-2, 3); TaskCall(5)
0x73d: Call 0x2e5

0x73e: Pop(-2, 3); TaskReturn
0x73f: Pop(2)
0x740: @ ResetAAS()
0x741: Pop(0)
0x742: Return(); Pop(0)

0x743: PushEmpty(bool, bool)
0x744: Pop(0); Push((bool) Stack[-3] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Return(); Pop(2)

0x747: Push(GlobalVars[0])
0x748: @@ in(Stack[-2], Stack[-4])
0x749: Pop(1)
0x74a: Pop(0); Push((bool) Stack[-1] == 0)
0x74b: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74c: Push(GlobalVars[0])
0x74d: @@ add(Stack[-4])
0x74e: Pop(1)
0x74f: Return(); Pop(2)

0x750: PushEmpty()
0x751: PushEmpty(object)
0x752: Stack[-1] = Stack[-2]
0x753: Call 0x743

0x754: Pop(1)
0x755: PushEmpty(object, bool)
0x756: Stack[-2] = Stack[-3]
0x757: Stack[-1] = (bool) 1
0x758: Call 0x738

0x759: Pop(2)
0x75a: Return(); Pop(0)

0x75b: PushEmpty(bool, bool)
0x75c: Push(GlobalVars[0])
0x75d: @@ in(Stack[-2], Stack[-4])
0x75e: Pop(1)
0x75f: Push(Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x761: PushEmpty(object, bool)
0x762: Stack[-2] = Stack[-5]
0x763: Stack[-1] = (bool) 1
0x764: Call 0x738

0x765: Pop(2)
0x766: GOTO 0x76f

0x767: PushEmpty(object)
0x768: Stack[-1] = Stack[-4]
0x769: Push(-1, 2); TaskCall(4)
0x76a: Call 0x24a

0x76b: Pop(-1, 2); TaskReturn
0x76c: Pop(1)
0x76d: @ ResetAAS()
0x76e: Pop(0)
0x76f: Return(); Pop(2)

0x770: PushEmpty()
0x771: PushEmpty(float, object)
0x772: Stack[-1] = Stack[-3]
0x773: Call 0x4ec

0x774: Pop(1)
0x775: Push((float)40000.0)
0x776: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x777: Return(); Pop(0)

0x778: PushEmpty(bool, bool)
0x779: @ IsPlayerActor(Stack[-3], Stack[-1])
0x77a: Pop(0)
0x77b: Stack[-4] = Stack[-1]
0x77c: Return(); Pop(2)

0x77d: PushEmpty(bool, bool)
0x77e: PushEmpty(bool, object)
0x77f: Stack[-1] = Stack[-5]
0x780: Call 0x570

0x781: Pop(1)
0x782: Pop(1); Push((bool) Stack[-1] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-4] = (bool) 0
0x785: Return(); Pop(2)

0x786: Push(GlobalVars[0])
0x787: @@ in(Stack[-2], Stack[-4])
0x788: Pop(1)
0x789: Push(Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78b: Stack[-4] = (bool) 1
0x78c: Return(); Pop(2)

0x78d: PushEmpty(bool, object)
0x78e: Stack[-1] = Stack[-5]
0x78f: Call 0x778

0x790: Stack[-6] = Stack[-2]
0x791: Pop(2)
0x792: Return(); Pop(2)

0x793: PushEmpty()
0x794: PushEmpty(object)
0x795: Stack[-1] = Stack[-2]
0x796: Call 0x7c7

0x797: Pop(1)
0x798: Return(); Pop(0)

0x799: PushEmpty(float, bool, float, bool)
0x79a: PushEmpty(bool, object, string)
0x79b: Stack[-2] = Stack[-8]
0x79c: Stack[-1] = "reputation"
0x79d: Call 0x4fb

0x79e: Pop(2)
0x79f: Pop(1); Push((bool) Stack[-1] == 0)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-7] = (bool) 0
0x7a2: Return(); Pop(4)

0x7a3: Push("reputation")
0x7a4: @@ GetProperty(Stack[-1], Stack[-3])
0x7a5: Pop(1)
0x7a6: Push((float)0.5)
0x7a7: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-7] = (bool) 0
0x7aa: Return(); Pop(4)

0x7ab: @ CanSee(Stack[-1], Stack[-6])
0x7ac: Pop(0)
0x7ad: PushEmpty(bool)
0x7ae: Stack[-1] = (bool) 1
0x7af: Push(Stack[-2])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b1: PushEmpty(float, object)
0x7b2: Stack[-1] = Stack[-9]
0x7b3: Call 0x4ec

0x7b4: Pop(1)
0x7b5: Push((float)160000.0)
0x7b6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b8: Stack[-1] = (bool) 0
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7ba: Push((float)-0.2)
0x7bb: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7bc: Pop(1)
0x7bd: Stack[-7] = (bool) 1
0x7be: Return(); Pop(4)

0x7bf: Stack[-7] = (bool) 0
0x7c0: Return(); Pop(4)

0x7c1: Stack[-1] = (int) 14841
0x7c2: Return(); Pop(0)

0x7c3: Stack[-1] = "ui/NPC_Black.png"
0x7c4: Return(); Pop(0)

0x7c5: Stack[-1] = (bool) 0
0x7c6: Return(); Pop(0)

0x7c7: PushEmpty()
0x7c8: PushEmpty(object)
0x7c9: Stack[-1] = Stack[-2]
0x7ca: Call 0x75b

0x7cb: Pop(1)
0x7cc: Return(); Pop(0)

0x7cd: PushEmpty(object, object)
0x7ce: @ GetScene(Stack[-1])
0x7cf: Pop(0)
0x7d0: PushEmpty(object)
0x7d1: Call 0x632

0x7d2: Pop(0)
0x7d3: @@ RemoveStationaryActor(Stack[-1])
0x7d4: Pop(1)
0x7d5: PushEmpty(object)
0x7d6: Stack[-1] = Stack[-4]
0x7d7: Call 0x70e

0x7d8: Pop(1)
0x7d9: Return(); Pop(2)

0x7da: Stack[-1] = 0
