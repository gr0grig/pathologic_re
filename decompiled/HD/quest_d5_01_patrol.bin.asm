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
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	GetPosition
	walk
	run
	quest_d5_01
	dead
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	factory_fight
	fire
	bullet
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
	fhit
	bhit
	hit_react
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	battle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	revolver_ammo
	alpha_pills

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
	FindActor (2 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x519
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3a0 Vars = (int)
		EVENT_1 Op = 0x3bb Vars = (object)
		EVENT_2 Op = 0x3ca Vars = (object)
		EVENT_10 Op = 0x450 Vars = (object)
		EVENT_41 Op = 0x45b Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x484 Vars = (object)
		EVENT_6 Op = 0x48e Vars = ()
		EVENT_22 Op = 0x50b Vars = (object, int, float, float)
		EVENT_16 Op = 0x50d Vars = (object, string)
		EVENT_41 Op = 0x50f Vars = (object)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x51d Vars = (object)
		EVENT_17 Op = 0x529 Vars = (object)
		EVENT_26 Op = 0x534 Vars = (string)

Events:
EVENT_22 Op = 0x7c8 Vars = (object, int, float, float)
EVENT_43 Op = 0x7d0 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7da Vars = (object, string)
EVENT_41 Op = 0x7e7 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x677

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x7ef

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7ed

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7f1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7f3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x77b

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
0x41: Call2 0x6bc

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
0x54: Push((int) 512541)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 512542)
0x5a: Push((int) -1)
0x5b: Push((int) 13711)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 515784)
0x5f: Push((int) -1)
0x60: Push((int) 16856)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x7f5

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x6ce

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
0x86: Call2 0x7f5

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
0x96: Call2 0x6de

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x6f8

0x9f: Pop(0)
0xa0: Push((int) 13710)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 512541)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 512542)
0xad: Push((int) -1)
0xae: Push((int) 13711)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 515784)
0xb2: Push((int) -1)
0xb3: Push((int) 16856)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x7f5

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

0xc4: PushEmpty(object, object)
0xc5: Push("player")
0xc6: @ FindActor(Stack[-2], Stack[-1])
0xc7: Pop(1)
0xc8: Pop(0); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Return(); Pop(2)

0xcb: PushEmpty(object, bool, float)
0xcc: Stack[-3] = Stack[-4]
0xcd: Stack[-2] = (bool) 1
0xce: Stack[-1] = (float) 180.0
0xcf: Call2 0xd9

0xd0: Pop(3)
0xd1: Return(); Pop(2)

0xd2: Stack[-1] = 0
0xd3: PushEmpty()
0xd4: Stack[-3] = (float) 0.3
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Stack[-3] = (int) 0
0xd8: Return(); Pop(0)

0xd9: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xda: PushEmpty()
0xdb: Call2 0x1be

0xdc: Pop(0)
0xdd: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xde: Push("@GetAttackDistance")
0xdf: Push((int) 1)
0xe0: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: @@ GetAttackDistance(Stack[-11])
0xe3: Pop(0)
0xe4: Push((int) 50)
0xe5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xe6: GOTO 0xe8

0xe7: Stack[-11] = Stack[-23]
0xe8: Push((int) 150)
0xe9: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Stack[-11] = (int) 150
0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xed: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xee: @ IsPlayerActor(Stack[-0], Stack[-8])
0xef: Pop(0)
0xf0: Push(Stack[-8])
0xf1: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf2: Push("attack")
0xf3: @ PlayGlobalMusic(Stack[-1])
0xf4: Pop(1)
0xf5: PushEmpty(object)
0xf6: Call2 0x728

0xf7: Pop(0)
0xf8: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xf9: Pop(1)
0xfa: Push(Stack[-24])
0xfb: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfc: Stack[-7] = (bool) 0
0xfd: GOTO 0xff

0xfe: Stack[-7] = (bool) 1
0xff: Push((float)400.0)
0x100: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x101: PushEmpty(bool)
0x102: Stack[-1] = (bool) 0
0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x5d6

0x106: Pop(1)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: Stack[-1] = (bool) 1
0x10b: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0x35b

0x10e: Pop(0)
0x10f: @@ GetPFPosition(Stack[-10])
0x110: Pop(0)
0x111: @ GetPFPosition(Stack[-9])
0x112: Pop(0)
0x113: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x114: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x115: Pop(0); Push(Stack[-6] * Stack[-6]);
0x116: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x118: PushEmpty(bool, object, float, float, bool, bool)
0x119: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Stack[-4] = Stack[-17]
0x11b: Stack[-3] = (float) 10000.0
0x11c: Stack[-2] = (bool) 1
0x11d: Stack[-1] = (bool) 0
0x11e: Push(-6, 3); TaskCall(3)
0x11f: Call2 0x36f

0x120: Pop(-6, 3); TaskReturn
0x121: Pop(5)
0x122: Pop(1); Push((bool) Stack[-1] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: GOTO 0x1ad

0x125: Stack[-7] = (bool) 0
0x126: GOTO 0x1ac

0x127: Pop(0); Push(Stack[-23] * Stack[-23]);
0x128: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x12a: @@ GetPFPosition(Stack[-3])
0x12b: Pop(0)
0x12c: @ CanReachByPF(Stack[-2], Stack[-3])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-2] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x130: PushEmpty(bool, object, float, float, bool, bool)
0x131: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x132: Stack[-4] = Stack[-17]
0x133: Stack[-3] = (float) 10000.0
0x134: Stack[-2] = (bool) 1
0x135: Stack[-1] = (bool) 0
0x136: Push(-6, 3); TaskCall(3)
0x137: Call2 0x36f

0x138: Pop(-6, 3); TaskReturn
0x139: Pop(5)
0x13a: Pop(1); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: GOTO 0x1ad

0x13d: Stack[-7] = (bool) 0
0x13e: GOTO 0x101

0x13f: Pop(0); Push((bool) Stack[-7] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x141: PushEmpty(object)
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x66c

0x144: Pop(1)
0x145: Push("all")
0x146: Push("attack_on")
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: @ WaitForAnimEnd()
0x14a: Pop(0)
0x14b: PushEmpty()
0x14c: Call2 0x35b

0x14d: Pop(0)
0x14e: @ StopAsync()
0x14f: Pop(0)
0x150: Stack[-7] = (bool) 1
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x153: Call2 0x5d6

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: GOTO 0x1ad

0x158: @ rand(Stack[-1])
0x159: Pop(0)
0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 1
0x15c: Push((float)0.25)
0x15d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(bool)
0x160: Call2 0x330

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 0
0x164: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x165: @ Face(Stack[-0])
0x166: Pop(0)
0x167: PushEmpty()
0x168: Call2 0x362

0x169: Pop(0)
0x16a: Push("all")
0x16b: Push("attack_stay")
0x16c: @ PlayAnimation(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: PushEmpty(bool, float)
0x16f: Stack[-1] = Stack[-25]
0x170: Call2 0x2ac

0x171: Pop(2)
0x172: @ StopAsync()
0x173: Pop(0)
0x174: GOTO 0x1a3

0x175: @ Face(Stack[-0])
0x176: Pop(0)
0x177: Push("all")
0x178: Push("fjump")
0x179: @ PlayAnimation(Stack[-2], Stack[-1])
0x17a: Pop(2)
0x17b: @ WaitForAnimEnd()
0x17c: Pop(0)
0x17d: PushEmpty()
0x17e: Call2 0x35b

0x17f: Pop(0)
0x180: Push(CVector(0.0, 0.0, 0.0))
0x181: @ SetSpeed(Stack[-1])
0x182: Pop(1)
0x183: @ Stop()
0x184: Pop(0)
0x185: @ StopAsync()
0x186: Pop(0)
0x187: PushEmpty(bool)
0x188: Call2 0x330

0x189: Pop(0)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18c: PushEmpty(bool, object)
0x18d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18e: Call2 0x5d6

0x18f: Pop(1)
0x190: Pop(1); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x1ad

0x193: @@ GetPFPosition(Stack[-10])
0x194: Pop(0)
0x195: @ GetPFPosition(Stack[-9])
0x196: Pop(0)
0x197: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x198: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x199: Pop(0); Push(Stack[-23] * Stack[-23]);
0x19a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19c: PushEmpty(bool, float)
0x19d: Stack[-1] = Stack[-25]
0x19e: Call2 0x208

0x19f: Pop(1)
0x1a0: Pop(1); Push((bool) Stack[-1] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1ad

0x1a3: GOTO 0x1ac

0x1a4: PushEmpty(bool, float)
0x1a5: Stack[-1] = Stack[-25]
0x1a6: Call2 0x208

0x1a7: Pop(1)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: GOTO 0x1ad

0x1ab: Stack[-7] = (bool) 1
0x1ac: GOTO 0x101

0x1ad: @ WaitForAnimEnd()
0x1ae: Pop(0)
0x1af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(22)

0x1b2: Push("all")
0x1b3: Push("attack_off")
0x1b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: @ WaitForAnimEnd()
0x1b7: Pop(0)
0x1b8: Push(Stack[-8])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ba: Push((float)2.0)
0x1bb: @ Sleep(Stack[-1])
0x1bc: Pop(1)
0x1bd: Return(); Pop(22)

0x1be: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1bf: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1c0: Push("all")
0x1c1: Push("attack_begin")
0x1c2: Push((int) 1)
0x1c3: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Pop(0); Push((bool) Stack[-3] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: GOTO 0x1cd

0x1ca: Push((int) 1)
0x1cb: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1cc: GOTO 0x1c0

0x1cd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1ce: Push("attack")
0x1cf: Push((int) 1)
0x1d0: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d2: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1d3: Pop(1)
0x1d4: Pop(0); Push((bool) Stack[-2] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: GOTO 0x1da

0x1d7: Push((int) 1)
0x1d8: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1d9: GOTO 0x1ce

0x1da: Push("all")
0x1db: Push("bjump")
0x1dc: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Push(CvectorIndex(Stack[-1], 2))
0x1df: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1e0: Return(); Pop(6)

0x1e1: PushEmpty(object, float, float, object, float, float)
0x1e2: Push((float)0.9)
0x1e3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1e4: @ GetVictim(Stack[-1], Stack[-4])
0x1e5: Pop(1)
0x1e6: @ ReportAttack(Stack[-0])
0x1e7: Pop(0)
0x1e8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1e9: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1ea: PushEmpty(float, object, int)
0x1eb: Stack[-2] = Stack[-6]
0x1ec: Stack[-1] = Stack[-10]
0x1ed: Call2 0xd3

0x1ee: Stack[-5] = Stack[-3]
0x1ef: Pop(3)
0x1f0: PushEmpty(float, object, float, int)
0x1f1: Stack[-3] = Stack[-7]
0x1f2: Stack[-2] = Stack[-6]
0x1f3: PushEmpty(int, object, int)
0x1f4: Stack[-2] = Stack[-10]
0x1f5: Stack[-1] = Stack[-14]
0x1f6: Call2 0xd6

0x1f7: Stack[-4] = Stack[-3]
0x1f8: Pop(3)
0x1f9: Call2 0x564

0x1fa: Stack[-5] = Stack[-4]
0x1fb: Pop(4)
0x1fc: PushEmpty(int)
0x1fd: Call2 0x360

0x1fe: Pop(0)
0x1ff: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x200: Pop(1)
0x201: PushEmpty(object, float)
0x202: Stack[-2] = Stack[-5]
0x203: Stack[-1] = Stack[-3]
0x204: Call2 0x367

0x205: Pop(2)
0x206: Return(); Pop(6)

0x207: Stack[-3] = 0
0x208: PushEmpty(int, bool, int, string, int, bool, int, string)
0x209: PushEmpty()
0x20a: Call2 0x35b

0x20b: Pop(0)
0x20c: @ irand(Stack[-4], Stack[-1])
0x20d: Pop(0)
0x20e: Push((int) 1)
0x20f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x210: @ Face(Stack[-0])
0x211: Pop(0)
0x212: Push((bool) 1)
0x213: @ SetAttackState(Stack[-1])
0x214: Pop(1)
0x215: PushEmpty()
0x216: Call2 0x770

0x217: Pop(0)
0x218: Push("all")
0x219: Push("attack_begin")
0x21a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x21b: @ PlayAnimation(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: @ WaitForAnimEnd()
0x21e: Pop(0)
0x21f: PushEmpty()
0x220: Call2 0x33b

0x221: Pop(0)
0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x224: Call2 0x5d6

0x225: Pop(1)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x228: @ StopAsync()
0x229: Pop(0)
0x22a: Stack[-10] = (bool) 0
0x22b: Return(); Pop(8)

0x22c: PushEmpty(float, int)
0x22d: Stack[-2] = Stack[-11]
0x22e: Stack[-1] = Stack[-6]
0x22f: Call2 0x1e1

0x230: Pop(2)
0x231: Push("all")
0x232: Push("attack_middle")
0x233: Pop(1); Push(Stack[-1] + Stack[-6]);
0x234: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: Push(Stack[-3])
0x237: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x770

0x23a: Pop(0)
0x23b: Push("all")
0x23c: Push("attack_middle")
0x23d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x23e: @ PlayAnimation(Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: @ WaitForAnimEnd()
0x241: Pop(0)
0x242: PushEmpty()
0x243: Call2 0x35b

0x244: Pop(0)
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x247: Call2 0x5d6

0x248: Pop(1)
0x249: Pop(1); Push((bool) Stack[-1] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24b: @ StopAsync()
0x24c: Pop(0)
0x24d: Stack[-10] = (bool) 0
0x24e: Return(); Pop(8)

0x24f: PushEmpty(float, int)
0x250: Stack[-2] = Stack[-11]
0x251: Stack[-1] = Stack[-6]
0x252: Call2 0x1e1

0x253: Pop(2)
0x254: Stack[-2] = (int) 1
0x255: Push("attack_middle")
0x256: Pop(1); Push(Stack[-1] + Stack[-5]);
0x257: Push("_")
0x258: Pop(2); Push(Stack[-2] + Stack[-1]);
0x259: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x25a: Push("all")
0x25b: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x25c: Pop(1)
0x25d: Pop(0); Push((bool) Stack[-3] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x27d

0x260: PushEmpty()
0x261: Call2 0x770

0x262: Pop(0)
0x263: Push("all")
0x264: @ PlayAnimation(Stack[-1], Stack[-2])
0x265: Pop(1)
0x266: @ WaitForAnimEnd()
0x267: Pop(0)
0x268: PushEmpty()
0x269: Call2 0x35b

0x26a: Pop(0)
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Call2 0x5d6

0x26e: Pop(1)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x271: @ StopAsync()
0x272: Pop(0)
0x273: Stack[-10] = (bool) 0
0x274: Return(); Pop(8)

0x275: PushEmpty(float, int)
0x276: Stack[-2] = Stack[-11]
0x277: Stack[-1] = Stack[-6]
0x278: Call2 0x1e1

0x279: Pop(2)
0x27a: Push((int) 1)
0x27b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x27c: GOTO 0x255

0x27d: Push((bool) 0)
0x27e: @ SetAttackState(Stack[-1])
0x27f: Pop(1)
0x280: Push("all")
0x281: Push("attack_end")
0x282: Pop(1); Push(Stack[-1] + Stack[-6]);
0x283: @ PlayAnimation(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: PushEmpty(bool)
0x286: Call2 0x369

0x287: Pop(0)
0x288: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x289: PushEmpty(bool, float)
0x28a: Stack[-1] = (float) 0.75
0x28b: Call2 0x291

0x28c: Pop(2)
0x28d: @ StopAsync()
0x28e: Pop(0)
0x28f: Stack[-10] = (bool) 1
0x290: Return(); Pop(8)

0x291: PushEmpty(float, bool, float, bool)
0x292: @ rand(Stack[-2])
0x293: Pop(0)
0x294: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x295: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x296: @ IsAnimationPlaying(Stack[-1])
0x297: Pop(0)
0x298: Pop(0); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a4

0x29b: PushEmpty(bool)
0x29c: Call2 0x2f3

0x29d: Pop(0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-6] = (bool) 1
0x2a0: Return(); Pop(4)

0x2a1: @ sync()
0x2a2: Pop(0)
0x2a3: GOTO 0x296

0x2a4: GOTO 0x2aa

0x2a5: @ WaitForAnimEnd()
0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call2 0x35b

0x2a9: Pop(0)
0x2aa: Stack[-6] = (bool) 0
0x2ab: Return(); Pop(4)

0x2ac: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2ad: @ IsAnimationPlaying(Stack[-5])
0x2ae: Pop(0)
0x2af: Pop(0); Push((bool) Stack[-5] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2d2

0x2b2: PushEmpty(bool)
0x2b3: Call2 0x2f3

0x2b4: Pop(0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-12] = (bool) 1
0x2b7: Return(); Pop(10)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x5d6

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[-12] = (bool) 0
0x2bf: Return(); Pop(10)

0x2c0: @@ GetPFPosition(Stack[-4])
0x2c1: Pop(0)
0x2c2: @ GetPFPosition(Stack[-3])
0x2c3: Pop(0)
0x2c4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2c5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2c6: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c9: PushEmpty(bool, float)
0x2ca: Stack[-1] = Stack[-13]
0x2cb: Call2 0x208

0x2cc: Pop(2)
0x2cd: Stack[-12] = (bool) 1
0x2ce: Return(); Pop(10)

0x2cf: @ sync()
0x2d0: Pop(0)
0x2d1: GOTO 0x2ad

0x2d2: PushEmpty()
0x2d3: Call2 0x35b

0x2d4: Pop(0)
0x2d5: Stack[-12] = (bool) 0
0x2d6: Return(); Pop(10)

0x2d7: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call2 0x5d6

0x2db: Pop(1)
0x2dc: Pop(1); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-11] = (bool) 0
0x2df: Return(); Pop(10)

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x330

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e4: @@ GetPFPosition(Stack[-5])
0x2e5: Pop(0)
0x2e6: @ GetPFPosition(Stack[-4])
0x2e7: Pop(0)
0x2e8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2e9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2ea: @@ GetAttackDistance(Stack[-1])
0x2eb: Pop(0)
0x2ec: Push((int) 50)
0x2ed: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ee: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2ef: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2f0: Return(); Pop(10)

0x2f1: Stack[-11] = (bool) 0
0x2f2: Return(); Pop(10)

0x2f3: PushEmpty(bool)
0x2f4: Stack[-1] = (bool) 0
0x2f5: PushEmpty(bool)
0x2f6: Call2 0x2d7

0x2f7: Pop(0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f9: PushEmpty(bool)
0x2fa: Call2 0x303

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 1
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-1] = (bool) 1
0x300: Return(); Pop(0)

0x301: Stack[-1] = (bool) 0
0x302: Return(); Pop(0)

0x303: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x304: @ GetScene(Stack[-5])
0x305: Pop(0)
0x306: Stack[-4] = (bool) 0
0x307: PushEmpty(cvector, object)
0x308: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x309: Call2 0x54c

0x30a: Pop(1)
0x30b: Pop(1); Push(( -Stack[-1])
0x30c: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x30d: Pop(1)
0x30e: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x32d

0x311: @ Face(Stack[-0])
0x312: Pop(0)
0x313: Push("all")
0x314: Push("bjump")
0x315: @ PlayAnimation(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: @@ GetPFPosition(Stack[-2])
0x318: Pop(0)
0x319: @ GetPFPosition(Stack[-1])
0x31a: Pop(0)
0x31b: @ WaitForAnimEnd()
0x31c: Pop(0)
0x31d: PushEmpty()
0x31e: Call2 0x35b

0x31f: Pop(0)
0x320: @ StopAsync()
0x321: Pop(0)
0x322: Push(CVector(0.0, 0.0, 0.0))
0x323: @ SetSpeed(Stack[-1])
0x324: Pop(1)
0x325: Stack[-4] = (bool) 1
0x326: PushEmpty(bool)
0x327: Call2 0x2d7

0x328: Pop(0)
0x329: Pop(1); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: GOTO 0x32d

0x32c: GOTO 0x307

0x32d: Stack[-11] = Stack[-4]
0x32e: Return(); Pop(10)

0x32f: Stack[-5] = 0
0x330: PushEmpty(bool, bool)
0x331: Push("IsAttacking")
0x332: Push((int) 1)
0x333: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x334: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x335: @@ IsAttacking(Stack[-1])
0x336: Pop(0)
0x337: Stack[-3] = Stack[-1]
0x338: Return(); Pop(2)

0x339: Stack[-3] = (bool) 0
0x33a: Return(); Pop(2)

0x33b: PushEmpty(float, int, float, int)
0x33c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: Return(); Pop(4)

0x33f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: Push((int) -1)
0x342: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x343: Push((int) 0)
0x344: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: Return(); Pop(4)

0x347: @ rand(Stack[-2])
0x348: Pop(0)
0x349: PushEmpty(float)
0x34a: Call2 0x36d

0x34b: Pop(0)
0x34c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x34e: @ irand(Stack[-1], Stack[-2])
0x34f: Pop(0)
0x350: Push((int) 1)
0x351: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x352: Push("attack")
0x353: Pop(1); Push(Stack[-1] + Stack[-2]);
0x354: @ Speak(Stack[-1])
0x355: Pop(1)
0x356: PushEmpty(int)
0x357: Call2 0x36b

0x358: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x359: Pop(1)
0x35a: Return(); Pop(4)

0x35b: PushEmpty(object)
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call2 0x767

0x35e: Pop(1)
0x35f: Return(); Pop(0)

0x360: Stack[-1] = (int) 0
0x361: Return(); Pop(0)

0x362: PushEmpty(string)
0x363: Stack[-1] = "attack_stay"
0x364: Call2 0x6ff

0x365: Pop(1)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: Return(); Pop(0)

0x369: Stack[-1] = (bool) 1
0x36a: Return(); Pop(0)

0x36b: Stack[-1] = (int) 1
0x36c: Return(); Pop(0)

0x36d: Stack[-1] = (float) 0.5
0x36e: Return(); Pop(0)

0x36f: PushEmpty(bool, bool, bool, bool)
0x370: PushEmpty(object)
0x371: Stack[-1] = Stack[-10]
0x372: Call2 0x767

0x373: Pop(1)
0x374: Push((int) 1)
0x375: Push((int) 5)
0x376: @ SetTimer(Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: @ CanSee(Stack[-2], Stack[-9])
0x379: Pop(0)
0x37a: Push(Stack[-2])
0x37b: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x37d: PushEmpty(object)
0x37e: Stack[-1] = Stack[-10]
0x37f: Call2 0x6ed

0x380: Pop(1)
0x381: GOTO 0x383

0x382: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[-11]
0x385: Call2 0x553

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x388: PushEmpty(object)
0x389: Call2 0x728

0x38a: Pop(0)
0x38b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x38c: Pop(1)
0x38d: PushEmpty(bool, object, float, float, bool, bool)
0x38e: Stack[-5] = Stack[-15]
0x38f: Stack[-4] = Stack[-14]
0x390: Stack[-3] = Stack[-13]
0x391: Stack[-2] = Stack[-12]
0x392: Stack[-1] = Stack[-11]
0x393: Call2 0x3d8

0x394: Stack[-7] = Stack[-6]
0x395: Pop(6)
0x396: Push( Stack[2 + Tasks[-1].StackPointer] )
0x397: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x398: Push("head")
0x399: @ UnlookAsync(Stack[-1])
0x39a: Pop(1)
0x39b: Push((int) 1)
0x39c: @ KillTimer(Stack[-1])
0x39d: Pop(1)
0x39e: Stack[-10] = Stack[-1]
0x39f: Return(); Pop(4)

0x3a0: PushEmpty()
0x3a1: Push((int) 1)
0x3a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a4: PushEmpty(object)
0x3a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Call2 0x767

0x3a7: Pop(1)
0x3a8: GOTO 0x3ad

0x3a9: PushEmpty(int)
0x3aa: Stack[-1] = Stack[-2]
0x3ab: Call2 0x43e

0x3ac: Pop(1)
0x3ad: Return(); Pop(0)

0x3ae: Push((int) 1)
0x3af: @ KillTimer(Stack[-1])
0x3b0: Pop(1)
0x3b1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3b4: Push("head")
0x3b5: @ UnlookAsync(Stack[-1])
0x3b6: Pop(1)
0x3b7: PushEmpty()
0x3b8: Call2 0x454

0x3b9: Pop(0)
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: PushEmpty(bool)
0x3bd: Stack[-1] = (bool) 0
0x3be: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Stack[-1] = (bool) 1
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3c5: PushEmpty(object)
0x3c6: Stack[-1] = Stack[-2]
0x3c7: Call2 0x6ed

0x3c8: Pop(1)
0x3c9: Return(); Pop(0)

0x3ca: PushEmpty()
0x3cb: PushEmpty(bool)
0x3cc: Stack[-1] = (bool) 0
0x3cd: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 1
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3d4: Push("head")
0x3d5: @ UnlookAsync(Stack[-1])
0x3d6: Pop(1)
0x3d7: Return(); Pop(0)

0x3d8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3d9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3da: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3db: Stack[-7] = Stack[-17]
0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[-23]
0x3de: Call2 0x464

0x3df: Pop(1)
0x3e0: Pop(1); Push((bool) Stack[-1] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-22] = (bool) 0
0x3e3: Return(); Pop(16)

0x3e4: @@ GetPosition(Stack[-5])
0x3e5: Pop(0)
0x3e6: @ GetPosition(Stack[-4])
0x3e7: Pop(0)
0x3e8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3e9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: Push((int) 0)
0x3ed: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f4: @ Stop()
0x3f5: Pop(0)
0x3f6: Stack[-22] = (bool) 0
0x3f7: Return(); Pop(16)

0x3f8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x3fb: @@ GetPFPosition(Stack[-5])
0x3fc: Pop(0)
0x3fd: @ FindPathTo(Stack[-1], Stack[-5])
0x3fe: Pop(0)
0x3ff: Pop(0); Push(( Stack[-1] != 0 )
0x400: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x401: Stack[-6] = Stack[-1]
0x402: Stack[-1] = 0
0x403: Pop(0); Push(( Stack[-6] != 0 )
0x404: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x405: Push(Stack[-7])
0x406: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x407: Stack[-7] = (bool) 0
0x408: @ RotatePath(Stack[-6], Stack[-8])
0x409: Pop(0)
0x40a: Pop(0); Push((bool) Stack[-8] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: GOTO 0x43c

0x40d: Push((int) 0)
0x40e: Push((float)0.3)
0x40f: @ SetTimer(Stack[-2], Stack[-1])
0x410: Pop(2)
0x411: PushEmpty(string)
0x412: Call2 0x46b

0x413: Pop(0)
0x414: PushEmpty(string)
0x415: Call2 0x46d

0x416: Pop(0)
0x417: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: Pop(0); Push((bool) Stack[-8] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x41c: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41d: Stack[-6] = 0
0x41e: GOTO 0x43c

0x41f: GOTO 0x421

0x420: GOTO 0x43b

0x421: GOTO 0x423

0x422: Stack[-6] = 0
0x423: GOTO 0x434

0x424: Push((int) 0)
0x425: @ KillTimer(Stack[-1])
0x426: Pop(1)
0x427: Push((float)0.5)
0x428: @ Sleep(Stack[-1], Stack[-9])
0x429: Pop(1)
0x42a: Pop(0); Push((bool) Stack[-8] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-6] = 0
0x42f: GOTO 0x43c

0x430: Push((int) 0)
0x431: Push((float)0.3)
0x432: @ SetTimer(Stack[-2], Stack[-1])
0x433: Pop(2)
0x434: Stack[-1] = 0
0x435: GOTO 0x43a

0x436: Push((int) 0)
0x437: @ KillTimer(Stack[-1])
0x438: Pop(1)
0x439: GOTO 0x43c

0x43a: Stack[-6] = 0
0x43b: GOTO 0x3dc

0x43c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x43d: Return(); Pop(16)

0x43e: PushEmpty()
0x43f: Push((int) 0)
0x440: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Return(); Pop(0)

0x443: PushEmpty(bool, object)
0x444: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x445: Call2 0x464

0x446: Pop(1)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x44a: Push((int) 0)
0x44b: @ KillTimer(Stack[-1])
0x44c: Pop(1)
0x44d: @ Stop()
0x44e: Pop(0)
0x44f: Return(); Pop(0)

0x450: PushEmpty()
0x451: @ RequestClearPath(Stack[-1])
0x452: Pop(0)
0x453: Return(); Pop(0)

0x454: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x455: Push((int) 0)
0x456: @ KillTimer(Stack[-1])
0x457: Pop(1)
0x458: @ Stop()
0x459: Pop(0)
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: PushEmpty()
0x45d: Call2 0x3ae

0x45e: Pop(0)
0x45f: PushEmpty(object)
0x460: Stack[-1] = Stack[-2]
0x461: Call2 0x7e7

0x462: Pop(1)
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[-3]
0x467: Call2 0x5d6

0x468: Stack[-4] = Stack[-2]
0x469: Pop(2)
0x46a: Return(); Pop(0)

0x46b: Stack[-1] = "walk"
0x46c: Return(); Pop(0)

0x46d: Stack[-1] = "run"
0x46e: Return(); Pop(0)

0x46f: PushEmpty()
0x470: PushEmpty(bool, string, string)
0x471: Stack[-2] = "quest_d5_01"
0x472: Stack[-1] = "dead"
0x473: Call2 0x75b

0x474: Pop(3)
0x475: PushEmpty(object)
0x476: Stack[-1] = Stack[-2]
0x477: Call2 0x496

0x478: Pop(1)
0x479: Push((int) 50)
0x47a: Push((int) 40)
0x47b: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: PushEmpty()
0x47e: Call2 0x7b0

0x47f: Pop(0)
0x480: @ Hold()
0x481: Pop(0)
0x482: GOTO 0x480

0x483: Return(); Pop(0)

0x484: PushEmpty(bool, bool)
0x485: @ IsOverrideActive(Stack[-1])
0x486: Pop(0)
0x487: Pop(0); Push((bool) Stack[-1] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x489: PushEmpty(object)
0x48a: Stack[-1] = Stack[-4]
0x48b: Call2 0x792

0x48c: Pop(1)
0x48d: Return(); Pop(2)

0x48e: PushEmpty(object)
0x48f: Call2 0x728

0x490: Pop(0)
0x491: @ RemoveActor(Stack[-1])
0x492: Pop(1)
0x493: @ Hold()
0x494: Pop(0)
0x495: Return(); Pop(0)

0x496: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x497: Pop(0); Push((bool) Stack[-21] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x499: PushEmpty(string)
0x49a: Stack[-1] = "fdie"
0x49b: Call2 0x4f1

0x49c: Pop(1)
0x49d: GOTO 0x4f0

0x49e: @@ GetPosition(Stack[-10])
0x49f: Pop(0)
0x4a0: @ GetPosition(Stack[-9])
0x4a1: Pop(0)
0x4a2: @ GetDirection(Stack[-8])
0x4a3: Pop(0)
0x4a4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4a5: Push(CvectorIndex(Stack[-7], 0))
0x4a6: Push(CvectorIndex(Stack[-9], 0))
0x4a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a8: Push(CvectorIndex(Stack[-8], 2))
0x4a9: Push(CvectorIndex(Stack[-10], 2))
0x4aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ac: Push((int) 0)
0x4ad: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-6] = "fdie"
0x4b0: GOTO 0x4b2

0x4b1: Stack[-6] = "bdie"
0x4b2: @ RemoveRTEnvelope()
0x4b3: Pop(0)
0x4b4: @ SetDeathState()
0x4b5: Pop(0)
0x4b6: @ Stop()
0x4b7: Pop(0)
0x4b8: @ StopAsync()
0x4b9: Pop(0)
0x4ba: Stack[-5] = Stack[-21]
0x4bb: Push("GetScriptProperty")
0x4bc: Push((int) 2)
0x4bd: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4be: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4bf: Push("Owner")
0x4c0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c1: Pop(1)
0x4c2: Push(Stack[-4])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: Push("Owner")
0x4c5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4c6: Pop(1)
0x4c7: Pop(0); Push((bool) Stack[-5] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-5] = Stack[-21]
0x4ca: Push("@GetEyesHeight")
0x4cb: Push((int) 1)
0x4cc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ce: @@ GetEyesHeight(Stack[-2])
0x4cf: Pop(0)
0x4d0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4d1: Push(CvectorIndex(Stack[-1], 1))
0x4d2: Stack[-1] = Stack[-3]
0x4d3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4d4: Push("head")
0x4d5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4d6: Pop(1)
0x4d7: Stack[-3] = (bool) 1
0x4d8: GOTO 0x4da

0x4d9: Stack[-3] = (bool) 0
0x4da: PushEmpty(string)
0x4db: Stack[-1] = Stack[-7]
0x4dc: Call2 0x6ff

0x4dd: Pop(1)
0x4de: Push("all")
0x4df: @ PlayAnimation(Stack[-1], Stack[-7])
0x4e0: Pop(1)
0x4e1: @ WaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: Push(Stack[-3])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e5: @ StopAsync()
0x4e6: Pop(0)
0x4e7: Push("head")
0x4e8: @ UnlookAsync(Stack[-1])
0x4e9: Pop(1)
0x4ea: Push("all")
0x4eb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4ec: Pop(1)
0x4ed: @ RemoveEnvelope()
0x4ee: Pop(0)
0x4ef: Stack[-5] = 0
0x4f0: Return(); Pop(20)

0x4f1: PushEmpty()
0x4f2: @ RemoveRTEnvelope()
0x4f3: Pop(0)
0x4f4: @ SetDeathState()
0x4f5: Pop(0)
0x4f6: @ Stop()
0x4f7: Pop(0)
0x4f8: @ StopAsync()
0x4f9: Pop(0)
0x4fa: @ StopSecondaryAnimation()
0x4fb: Pop(0)
0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = Stack[-2]
0x4fe: Call2 0x6ff

0x4ff: Pop(1)
0x500: Push("all")
0x501: @ PlayAnimation(Stack[-1], Stack[-2])
0x502: Pop(1)
0x503: @ WaitForAnimEnd()
0x504: Pop(0)
0x505: Push("all")
0x506: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x507: Pop(1)
0x508: @ RemoveEnvelope()
0x509: Pop(0)
0x50a: Return(); Pop(0)

0x50b: PushEmpty()
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: Return(); Pop(0)

0x50f: PushEmpty()
0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: PushEmpty(int, object)
0x513: Stack[-1] = Stack[-3]
0x514: Push(-2, 1); TaskCall(0)
0x515: Call2 0x0

0x516: Pop(-2, 1); TaskReturn
0x517: Pop(2)
0x518: Return(); Pop(0)

0x519: @ Hold()
0x51a: Pop(0)
0x51b: GOTO 0x519

0x51c: Return(); Pop(0)

0x51d: PushEmpty()
0x51e: PushEmpty(bool)
0x51f: Call2 0x527

0x520: Pop(0)
0x521: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x522: PushEmpty(object)
0x523: Stack[-1] = Stack[-2]
0x524: Call2 0x511

0x525: Pop(1)
0x526: Return(); Pop(0)

0x527: Stack[-1] = (bool) 1
0x528: Return(); Pop(0)

0x529: PushEmpty(bool, bool)
0x52a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x52b: Pop(0)
0x52c: Push(Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52e: PushEmpty(bool, string, string)
0x52f: Stack[-2] = "quest_d5_01"
0x530: Stack[-1] = "factory_fight"
0x531: Call2 0x75b

0x532: Pop(3)
0x533: Return(); Pop(2)

0x534: PushEmpty()
0x535: Push("attack")
0x536: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x538: PushEmpty()
0x539: Push(-0, 6); TaskCall(2)
0x53a: Call2 0xc4

0x53b: Pop(-0, 6); TaskReturn
0x53c: Pop(0)
0x53d: Return(); Pop(0)

0x53e: PushEmpty()
0x53f: Push((int) 2)
0x540: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x542: Stack[-2] = "fire"
0x543: Return(); Pop(0)

0x544: GOTO 0x54a

0x545: Push((int) 1)
0x546: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-2] = "bullet"
0x549: Return(); Pop(0)

0x54a: Stack[-2] = "phys"
0x54b: Return(); Pop(0)

0x54c: PushEmpty(cvector, cvector, cvector, cvector)
0x54d: @ GetPosition(Stack[-2])
0x54e: Pop(0)
0x54f: @@ GetPosition(Stack[-1])
0x550: Pop(0)
0x551: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x552: Return(); Pop(4)

0x553: PushEmpty(bool, bool)
0x554: @ IsPlayerActor(Stack[-3], Stack[-1])
0x555: Pop(0)
0x556: Stack[-4] = Stack[-1]
0x557: Return(); Pop(2)

0x558: PushEmpty(bool, bool)
0x559: Push("HasProperty")
0x55a: Push((int) 2)
0x55b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x55c: Pop(1); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-5] = (bool) 0
0x55f: Return(); Pop(2)

0x560: @@ HasProperty(Stack[-3], Stack[-1])
0x561: Pop(0)
0x562: Stack[-5] = Stack[-1]
0x563: Return(); Pop(2)

0x564: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x565: PushEmpty(bool, object, string)
0x566: Stack[-2] = Stack[-18]
0x567: Stack[-1] = "health"
0x568: Call2 0x558

0x569: Pop(2)
0x56a: Pop(1); Push((bool) Stack[-1] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: Stack[-16] = (float) 0.0
0x56d: Return(); Pop(12)

0x56e: PushEmpty(bool, object, string)
0x56f: Stack[-2] = Stack[-18]
0x570: Stack[-1] = "armor"
0x571: Call2 0x558

0x572: Pop(2)
0x573: Pop(1); Push((bool) Stack[-1] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-6] = (int) 0
0x576: GOTO 0x57a

0x577: Push("armor")
0x578: @@ GetProperty(Stack[-1], Stack[-7])
0x579: Pop(1)
0x57a: Push("armor_")
0x57b: PushEmpty(string, int)
0x57c: Stack[-1] = Stack[-16]
0x57d: Call2 0x53e

0x57e: Pop(1)
0x57f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x580: PushEmpty(bool, object, string)
0x581: Stack[-2] = Stack[-18]
0x582: Stack[-1] = Stack[-8]
0x583: Call2 0x558

0x584: Pop(2)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-4] = (int) 0
0x588: GOTO 0x58b

0x589: @@ GetProperty(Stack[-5], Stack[-4])
0x58a: Pop(0)
0x58b: PushEmpty(float, float, float)
0x58c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x58d: Push((float)100.0)
0x58e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x58f: Stack[-1] = (int) 1
0x590: Call2 0x738

0x591: Stack[-6] = Stack[-3]
0x592: Pop(3)
0x593: Push("health")
0x594: @@ GetProperty(Stack[-1], Stack[-3])
0x595: Pop(1)
0x596: Push((int) 1)
0x597: Pop(1); Push(Stack[-1] - Stack[-4]);
0x598: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x599: Push("health")
0x59a: PushEmpty(float, float, float, float)
0x59b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x59c: Stack[-2] = (int) 0
0x59d: Stack[-1] = (int) 1
0x59e: Call2 0x73f

0x59f: Pop(3)
0x5a0: @@ SetProperty(Stack[-2], Stack[-1])
0x5a1: Pop(2)
0x5a2: PushEmpty(bool, object)
0x5a3: Stack[-1] = Stack[-17]
0x5a4: Call2 0x553

0x5a5: Pop(1)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a7: PushEmpty(float)
0x5a8: Stack[-1] = -Stack[-2]; Pop(0);
0x5a9: Call2 0x74a

0x5aa: Pop(1)
0x5ab: Stack[-16] = Stack[-1]
0x5ac: Return(); Pop(12)

0x5ad: PushEmpty(bool, bool)
0x5ae: @@ IsDead(Stack[-1])
0x5af: Pop(0)
0x5b0: Stack[-4] = Stack[-1]
0x5b1: Return(); Pop(2)

0x5b2: PushEmpty(object, object, object, object)
0x5b3: Pop(0); Push((bool) Stack[-5] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: Stack[-6] = (bool) 0
0x5b6: Return(); Pop(4)

0x5b7: PushEmpty(bool)
0x5b8: Stack[-1] = (bool) 0
0x5b9: Push("IsDead")
0x5ba: Push((int) 1)
0x5bb: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[-8]
0x5bf: Call2 0x5ad

0x5c0: Pop(1)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Stack[-1] = (bool) 1
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c4: Stack[-6] = (bool) 0
0x5c5: Return(); Pop(4)

0x5c6: @ GetScene(Stack[-2])
0x5c7: Pop(0)
0x5c8: Pop(0); Push((bool) Stack[-2] == 0)
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: Stack[-6] = (bool) 0
0x5cb: Return(); Pop(4)

0x5cc: @@ GetScene(Stack[-1])
0x5cd: Pop(0)
0x5ce: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-6] = (bool) 0
0x5d1: Return(); Pop(4)

0x5d2: Stack[-6] = (bool) 1
0x5d3: Return(); Pop(4)

0x5d4: Stack[-1] = 0
0x5d5: Stack[-2] = 0
0x5d6: PushEmpty(int, int)
0x5d7: PushEmpty(bool, object)
0x5d8: Stack[-1] = Stack[-5]
0x5d9: Call2 0x5b2

0x5da: Pop(1)
0x5db: Pop(1); Push((bool) Stack[-1] == 0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-4] = (bool) 0
0x5de: Return(); Pop(2)

0x5df: PushEmpty(bool, object, string)
0x5e0: Stack[-2] = Stack[-6]
0x5e1: Stack[-1] = "noaccess"
0x5e2: Call2 0x558

0x5e3: Pop(2)
0x5e4: Pop(1); Push((bool) Stack[-1] == 0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e6: Stack[-4] = (bool) 1
0x5e7: Return(); Pop(2)

0x5e8: Push("noaccess")
0x5e9: @@ GetProperty(Stack[-1], Stack[-2])
0x5ea: Pop(1)
0x5eb: Push((int) 0)
0x5ec: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x5ef: Pop(0); Push((bool) Stack[-15] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: Return(); Pop(14)

0x5f2: @ IsDead(Stack[-7])
0x5f3: Pop(0)
0x5f4: Push(Stack[-7])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f6: Return(); Pop(14)

0x5f7: @ GetSecondaryAnimationType(Stack[-6])
0x5f8: Pop(0)
0x5f9: Push((int) 0)
0x5fa: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fc: Return(); Pop(14)

0x5fd: @@ GetPosition(Stack[-5])
0x5fe: Pop(0)
0x5ff: @ GetPosition(Stack[-4])
0x600: Pop(0)
0x601: @ GetDirection(Stack[-3])
0x602: Pop(0)
0x603: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x604: Push(CvectorIndex(Stack[-2], 0))
0x605: Push(CvectorIndex(Stack[-4], 0))
0x606: Pop(2); Push(Stack[-2] * Stack[-1]);
0x607: Push(CvectorIndex(Stack[-3], 2))
0x608: Push(CvectorIndex(Stack[-5], 2))
0x609: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60b: Push((int) 0)
0x60c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-1] = "fhit"
0x60f: GOTO 0x611

0x610: Stack[-1] = "bhit"
0x611: Push("hit_react")
0x612: Push("1")
0x613: Pop(1); Push(Stack[-3] + Stack[-1]);
0x614: Push("2")
0x615: Pop(1); Push(Stack[-4] + Stack[-1]);
0x616: Push((int) -10)
0x617: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x618: Pop(4)
0x619: Return(); Pop(14)

0x61a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x61b: PushEmpty(bool)
0x61c: Stack[-1] = (bool) 0
0x61d: PushEmpty(bool)
0x61e: Stack[-1] = (bool) 0
0x61f: Push(Stack[-23])
0x620: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x621: Push((int) 4)
0x622: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x624: Stack[-1] = (bool) 1
0x625: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x626: Push((int) 5)
0x627: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x629: Stack[-1] = (bool) 1
0x62a: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x62b: PushEmpty(cvector, cvector)
0x62c: PushEmpty(cvector, object)
0x62d: Stack[-1] = Stack[-25]
0x62e: Call2 0x54c

0x62f: Stack[-3] = Stack[-2]
0x630: Pop(2)
0x631: Call2 0x72e

0x632: Stack[-11] = Stack[-2]
0x633: Pop(2)
0x634: @ CreateVectorVector(Stack[-8])
0x635: Pop(0)
0x636: Stack[-7] = (int) 1
0x637: Push("hit")
0x638: Pop(1); Push(Stack[-1] + Stack[-8]);
0x639: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x63a: Pop(1)
0x63b: Pop(0); Push((bool) Stack[-6] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63d: GOTO 0x647

0x63e: Pop(0); Push(Stack[-4] | Stack[-9]);
0x63f: Push((float)0.70711)
0x640: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: @@ add(Stack[-5])
0x643: Pop(0)
0x644: Push((int) 1)
0x645: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x646: GOTO 0x637

0x647: @@ size(Stack[-3])
0x648: Pop(0)
0x649: Push(Stack[-3])
0x64a: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x64b: @ irand(Stack[-2], Stack[-3])
0x64c: Pop(0)
0x64d: @@ get(Stack[-1], Stack[-2])
0x64e: Pop(0)
0x64f: PushEmpty(object, int, float, cvector, cvector)
0x650: Stack[-5] = Stack[-26]
0x651: Stack[-4] = Stack[-25]
0x652: Stack[-3] = Stack[-24]
0x653: Stack[-2] = Stack[-6]
0x654: Stack[-1] = -Stack[-14]; Pop(0);
0x655: Call2 0x65e

0x656: Pop(5)
0x657: Return(); Pop(18)

0x658: Stack[-8] = 0
0x659: PushEmpty(object)
0x65a: Stack[-1] = Stack[-22]
0x65b: Call2 0x5ee

0x65c: Pop(1)
0x65d: Return(); Pop(18)

0x65e: PushEmpty(object, object, object, object)
0x65f: @ GetScene(Stack[-2])
0x660: Pop(0)
0x661: Push("scripted")
0x662: Push("blood_dir.xml")
0x663: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x664: Pop(2)
0x665: PushEmpty(object)
0x666: Stack[-1] = Stack[-10]
0x667: Call2 0x5ee

0x668: Pop(1)
0x669: Return(); Pop(4)

0x66a: Stack[-1] = 0
0x66b: Stack[-2] = 0
0x66c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x66d: @@ GetPosition(Stack[-3])
0x66e: Pop(0)
0x66f: @ GetPosition(Stack[-2])
0x670: Pop(0)
0x671: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x672: Push(CvectorIndex(Stack[-1], 0))
0x673: Push(CvectorIndex(Stack[-2], 2))
0x674: @ RotateAsync(Stack[-2], Stack[-1])
0x675: Pop(2)
0x676: Return(); Pop(6)

0x677: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x678: @@ GetPosition(Stack[-8])
0x679: Pop(0)
0x67a: @@ GetEyesHeight(Stack[-9])
0x67b: Pop(0)
0x67c: Push(CvectorIndex(Stack[-8], 1))
0x67d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x67e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x67f: @ GetPosition(Stack[-7])
0x680: Pop(0)
0x681: @ GetEyesHeight(Stack[-9])
0x682: Pop(0)
0x683: Push(CvectorIndex(Stack[-7], 1))
0x684: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x685: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x686: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x687: Push(CvectorIndex(Stack[-6], 1))
0x688: Stack[-1] = (int) 0
0x689: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x68a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x68b: Pop(1); Push(Sqrt(Stack[-1]))
0x68c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x68d: Stack[-5] = -Stack[-6]; Pop(0);
0x68e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x68f: PushEmpty(cvector, cvector)
0x690: Push(CVector(0.0, 1.0, 0.0))
0x691: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x692: Call2 0x72e

0x693: Pop(1)
0x694: Push((int) 25)
0x695: Pop(2); Push(Stack[-2] * Stack[-1]);
0x696: Pop(2); Push(Stack[-2] + Stack[-1]);
0x697: Push(CVector(0.0, 10.0, 0.0))
0x698: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x699: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x69a: @ IsOverrideActive(Stack[-2])
0x69b: Pop(0)
0x69c: Push(Stack[-2])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-21] = (bool) 0
0x69f: Return(); Pop(18)

0x6a0: @ StopWorld()
0x6a1: Pop(0)
0x6a2: Push((bool) 1)
0x6a3: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x6a4: Pop(1)
0x6a5: Push(CvectorIndex(Stack[-4], 0))
0x6a6: Push(CvectorIndex(Stack[-5], 2))
0x6a7: @ Rotate(Stack[-2], Stack[-1])
0x6a8: Pop(2)
0x6a9: PushEmpty(bool)
0x6aa: Call2 0x7f5

0x6ab: Pop(0)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ad: GOTO 0x6b6

0x6ae: Push("head")
0x6af: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6b0: Pop(1)
0x6b1: Push(Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b3: Push("head")
0x6b4: @ LookAsyncCamera(Stack[-1])
0x6b5: Pop(1)
0x6b6: @ CameraWaitForPlayFinish()
0x6b7: Pop(0)
0x6b8: @ ResumeWorld()
0x6b9: Pop(0)
0x6ba: Stack[-21] = (bool) 1
0x6bb: Return(); Pop(18)

0x6bc: PushEmpty(bool, bool)
0x6bd: Push((bool) 1)
0x6be: @ CameraSwitchToNormal(Stack[-1])
0x6bf: Pop(1)
0x6c0: PushEmpty(bool)
0x6c1: Call2 0x7f5

0x6c2: Pop(0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c4: GOTO 0x6cd

0x6c5: Push("head")
0x6c6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6c7: Pop(1)
0x6c8: Push(Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6ca: Push("head")
0x6cb: @ UnlookAsync(Stack[-1])
0x6cc: Pop(1)
0x6cd: Return(); Pop(2)

0x6ce: PushEmpty(bool, float, float, bool, float, float)
0x6cf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6d0: Pop(0)
0x6d1: Push(Stack[-3])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6d4: Pop(0)
0x6d5: Push((bool) 0)
0x6d6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(1)
0x6d8: GOTO 0x6dd

0x6d9: Push("Can't find lsh animation : ")
0x6da: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6db: @ Trace(Stack[-1])
0x6dc: Pop(1)
0x6dd: Return(); Pop(6)

0x6de: PushEmpty(bool, float, float, bool, float, float)
0x6df: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6e0: Pop(0)
0x6e1: Push(Stack[-3])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6e4: Pop(0)
0x6e5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6e6: Pop(0)
0x6e7: GOTO 0x6ec

0x6e8: Push("Can't find lsh animation : ")
0x6e9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6ea: @ Trace(Stack[-1])
0x6eb: Pop(1)
0x6ec: Return(); Pop(6)

0x6ed: PushEmpty(float, cvector, float, cvector)
0x6ee: @@ GetEyesHeight(Stack[-2])
0x6ef: Pop(0)
0x6f0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6f1: Push(CvectorIndex(Stack[-1], 1))
0x6f2: Stack[-1] = Stack[-3]
0x6f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f4: Push("head")
0x6f5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6f6: Pop(1)
0x6f7: Return(); Pop(4)

0x6f8: PushEmpty(bool)
0x6f9: Call2 0x7f5

0x6fa: Pop(0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: @ lshStopSpeech()
0x6fd: Pop(0)
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x700: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x701: Pop(0)
0x702: Pop(0); Push((bool) Stack[-8] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x704: Stack[-7] = (int) 0
0x705: Push((int) 1)
0x706: Pop(1); Push(Stack[-8] + Stack[-1]);
0x707: Pop(1); Push(Stack[-18] + Stack[-1]);
0x708: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x709: Pop(1)
0x70a: Pop(0); Push((bool) Stack[-6] == 0)
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: GOTO 0x710

0x70d: Push((int) 1)
0x70e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x70f: GOTO 0x705

0x710: Pop(0); Push((bool) Stack[-7] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: Return(); Pop(16)

0x713: @ irand(Stack[-5], Stack[-7])
0x714: Pop(0)
0x715: Push((int) 1)
0x716: Pop(1); Push(Stack[-6] + Stack[-1]);
0x717: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x718: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x719: Pop(0)
0x71a: Push(Stack[-4])
0x71b: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x71c: @ GetEyesHeight(Stack[-3])
0x71d: Pop(0)
0x71e: @ GetDirection(Stack[-2])
0x71f: Pop(0)
0x720: Push((int) 50)
0x721: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x722: Push(CvectorIndex(Stack[-1], 1))
0x723: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x724: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x725: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x726: Pop(0)
0x727: Return(); Pop(16)

0x728: PushEmpty(object, object)
0x729: @ self(Stack[-1])
0x72a: Pop(0)
0x72b: Stack[-3] = Stack[-1]
0x72c: Return(); Pop(2)

0x72d: Stack[-1] = 0
0x72e: PushEmpty(float, float)
0x72f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x730: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x731: Push((float)0.0)
0x732: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x735: Return(); Pop(2)

0x736: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x737: Return(); Pop(2)

0x738: PushEmpty()
0x739: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-3] = Stack[-2]
0x73c: GOTO 0x73e

0x73d: Stack[-3] = Stack[-1]
0x73e: Return(); Pop(0)

0x73f: PushEmpty()
0x740: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x741: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x742: Stack[-4] = Stack[-2]
0x743: Return(); Pop(0)

0x744: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: Stack[-4] = Stack[-1]
0x747: Return(); Pop(0)

0x748: Stack[-4] = Stack[-3]
0x749: Return(); Pop(0)

0x74a: PushEmpty(object, object)
0x74b: @ CreateFloatVector(Stack[-1])
0x74c: Pop(0)
0x74d: @@ add(Stack[-3])
0x74e: Pop(0)
0x74f: Push((int) 0)
0x750: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x752: Push((float)0.7)
0x753: Push((int) 500)
0x754: @ RumblePlay(Stack[-2], Stack[-1])
0x755: Pop(2)
0x756: Push((int) 15)
0x757: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x758: Pop(1)
0x759: Return(); Pop(2)

0x75a: Stack[-1] = 0
0x75b: PushEmpty(object, object)
0x75c: @ FindActor(Stack[-1], Stack[-4])
0x75d: Pop(0)
0x75e: Pop(0); Push((bool) Stack[-1] == 0)
0x75f: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x760: Stack[-5] = (bool) 0
0x761: Return(); Pop(2)

0x762: @ Trigger(Stack[-1], Stack[-3])
0x763: Pop(0)
0x764: Stack[-5] = (bool) 1
0x765: Return(); Pop(2)

0x766: Stack[-1] = 0
0x767: PushEmpty(bool, bool)
0x768: @ IsPlayerActor(Stack[-3], Stack[-1])
0x769: Pop(0)
0x76a: Push(Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76c: Push("attack")
0x76d: @ PlayGlobalMusic(Stack[-1])
0x76e: Pop(1)
0x76f: Return(); Pop(2)

0x770: PushEmpty(object, object)
0x771: @ GetScene(Stack[-1])
0x772: Pop(0)
0x773: Push("battle")
0x774: PushEmpty(object)
0x775: Call2 0x728

0x776: Pop(0)
0x777: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x778: Pop(2)
0x779: Return(); Pop(2)

0x77a: Stack[-1] = 0
0x77b: PushEmpty(int, int)
0x77c: Push("branch")
0x77d: @ GetVariable(Stack[-1], Stack[-2])
0x77e: Pop(1)
0x77f: Push((int) 0)
0x780: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x782: Stack[-3] = (int) 1
0x783: Return(); Pop(2)

0x784: GOTO 0x78a

0x785: Push((int) 1)
0x786: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-3] = (int) 2
0x789: Return(); Pop(2)

0x78a: Stack[-3] = (int) 3
0x78b: Return(); Pop(2)

0x78c: PushEmpty(int, int)
0x78d: Push("branch")
0x78e: @ GetVariable(Stack[-1], Stack[-2])
0x78f: Pop(1)
0x790: Stack[-3] = Stack[-1]
0x791: Return(); Pop(2)

0x792: PushEmpty()
0x793: PushEmpty(int)
0x794: Call2 0x78c

0x795: Pop(0)
0x796: Push((int) 1)
0x797: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x799: @ WorkWithCorpse(Stack[-1])
0x79a: Pop(0)
0x79b: GOTO 0x79e

0x79c: @ Barter(Stack[-1])
0x79d: Pop(0)
0x79e: Return(); Pop(0)

0x79f: PushEmpty(object, int, bool, object, int, bool)
0x7a0: @ CreateInvItem(Stack[-3])
0x7a1: Pop(0)
0x7a2: @@ SetItemName(Stack[-7])
0x7a3: Pop(0)
0x7a4: Push("Organ")
0x7a5: Push((int) 1)
0x7a6: @@ SetProperty(Stack[-2], Stack[-1])
0x7a7: Pop(2)
0x7a8: @@ GetItemID(Stack[-2])
0x7a9: Pop(0)
0x7aa: Push((int) 0)
0x7ab: Push((int) 1)
0x7ac: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x7ad: Pop(2)
0x7ae: Return(); Pop(6)

0x7af: Stack[-3] = 0
0x7b0: PushEmpty(int)
0x7b1: Call2 0x78c

0x7b2: Pop(0)
0x7b3: Push((int) 1)
0x7b4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Return(); Pop(0)

0x7b7: PushEmpty(string)
0x7b8: Stack[-1] = "liver"
0x7b9: Call2 0x79f

0x7ba: Pop(1)
0x7bb: PushEmpty(string)
0x7bc: Stack[-1] = "kidney"
0x7bd: Call2 0x79f

0x7be: Pop(1)
0x7bf: PushEmpty(string)
0x7c0: Stack[-1] = "heart"
0x7c1: Call2 0x79f

0x7c2: Pop(1)
0x7c3: PushEmpty(string)
0x7c4: Stack[-1] = "blood"
0x7c5: Call2 0x79f

0x7c6: Pop(1)
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty()
0x7c9: PushEmpty(object, int, float)
0x7ca: Stack[-3] = Stack[-7]
0x7cb: Stack[-2] = Stack[-6]
0x7cc: Stack[-1] = Stack[-5]
0x7cd: Call2 0x61a

0x7ce: Pop(3)
0x7cf: Return(); Pop(0)

0x7d0: PushEmpty()
0x7d1: PushEmpty(object, int, float, cvector, cvector)
0x7d2: Stack[-5] = Stack[-11]
0x7d3: Stack[-4] = Stack[-10]
0x7d4: Stack[-3] = Stack[-9]
0x7d5: Stack[-2] = Stack[-7]
0x7d6: Stack[-1] = Stack[-6]
0x7d7: Call2 0x65e

0x7d8: Pop(5)
0x7d9: Return(); Pop(0)

0x7da: PushEmpty(float, float)
0x7db: Push("health")
0x7dc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7de: Push("health")
0x7df: @ GetProperty(Stack[-1], Stack[-2])
0x7e0: Pop(1)
0x7e1: Push((int) 0)
0x7e2: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: @ SignalDeath(Stack[-4])
0x7e5: Pop(0)
0x7e6: Return(); Pop(2)

0x7e7: PushEmpty()
0x7e8: PushEmpty(object)
0x7e9: Stack[-1] = Stack[-2]
0x7ea: Call2 0x7f7

0x7eb: Pop(1)
0x7ec: Return(); Pop(0)

0x7ed: Stack[-1] = (int) 515572
0x7ee: Return(); Pop(0)

0x7ef: Stack[-1] = (int) 504031
0x7f0: Return(); Pop(0)

0x7f1: Stack[-1] = "ui/NPC_Citizen2.png"
0x7f2: Return(); Pop(0)

0x7f3: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x7f4: Return(); Pop(0)

0x7f5: Stack[-1] = (bool) 0
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty(bool, bool)
0x7f8: Push("revolver_ammo")
0x7f9: Push((int) 0)
0x7fa: Push((int) 2)
0x7fb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Push("alpha_pills")
0x7fe: Push((int) 0)
0x7ff: Push((int) 2)
0x800: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: PushEmpty(object)
0x803: Stack[-1] = Stack[-4]
0x804: Push(-1, 0); TaskCall(4)
0x805: Call2 0x46f

0x806: Pop(-1, 0); TaskReturn
0x807: Pop(1)
0x808: Return(); Pop(2)

