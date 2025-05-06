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
	pt_map_grif
	ShowMap
	ood5PatrolGuard1
	d5q01
	d5q01PatrolGotoGrif
	AddMark
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x5ce
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x455 Vars = (int)
		EVENT_1 Op = 0x470 Vars = (object)
		EVENT_2 Op = 0x47f Vars = (object)
		EVENT_10 Op = 0x505 Vars = (object)
		EVENT_41 Op = 0x510 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x539 Vars = (object)
		EVENT_6 Op = 0x543 Vars = ()
		EVENT_22 Op = 0x5c0 Vars = (object, int, float, float)
		EVENT_16 Op = 0x5c2 Vars = (object, string)
		EVENT_41 Op = 0x5c4 Vars = (object)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x5d2 Vars = (object)
		EVENT_17 Op = 0x5de Vars = (object)
		EVENT_26 Op = 0x5e9 Vars = (string)

Events:
EVENT_22 Op = 0x8ef Vars = (object, int, float, float)
EVENT_43 Op = 0x8f7 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x901 Vars = (object, string)
EVENT_41 Op = 0x90e Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x72c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x916

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x914

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x918

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x91a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x8a2

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
0x41: Call2 0x771

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
0x52: Call2 0x864

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x84a

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 511690)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 511691)
0x64: Push((int) 12894)
0x65: Push((int) 12893)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 512483)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 512484)
0x73: Push((int) -1)
0x74: Push((int) 13652)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 515786)
0x78: Push((int) -1)
0x79: Push((int) 16858)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x91c

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x783

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
0x9f: Call2 0x91c

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
0xaf: Call2 0x793

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x7ad

0xb8: Pop(0)
0xb9: Push((int) 12905)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x850

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x83a

0xc5: Pop(2)
0xc6: Push((int) 12906)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x850

0xcd: Pop(2)
0xce: Push((int) 16859)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x850

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x83a

0xda: Pop(2)
0xdb: Push((int) 12892)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x864

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x84a

0xe7: Pop(2)
0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x9d

0xeb: Pop(1)
0xec: Push((int) 511690)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 511691)
0xf2: Push((int) 12894)
0xf3: Push((int) 12893)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0x9d

0xfa: Pop(1)
0xfb: Push((int) 512483)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 512484)
0x101: Push((int) -1)
0x102: Push((int) 13652)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 515786)
0x106: Push((int) -1)
0x107: Push((int) 16858)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 12894)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x9d

0x111: Pop(1)
0x112: Push((int) 511692)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 511693)
0x118: Push((int) 12901)
0x119: Push((int) 12895)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 511694)
0x11d: Push((int) 12898)
0x11e: Push((int) 12896)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 511695)
0x122: Push((int) 12898)
0x123: Push((int) 12897)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 12898)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call2 0x9d

0x12d: Pop(1)
0x12e: Push((int) 511696)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: Push((int) 511697)
0x134: Push((int) 12901)
0x135: Push((int) 12900)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Push((int) 515787)
0x139: Push((int) -1)
0x13a: Push((int) 16859)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 12901)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0x9d

0x144: Pop(1)
0x145: Push((int) 511698)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 511699)
0x14b: Push((int) 12904)
0x14c: Push((int) 12902)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push((int) 515788)
0x150: Push((int) -1)
0x151: Push((int) 16860)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 12904)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral"
0x15a: Call2 0x9d

0x15b: Pop(1)
0x15c: Push((int) 511700)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 511701)
0x162: Push((int) -1)
0x163: Push((int) 12905)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 511702)
0x167: Push((int) -1)
0x168: Push((int) 12906)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16d: PushEmpty(bool)
0x16e: Call2 0x91c

0x16f: Pop(0)
0x170: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x171: @ lshStopAnimation()
0x172: Pop(0)
0x173: GOTO 0x176

0x174: @ StopAnimation()
0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: GOTO 0xb4

0x178: Return(); Pop(0)

0x179: PushEmpty(object, object)
0x17a: Push("player")
0x17b: @ FindActor(Stack[-2], Stack[-1])
0x17c: Pop(1)
0x17d: Pop(0); Push((bool) Stack[-1] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Return(); Pop(2)

0x180: PushEmpty(object, bool, float)
0x181: Stack[-3] = Stack[-4]
0x182: Stack[-2] = (bool) 1
0x183: Stack[-1] = (float) 180.0
0x184: Call2 0x18e

0x185: Pop(3)
0x186: Return(); Pop(2)

0x187: Stack[-1] = 0
0x188: PushEmpty()
0x189: Stack[-3] = (float) 0.3
0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: Stack[-3] = (int) 0
0x18d: Return(); Pop(0)

0x18e: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x18f: PushEmpty()
0x190: Call2 0x273

0x191: Pop(0)
0x192: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x193: Push("@GetAttackDistance")
0x194: Push((int) 1)
0x195: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: @@ GetAttackDistance(Stack[-11])
0x198: Pop(0)
0x199: Push((int) 50)
0x19a: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x19b: GOTO 0x19d

0x19c: Stack[-11] = Stack[-23]
0x19d: Push((int) 150)
0x19e: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-11] = (int) 150
0x1a1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1a3: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1a4: Pop(0)
0x1a5: Push(Stack[-8])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a7: Push("attack")
0x1a8: @ PlayGlobalMusic(Stack[-1])
0x1a9: Pop(1)
0x1aa: PushEmpty(object)
0x1ab: Call2 0x7dd

0x1ac: Pop(0)
0x1ad: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1ae: Pop(1)
0x1af: Push(Stack[-24])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-7] = (bool) 0
0x1b2: GOTO 0x1b4

0x1b3: Stack[-7] = (bool) 1
0x1b4: Push((float)400.0)
0x1b5: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1b6: PushEmpty(bool)
0x1b7: Stack[-1] = (bool) 0
0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x68b

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = (bool) 1
0x1c0: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call2 0x410

0x1c3: Pop(0)
0x1c4: @@ GetPFPosition(Stack[-10])
0x1c5: Pop(0)
0x1c6: @ GetPFPosition(Stack[-9])
0x1c7: Pop(0)
0x1c8: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1c9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1ca: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1cb: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1cd: PushEmpty(bool, object, float, float, bool, bool)
0x1ce: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Stack[-4] = Stack[-17]
0x1d0: Stack[-3] = (float) 10000.0
0x1d1: Stack[-2] = (bool) 1
0x1d2: Stack[-1] = (bool) 0
0x1d3: Push(-6, 3); TaskCall(3)
0x1d4: Call2 0x424

0x1d5: Pop(-6, 3); TaskReturn
0x1d6: Pop(5)
0x1d7: Pop(1); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: GOTO 0x262

0x1da: Stack[-7] = (bool) 0
0x1db: GOTO 0x261

0x1dc: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1dd: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x1df: @@ GetPFPosition(Stack[-3])
0x1e0: Pop(0)
0x1e1: @ CanReachByPF(Stack[-2], Stack[-3])
0x1e2: Pop(0)
0x1e3: Pop(0); Push((bool) Stack[-2] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(bool, object, float, float, bool, bool)
0x1e6: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1e7: Stack[-4] = Stack[-17]
0x1e8: Stack[-3] = (float) 10000.0
0x1e9: Stack[-2] = (bool) 1
0x1ea: Stack[-1] = (bool) 0
0x1eb: Push(-6, 3); TaskCall(3)
0x1ec: Call2 0x424

0x1ed: Pop(-6, 3); TaskReturn
0x1ee: Pop(5)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x262

0x1f2: Stack[-7] = (bool) 0
0x1f3: GOTO 0x1b6

0x1f4: Pop(0); Push((bool) Stack[-7] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f8: Call2 0x721

0x1f9: Pop(1)
0x1fa: Push("all")
0x1fb: Push("attack_on")
0x1fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fd: Pop(2)
0x1fe: @ WaitForAnimEnd()
0x1ff: Pop(0)
0x200: PushEmpty()
0x201: Call2 0x410

0x202: Pop(0)
0x203: @ StopAsync()
0x204: Pop(0)
0x205: Stack[-7] = (bool) 1
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x68b

0x209: Pop(1)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x262

0x20d: @ rand(Stack[-1])
0x20e: Pop(0)
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 1
0x211: Push((float)0.25)
0x212: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x3e5

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 0
0x219: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21a: @ Face(Stack[-0])
0x21b: Pop(0)
0x21c: PushEmpty()
0x21d: Call2 0x417

0x21e: Pop(0)
0x21f: Push("all")
0x220: Push("attack_stay")
0x221: @ PlayAnimation(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: PushEmpty(bool, float)
0x224: Stack[-1] = Stack[-25]
0x225: Call2 0x361

0x226: Pop(2)
0x227: @ StopAsync()
0x228: Pop(0)
0x229: GOTO 0x258

0x22a: @ Face(Stack[-0])
0x22b: Pop(0)
0x22c: Push("all")
0x22d: Push("fjump")
0x22e: @ PlayAnimation(Stack[-2], Stack[-1])
0x22f: Pop(2)
0x230: @ WaitForAnimEnd()
0x231: Pop(0)
0x232: PushEmpty()
0x233: Call2 0x410

0x234: Pop(0)
0x235: Push(CVector(0.0, 0.0, 0.0))
0x236: @ SetSpeed(Stack[-1])
0x237: Pop(1)
0x238: @ Stop()
0x239: Pop(0)
0x23a: @ StopAsync()
0x23b: Pop(0)
0x23c: PushEmpty(bool)
0x23d: Call2 0x3e5

0x23e: Pop(0)
0x23f: Pop(1); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x241: PushEmpty(bool, object)
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call2 0x68b

0x244: Pop(1)
0x245: Pop(1); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x262

0x248: @@ GetPFPosition(Stack[-10])
0x249: Pop(0)
0x24a: @ GetPFPosition(Stack[-9])
0x24b: Pop(0)
0x24c: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x24d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x24e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x24f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x251: PushEmpty(bool, float)
0x252: Stack[-1] = Stack[-25]
0x253: Call2 0x2bd

0x254: Pop(1)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x262

0x258: GOTO 0x261

0x259: PushEmpty(bool, float)
0x25a: Stack[-1] = Stack[-25]
0x25b: Call2 0x2bd

0x25c: Pop(1)
0x25d: Pop(1); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x262

0x260: Stack[-7] = (bool) 1
0x261: GOTO 0x1b6

0x262: @ WaitForAnimEnd()
0x263: Pop(0)
0x264: Push( Stack[3 + Tasks[-1].StackPointer] )
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Return(); Pop(22)

0x267: Push("all")
0x268: Push("attack_off")
0x269: @ PlayAnimation(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: @ WaitForAnimEnd()
0x26c: Pop(0)
0x26d: Push(Stack[-8])
0x26e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26f: Push((float)2.0)
0x270: @ Sleep(Stack[-1])
0x271: Pop(1)
0x272: Return(); Pop(22)

0x273: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x274: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x275: Push("all")
0x276: Push("attack_begin")
0x277: Push((int) 1)
0x278: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x279: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: Pop(0); Push((bool) Stack[-3] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x282

0x27f: Push((int) 1)
0x280: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x281: GOTO 0x275

0x282: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x283: Push("attack")
0x284: Push((int) 1)
0x285: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x288: Pop(1)
0x289: Pop(0); Push((bool) Stack[-2] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x28f

0x28c: Push((int) 1)
0x28d: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x28e: GOTO 0x283

0x28f: Push("all")
0x290: Push("bjump")
0x291: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: Push(CvectorIndex(Stack[-1], 2))
0x294: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x295: Return(); Pop(6)

0x296: PushEmpty(object, float, float, object, float, float)
0x297: Push((float)0.9)
0x298: Pop(1); Push(Stack[-9] * Stack[-1]);
0x299: @ GetVictim(Stack[-1], Stack[-4])
0x29a: Pop(1)
0x29b: @ ReportAttack(Stack[-0])
0x29c: Pop(0)
0x29d: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x29e: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x29f: PushEmpty(float, object, int)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-10]
0x2a2: Call2 0x188

0x2a3: Stack[-5] = Stack[-3]
0x2a4: Pop(3)
0x2a5: PushEmpty(float, object, float, int)
0x2a6: Stack[-3] = Stack[-7]
0x2a7: Stack[-2] = Stack[-6]
0x2a8: PushEmpty(int, object, int)
0x2a9: Stack[-2] = Stack[-10]
0x2aa: Stack[-1] = Stack[-14]
0x2ab: Call2 0x18b

0x2ac: Stack[-4] = Stack[-3]
0x2ad: Pop(3)
0x2ae: Call2 0x619

0x2af: Stack[-5] = Stack[-4]
0x2b0: Pop(4)
0x2b1: PushEmpty(int)
0x2b2: Call2 0x415

0x2b3: Pop(0)
0x2b4: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2b5: Pop(1)
0x2b6: PushEmpty(object, float)
0x2b7: Stack[-2] = Stack[-5]
0x2b8: Stack[-1] = Stack[-3]
0x2b9: Call2 0x41c

0x2ba: Pop(2)
0x2bb: Return(); Pop(6)

0x2bc: Stack[-3] = 0
0x2bd: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2be: PushEmpty()
0x2bf: Call2 0x410

0x2c0: Pop(0)
0x2c1: @ irand(Stack[-4], Stack[-1])
0x2c2: Pop(0)
0x2c3: Push((int) 1)
0x2c4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2c5: @ Face(Stack[-0])
0x2c6: Pop(0)
0x2c7: Push((bool) 1)
0x2c8: @ SetAttackState(Stack[-1])
0x2c9: Pop(1)
0x2ca: PushEmpty()
0x2cb: Call2 0x82f

0x2cc: Pop(0)
0x2cd: Push("all")
0x2ce: Push("attack_begin")
0x2cf: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: @ WaitForAnimEnd()
0x2d3: Pop(0)
0x2d4: PushEmpty()
0x2d5: Call2 0x3f0

0x2d6: Pop(0)
0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d9: Call2 0x68b

0x2da: Pop(1)
0x2db: Pop(1); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2dd: @ StopAsync()
0x2de: Pop(0)
0x2df: Stack[-10] = (bool) 0
0x2e0: Return(); Pop(8)

0x2e1: PushEmpty(float, int)
0x2e2: Stack[-2] = Stack[-11]
0x2e3: Stack[-1] = Stack[-6]
0x2e4: Call2 0x296

0x2e5: Pop(2)
0x2e6: Push("all")
0x2e7: Push("attack_middle")
0x2e8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e9: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2ea: Pop(2)
0x2eb: Push(Stack[-3])
0x2ec: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x2ed: PushEmpty()
0x2ee: Call2 0x82f

0x2ef: Pop(0)
0x2f0: Push("all")
0x2f1: Push("attack_middle")
0x2f2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: @ WaitForAnimEnd()
0x2f6: Pop(0)
0x2f7: PushEmpty()
0x2f8: Call2 0x410

0x2f9: Pop(0)
0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call2 0x68b

0x2fd: Pop(1)
0x2fe: Pop(1); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x300: @ StopAsync()
0x301: Pop(0)
0x302: Stack[-10] = (bool) 0
0x303: Return(); Pop(8)

0x304: PushEmpty(float, int)
0x305: Stack[-2] = Stack[-11]
0x306: Stack[-1] = Stack[-6]
0x307: Call2 0x296

0x308: Pop(2)
0x309: Stack[-2] = (int) 1
0x30a: Push("attack_middle")
0x30b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x30c: Push("_")
0x30d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30e: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x30f: Push("all")
0x310: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x311: Pop(1)
0x312: Pop(0); Push((bool) Stack[-3] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: GOTO 0x332

0x315: PushEmpty()
0x316: Call2 0x82f

0x317: Pop(0)
0x318: Push("all")
0x319: @ PlayAnimation(Stack[-1], Stack[-2])
0x31a: Pop(1)
0x31b: @ WaitForAnimEnd()
0x31c: Pop(0)
0x31d: PushEmpty()
0x31e: Call2 0x410

0x31f: Pop(0)
0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0x68b

0x323: Pop(1)
0x324: Pop(1); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x326: @ StopAsync()
0x327: Pop(0)
0x328: Stack[-10] = (bool) 0
0x329: Return(); Pop(8)

0x32a: PushEmpty(float, int)
0x32b: Stack[-2] = Stack[-11]
0x32c: Stack[-1] = Stack[-6]
0x32d: Call2 0x296

0x32e: Pop(2)
0x32f: Push((int) 1)
0x330: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x331: GOTO 0x30a

0x332: Push((bool) 0)
0x333: @ SetAttackState(Stack[-1])
0x334: Pop(1)
0x335: Push("all")
0x336: Push("attack_end")
0x337: Pop(1); Push(Stack[-1] + Stack[-6]);
0x338: @ PlayAnimation(Stack[-2], Stack[-1])
0x339: Pop(2)
0x33a: PushEmpty(bool)
0x33b: Call2 0x41e

0x33c: Pop(0)
0x33d: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33e: PushEmpty(bool, float)
0x33f: Stack[-1] = (float) 0.75
0x340: Call2 0x346

0x341: Pop(2)
0x342: @ StopAsync()
0x343: Pop(0)
0x344: Stack[-10] = (bool) 1
0x345: Return(); Pop(8)

0x346: PushEmpty(float, bool, float, bool)
0x347: @ rand(Stack[-2])
0x348: Pop(0)
0x349: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x34a: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x34b: @ IsAnimationPlaying(Stack[-1])
0x34c: Pop(0)
0x34d: Pop(0); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x359

0x350: PushEmpty(bool)
0x351: Call2 0x3a8

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-6] = (bool) 1
0x355: Return(); Pop(4)

0x356: @ sync()
0x357: Pop(0)
0x358: GOTO 0x34b

0x359: GOTO 0x35f

0x35a: @ WaitForAnimEnd()
0x35b: Pop(0)
0x35c: PushEmpty()
0x35d: Call2 0x410

0x35e: Pop(0)
0x35f: Stack[-6] = (bool) 0
0x360: Return(); Pop(4)

0x361: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x362: @ IsAnimationPlaying(Stack[-5])
0x363: Pop(0)
0x364: Pop(0); Push((bool) Stack[-5] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: GOTO 0x387

0x367: PushEmpty(bool)
0x368: Call2 0x3a8

0x369: Pop(0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-12] = (bool) 1
0x36c: Return(); Pop(10)

0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36f: Call2 0x68b

0x370: Pop(1)
0x371: Pop(1); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-12] = (bool) 0
0x374: Return(); Pop(10)

0x375: @@ GetPFPosition(Stack[-4])
0x376: Pop(0)
0x377: @ GetPFPosition(Stack[-3])
0x378: Pop(0)
0x379: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x37a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x37b: Pop(0); Push(Stack[-11] * Stack[-11]);
0x37c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37e: PushEmpty(bool, float)
0x37f: Stack[-1] = Stack[-13]
0x380: Call2 0x2bd

0x381: Pop(2)
0x382: Stack[-12] = (bool) 1
0x383: Return(); Pop(10)

0x384: @ sync()
0x385: Pop(0)
0x386: GOTO 0x362

0x387: PushEmpty()
0x388: Call2 0x410

0x389: Pop(0)
0x38a: Stack[-12] = (bool) 0
0x38b: Return(); Pop(10)

0x38c: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38f: Call2 0x68b

0x390: Pop(1)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-11] = (bool) 0
0x394: Return(); Pop(10)

0x395: PushEmpty(bool)
0x396: Call2 0x3e5

0x397: Pop(0)
0x398: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x399: @@ GetPFPosition(Stack[-5])
0x39a: Pop(0)
0x39b: @ GetPFPosition(Stack[-4])
0x39c: Pop(0)
0x39d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x39e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x39f: @@ GetAttackDistance(Stack[-1])
0x3a0: Pop(0)
0x3a1: Push((int) 50)
0x3a2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3a3: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3a4: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3a5: Return(); Pop(10)

0x3a6: Stack[-11] = (bool) 0
0x3a7: Return(); Pop(10)

0x3a8: PushEmpty(bool)
0x3a9: Stack[-1] = (bool) 0
0x3aa: PushEmpty(bool)
0x3ab: Call2 0x38c

0x3ac: Pop(0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ae: PushEmpty(bool)
0x3af: Call2 0x3b8

0x3b0: Pop(0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (bool) 1
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b4: Stack[-1] = (bool) 1
0x3b5: Return(); Pop(0)

0x3b6: Stack[-1] = (bool) 0
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3b9: @ GetScene(Stack[-5])
0x3ba: Pop(0)
0x3bb: Stack[-4] = (bool) 0
0x3bc: PushEmpty(cvector, object)
0x3bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3be: Call2 0x601

0x3bf: Pop(1)
0x3c0: Pop(1); Push(( -Stack[-1])
0x3c1: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x3c2: Pop(1)
0x3c3: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: GOTO 0x3e2

0x3c6: @ Face(Stack[-0])
0x3c7: Pop(0)
0x3c8: Push("all")
0x3c9: Push("bjump")
0x3ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x3cb: Pop(2)
0x3cc: @@ GetPFPosition(Stack[-2])
0x3cd: Pop(0)
0x3ce: @ GetPFPosition(Stack[-1])
0x3cf: Pop(0)
0x3d0: @ WaitForAnimEnd()
0x3d1: Pop(0)
0x3d2: PushEmpty()
0x3d3: Call2 0x410

0x3d4: Pop(0)
0x3d5: @ StopAsync()
0x3d6: Pop(0)
0x3d7: Push(CVector(0.0, 0.0, 0.0))
0x3d8: @ SetSpeed(Stack[-1])
0x3d9: Pop(1)
0x3da: Stack[-4] = (bool) 1
0x3db: PushEmpty(bool)
0x3dc: Call2 0x38c

0x3dd: Pop(0)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: GOTO 0x3e2

0x3e1: GOTO 0x3bc

0x3e2: Stack[-11] = Stack[-4]
0x3e3: Return(); Pop(10)

0x3e4: Stack[-5] = 0
0x3e5: PushEmpty(bool, bool)
0x3e6: Push("IsAttacking")
0x3e7: Push((int) 1)
0x3e8: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ea: @@ IsAttacking(Stack[-1])
0x3eb: Pop(0)
0x3ec: Stack[-3] = Stack[-1]
0x3ed: Return(); Pop(2)

0x3ee: Stack[-3] = (bool) 0
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(float, int, float, int)
0x3f1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: Return(); Pop(4)

0x3f4: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f6: Push((int) -1)
0x3f7: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3f8: Push((int) 0)
0x3f9: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: Return(); Pop(4)

0x3fc: @ rand(Stack[-2])
0x3fd: Pop(0)
0x3fe: PushEmpty(float)
0x3ff: Call2 0x422

0x400: Pop(0)
0x401: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x403: @ irand(Stack[-1], Stack[-2])
0x404: Pop(0)
0x405: Push((int) 1)
0x406: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x407: Push("attack")
0x408: Pop(1); Push(Stack[-1] + Stack[-2]);
0x409: @ Speak(Stack[-1])
0x40a: Pop(1)
0x40b: PushEmpty(int)
0x40c: Call2 0x420

0x40d: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x40e: Pop(1)
0x40f: Return(); Pop(4)

0x410: PushEmpty(object)
0x411: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x412: Call2 0x826

0x413: Pop(1)
0x414: Return(); Pop(0)

0x415: Stack[-1] = (int) 0
0x416: Return(); Pop(0)

0x417: PushEmpty(string)
0x418: Stack[-1] = "attack_stay"
0x419: Call2 0x7b4

0x41a: Pop(1)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: Return(); Pop(0)

0x41e: Stack[-1] = (bool) 1
0x41f: Return(); Pop(0)

0x420: Stack[-1] = (int) 1
0x421: Return(); Pop(0)

0x422: Stack[-1] = (float) 0.5
0x423: Return(); Pop(0)

0x424: PushEmpty(bool, bool, bool, bool)
0x425: PushEmpty(object)
0x426: Stack[-1] = Stack[-10]
0x427: Call2 0x826

0x428: Pop(1)
0x429: Push((int) 1)
0x42a: Push((int) 5)
0x42b: @ SetTimer(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: @ CanSee(Stack[-2], Stack[-9])
0x42e: Pop(0)
0x42f: Push(Stack[-2])
0x430: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x431: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x432: PushEmpty(object)
0x433: Stack[-1] = Stack[-10]
0x434: Call2 0x7a2

0x435: Pop(1)
0x436: GOTO 0x438

0x437: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[-11]
0x43a: Call2 0x608

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43d: PushEmpty(object)
0x43e: Call2 0x7dd

0x43f: Pop(0)
0x440: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x441: Pop(1)
0x442: PushEmpty(bool, object, float, float, bool, bool)
0x443: Stack[-5] = Stack[-15]
0x444: Stack[-4] = Stack[-14]
0x445: Stack[-3] = Stack[-13]
0x446: Stack[-2] = Stack[-12]
0x447: Stack[-1] = Stack[-11]
0x448: Call2 0x48d

0x449: Stack[-7] = Stack[-6]
0x44a: Pop(6)
0x44b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x44c: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44d: Push("head")
0x44e: @ UnlookAsync(Stack[-1])
0x44f: Pop(1)
0x450: Push((int) 1)
0x451: @ KillTimer(Stack[-1])
0x452: Pop(1)
0x453: Stack[-10] = Stack[-1]
0x454: Return(); Pop(4)

0x455: PushEmpty()
0x456: Push((int) 1)
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: PushEmpty(object)
0x45a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45b: Call2 0x826

0x45c: Pop(1)
0x45d: GOTO 0x462

0x45e: PushEmpty(int)
0x45f: Stack[-1] = Stack[-2]
0x460: Call2 0x4f3

0x461: Pop(1)
0x462: Return(); Pop(0)

0x463: Push((int) 1)
0x464: @ KillTimer(Stack[-1])
0x465: Pop(1)
0x466: Push( Stack[2 + Tasks[-1].StackPointer] )
0x467: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x468: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x469: Push("head")
0x46a: @ UnlookAsync(Stack[-1])
0x46b: Pop(1)
0x46c: PushEmpty()
0x46d: Call2 0x509

0x46e: Pop(0)
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x474: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x475: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (bool) 1
0x478: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x479: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x47a: PushEmpty(object)
0x47b: Stack[-1] = Stack[-2]
0x47c: Call2 0x7a2

0x47d: Pop(1)
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(bool)
0x481: Stack[-1] = (bool) 0
0x482: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x483: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x484: Push( Stack[2 + Tasks[-1].StackPointer] )
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Stack[-1] = (bool) 1
0x487: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x488: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x489: Push("head")
0x48a: @ UnlookAsync(Stack[-1])
0x48b: Pop(1)
0x48c: Return(); Pop(0)

0x48d: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x48e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x48f: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x490: Stack[-7] = Stack[-17]
0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-23]
0x493: Call2 0x519

0x494: Pop(1)
0x495: Pop(1); Push((bool) Stack[-1] == 0)
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-22] = (bool) 0
0x498: Return(); Pop(16)

0x499: @@ GetPosition(Stack[-5])
0x49a: Pop(0)
0x49b: @ GetPosition(Stack[-4])
0x49c: Pop(0)
0x49d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x49e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x49f: PushEmpty(bool)
0x4a0: Stack[-1] = (bool) 0
0x4a1: Push((int) 0)
0x4a2: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a4: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4a5: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: Stack[-1] = (bool) 1
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a9: @ Stop()
0x4aa: Pop(0)
0x4ab: Stack[-22] = (bool) 0
0x4ac: Return(); Pop(16)

0x4ad: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4ae: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4b0: @@ GetPFPosition(Stack[-5])
0x4b1: Pop(0)
0x4b2: @ FindPathTo(Stack[-1], Stack[-5])
0x4b3: Pop(0)
0x4b4: Pop(0); Push(( Stack[-1] != 0 )
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-6] = Stack[-1]
0x4b7: Stack[-1] = 0
0x4b8: Pop(0); Push(( Stack[-6] != 0 )
0x4b9: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ba: Push(Stack[-7])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4bc: Stack[-7] = (bool) 0
0x4bd: @ RotatePath(Stack[-6], Stack[-8])
0x4be: Pop(0)
0x4bf: Pop(0); Push((bool) Stack[-8] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: GOTO 0x4f1

0x4c2: Push((int) 0)
0x4c3: Push((float)0.3)
0x4c4: @ SetTimer(Stack[-2], Stack[-1])
0x4c5: Pop(2)
0x4c6: PushEmpty(string)
0x4c7: Call2 0x520

0x4c8: Pop(0)
0x4c9: PushEmpty(string)
0x4ca: Call2 0x522

0x4cb: Pop(0)
0x4cc: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4cd: Pop(2)
0x4ce: Pop(0); Push((bool) Stack[-8] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d2: Stack[-6] = 0
0x4d3: GOTO 0x4f1

0x4d4: GOTO 0x4d6

0x4d5: GOTO 0x4f0

0x4d6: GOTO 0x4d8

0x4d7: Stack[-6] = 0
0x4d8: GOTO 0x4e9

0x4d9: Push((int) 0)
0x4da: @ KillTimer(Stack[-1])
0x4db: Pop(1)
0x4dc: Push((float)0.5)
0x4dd: @ Sleep(Stack[-1], Stack[-9])
0x4de: Pop(1)
0x4df: Pop(0); Push((bool) Stack[-8] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-6] = 0
0x4e4: GOTO 0x4f1

0x4e5: Push((int) 0)
0x4e6: Push((float)0.3)
0x4e7: @ SetTimer(Stack[-2], Stack[-1])
0x4e8: Pop(2)
0x4e9: Stack[-1] = 0
0x4ea: GOTO 0x4ef

0x4eb: Push((int) 0)
0x4ec: @ KillTimer(Stack[-1])
0x4ed: Pop(1)
0x4ee: GOTO 0x4f1

0x4ef: Stack[-6] = 0
0x4f0: GOTO 0x491

0x4f1: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4f2: Return(); Pop(16)

0x4f3: PushEmpty()
0x4f4: Push((int) 0)
0x4f5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f7: Return(); Pop(0)

0x4f8: PushEmpty(bool, object)
0x4f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fa: Call2 0x519

0x4fb: Pop(1)
0x4fc: Pop(1); Push((bool) Stack[-1] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4ff: Push((int) 0)
0x500: @ KillTimer(Stack[-1])
0x501: Pop(1)
0x502: @ Stop()
0x503: Pop(0)
0x504: Return(); Pop(0)

0x505: PushEmpty()
0x506: @ RequestClearPath(Stack[-1])
0x507: Pop(0)
0x508: Return(); Pop(0)

0x509: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x50a: Push((int) 0)
0x50b: @ KillTimer(Stack[-1])
0x50c: Pop(1)
0x50d: @ Stop()
0x50e: Pop(0)
0x50f: Return(); Pop(0)

0x510: PushEmpty()
0x511: PushEmpty()
0x512: Call2 0x463

0x513: Pop(0)
0x514: PushEmpty(object)
0x515: Stack[-1] = Stack[-2]
0x516: Call2 0x90e

0x517: Pop(1)
0x518: Return(); Pop(0)

0x519: PushEmpty()
0x51a: PushEmpty(bool, object)
0x51b: Stack[-1] = Stack[-3]
0x51c: Call2 0x68b

0x51d: Stack[-4] = Stack[-2]
0x51e: Pop(2)
0x51f: Return(); Pop(0)

0x520: Stack[-1] = "walk"
0x521: Return(); Pop(0)

0x522: Stack[-1] = "run"
0x523: Return(); Pop(0)

0x524: PushEmpty()
0x525: PushEmpty(bool, string, string)
0x526: Stack[-2] = "quest_d5_01"
0x527: Stack[-1] = "dead"
0x528: Call2 0x815

0x529: Pop(3)
0x52a: PushEmpty(object)
0x52b: Stack[-1] = Stack[-2]
0x52c: Call2 0x54b

0x52d: Pop(1)
0x52e: Push((int) 50)
0x52f: Push((int) 40)
0x530: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x531: Pop(2)
0x532: PushEmpty()
0x533: Call2 0x8d7

0x534: Pop(0)
0x535: @ Hold()
0x536: Pop(0)
0x537: GOTO 0x535

0x538: Return(); Pop(0)

0x539: PushEmpty(bool, bool)
0x53a: @ IsOverrideActive(Stack[-1])
0x53b: Pop(0)
0x53c: Pop(0); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53e: PushEmpty(object)
0x53f: Stack[-1] = Stack[-4]
0x540: Call2 0x8b9

0x541: Pop(1)
0x542: Return(); Pop(2)

0x543: PushEmpty(object)
0x544: Call2 0x7dd

0x545: Pop(0)
0x546: @ RemoveActor(Stack[-1])
0x547: Pop(1)
0x548: @ Hold()
0x549: Pop(0)
0x54a: Return(); Pop(0)

0x54b: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x54c: Pop(0); Push((bool) Stack[-21] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "fdie"
0x550: Call2 0x5a6

0x551: Pop(1)
0x552: GOTO 0x5a5

0x553: @@ GetPosition(Stack[-10])
0x554: Pop(0)
0x555: @ GetPosition(Stack[-9])
0x556: Pop(0)
0x557: @ GetDirection(Stack[-8])
0x558: Pop(0)
0x559: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x55a: Push(CvectorIndex(Stack[-7], 0))
0x55b: Push(CvectorIndex(Stack[-9], 0))
0x55c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55d: Push(CvectorIndex(Stack[-8], 2))
0x55e: Push(CvectorIndex(Stack[-10], 2))
0x55f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x560: Pop(2); Push(Stack[-2] + Stack[-1]);
0x561: Push((int) 0)
0x562: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x564: Stack[-6] = "fdie"
0x565: GOTO 0x567

0x566: Stack[-6] = "bdie"
0x567: @ RemoveRTEnvelope()
0x568: Pop(0)
0x569: @ SetDeathState()
0x56a: Pop(0)
0x56b: @ Stop()
0x56c: Pop(0)
0x56d: @ StopAsync()
0x56e: Pop(0)
0x56f: Stack[-5] = Stack[-21]
0x570: Push("GetScriptProperty")
0x571: Push((int) 2)
0x572: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x573: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x574: Push("Owner")
0x575: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x576: Pop(1)
0x577: Push(Stack[-4])
0x578: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x579: Push("Owner")
0x57a: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x57b: Pop(1)
0x57c: Pop(0); Push((bool) Stack[-5] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Stack[-5] = Stack[-21]
0x57f: Push("@GetEyesHeight")
0x580: Push((int) 1)
0x581: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x582: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x583: @@ GetEyesHeight(Stack[-2])
0x584: Pop(0)
0x585: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x586: Push(CvectorIndex(Stack[-1], 1))
0x587: Stack[-1] = Stack[-3]
0x588: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x589: Push("head")
0x58a: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x58b: Pop(1)
0x58c: Stack[-3] = (bool) 1
0x58d: GOTO 0x58f

0x58e: Stack[-3] = (bool) 0
0x58f: PushEmpty(string)
0x590: Stack[-1] = Stack[-7]
0x591: Call2 0x7b4

0x592: Pop(1)
0x593: Push("all")
0x594: @ PlayAnimation(Stack[-1], Stack[-7])
0x595: Pop(1)
0x596: @ WaitForAnimEnd()
0x597: Pop(0)
0x598: Push(Stack[-3])
0x599: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59a: @ StopAsync()
0x59b: Pop(0)
0x59c: Push("head")
0x59d: @ UnlookAsync(Stack[-1])
0x59e: Pop(1)
0x59f: Push("all")
0x5a0: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5a1: Pop(1)
0x5a2: @ RemoveEnvelope()
0x5a3: Pop(0)
0x5a4: Stack[-5] = 0
0x5a5: Return(); Pop(20)

0x5a6: PushEmpty()
0x5a7: @ RemoveRTEnvelope()
0x5a8: Pop(0)
0x5a9: @ SetDeathState()
0x5aa: Pop(0)
0x5ab: @ Stop()
0x5ac: Pop(0)
0x5ad: @ StopAsync()
0x5ae: Pop(0)
0x5af: @ StopSecondaryAnimation()
0x5b0: Pop(0)
0x5b1: PushEmpty(string)
0x5b2: Stack[-1] = Stack[-2]
0x5b3: Call2 0x7b4

0x5b4: Pop(1)
0x5b5: Push("all")
0x5b6: @ PlayAnimation(Stack[-1], Stack[-2])
0x5b7: Pop(1)
0x5b8: @ WaitForAnimEnd()
0x5b9: Pop(0)
0x5ba: Push("all")
0x5bb: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5bc: Pop(1)
0x5bd: @ RemoveEnvelope()
0x5be: Pop(0)
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty()
0x5c3: Return(); Pop(0)

0x5c4: PushEmpty()
0x5c5: Return(); Pop(0)

0x5c6: PushEmpty()
0x5c7: PushEmpty(int, object)
0x5c8: Stack[-1] = Stack[-3]
0x5c9: Push(-2, 1); TaskCall(0)
0x5ca: Call2 0x0

0x5cb: Pop(-2, 1); TaskReturn
0x5cc: Pop(2)
0x5cd: Return(); Pop(0)

0x5ce: @ Hold()
0x5cf: Pop(0)
0x5d0: GOTO 0x5ce

0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: PushEmpty(bool)
0x5d4: Call2 0x5dc

0x5d5: Pop(0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d7: PushEmpty(object)
0x5d8: Stack[-1] = Stack[-2]
0x5d9: Call2 0x5c6

0x5da: Pop(1)
0x5db: Return(); Pop(0)

0x5dc: Stack[-1] = (bool) 1
0x5dd: Return(); Pop(0)

0x5de: PushEmpty(bool, bool)
0x5df: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5e0: Pop(0)
0x5e1: Push(Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e3: PushEmpty(bool, string, string)
0x5e4: Stack[-2] = "quest_d5_01"
0x5e5: Stack[-1] = "factory_fight"
0x5e6: Call2 0x815

0x5e7: Pop(3)
0x5e8: Return(); Pop(2)

0x5e9: PushEmpty()
0x5ea: Push("attack")
0x5eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ed: PushEmpty()
0x5ee: Push(-0, 6); TaskCall(2)
0x5ef: Call2 0x179

0x5f0: Pop(-0, 6); TaskReturn
0x5f1: Pop(0)
0x5f2: Return(); Pop(0)

0x5f3: PushEmpty()
0x5f4: Push((int) 2)
0x5f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f7: Stack[-2] = "fire"
0x5f8: Return(); Pop(0)

0x5f9: GOTO 0x5ff

0x5fa: Push((int) 1)
0x5fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-2] = "bullet"
0x5fe: Return(); Pop(0)

0x5ff: Stack[-2] = "phys"
0x600: Return(); Pop(0)

0x601: PushEmpty(cvector, cvector, cvector, cvector)
0x602: @ GetPosition(Stack[-2])
0x603: Pop(0)
0x604: @@ GetPosition(Stack[-1])
0x605: Pop(0)
0x606: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x607: Return(); Pop(4)

0x608: PushEmpty(bool, bool)
0x609: @ IsPlayerActor(Stack[-3], Stack[-1])
0x60a: Pop(0)
0x60b: Stack[-4] = Stack[-1]
0x60c: Return(); Pop(2)

0x60d: PushEmpty(bool, bool)
0x60e: Push("HasProperty")
0x60f: Push((int) 2)
0x610: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x611: Pop(1); Push((bool) Stack[-1] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x613: Stack[-5] = (bool) 0
0x614: Return(); Pop(2)

0x615: @@ HasProperty(Stack[-3], Stack[-1])
0x616: Pop(0)
0x617: Stack[-5] = Stack[-1]
0x618: Return(); Pop(2)

0x619: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x61a: PushEmpty(bool, object, string)
0x61b: Stack[-2] = Stack[-18]
0x61c: Stack[-1] = "health"
0x61d: Call2 0x60d

0x61e: Pop(2)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-16] = (float) 0.0
0x622: Return(); Pop(12)

0x623: PushEmpty(bool, object, string)
0x624: Stack[-2] = Stack[-18]
0x625: Stack[-1] = "armor"
0x626: Call2 0x60d

0x627: Pop(2)
0x628: Pop(1); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-6] = (int) 0
0x62b: GOTO 0x62f

0x62c: Push("armor")
0x62d: @@ GetProperty(Stack[-1], Stack[-7])
0x62e: Pop(1)
0x62f: Push("armor_")
0x630: PushEmpty(string, int)
0x631: Stack[-1] = Stack[-16]
0x632: Call2 0x5f3

0x633: Pop(1)
0x634: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x635: PushEmpty(bool, object, string)
0x636: Stack[-2] = Stack[-18]
0x637: Stack[-1] = Stack[-8]
0x638: Call2 0x60d

0x639: Pop(2)
0x63a: Pop(1); Push((bool) Stack[-1] == 0)
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[-4] = (int) 0
0x63d: GOTO 0x640

0x63e: @@ GetProperty(Stack[-5], Stack[-4])
0x63f: Pop(0)
0x640: PushEmpty(float, float, float)
0x641: Pop(0); Push(Stack[-9] + Stack[-7]);
0x642: Push((float)100.0)
0x643: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x644: Stack[-1] = (int) 1
0x645: Call2 0x7ed

0x646: Stack[-6] = Stack[-3]
0x647: Pop(3)
0x648: Push("health")
0x649: @@ GetProperty(Stack[-1], Stack[-3])
0x64a: Pop(1)
0x64b: Push((int) 1)
0x64c: Pop(1); Push(Stack[-1] - Stack[-4]);
0x64d: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x64e: Push("health")
0x64f: PushEmpty(float, float, float, float)
0x650: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x651: Stack[-2] = (int) 0
0x652: Stack[-1] = (int) 1
0x653: Call2 0x7f4

0x654: Pop(3)
0x655: @@ SetProperty(Stack[-2], Stack[-1])
0x656: Pop(2)
0x657: PushEmpty(bool, object)
0x658: Stack[-1] = Stack[-17]
0x659: Call2 0x608

0x65a: Pop(1)
0x65b: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65c: PushEmpty(float)
0x65d: Stack[-1] = -Stack[-2]; Pop(0);
0x65e: Call2 0x804

0x65f: Pop(1)
0x660: Stack[-16] = Stack[-1]
0x661: Return(); Pop(12)

0x662: PushEmpty(bool, bool)
0x663: @@ IsDead(Stack[-1])
0x664: Pop(0)
0x665: Stack[-4] = Stack[-1]
0x666: Return(); Pop(2)

0x667: PushEmpty(object, object, object, object)
0x668: Pop(0); Push((bool) Stack[-5] == 0)
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-6] = (bool) 0
0x66b: Return(); Pop(4)

0x66c: PushEmpty(bool)
0x66d: Stack[-1] = (bool) 0
0x66e: Push("IsDead")
0x66f: Push((int) 1)
0x670: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x671: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[-8]
0x674: Call2 0x662

0x675: Pop(1)
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Stack[-1] = (bool) 1
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-6] = (bool) 0
0x67a: Return(); Pop(4)

0x67b: @ GetScene(Stack[-2])
0x67c: Pop(0)
0x67d: Pop(0); Push((bool) Stack[-2] == 0)
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-6] = (bool) 0
0x680: Return(); Pop(4)

0x681: @@ GetScene(Stack[-1])
0x682: Pop(0)
0x683: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-6] = (bool) 0
0x686: Return(); Pop(4)

0x687: Stack[-6] = (bool) 1
0x688: Return(); Pop(4)

0x689: Stack[-1] = 0
0x68a: Stack[-2] = 0
0x68b: PushEmpty(int, int)
0x68c: PushEmpty(bool, object)
0x68d: Stack[-1] = Stack[-5]
0x68e: Call2 0x667

0x68f: Pop(1)
0x690: Pop(1); Push((bool) Stack[-1] == 0)
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-4] = (bool) 0
0x693: Return(); Pop(2)

0x694: PushEmpty(bool, object, string)
0x695: Stack[-2] = Stack[-6]
0x696: Stack[-1] = "noaccess"
0x697: Call2 0x60d

0x698: Pop(2)
0x699: Pop(1); Push((bool) Stack[-1] == 0)
0x69a: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69b: Stack[-4] = (bool) 1
0x69c: Return(); Pop(2)

0x69d: Push("noaccess")
0x69e: @@ GetProperty(Stack[-1], Stack[-2])
0x69f: Pop(1)
0x6a0: Push((int) 0)
0x6a1: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6a2: Return(); Pop(2)

0x6a3: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6a4: Pop(0); Push((bool) Stack[-15] == 0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Return(); Pop(14)

0x6a7: @ IsDead(Stack[-7])
0x6a8: Pop(0)
0x6a9: Push(Stack[-7])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(14)

0x6ac: @ GetSecondaryAnimationType(Stack[-6])
0x6ad: Pop(0)
0x6ae: Push((int) 0)
0x6af: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b1: Return(); Pop(14)

0x6b2: @@ GetPosition(Stack[-5])
0x6b3: Pop(0)
0x6b4: @ GetPosition(Stack[-4])
0x6b5: Pop(0)
0x6b6: @ GetDirection(Stack[-3])
0x6b7: Pop(0)
0x6b8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6b9: Push(CvectorIndex(Stack[-2], 0))
0x6ba: Push(CvectorIndex(Stack[-4], 0))
0x6bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6bc: Push(CvectorIndex(Stack[-3], 2))
0x6bd: Push(CvectorIndex(Stack[-5], 2))
0x6be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6c0: Push((int) 0)
0x6c1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c3: Stack[-1] = "fhit"
0x6c4: GOTO 0x6c6

0x6c5: Stack[-1] = "bhit"
0x6c6: Push("hit_react")
0x6c7: Push("1")
0x6c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6c9: Push("2")
0x6ca: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6cb: Push((int) -10)
0x6cc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(4)
0x6ce: Return(); Pop(14)

0x6cf: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6d0: PushEmpty(bool)
0x6d1: Stack[-1] = (bool) 0
0x6d2: PushEmpty(bool)
0x6d3: Stack[-1] = (bool) 0
0x6d4: Push(Stack[-23])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d6: Push((int) 4)
0x6d7: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d9: Stack[-1] = (bool) 1
0x6da: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6db: Push((int) 5)
0x6dc: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6de: Stack[-1] = (bool) 1
0x6df: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x6e0: PushEmpty(cvector, cvector)
0x6e1: PushEmpty(cvector, object)
0x6e2: Stack[-1] = Stack[-25]
0x6e3: Call2 0x601

0x6e4: Stack[-3] = Stack[-2]
0x6e5: Pop(2)
0x6e6: Call2 0x7e3

0x6e7: Stack[-11] = Stack[-2]
0x6e8: Pop(2)
0x6e9: @ CreateVectorVector(Stack[-8])
0x6ea: Pop(0)
0x6eb: Stack[-7] = (int) 1
0x6ec: Push("hit")
0x6ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ee: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6ef: Pop(1)
0x6f0: Pop(0); Push((bool) Stack[-6] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: GOTO 0x6fc

0x6f3: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6f4: Push((float)0.70711)
0x6f5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f7: @@ add(Stack[-5])
0x6f8: Pop(0)
0x6f9: Push((int) 1)
0x6fa: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6fb: GOTO 0x6ec

0x6fc: @@ size(Stack[-3])
0x6fd: Pop(0)
0x6fe: Push(Stack[-3])
0x6ff: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x700: @ irand(Stack[-2], Stack[-3])
0x701: Pop(0)
0x702: @@ get(Stack[-1], Stack[-2])
0x703: Pop(0)
0x704: PushEmpty(object, int, float, cvector, cvector)
0x705: Stack[-5] = Stack[-26]
0x706: Stack[-4] = Stack[-25]
0x707: Stack[-3] = Stack[-24]
0x708: Stack[-2] = Stack[-6]
0x709: Stack[-1] = -Stack[-14]; Pop(0);
0x70a: Call2 0x713

0x70b: Pop(5)
0x70c: Return(); Pop(18)

0x70d: Stack[-8] = 0
0x70e: PushEmpty(object)
0x70f: Stack[-1] = Stack[-22]
0x710: Call2 0x6a3

0x711: Pop(1)
0x712: Return(); Pop(18)

0x713: PushEmpty(object, object, object, object)
0x714: @ GetScene(Stack[-2])
0x715: Pop(0)
0x716: Push("scripted")
0x717: Push("blood_dir.xml")
0x718: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x719: Pop(2)
0x71a: PushEmpty(object)
0x71b: Stack[-1] = Stack[-10]
0x71c: Call2 0x6a3

0x71d: Pop(1)
0x71e: Return(); Pop(4)

0x71f: Stack[-1] = 0
0x720: Stack[-2] = 0
0x721: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x722: @@ GetPosition(Stack[-3])
0x723: Pop(0)
0x724: @ GetPosition(Stack[-2])
0x725: Pop(0)
0x726: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x727: Push(CvectorIndex(Stack[-1], 0))
0x728: Push(CvectorIndex(Stack[-2], 2))
0x729: @ RotateAsync(Stack[-2], Stack[-1])
0x72a: Pop(2)
0x72b: Return(); Pop(6)

0x72c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x72d: @@ GetPosition(Stack[-8])
0x72e: Pop(0)
0x72f: @@ GetEyesHeight(Stack[-9])
0x730: Pop(0)
0x731: Push(CvectorIndex(Stack[-8], 1))
0x732: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x733: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x734: @ GetPosition(Stack[-7])
0x735: Pop(0)
0x736: @ GetEyesHeight(Stack[-9])
0x737: Pop(0)
0x738: Push(CvectorIndex(Stack[-7], 1))
0x739: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x73a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x73b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x73c: Push(CvectorIndex(Stack[-6], 1))
0x73d: Stack[-1] = (int) 0
0x73e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x73f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x740: Pop(1); Push(Sqrt(Stack[-1]))
0x741: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x742: Stack[-5] = -Stack[-6]; Pop(0);
0x743: Pop(0); Push(Stack[-6] * Stack[-19]);
0x744: PushEmpty(cvector, cvector)
0x745: Push(CVector(0.0, 1.0, 0.0))
0x746: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x747: Call2 0x7e3

0x748: Pop(1)
0x749: Push((int) 25)
0x74a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x74b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x74c: Push(CVector(0.0, 10.0, 0.0))
0x74d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x74e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x74f: @ IsOverrideActive(Stack[-2])
0x750: Pop(0)
0x751: Push(Stack[-2])
0x752: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x753: Stack[-21] = (bool) 0
0x754: Return(); Pop(18)

0x755: @ StopWorld()
0x756: Pop(0)
0x757: Push((bool) 1)
0x758: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x759: Pop(1)
0x75a: Push(CvectorIndex(Stack[-4], 0))
0x75b: Push(CvectorIndex(Stack[-5], 2))
0x75c: @ Rotate(Stack[-2], Stack[-1])
0x75d: Pop(2)
0x75e: PushEmpty(bool)
0x75f: Call2 0x91c

0x760: Pop(0)
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: GOTO 0x76b

0x763: Push("head")
0x764: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x765: Pop(1)
0x766: Push(Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x768: Push("head")
0x769: @ LookAsyncCamera(Stack[-1])
0x76a: Pop(1)
0x76b: @ CameraWaitForPlayFinish()
0x76c: Pop(0)
0x76d: @ ResumeWorld()
0x76e: Pop(0)
0x76f: Stack[-21] = (bool) 1
0x770: Return(); Pop(18)

0x771: PushEmpty(bool, bool)
0x772: Push((bool) 1)
0x773: @ CameraSwitchToNormal(Stack[-1])
0x774: Pop(1)
0x775: PushEmpty(bool)
0x776: Call2 0x91c

0x777: Pop(0)
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: GOTO 0x782

0x77a: Push("head")
0x77b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x77c: Pop(1)
0x77d: Push(Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77f: Push("head")
0x780: @ UnlookAsync(Stack[-1])
0x781: Pop(1)
0x782: Return(); Pop(2)

0x783: PushEmpty(bool, float, float, bool, float, float)
0x784: @ lshHasAnimation(Stack[-3], Stack[-7])
0x785: Pop(0)
0x786: Push(Stack[-3])
0x787: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x788: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x789: Pop(0)
0x78a: Push((bool) 0)
0x78b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(1)
0x78d: GOTO 0x792

0x78e: Push("Can't find lsh animation : ")
0x78f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x790: @ Trace(Stack[-1])
0x791: Pop(1)
0x792: Return(); Pop(6)

0x793: PushEmpty(bool, float, float, bool, float, float)
0x794: @ lshHasAnimation(Stack[-3], Stack[-8])
0x795: Pop(0)
0x796: Push(Stack[-3])
0x797: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x798: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x799: Pop(0)
0x79a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x79b: Pop(0)
0x79c: GOTO 0x7a1

0x79d: Push("Can't find lsh animation : ")
0x79e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x79f: @ Trace(Stack[-1])
0x7a0: Pop(1)
0x7a1: Return(); Pop(6)

0x7a2: PushEmpty(float, cvector, float, cvector)
0x7a3: @@ GetEyesHeight(Stack[-2])
0x7a4: Pop(0)
0x7a5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7a6: Push(CvectorIndex(Stack[-1], 1))
0x7a7: Stack[-1] = Stack[-3]
0x7a8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7a9: Push("head")
0x7aa: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7ab: Pop(1)
0x7ac: Return(); Pop(4)

0x7ad: PushEmpty(bool)
0x7ae: Call2 0x91c

0x7af: Pop(0)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: @ lshStopSpeech()
0x7b2: Pop(0)
0x7b3: Return(); Pop(0)

0x7b4: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7b5: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7b6: Pop(0)
0x7b7: Pop(0); Push((bool) Stack[-8] == 0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7b9: Stack[-7] = (int) 0
0x7ba: Push((int) 1)
0x7bb: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7bc: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7bd: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7be: Pop(1)
0x7bf: Pop(0); Push((bool) Stack[-6] == 0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c1: GOTO 0x7c5

0x7c2: Push((int) 1)
0x7c3: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7c4: GOTO 0x7ba

0x7c5: Pop(0); Push((bool) Stack[-7] == 0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c7: Return(); Pop(16)

0x7c8: @ irand(Stack[-5], Stack[-7])
0x7c9: Pop(0)
0x7ca: Push((int) 1)
0x7cb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7cc: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7cd: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7ce: Pop(0)
0x7cf: Push(Stack[-4])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d1: @ GetEyesHeight(Stack[-3])
0x7d2: Pop(0)
0x7d3: @ GetDirection(Stack[-2])
0x7d4: Pop(0)
0x7d5: Push((int) 50)
0x7d6: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7d7: Push(CvectorIndex(Stack[-1], 1))
0x7d8: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7d9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7da: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7db: Pop(0)
0x7dc: Return(); Pop(16)

0x7dd: PushEmpty(object, object)
0x7de: @ self(Stack[-1])
0x7df: Pop(0)
0x7e0: Stack[-3] = Stack[-1]
0x7e1: Return(); Pop(2)

0x7e2: Stack[-1] = 0
0x7e3: PushEmpty(float, float)
0x7e4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7e5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7e6: Push((float)0.0)
0x7e7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7ea: Return(); Pop(2)

0x7eb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7ec: Return(); Pop(2)

0x7ed: PushEmpty()
0x7ee: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-3] = Stack[-2]
0x7f1: GOTO 0x7f3

0x7f2: Stack[-3] = Stack[-1]
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty()
0x7f5: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f7: Stack[-4] = Stack[-2]
0x7f8: Return(); Pop(0)

0x7f9: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fb: Stack[-4] = Stack[-1]
0x7fc: Return(); Pop(0)

0x7fd: Stack[-4] = Stack[-3]
0x7fe: Return(); Pop(0)

0x7ff: PushEmpty(int, int)
0x800: @ GetVariable(Stack[-3], Stack[-1])
0x801: Pop(0)
0x802: Stack[-4] = Stack[-1]
0x803: Return(); Pop(2)

0x804: PushEmpty(object, object)
0x805: @ CreateFloatVector(Stack[-1])
0x806: Pop(0)
0x807: @@ add(Stack[-3])
0x808: Pop(0)
0x809: Push((int) 0)
0x80a: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80c: Push((float)0.7)
0x80d: Push((int) 500)
0x80e: @ RumblePlay(Stack[-2], Stack[-1])
0x80f: Pop(2)
0x810: Push((int) 15)
0x811: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x812: Pop(1)
0x813: Return(); Pop(2)

0x814: Stack[-1] = 0
0x815: PushEmpty(object, object)
0x816: @ FindActor(Stack[-1], Stack[-4])
0x817: Pop(0)
0x818: Pop(0); Push((bool) Stack[-1] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x81a: Stack[-5] = (bool) 0
0x81b: Return(); Pop(2)

0x81c: @ Trigger(Stack[-1], Stack[-3])
0x81d: Pop(0)
0x81e: Stack[-5] = (bool) 1
0x81f: Return(); Pop(2)

0x820: Stack[-1] = 0
0x821: PushEmpty(float, float)
0x822: @ GetGameTime(Stack[-1])
0x823: Pop(0)
0x824: Stack[-3] = Stack[-1]
0x825: Return(); Pop(2)

0x826: PushEmpty(bool, bool)
0x827: @ IsPlayerActor(Stack[-3], Stack[-1])
0x828: Pop(0)
0x829: Push(Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82b: Push("attack")
0x82c: @ PlayGlobalMusic(Stack[-1])
0x82d: Pop(1)
0x82e: Return(); Pop(2)

0x82f: PushEmpty(object, object)
0x830: @ GetScene(Stack[-1])
0x831: Pop(0)
0x832: Push("battle")
0x833: PushEmpty(object)
0x834: Call2 0x7dd

0x835: Pop(0)
0x836: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x837: Pop(2)
0x838: Return(); Pop(2)

0x839: Stack[-1] = 0
0x83a: PushEmpty()
0x83b: PushEmpty(object, string, float)
0x83c: PushEmpty(object)
0x83d: Call2 0x870

0x83e: Stack[-4] = Stack[-1]
0x83f: Pop(1)
0x840: Stack[-2] = "pt_map_grif"
0x841: Stack[-1] = (int) 2
0x842: Call2 0x881

0x843: Pop(3)
0x844: PushEmpty(object)
0x845: Call2 0x870

0x846: Pop(0)
0x847: @@ ShowMap(Stack[-1])
0x848: Pop(1)
0x849: Return(); Pop(0)

0x84a: PushEmpty()
0x84b: Push("ood5PatrolGuard1")
0x84c: Push((int) 1)
0x84d: @ SetVariable(Stack[-2], Stack[-1])
0x84e: Pop(2)
0x84f: Return(); Pop(0)

0x850: PushEmpty(object, object)
0x851: Push("d5q01")
0x852: Push((int) 6)
0x853: @ SetVariable(Stack[-2], Stack[-1])
0x854: Pop(2)
0x855: PushEmpty(object)
0x856: Call2 0x870

0x857: Stack[-2] = Stack[-1]
0x858: Pop(1)
0x859: Push("d5q01PatrolGotoGrif")
0x85a: Push("pt_map_grif")
0x85b: Push((int) 1)
0x85c: Push((int) 515349)
0x85d: PushEmpty(float)
0x85e: Call2 0x821

0x85f: Pop(0)
0x860: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(5)
0x862: Return(); Pop(2)

0x863: Stack[-1] = 0
0x864: PushEmpty()
0x865: PushEmpty(int, string)
0x866: Stack[-1] = "ood5PatrolGuard1"
0x867: Call2 0x7ff

0x868: Pop(1)
0x869: Push((int) 0)
0x86a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86c: Stack[-2] = (bool) 1
0x86d: Return(); Pop(0)

0x86e: Stack[-2] = (bool) 0
0x86f: Return(); Pop(0)

0x870: PushEmpty(object, object, object, object)
0x871: @ GetMainOutdoorScene(Stack[-2])
0x872: Pop(0)
0x873: Pop(0); Push((bool) Stack[-2] == 0)
0x874: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x875: Push("Can't find main outdoor scene")
0x876: @ Trace(Stack[-1])
0x877: Pop(1)
0x878: Stack[-1] = 0
0x879: Stack[-5] = Stack[-1]
0x87a: Return(); Pop(4)

0x87b: @@ GetMap(Stack[-1])
0x87c: Pop(0)
0x87d: Stack[-5] = Stack[-1]
0x87e: Return(); Pop(4)

0x87f: Stack[-1] = 0
0x880: Stack[-2] = 0
0x881: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x882: @ GetMainOutdoorScene(Stack[-2])
0x883: Pop(0)
0x884: Pop(0); Push((bool) Stack[-2] == 0)
0x885: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x886: Push("Can't find main outdoor scene")
0x887: @ Trace(Stack[-1])
0x888: Pop(1)
0x889: Return(); Pop(8)

0x88a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x88b: Pop(0)
0x88c: Pop(0); Push((bool) Stack[-1] == 0)
0x88d: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x88e: Push("Warning: outdoor scene locator ")
0x88f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x890: Push(" doesnt exist")
0x891: Pop(2); Push(Stack[-2] + Stack[-1]);
0x892: @ Trace(Stack[-1])
0x893: Pop(1)
0x894: @@ GetMap(Stack[-11])
0x895: Pop(0)
0x896: Pop(0); Push((bool) Stack[-11] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x898: Push("Can't find map")
0x899: @ Trace(Stack[-1])
0x89a: Pop(1)
0x89b: Return(); Pop(8)

0x89c: Push(CvectorIndex(Stack[-4], 0))
0x89d: Push(CvectorIndex(Stack[-5], 2))
0x89e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x89f: Pop(2)
0x8a0: Return(); Pop(8)

0x8a1: Stack[-2] = 0
0x8a2: PushEmpty(int, int)
0x8a3: Push("branch")
0x8a4: @ GetVariable(Stack[-1], Stack[-2])
0x8a5: Pop(1)
0x8a6: Push((int) 0)
0x8a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a9: Stack[-3] = (int) 1
0x8aa: Return(); Pop(2)

0x8ab: GOTO 0x8b1

0x8ac: Push((int) 1)
0x8ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8af: Stack[-3] = (int) 2
0x8b0: Return(); Pop(2)

0x8b1: Stack[-3] = (int) 3
0x8b2: Return(); Pop(2)

0x8b3: PushEmpty(int, int)
0x8b4: Push("branch")
0x8b5: @ GetVariable(Stack[-1], Stack[-2])
0x8b6: Pop(1)
0x8b7: Stack[-3] = Stack[-1]
0x8b8: Return(); Pop(2)

0x8b9: PushEmpty()
0x8ba: PushEmpty(int)
0x8bb: Call2 0x8b3

0x8bc: Pop(0)
0x8bd: Push((int) 1)
0x8be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8c0: @ WorkWithCorpse(Stack[-1])
0x8c1: Pop(0)
0x8c2: GOTO 0x8c5

0x8c3: @ Barter(Stack[-1])
0x8c4: Pop(0)
0x8c5: Return(); Pop(0)

0x8c6: PushEmpty(object, int, bool, object, int, bool)
0x8c7: @ CreateInvItem(Stack[-3])
0x8c8: Pop(0)
0x8c9: @@ SetItemName(Stack[-7])
0x8ca: Pop(0)
0x8cb: Push("Organ")
0x8cc: Push((int) 1)
0x8cd: @@ SetProperty(Stack[-2], Stack[-1])
0x8ce: Pop(2)
0x8cf: @@ GetItemID(Stack[-2])
0x8d0: Pop(0)
0x8d1: Push((int) 0)
0x8d2: Push((int) 1)
0x8d3: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8d4: Pop(2)
0x8d5: Return(); Pop(6)

0x8d6: Stack[-3] = 0
0x8d7: PushEmpty(int)
0x8d8: Call2 0x8b3

0x8d9: Pop(0)
0x8da: Push((int) 1)
0x8db: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dd: Return(); Pop(0)

0x8de: PushEmpty(string)
0x8df: Stack[-1] = "liver"
0x8e0: Call2 0x8c6

0x8e1: Pop(1)
0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "kidney"
0x8e4: Call2 0x8c6

0x8e5: Pop(1)
0x8e6: PushEmpty(string)
0x8e7: Stack[-1] = "heart"
0x8e8: Call2 0x8c6

0x8e9: Pop(1)
0x8ea: PushEmpty(string)
0x8eb: Stack[-1] = "blood"
0x8ec: Call2 0x8c6

0x8ed: Pop(1)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(object, int, float)
0x8f1: Stack[-3] = Stack[-7]
0x8f2: Stack[-2] = Stack[-6]
0x8f3: Stack[-1] = Stack[-5]
0x8f4: Call2 0x6cf

0x8f5: Pop(3)
0x8f6: Return(); Pop(0)

0x8f7: PushEmpty()
0x8f8: PushEmpty(object, int, float, cvector, cvector)
0x8f9: Stack[-5] = Stack[-11]
0x8fa: Stack[-4] = Stack[-10]
0x8fb: Stack[-3] = Stack[-9]
0x8fc: Stack[-2] = Stack[-7]
0x8fd: Stack[-1] = Stack[-6]
0x8fe: Call2 0x713

0x8ff: Pop(5)
0x900: Return(); Pop(0)

0x901: PushEmpty(float, float)
0x902: Push("health")
0x903: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x905: Push("health")
0x906: @ GetProperty(Stack[-1], Stack[-2])
0x907: Pop(1)
0x908: Push((int) 0)
0x909: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90b: @ SignalDeath(Stack[-4])
0x90c: Pop(0)
0x90d: Return(); Pop(2)

0x90e: PushEmpty()
0x90f: PushEmpty(object)
0x910: Stack[-1] = Stack[-2]
0x911: Call2 0x91e

0x912: Pop(1)
0x913: Return(); Pop(0)

0x914: Stack[-1] = (int) 515572
0x915: Return(); Pop(0)

0x916: Stack[-1] = (int) 504031
0x917: Return(); Pop(0)

0x918: Stack[-1] = "ui/NPC_Citizen2.png"
0x919: Return(); Pop(0)

0x91a: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x91b: Return(); Pop(0)

0x91c: Stack[-1] = (bool) 0
0x91d: Return(); Pop(0)

0x91e: PushEmpty(bool, bool)
0x91f: Push("revolver_ammo")
0x920: Push((int) 0)
0x921: Push((int) 2)
0x922: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x923: Pop(3)
0x924: Push("alpha_pills")
0x925: Push((int) 0)
0x926: Push((int) 2)
0x927: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x928: Pop(3)
0x929: PushEmpty(object)
0x92a: Stack[-1] = Stack[-4]
0x92b: Push(-1, 0); TaskCall(4)
0x92c: Call2 0x524

0x92d: Pop(-1, 0); TaskReturn
0x92e: Pop(1)
0x92f: Return(); Pop(2)

