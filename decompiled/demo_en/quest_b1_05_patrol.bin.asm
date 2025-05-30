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
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
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
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	battle
	b1q05PatrolGroup
	pt_b1q05_patrol1
	AddMark
	ShowMap
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
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	b1q05ToAttack
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
	Sleep (1 args)
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
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	CanSee (2 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
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
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	SetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x133
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x13c Vars = (object)
		EVENT_1 Op = 0x15a Vars = (object)
		EVENT_3 Op = 0x172 Vars = (object)
		EVENT_17 Op = 0x18a Vars = (object)
		EVENT_7 Op = 0x1c2 Vars = (int)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x516 Vars = (int)
		EVENT_1 Op = 0x531 Vars = (object)
		EVENT_2 Op = 0x540 Vars = (object)
		EVENT_10 Op = 0x5c6 Vars = (object)
		EVENT_41 Op = 0x5d1 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x5f4 Vars = (object)
		EVENT_22 Op = 0x673 Vars = (object, int, float, float)
		EVENT_16 Op = 0x675 Vars = (object, string)
		EVENT_41 Op = 0x677 Vars = (object)

Events:
EVENT_22 Op = 0x9dc Vars = (object, int, float, float)
EVENT_43 Op = 0x9e4 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x9ee Vars = (object, string)
EVENT_41 Op = 0x9fb Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7bf

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x9b5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x9b3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x9b7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x9b9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x966

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
0x41: Call2 0x803

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
0x54: Push((int) 530942)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 530962)
0x5a: Push((int) 32271)
0x5b: Push((int) 32281)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 530959)
0x5f: Push((int) -1)
0x60: Push((int) 32278)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x9bb

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x814

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
0x86: Call2 0x9bb

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
0x96: Call2 0x824

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x83e

0x9f: Pop(0)
0xa0: Push((int) 32276)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x8cb

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x8e1

0xac: Pop(2)
0xad: Push((int) 32277)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x8cb

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x8e1

0xb9: Pop(2)
0xba: Push((int) 32269)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x84

0xc0: Pop(1)
0xc1: Push((int) 530942)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 530962)
0xc7: Push((int) 32271)
0xc8: Push((int) 32281)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 530959)
0xcc: Push((int) -1)
0xcd: Push((int) 32278)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Return(); Pop(0)

0xd1: Push((int) 32280)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd4: Push((int) 32271)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call2 0x84

0xda: Pop(1)
0xdb: Push((int) 530944)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 530965)
0xe1: Push((int) 32273)
0xe2: Push((int) 32285)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 530963)
0xe6: Push((int) 32284)
0xe7: Push((int) 32283)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 32284)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0x84

0xf1: Pop(1)
0xf2: Push((int) 530964)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 530945)
0xf8: Push((int) 32273)
0xf9: Push((int) 32272)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 32273)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0x84

0x103: Pop(1)
0x104: Push((int) 530946)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 530947)
0x10a: Push((int) 32275)
0x10b: Push((int) 32274)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 32275)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0x84

0x115: Pop(1)
0x116: Push((int) 530948)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 530949)
0x11c: Push((int) -1)
0x11d: Push((int) 32276)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 530950)
0x121: Push((int) -1)
0x122: Push((int) 32277)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x127: PushEmpty(bool)
0x128: Call2 0x9bb

0x129: Pop(0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: @ lshStopAnimation()
0x12c: Pop(0)
0x12d: GOTO 0x130

0x12e: @ StopAnimation()
0x12f: Pop(0)
0x130: Return(); Pop(0)

0x131: GOTO 0x9b

0x132: Return(); Pop(0)

0x133: Push((bool) 1)
0x134: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x135: PushEmpty(float, float)
0x136: Stack[-2] = (int) 300
0x137: Stack[-1] = (int) 100
0x138: Call2 0x198

0x139: Pop(2)
0x13a: GOTO 0x133

0x13b: Return(); Pop(0)

0x13c: PushEmpty()
0x13d: PushEmpty()
0x13e: Call2 0x1d9

0x13f: Pop(0)
0x140: PushEmpty(bool)
0x141: Call2 0x9bd

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x144: PushEmpty(object)
0x145: Stack[-1] = Stack[-2]
0x146: Push(-1, 6); TaskCall(3)
0x147: Call2 0x23d

0x148: Pop(-1, 6); TaskReturn
0x149: Pop(1)
0x14a: PushEmpty(int, object)
0x14b: Stack[-1] = Stack[-3]
0x14c: Push(-2, 1); TaskCall(0)
0x14d: Call2 0x0

0x14e: Pop(-2, 1); TaskReturn
0x14f: Pop(2)
0x150: PushEmpty()
0x151: Call2 0x9c4

0x152: Pop(0)
0x153: PushEmpty(object)
0x154: Stack[-1] = Stack[-2]
0x155: Push(-1, 6); TaskCall(3)
0x156: Call2 0x23d

0x157: Pop(-1, 6); TaskReturn
0x158: Pop(1)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: PushEmpty(bool)
0x15e: Call2 0x9bd

0x15f: Pop(0)
0x160: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[-4]
0x163: Call2 0x696

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 1
0x167: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x168: PushEmpty()
0x169: Call2 0x1d9

0x16a: Pop(0)
0x16b: PushEmpty(object)
0x16c: Stack[-1] = Stack[-2]
0x16d: Push(-1, 6); TaskCall(3)
0x16e: Call2 0x23d

0x16f: Pop(-1, 6); TaskReturn
0x170: Pop(1)
0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty(bool)
0x174: Stack[-1] = (bool) 0
0x175: PushEmpty(bool)
0x176: Call2 0x9bd

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x179: PushEmpty(bool, object)
0x17a: Stack[-1] = Stack[-4]
0x17b: Call2 0x696

0x17c: Pop(1)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 1
0x17f: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x180: PushEmpty()
0x181: Call2 0x1d9

0x182: Pop(0)
0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[-2]
0x185: Push(-1, 6); TaskCall(3)
0x186: Call2 0x23d

0x187: Pop(-1, 6); TaskReturn
0x188: Pop(1)
0x189: Return(); Pop(0)

0x18a: PushEmpty()
0x18b: PushEmpty()
0x18c: Call2 0x1d9

0x18d: Pop(0)
0x18e: PushEmpty()
0x18f: Call2 0x9c4

0x190: Pop(0)
0x191: PushEmpty(object)
0x192: Stack[-1] = Stack[-2]
0x193: Push(-1, 6); TaskCall(3)
0x194: Call2 0x23d

0x195: Pop(-1, 6); TaskReturn
0x196: Pop(1)
0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: PushEmpty(bool)
0x19a: Call2 0x7ba

0x19b: Pop(0)
0x19c: Pop(1); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Return(); Pop(0)

0x19f: Push("player")
0x1a0: @ FindActor(Stack[-4], Stack[-1])
0x1a1: Pop(1)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a6: Push((int) 10)
0x1a7: Push((float)1.0)
0x1a8: @ SetTimer(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: PushEmpty()
0x1ab: Call2 0x1e7

0x1ac: Pop(0)
0x1ad: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1af: Push((int) 10)
0x1b0: @ KillTimer(Stack[-1])
0x1b1: Pop(1)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty(float, float)
0x1b4: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b6: Stack[-3] = (bool) 0
0x1b7: Return(); Pop(2)

0x1b8: PushEmpty(float, object)
0x1b9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ba: Call2 0x68e

0x1bb: Pop(1)
0x1bc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1bd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c0: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c1: Return(); Pop(2)

0x1c2: PushEmpty()
0x1c3: Push((int) 10)
0x1c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c6: PushEmpty(bool)
0x1c7: Call2 0x1b3

0x1c8: Pop(0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1ca: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: PushEmpty(object)
0x1cd: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ce: Call2 0x833

0x1cf: Pop(1)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d1: GOTO 0x1d8

0x1d2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d4: Push("head")
0x1d5: @ UnlookAsync(Stack[-1])
0x1d6: Pop(1)
0x1d7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty()
0x1da: Call2 0x238

0x1db: Pop(0)
0x1dc: Push((int) 10)
0x1dd: @ KillTimer(Stack[-1])
0x1de: Pop(1)
0x1df: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e1: Push("head")
0x1e2: @ UnlookAsync(Stack[-1])
0x1e3: Pop(1)
0x1e4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e8: @ WaitForAnimEnd()
0x1e9: Pop(0)
0x1ea: PushEmpty(bool)
0x1eb: Call2 0x7ba

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Return(); Pop(14)

0x1f0: PushEmpty(int)
0x1f1: Call2 0x8ba

0x1f2: Stack[-8] = Stack[-1]
0x1f3: Pop(1)
0x1f4: Stack[-6] = (int) 0
0x1f5: PushEmpty(bool)
0x1f6: Stack[-1] = (bool) 0
0x1f7: Push((int) 5)
0x1f8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x7ba

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[-1] = (bool) 1
0x1ff: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x200: Push((int) 3)
0x201: @ irand(Stack[-6], Stack[-1])
0x202: Pop(1)
0x203: Push((int) 0)
0x204: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x206: Push(Stack[-7])
0x207: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x208: @ irand(Stack[-4], Stack[-7])
0x209: Pop(0)
0x20a: Push("all")
0x20b: PushEmpty(string, int)
0x20c: Stack[-1] = Stack[-7]
0x20d: Call2 0x8b3

0x20e: Pop(1)
0x20f: @ PlayAnimation(Stack[-2], Stack[-1])
0x210: Pop(2)
0x211: @ WaitForAnimEnd(Stack[-3])
0x212: Pop(0)
0x213: Pop(0); Push((bool) Stack[-3] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: GOTO 0x233

0x216: GOTO 0x228

0x217: Push((int) 1)
0x218: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21a: Push((int) 4)
0x21b: @ rand(Stack[-3], Stack[-1])
0x21c: Pop(1)
0x21d: Push((int) 1)
0x21e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x21f: @ Sleep(Stack[-1], Stack[-2])
0x220: Pop(1)
0x221: Pop(0); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x233

0x224: GOTO 0x228

0x225: Push(Stack[-6])
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x233

0x228: PushEmpty(bool)
0x229: Call2 0x236

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: GOTO 0x233

0x22e: @ ResetAAS()
0x22f: Pop(0)
0x230: Push((int) 1)
0x231: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x232: GOTO 0x1f5

0x233: @ ResetAAS()
0x234: Pop(0)
0x235: Return(); Pop(14)

0x236: Stack[-1] = (bool) 1
0x237: Return(); Pop(0)

0x238: @ StopAnimation()
0x239: Pop(0)
0x23a: @ StopGroup0()
0x23b: Pop(0)
0x23c: Return(); Pop(0)

0x23d: PushEmpty()
0x23e: PushEmpty(object, bool, float)
0x23f: Stack[-3] = Stack[-4]
0x240: Stack[-2] = (bool) 1
0x241: Stack[-1] = (float) 180.0
0x242: Call2 0x24f

0x243: Pop(3)
0x244: Push((int) 1)
0x245: @ Sleep(Stack[-1])
0x246: Pop(1)
0x247: GOTO 0x23e

0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: Stack[-3] = (float) 0.1
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Stack[-3] = (int) 0
0x24e: Return(); Pop(0)

0x24f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x250: PushEmpty()
0x251: Call2 0x334

0x252: Pop(0)
0x253: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x254: Push("@GetAttackDistance")
0x255: Push((int) 1)
0x256: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: @@ GetAttackDistance(Stack[-11])
0x259: Pop(0)
0x25a: Push((int) 50)
0x25b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x25c: GOTO 0x25e

0x25d: Stack[-11] = Stack[-23]
0x25e: Push((int) 150)
0x25f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Stack[-11] = (int) 150
0x262: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x263: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x264: @ IsPlayerActor(Stack[-0], Stack[-8])
0x265: Pop(0)
0x266: Push(Stack[-8])
0x267: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x268: Push("attack")
0x269: @ PlayGlobalMusic(Stack[-1])
0x26a: Pop(1)
0x26b: PushEmpty(object)
0x26c: Call2 0x86e

0x26d: Pop(0)
0x26e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x26f: Pop(1)
0x270: Push(Stack[-24])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-7] = (bool) 0
0x273: GOTO 0x275

0x274: Stack[-7] = (bool) 1
0x275: Push((float)400.0)
0x276: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x277: PushEmpty(bool)
0x278: Stack[-1] = (bool) 0
0x279: PushEmpty(bool, object)
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x719

0x27c: Pop(1)
0x27d: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: Stack[-1] = (bool) 1
0x281: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x282: PushEmpty()
0x283: Call2 0x4d1

0x284: Pop(0)
0x285: @@ GetPFPosition(Stack[-10])
0x286: Pop(0)
0x287: @ GetPFPosition(Stack[-9])
0x288: Pop(0)
0x289: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x28a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x28b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x28c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(bool, object, float, float, bool, bool)
0x28f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x290: Stack[-4] = Stack[-17]
0x291: Stack[-3] = (float) 10000.0
0x292: Stack[-2] = (bool) 1
0x293: Stack[-1] = (bool) 0
0x294: Push(-6, 3); TaskCall(4)
0x295: Call2 0x4e5

0x296: Pop(-6, 3); TaskReturn
0x297: Pop(5)
0x298: Pop(1); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x323

0x29b: Stack[-7] = (bool) 0
0x29c: GOTO 0x322

0x29d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x29e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x2a0: @@ GetPFPosition(Stack[-3])
0x2a1: Pop(0)
0x2a2: @ CanReachByPF(Stack[-2], Stack[-3])
0x2a3: Pop(0)
0x2a4: Pop(0); Push((bool) Stack[-2] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: PushEmpty(bool, object, float, float, bool, bool)
0x2a7: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2a8: Stack[-4] = Stack[-17]
0x2a9: Stack[-3] = (float) 10000.0
0x2aa: Stack[-2] = (bool) 1
0x2ab: Stack[-1] = (bool) 0
0x2ac: Push(-6, 3); TaskCall(4)
0x2ad: Call2 0x4e5

0x2ae: Pop(-6, 3); TaskReturn
0x2af: Pop(5)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x323

0x2b3: Stack[-7] = (bool) 0
0x2b4: GOTO 0x277

0x2b5: Pop(0); Push((bool) Stack[-7] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2b7: PushEmpty(object)
0x2b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b9: Call2 0x7af

0x2ba: Pop(1)
0x2bb: Push("all")
0x2bc: Push("attack_on")
0x2bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: @ WaitForAnimEnd()
0x2c0: Pop(0)
0x2c1: PushEmpty()
0x2c2: Call2 0x4d1

0x2c3: Pop(0)
0x2c4: @ StopAsync()
0x2c5: Pop(0)
0x2c6: Stack[-7] = (bool) 1
0x2c7: PushEmpty(bool, object)
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0x719

0x2ca: Pop(1)
0x2cb: Pop(1); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x323

0x2ce: @ rand(Stack[-1])
0x2cf: Pop(0)
0x2d0: PushEmpty(bool)
0x2d1: Stack[-1] = (bool) 1
0x2d2: Push((float)0.25)
0x2d3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(bool)
0x2d6: Call2 0x4a6

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Stack[-1] = (bool) 0
0x2da: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2db: @ Face(Stack[-0])
0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x4d8

0x2df: Pop(0)
0x2e0: Push("all")
0x2e1: Push("attack_stay")
0x2e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e3: Pop(2)
0x2e4: PushEmpty(bool, float)
0x2e5: Stack[-1] = Stack[-25]
0x2e6: Call2 0x422

0x2e7: Pop(2)
0x2e8: @ StopAsync()
0x2e9: Pop(0)
0x2ea: GOTO 0x319

0x2eb: @ Face(Stack[-0])
0x2ec: Pop(0)
0x2ed: Push("all")
0x2ee: Push("fjump")
0x2ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: @ WaitForAnimEnd()
0x2f2: Pop(0)
0x2f3: PushEmpty()
0x2f4: Call2 0x4d1

0x2f5: Pop(0)
0x2f6: Push(CVector(0.0, 0.0, 0.0))
0x2f7: @ SetSpeed(Stack[-1])
0x2f8: Pop(1)
0x2f9: @ Stop()
0x2fa: Pop(0)
0x2fb: @ StopAsync()
0x2fc: Pop(0)
0x2fd: PushEmpty(bool)
0x2fe: Call2 0x4a6

0x2ff: Pop(0)
0x300: Pop(1); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x304: Call2 0x719

0x305: Pop(1)
0x306: Pop(1); Push((bool) Stack[-1] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x323

0x309: @@ GetPFPosition(Stack[-10])
0x30a: Pop(0)
0x30b: @ GetPFPosition(Stack[-9])
0x30c: Pop(0)
0x30d: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x30e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x30f: Pop(0); Push(Stack[-23] * Stack[-23]);
0x310: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x312: PushEmpty(bool, float)
0x313: Stack[-1] = Stack[-25]
0x314: Call2 0x37e

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x323

0x319: GOTO 0x322

0x31a: PushEmpty(bool, float)
0x31b: Stack[-1] = Stack[-25]
0x31c: Call2 0x37e

0x31d: Pop(1)
0x31e: Pop(1); Push((bool) Stack[-1] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x323

0x321: Stack[-7] = (bool) 1
0x322: GOTO 0x277

0x323: @ WaitForAnimEnd()
0x324: Pop(0)
0x325: Push( Stack[3 + Tasks[-1].StackPointer] )
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Return(); Pop(22)

0x328: Push("all")
0x329: Push("attack_off")
0x32a: @ PlayAnimation(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: @ WaitForAnimEnd()
0x32d: Pop(0)
0x32e: Push(Stack[-8])
0x32f: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x330: Push((float)2.0)
0x331: @ Sleep(Stack[-1])
0x332: Pop(1)
0x333: Return(); Pop(22)

0x334: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x335: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x336: Push("all")
0x337: Push("attack_begin")
0x338: Push((int) 1)
0x339: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x33a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Pop(0); Push((bool) Stack[-3] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x343

0x340: Push((int) 1)
0x341: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x342: GOTO 0x336

0x343: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x344: Push("attack")
0x345: Push((int) 1)
0x346: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x347: Pop(2); Push(Stack[-2] + Stack[-1]);
0x348: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x349: Pop(1)
0x34a: Pop(0); Push((bool) Stack[-2] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x350

0x34d: Push((int) 1)
0x34e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x34f: GOTO 0x344

0x350: Push("all")
0x351: Push("bjump")
0x352: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Push(CvectorIndex(Stack[-1], 2))
0x355: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x356: Return(); Pop(6)

0x357: PushEmpty(object, float, float, object, float, float)
0x358: Push((float)0.9)
0x359: Pop(1); Push(Stack[-9] * Stack[-1]);
0x35a: @ GetVictim(Stack[-1], Stack[-4])
0x35b: Pop(1)
0x35c: @ ReportAttack(Stack[-0])
0x35d: Pop(0)
0x35e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x35f: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x360: PushEmpty(float, object, int)
0x361: Stack[-2] = Stack[-6]
0x362: Stack[-1] = Stack[-10]
0x363: Call2 0x249

0x364: Stack[-5] = Stack[-3]
0x365: Pop(3)
0x366: PushEmpty(float, object, float, int)
0x367: Stack[-3] = Stack[-7]
0x368: Stack[-2] = Stack[-6]
0x369: PushEmpty(int, object, int)
0x36a: Stack[-2] = Stack[-10]
0x36b: Stack[-1] = Stack[-14]
0x36c: Call2 0x24c

0x36d: Stack[-4] = Stack[-3]
0x36e: Pop(3)
0x36f: Call2 0x6a7

0x370: Stack[-5] = Stack[-4]
0x371: Pop(4)
0x372: PushEmpty(int)
0x373: Call2 0x4d6

0x374: Pop(0)
0x375: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x376: Pop(1)
0x377: PushEmpty(object, float)
0x378: Stack[-2] = Stack[-5]
0x379: Stack[-1] = Stack[-3]
0x37a: Call2 0x4dd

0x37b: Pop(2)
0x37c: Return(); Pop(6)

0x37d: Stack[-3] = 0
0x37e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x37f: PushEmpty()
0x380: Call2 0x4d1

0x381: Pop(0)
0x382: @ irand(Stack[-4], Stack[-1])
0x383: Pop(0)
0x384: Push((int) 1)
0x385: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x386: @ Face(Stack[-0])
0x387: Pop(0)
0x388: Push((bool) 1)
0x389: @ SetAttackState(Stack[-1])
0x38a: Pop(1)
0x38b: PushEmpty()
0x38c: Call2 0x8a8

0x38d: Pop(0)
0x38e: Push("all")
0x38f: Push("attack_begin")
0x390: Pop(1); Push(Stack[-1] + Stack[-6]);
0x391: @ PlayAnimation(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: @ WaitForAnimEnd()
0x394: Pop(0)
0x395: PushEmpty()
0x396: Call2 0x4b1

0x397: Pop(0)
0x398: PushEmpty(bool, object)
0x399: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39a: Call2 0x719

0x39b: Pop(1)
0x39c: Pop(1); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39e: @ StopAsync()
0x39f: Pop(0)
0x3a0: Stack[-10] = (bool) 0
0x3a1: Return(); Pop(8)

0x3a2: PushEmpty(float, int)
0x3a3: Stack[-2] = Stack[-11]
0x3a4: Stack[-1] = Stack[-6]
0x3a5: Call2 0x357

0x3a6: Pop(2)
0x3a7: Push("all")
0x3a8: Push("attack_middle")
0x3a9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3aa: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: Push(Stack[-3])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ae: PushEmpty()
0x3af: Call2 0x8a8

0x3b0: Pop(0)
0x3b1: Push("all")
0x3b2: Push("attack_middle")
0x3b3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: @ WaitForAnimEnd()
0x3b7: Pop(0)
0x3b8: PushEmpty()
0x3b9: Call2 0x4d1

0x3ba: Pop(0)
0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bd: Call2 0x719

0x3be: Pop(1)
0x3bf: Pop(1); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c1: @ StopAsync()
0x3c2: Pop(0)
0x3c3: Stack[-10] = (bool) 0
0x3c4: Return(); Pop(8)

0x3c5: PushEmpty(float, int)
0x3c6: Stack[-2] = Stack[-11]
0x3c7: Stack[-1] = Stack[-6]
0x3c8: Call2 0x357

0x3c9: Pop(2)
0x3ca: Stack[-2] = (int) 1
0x3cb: Push("attack_middle")
0x3cc: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3cd: Push("_")
0x3ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cf: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3d0: Push("all")
0x3d1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3d2: Pop(1)
0x3d3: Pop(0); Push((bool) Stack[-3] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: GOTO 0x3f3

0x3d6: PushEmpty()
0x3d7: Call2 0x8a8

0x3d8: Pop(0)
0x3d9: Push("all")
0x3da: @ PlayAnimation(Stack[-1], Stack[-2])
0x3db: Pop(1)
0x3dc: @ WaitForAnimEnd()
0x3dd: Pop(0)
0x3de: PushEmpty()
0x3df: Call2 0x4d1

0x3e0: Pop(0)
0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e3: Call2 0x719

0x3e4: Pop(1)
0x3e5: Pop(1); Push((bool) Stack[-1] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e7: @ StopAsync()
0x3e8: Pop(0)
0x3e9: Stack[-10] = (bool) 0
0x3ea: Return(); Pop(8)

0x3eb: PushEmpty(float, int)
0x3ec: Stack[-2] = Stack[-11]
0x3ed: Stack[-1] = Stack[-6]
0x3ee: Call2 0x357

0x3ef: Pop(2)
0x3f0: Push((int) 1)
0x3f1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3f2: GOTO 0x3cb

0x3f3: Push((bool) 0)
0x3f4: @ SetAttackState(Stack[-1])
0x3f5: Pop(1)
0x3f6: Push("all")
0x3f7: Push("attack_end")
0x3f8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fa: Pop(2)
0x3fb: PushEmpty(bool)
0x3fc: Call2 0x4df

0x3fd: Pop(0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3ff: PushEmpty(bool, float)
0x400: Stack[-1] = (float) 0.75
0x401: Call2 0x407

0x402: Pop(2)
0x403: @ StopAsync()
0x404: Pop(0)
0x405: Stack[-10] = (bool) 1
0x406: Return(); Pop(8)

0x407: PushEmpty(float, bool, float, bool)
0x408: @ rand(Stack[-2])
0x409: Pop(0)
0x40a: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x40b: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40c: @ IsAnimationPlaying(Stack[-1])
0x40d: Pop(0)
0x40e: Pop(0); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x41a

0x411: PushEmpty(bool)
0x412: Call2 0x469

0x413: Pop(0)
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-6] = (bool) 1
0x416: Return(); Pop(4)

0x417: @ sync()
0x418: Pop(0)
0x419: GOTO 0x40c

0x41a: GOTO 0x420

0x41b: @ WaitForAnimEnd()
0x41c: Pop(0)
0x41d: PushEmpty()
0x41e: Call2 0x4d1

0x41f: Pop(0)
0x420: Stack[-6] = (bool) 0
0x421: Return(); Pop(4)

0x422: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x423: @ IsAnimationPlaying(Stack[-5])
0x424: Pop(0)
0x425: Pop(0); Push((bool) Stack[-5] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: GOTO 0x448

0x428: PushEmpty(bool)
0x429: Call2 0x469

0x42a: Pop(0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-12] = (bool) 1
0x42d: Return(); Pop(10)

0x42e: PushEmpty(bool, object)
0x42f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x430: Call2 0x719

0x431: Pop(1)
0x432: Pop(1); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-12] = (bool) 0
0x435: Return(); Pop(10)

0x436: @@ GetPFPosition(Stack[-4])
0x437: Pop(0)
0x438: @ GetPFPosition(Stack[-3])
0x439: Pop(0)
0x43a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x43b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x43c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x43d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: PushEmpty(bool, float)
0x440: Stack[-1] = Stack[-13]
0x441: Call2 0x37e

0x442: Pop(2)
0x443: Stack[-12] = (bool) 1
0x444: Return(); Pop(10)

0x445: @ sync()
0x446: Pop(0)
0x447: GOTO 0x423

0x448: PushEmpty()
0x449: Call2 0x4d1

0x44a: Pop(0)
0x44b: Stack[-12] = (bool) 0
0x44c: Return(); Pop(10)

0x44d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x44e: PushEmpty(bool, object)
0x44f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x450: Call2 0x719

0x451: Pop(1)
0x452: Pop(1); Push((bool) Stack[-1] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: Stack[-11] = (bool) 0
0x455: Return(); Pop(10)

0x456: PushEmpty(bool)
0x457: Call2 0x4a6

0x458: Pop(0)
0x459: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x45a: @@ GetPFPosition(Stack[-5])
0x45b: Pop(0)
0x45c: @ GetPFPosition(Stack[-4])
0x45d: Pop(0)
0x45e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x45f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x460: @@ GetAttackDistance(Stack[-1])
0x461: Pop(0)
0x462: Push((int) 50)
0x463: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x464: Pop(0); Push(Stack[-1] * Stack[-1]);
0x465: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x466: Return(); Pop(10)

0x467: Stack[-11] = (bool) 0
0x468: Return(); Pop(10)

0x469: PushEmpty(bool)
0x46a: Stack[-1] = (bool) 0
0x46b: PushEmpty(bool)
0x46c: Call2 0x44d

0x46d: Pop(0)
0x46e: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46f: PushEmpty(bool)
0x470: Call2 0x479

0x471: Pop(0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: Stack[-1] = (bool) 1
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-1] = (bool) 1
0x476: Return(); Pop(0)

0x477: Stack[-1] = (bool) 0
0x478: Return(); Pop(0)

0x479: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x47a: @ GetScene(Stack[-5])
0x47b: Pop(0)
0x47c: Stack[-4] = (bool) 0
0x47d: PushEmpty(cvector, object)
0x47e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47f: Call2 0x687

0x480: Pop(1)
0x481: Pop(1); Push(( -Stack[-1])
0x482: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x483: Pop(1)
0x484: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: GOTO 0x4a3

0x487: @ Face(Stack[-0])
0x488: Pop(0)
0x489: Push("all")
0x48a: Push("bjump")
0x48b: @ PlayAnimation(Stack[-2], Stack[-1])
0x48c: Pop(2)
0x48d: @@ GetPFPosition(Stack[-2])
0x48e: Pop(0)
0x48f: @ GetPFPosition(Stack[-1])
0x490: Pop(0)
0x491: @ WaitForAnimEnd()
0x492: Pop(0)
0x493: PushEmpty()
0x494: Call2 0x4d1

0x495: Pop(0)
0x496: @ StopAsync()
0x497: Pop(0)
0x498: Push(CVector(0.0, 0.0, 0.0))
0x499: @ SetSpeed(Stack[-1])
0x49a: Pop(1)
0x49b: Stack[-4] = (bool) 1
0x49c: PushEmpty(bool)
0x49d: Call2 0x44d

0x49e: Pop(0)
0x49f: Pop(1); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a1: GOTO 0x4a3

0x4a2: GOTO 0x47d

0x4a3: Stack[-11] = Stack[-4]
0x4a4: Return(); Pop(10)

0x4a5: Stack[-5] = 0
0x4a6: PushEmpty(bool, bool)
0x4a7: Push("IsAttacking")
0x4a8: Push((int) 1)
0x4a9: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4aa: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ab: @@ IsAttacking(Stack[-1])
0x4ac: Pop(0)
0x4ad: Stack[-3] = Stack[-1]
0x4ae: Return(); Pop(2)

0x4af: Stack[-3] = (bool) 0
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty(float, int, float, int)
0x4b2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Return(); Pop(4)

0x4b5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b7: Push((int) -1)
0x4b8: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4b9: Push((int) 0)
0x4ba: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Return(); Pop(4)

0x4bd: @ rand(Stack[-2])
0x4be: Pop(0)
0x4bf: PushEmpty(float)
0x4c0: Call2 0x4e3

0x4c1: Pop(0)
0x4c2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c4: @ irand(Stack[-1], Stack[-2])
0x4c5: Pop(0)
0x4c6: Push((int) 1)
0x4c7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4c8: Push("attack")
0x4c9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4ca: @ Speak(Stack[-1])
0x4cb: Pop(1)
0x4cc: PushEmpty(int)
0x4cd: Call2 0x4e1

0x4ce: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4cf: Pop(1)
0x4d0: Return(); Pop(4)

0x4d1: PushEmpty(object)
0x4d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d3: Call2 0x89f

0x4d4: Pop(1)
0x4d5: Return(); Pop(0)

0x4d6: Stack[-1] = (int) 0
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(string)
0x4d9: Stack[-1] = "attack_stay"
0x4da: Call2 0x845

0x4db: Pop(1)
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Return(); Pop(0)

0x4df: Stack[-1] = (bool) 1
0x4e0: Return(); Pop(0)

0x4e1: Stack[-1] = (int) 1
0x4e2: Return(); Pop(0)

0x4e3: Stack[-1] = (float) 0.5
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty(bool, bool, bool, bool)
0x4e6: PushEmpty(object)
0x4e7: Stack[-1] = Stack[-10]
0x4e8: Call2 0x89f

0x4e9: Pop(1)
0x4ea: Push((int) 1)
0x4eb: Push((int) 5)
0x4ec: @ SetTimer(Stack[-2], Stack[-1])
0x4ed: Pop(2)
0x4ee: @ CanSee(Stack[-2], Stack[-9])
0x4ef: Pop(0)
0x4f0: Push(Stack[-2])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-10]
0x4f5: Call2 0x833

0x4f6: Pop(1)
0x4f7: GOTO 0x4f9

0x4f8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4f9: PushEmpty(bool, object)
0x4fa: Stack[-1] = Stack[-11]
0x4fb: Call2 0x696

0x4fc: Pop(1)
0x4fd: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fe: PushEmpty(object)
0x4ff: Call2 0x86e

0x500: Pop(0)
0x501: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x502: Pop(1)
0x503: PushEmpty(bool, object, float, float, bool, bool)
0x504: Stack[-5] = Stack[-15]
0x505: Stack[-4] = Stack[-14]
0x506: Stack[-3] = Stack[-13]
0x507: Stack[-2] = Stack[-12]
0x508: Stack[-1] = Stack[-11]
0x509: Call2 0x54e

0x50a: Stack[-7] = Stack[-6]
0x50b: Pop(6)
0x50c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x50d: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50e: Push("head")
0x50f: @ UnlookAsync(Stack[-1])
0x510: Pop(1)
0x511: Push((int) 1)
0x512: @ KillTimer(Stack[-1])
0x513: Pop(1)
0x514: Stack[-10] = Stack[-1]
0x515: Return(); Pop(4)

0x516: PushEmpty()
0x517: Push((int) 1)
0x518: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51a: PushEmpty(object)
0x51b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Call2 0x89f

0x51d: Pop(1)
0x51e: GOTO 0x523

0x51f: PushEmpty(int)
0x520: Stack[-1] = Stack[-2]
0x521: Call2 0x5b4

0x522: Pop(1)
0x523: Return(); Pop(0)

0x524: Push((int) 1)
0x525: @ KillTimer(Stack[-1])
0x526: Pop(1)
0x527: Push( Stack[2 + Tasks[-1].StackPointer] )
0x528: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x529: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x52a: Push("head")
0x52b: @ UnlookAsync(Stack[-1])
0x52c: Pop(1)
0x52d: PushEmpty()
0x52e: Call2 0x5ca

0x52f: Pop(0)
0x530: Return(); Pop(0)

0x531: PushEmpty()
0x532: PushEmpty(bool)
0x533: Stack[-1] = (bool) 0
0x534: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x535: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x536: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: Stack[-1] = (bool) 1
0x539: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x53b: PushEmpty(object)
0x53c: Stack[-1] = Stack[-2]
0x53d: Call2 0x833

0x53e: Pop(1)
0x53f: Return(); Pop(0)

0x540: PushEmpty()
0x541: PushEmpty(bool)
0x542: Stack[-1] = (bool) 0
0x543: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x544: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x545: Push( Stack[2 + Tasks[-1].StackPointer] )
0x546: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x547: Stack[-1] = (bool) 1
0x548: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x549: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x54a: Push("head")
0x54b: @ UnlookAsync(Stack[-1])
0x54c: Pop(1)
0x54d: Return(); Pop(0)

0x54e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x54f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x550: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x551: Stack[-7] = Stack[-17]
0x552: PushEmpty(bool, object)
0x553: Stack[-1] = Stack[-23]
0x554: Call2 0x5da

0x555: Pop(1)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-22] = (bool) 0
0x559: Return(); Pop(16)

0x55a: @@ GetPosition(Stack[-5])
0x55b: Pop(0)
0x55c: @ GetPosition(Stack[-4])
0x55d: Pop(0)
0x55e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x55f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x560: PushEmpty(bool)
0x561: Stack[-1] = (bool) 0
0x562: Push((int) 0)
0x563: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x565: Pop(0); Push(Stack[-20] * Stack[-20]);
0x566: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: Stack[-1] = (bool) 1
0x569: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56a: @ Stop()
0x56b: Pop(0)
0x56c: Stack[-22] = (bool) 0
0x56d: Return(); Pop(16)

0x56e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x56f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x571: @@ GetPFPosition(Stack[-5])
0x572: Pop(0)
0x573: @ FindPathTo(Stack[-1], Stack[-5])
0x574: Pop(0)
0x575: Pop(0); Push(( Stack[-1] != 0 )
0x576: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x577: Stack[-6] = Stack[-1]
0x578: Stack[-1] = 0
0x579: Pop(0); Push(( Stack[-6] != 0 )
0x57a: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x57b: Push(Stack[-7])
0x57c: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57d: Stack[-7] = (bool) 0
0x57e: @ RotatePath(Stack[-6], Stack[-8])
0x57f: Pop(0)
0x580: Pop(0); Push((bool) Stack[-8] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: GOTO 0x5b2

0x583: Push((int) 0)
0x584: Push((float)0.3)
0x585: @ SetTimer(Stack[-2], Stack[-1])
0x586: Pop(2)
0x587: PushEmpty(string)
0x588: Call2 0x5e1

0x589: Pop(0)
0x58a: PushEmpty(string)
0x58b: Call2 0x5e3

0x58c: Pop(0)
0x58d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x58e: Pop(2)
0x58f: Pop(0); Push((bool) Stack[-8] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x591: Push( Stack[0 + Tasks[-1].StackPointer] )
0x592: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x593: Stack[-6] = 0
0x594: GOTO 0x5b2

0x595: GOTO 0x597

0x596: GOTO 0x5b1

0x597: GOTO 0x599

0x598: Stack[-6] = 0
0x599: GOTO 0x5aa

0x59a: Push((int) 0)
0x59b: @ KillTimer(Stack[-1])
0x59c: Pop(1)
0x59d: Push((float)0.5)
0x59e: @ Sleep(Stack[-1], Stack[-9])
0x59f: Pop(1)
0x5a0: Pop(0); Push((bool) Stack[-8] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-6] = 0
0x5a5: GOTO 0x5b2

0x5a6: Push((int) 0)
0x5a7: Push((float)0.3)
0x5a8: @ SetTimer(Stack[-2], Stack[-1])
0x5a9: Pop(2)
0x5aa: Stack[-1] = 0
0x5ab: GOTO 0x5b0

0x5ac: Push((int) 0)
0x5ad: @ KillTimer(Stack[-1])
0x5ae: Pop(1)
0x5af: GOTO 0x5b2

0x5b0: Stack[-6] = 0
0x5b1: GOTO 0x552

0x5b2: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5b3: Return(); Pop(16)

0x5b4: PushEmpty()
0x5b5: Push((int) 0)
0x5b6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(bool, object)
0x5ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bb: Call2 0x5da

0x5bc: Pop(1)
0x5bd: Pop(1); Push((bool) Stack[-1] == 0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5c0: Push((int) 0)
0x5c1: @ KillTimer(Stack[-1])
0x5c2: Pop(1)
0x5c3: @ Stop()
0x5c4: Pop(0)
0x5c5: Return(); Pop(0)

0x5c6: PushEmpty()
0x5c7: @ RequestClearPath(Stack[-1])
0x5c8: Pop(0)
0x5c9: Return(); Pop(0)

0x5ca: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5cb: Push((int) 0)
0x5cc: @ KillTimer(Stack[-1])
0x5cd: Pop(1)
0x5ce: @ Stop()
0x5cf: Pop(0)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty()
0x5d2: PushEmpty()
0x5d3: Call2 0x524

0x5d4: Pop(0)
0x5d5: PushEmpty(object)
0x5d6: Stack[-1] = Stack[-2]
0x5d7: Call2 0x9fb

0x5d8: Pop(1)
0x5d9: Return(); Pop(0)

0x5da: PushEmpty()
0x5db: PushEmpty(bool, object)
0x5dc: Stack[-1] = Stack[-3]
0x5dd: Call2 0x719

0x5de: Stack[-4] = Stack[-2]
0x5df: Pop(2)
0x5e0: Return(); Pop(0)

0x5e1: Stack[-1] = "walk"
0x5e2: Return(); Pop(0)

0x5e3: Stack[-1] = "run"
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty()
0x5e6: EventDisable(0)
0x5e7: PushEmpty(object)
0x5e8: Stack[-1] = Stack[-2]
0x5e9: Call2 0x5fe

0x5ea: Pop(1)
0x5eb: Push((int) 50)
0x5ec: Push((int) 40)
0x5ed: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: EventEnable(0)
0x5f0: @ Hold()
0x5f1: Pop(0)
0x5f2: GOTO 0x5f0

0x5f3: Return(); Pop(0)

0x5f4: PushEmpty(bool, bool)
0x5f5: @ IsOverrideActive(Stack[-1])
0x5f6: Pop(0)
0x5f7: Pop(0); Push((bool) Stack[-1] == 0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[-4]
0x5fb: Call2 0x97d

0x5fc: Pop(1)
0x5fd: Return(); Pop(2)

0x5fe: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x5ff: Pop(0); Push((bool) Stack[-21] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "fdie"
0x603: Call2 0x659

0x604: Pop(1)
0x605: GOTO 0x658

0x606: @@ GetPosition(Stack[-10])
0x607: Pop(0)
0x608: @ GetPosition(Stack[-9])
0x609: Pop(0)
0x60a: @ GetDirection(Stack[-8])
0x60b: Pop(0)
0x60c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x60d: Push(CvectorIndex(Stack[-7], 0))
0x60e: Push(CvectorIndex(Stack[-9], 0))
0x60f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x610: Push(CvectorIndex(Stack[-8], 2))
0x611: Push(CvectorIndex(Stack[-10], 2))
0x612: Pop(2); Push(Stack[-2] * Stack[-1]);
0x613: Pop(2); Push(Stack[-2] + Stack[-1]);
0x614: Push((int) 0)
0x615: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-6] = "fdie"
0x618: GOTO 0x61a

0x619: Stack[-6] = "bdie"
0x61a: @ RemoveRTEnvelope()
0x61b: Pop(0)
0x61c: @ SetDeathState()
0x61d: Pop(0)
0x61e: @ Stop()
0x61f: Pop(0)
0x620: @ StopAsync()
0x621: Pop(0)
0x622: Stack[-5] = Stack[-21]
0x623: Push("GetScriptProperty")
0x624: Push((int) 2)
0x625: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x626: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x627: Push("Owner")
0x628: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x629: Pop(1)
0x62a: Push(Stack[-4])
0x62b: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62c: Push("Owner")
0x62d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x62e: Pop(1)
0x62f: Pop(0); Push((bool) Stack[-5] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x631: Stack[-5] = Stack[-21]
0x632: Push("@GetEyesHeight")
0x633: Push((int) 1)
0x634: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x635: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x636: @@ GetEyesHeight(Stack[-2])
0x637: Pop(0)
0x638: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x639: Push(CvectorIndex(Stack[-1], 1))
0x63a: Stack[-1] = Stack[-3]
0x63b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x63c: Push("head")
0x63d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x63e: Pop(1)
0x63f: Stack[-3] = (bool) 1
0x640: GOTO 0x642

0x641: Stack[-3] = (bool) 0
0x642: PushEmpty(string)
0x643: Stack[-1] = Stack[-7]
0x644: Call2 0x845

0x645: Pop(1)
0x646: Push("all")
0x647: @ PlayAnimation(Stack[-1], Stack[-7])
0x648: Pop(1)
0x649: @ WaitForAnimEnd()
0x64a: Pop(0)
0x64b: Push(Stack[-3])
0x64c: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64d: @ StopAsync()
0x64e: Pop(0)
0x64f: Push("head")
0x650: @ UnlookAsync(Stack[-1])
0x651: Pop(1)
0x652: Push("all")
0x653: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x654: Pop(1)
0x655: @ RemoveEnvelope()
0x656: Pop(0)
0x657: Stack[-5] = 0
0x658: Return(); Pop(20)

0x659: PushEmpty()
0x65a: @ RemoveRTEnvelope()
0x65b: Pop(0)
0x65c: @ SetDeathState()
0x65d: Pop(0)
0x65e: @ Stop()
0x65f: Pop(0)
0x660: @ StopAsync()
0x661: Pop(0)
0x662: @ StopSecondaryAnimation()
0x663: Pop(0)
0x664: PushEmpty(string)
0x665: Stack[-1] = Stack[-2]
0x666: Call2 0x845

0x667: Pop(1)
0x668: Push("all")
0x669: @ PlayAnimation(Stack[-1], Stack[-2])
0x66a: Pop(1)
0x66b: @ WaitForAnimEnd()
0x66c: Pop(0)
0x66d: Push("all")
0x66e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x66f: Pop(1)
0x670: @ RemoveEnvelope()
0x671: Pop(0)
0x672: Return(); Pop(0)

0x673: PushEmpty()
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: Return(); Pop(0)

0x677: PushEmpty()
0x678: Return(); Pop(0)

0x679: PushEmpty()
0x67a: Push((int) 2)
0x67b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67d: Stack[-2] = "fire"
0x67e: Return(); Pop(0)

0x67f: GOTO 0x685

0x680: Push((int) 1)
0x681: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x683: Stack[-2] = "bullet"
0x684: Return(); Pop(0)

0x685: Stack[-2] = "phys"
0x686: Return(); Pop(0)

0x687: PushEmpty(cvector, cvector, cvector, cvector)
0x688: @ GetPosition(Stack[-2])
0x689: Pop(0)
0x68a: @@ GetPosition(Stack[-1])
0x68b: Pop(0)
0x68c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x68d: Return(); Pop(4)

0x68e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x68f: @ GetPosition(Stack[-3])
0x690: Pop(0)
0x691: @@ GetPosition(Stack[-2])
0x692: Pop(0)
0x693: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x694: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x695: Return(); Pop(6)

0x696: PushEmpty(bool, bool)
0x697: @ IsPlayerActor(Stack[-3], Stack[-1])
0x698: Pop(0)
0x699: Stack[-4] = Stack[-1]
0x69a: Return(); Pop(2)

0x69b: PushEmpty(bool, bool)
0x69c: Push("HasProperty")
0x69d: Push((int) 2)
0x69e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x69f: Pop(1); Push((bool) Stack[-1] == 0)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-5] = (bool) 0
0x6a2: Return(); Pop(2)

0x6a3: @@ HasProperty(Stack[-3], Stack[-1])
0x6a4: Pop(0)
0x6a5: Stack[-5] = Stack[-1]
0x6a6: Return(); Pop(2)

0x6a7: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6a8: PushEmpty(bool, object, string)
0x6a9: Stack[-2] = Stack[-18]
0x6aa: Stack[-1] = "health"
0x6ab: Call2 0x69b

0x6ac: Pop(2)
0x6ad: Pop(1); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-16] = (float) 0.0
0x6b0: Return(); Pop(12)

0x6b1: PushEmpty(bool, object, string)
0x6b2: Stack[-2] = Stack[-18]
0x6b3: Stack[-1] = "armor"
0x6b4: Call2 0x69b

0x6b5: Pop(2)
0x6b6: Pop(1); Push((bool) Stack[-1] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-6] = (int) 0
0x6b9: GOTO 0x6bd

0x6ba: Push("armor")
0x6bb: @@ GetProperty(Stack[-1], Stack[-7])
0x6bc: Pop(1)
0x6bd: Push("armor_")
0x6be: PushEmpty(string, int)
0x6bf: Stack[-1] = Stack[-16]
0x6c0: Call2 0x679

0x6c1: Pop(1)
0x6c2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6c3: PushEmpty(bool, object, string)
0x6c4: Stack[-2] = Stack[-18]
0x6c5: Stack[-1] = Stack[-8]
0x6c6: Call2 0x69b

0x6c7: Pop(2)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6ca: Stack[-4] = (int) 0
0x6cb: GOTO 0x6ce

0x6cc: @@ GetProperty(Stack[-5], Stack[-4])
0x6cd: Pop(0)
0x6ce: PushEmpty(float, float, float)
0x6cf: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6d0: Push((float)100.0)
0x6d1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6d2: Stack[-1] = (int) 1
0x6d3: Call2 0x87e

0x6d4: Stack[-6] = Stack[-3]
0x6d5: Pop(3)
0x6d6: Push("health")
0x6d7: @@ GetProperty(Stack[-1], Stack[-3])
0x6d8: Pop(1)
0x6d9: Push((int) 1)
0x6da: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6db: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6dc: Push("health")
0x6dd: PushEmpty(float, float, float, float)
0x6de: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6df: Stack[-2] = (int) 0
0x6e0: Stack[-1] = (int) 1
0x6e1: Call2 0x885

0x6e2: Pop(3)
0x6e3: @@ SetProperty(Stack[-2], Stack[-1])
0x6e4: Pop(2)
0x6e5: PushEmpty(bool, object)
0x6e6: Stack[-1] = Stack[-17]
0x6e7: Call2 0x696

0x6e8: Pop(1)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ea: PushEmpty(float)
0x6eb: Stack[-1] = -Stack[-2]; Pop(0);
0x6ec: Call2 0x890

0x6ed: Pop(1)
0x6ee: Stack[-16] = Stack[-1]
0x6ef: Return(); Pop(12)

0x6f0: PushEmpty(bool, bool)
0x6f1: @@ IsDead(Stack[-1])
0x6f2: Pop(0)
0x6f3: Stack[-4] = Stack[-1]
0x6f4: Return(); Pop(2)

0x6f5: PushEmpty(object, object, object, object)
0x6f6: Pop(0); Push((bool) Stack[-5] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-6] = (bool) 0
0x6f9: Return(); Pop(4)

0x6fa: PushEmpty(bool)
0x6fb: Stack[-1] = (bool) 0
0x6fc: Push("IsDead")
0x6fd: Push((int) 1)
0x6fe: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6ff: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x700: PushEmpty(bool, object)
0x701: Stack[-1] = Stack[-8]
0x702: Call2 0x6f0

0x703: Pop(1)
0x704: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x705: Stack[-1] = (bool) 1
0x706: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x707: Stack[-6] = (bool) 0
0x708: Return(); Pop(4)

0x709: @ GetScene(Stack[-2])
0x70a: Pop(0)
0x70b: Pop(0); Push((bool) Stack[-2] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-6] = (bool) 0
0x70e: Return(); Pop(4)

0x70f: @@ GetScene(Stack[-1])
0x710: Pop(0)
0x711: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x713: Stack[-6] = (bool) 0
0x714: Return(); Pop(4)

0x715: Stack[-6] = (bool) 1
0x716: Return(); Pop(4)

0x717: Stack[-1] = 0
0x718: Stack[-2] = 0
0x719: PushEmpty(int, int)
0x71a: PushEmpty(bool, object)
0x71b: Stack[-1] = Stack[-5]
0x71c: Call2 0x6f5

0x71d: Pop(1)
0x71e: Pop(1); Push((bool) Stack[-1] == 0)
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-4] = (bool) 0
0x721: Return(); Pop(2)

0x722: PushEmpty(bool, object, string)
0x723: Stack[-2] = Stack[-6]
0x724: Stack[-1] = "noaccess"
0x725: Call2 0x69b

0x726: Pop(2)
0x727: Pop(1); Push((bool) Stack[-1] == 0)
0x728: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x729: Stack[-4] = (bool) 1
0x72a: Return(); Pop(2)

0x72b: Push("noaccess")
0x72c: @@ GetProperty(Stack[-1], Stack[-2])
0x72d: Pop(1)
0x72e: Push((int) 0)
0x72f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x730: Return(); Pop(2)

0x731: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x732: Pop(0); Push((bool) Stack[-15] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x734: Return(); Pop(14)

0x735: @ IsDead(Stack[-7])
0x736: Pop(0)
0x737: Push(Stack[-7])
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: Return(); Pop(14)

0x73a: @ GetSecondaryAnimationType(Stack[-6])
0x73b: Pop(0)
0x73c: Push((int) 0)
0x73d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73f: Return(); Pop(14)

0x740: @@ GetPosition(Stack[-5])
0x741: Pop(0)
0x742: @ GetPosition(Stack[-4])
0x743: Pop(0)
0x744: @ GetDirection(Stack[-3])
0x745: Pop(0)
0x746: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x747: Push(CvectorIndex(Stack[-2], 0))
0x748: Push(CvectorIndex(Stack[-4], 0))
0x749: Pop(2); Push(Stack[-2] * Stack[-1]);
0x74a: Push(CvectorIndex(Stack[-3], 2))
0x74b: Push(CvectorIndex(Stack[-5], 2))
0x74c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x74d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x74e: Push((int) 0)
0x74f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x751: Stack[-1] = "fhit"
0x752: GOTO 0x754

0x753: Stack[-1] = "bhit"
0x754: Push("hit_react")
0x755: Push("1")
0x756: Pop(1); Push(Stack[-3] + Stack[-1]);
0x757: Push("2")
0x758: Pop(1); Push(Stack[-4] + Stack[-1]);
0x759: Push((int) -10)
0x75a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(4)
0x75c: Return(); Pop(14)

0x75d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x75e: PushEmpty(bool)
0x75f: Stack[-1] = (bool) 0
0x760: PushEmpty(bool)
0x761: Stack[-1] = (bool) 0
0x762: Push(Stack[-23])
0x763: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x764: Push((int) 4)
0x765: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x767: Stack[-1] = (bool) 1
0x768: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x769: Push((int) 5)
0x76a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: Stack[-1] = (bool) 1
0x76d: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x76e: PushEmpty(cvector, cvector)
0x76f: PushEmpty(cvector, object)
0x770: Stack[-1] = Stack[-25]
0x771: Call2 0x687

0x772: Stack[-3] = Stack[-2]
0x773: Pop(2)
0x774: Call2 0x874

0x775: Stack[-11] = Stack[-2]
0x776: Pop(2)
0x777: @ CreateVectorVector(Stack[-8])
0x778: Pop(0)
0x779: Stack[-7] = (int) 1
0x77a: Push("hit")
0x77b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x77c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x77d: Pop(1)
0x77e: Pop(0); Push((bool) Stack[-6] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: GOTO 0x78a

0x781: Pop(0); Push(Stack[-4] | Stack[-9]);
0x782: Push((float)0.70711)
0x783: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x785: @@ add(Stack[-5])
0x786: Pop(0)
0x787: Push((int) 1)
0x788: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x789: GOTO 0x77a

0x78a: @@ size(Stack[-3])
0x78b: Pop(0)
0x78c: Push(Stack[-3])
0x78d: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x78e: @ irand(Stack[-2], Stack[-3])
0x78f: Pop(0)
0x790: @@ get(Stack[-1], Stack[-2])
0x791: Pop(0)
0x792: PushEmpty(object, int, float, cvector, cvector)
0x793: Stack[-5] = Stack[-26]
0x794: Stack[-4] = Stack[-25]
0x795: Stack[-3] = Stack[-24]
0x796: Stack[-2] = Stack[-6]
0x797: Stack[-1] = -Stack[-14]; Pop(0);
0x798: Call2 0x7a1

0x799: Pop(5)
0x79a: Return(); Pop(18)

0x79b: Stack[-8] = 0
0x79c: PushEmpty(object)
0x79d: Stack[-1] = Stack[-22]
0x79e: Call2 0x731

0x79f: Pop(1)
0x7a0: Return(); Pop(18)

0x7a1: PushEmpty(object, object, object, object)
0x7a2: @ GetScene(Stack[-2])
0x7a3: Pop(0)
0x7a4: Push("scripted")
0x7a5: Push("blood_dir.xml")
0x7a6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7a7: Pop(2)
0x7a8: PushEmpty(object)
0x7a9: Stack[-1] = Stack[-10]
0x7aa: Call2 0x731

0x7ab: Pop(1)
0x7ac: Return(); Pop(4)

0x7ad: Stack[-1] = 0
0x7ae: Stack[-2] = 0
0x7af: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7b0: @@ GetPosition(Stack[-3])
0x7b1: Pop(0)
0x7b2: @ GetPosition(Stack[-2])
0x7b3: Pop(0)
0x7b4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7b5: Push(CvectorIndex(Stack[-1], 0))
0x7b6: Push(CvectorIndex(Stack[-2], 2))
0x7b7: @ RotateAsync(Stack[-2], Stack[-1])
0x7b8: Pop(2)
0x7b9: Return(); Pop(6)

0x7ba: PushEmpty(bool, bool)
0x7bb: @ IsLoaded(Stack[-1])
0x7bc: Pop(0)
0x7bd: Stack[-3] = Stack[-1]
0x7be: Return(); Pop(2)

0x7bf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7c0: @@ GetPosition(Stack[-8])
0x7c1: Pop(0)
0x7c2: @@ GetEyesHeight(Stack[-9])
0x7c3: Pop(0)
0x7c4: Push(CvectorIndex(Stack[-8], 1))
0x7c5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7c6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7c7: @ GetPosition(Stack[-7])
0x7c8: Pop(0)
0x7c9: @ GetEyesHeight(Stack[-9])
0x7ca: Pop(0)
0x7cb: Push(CvectorIndex(Stack[-7], 1))
0x7cc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7cd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7ce: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7cf: Push(CvectorIndex(Stack[-6], 1))
0x7d0: Stack[-1] = (int) 0
0x7d1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7d2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7d3: Pop(1); Push(Sqrt(Stack[-1]))
0x7d4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7d5: Stack[-5] = -Stack[-6]; Pop(0);
0x7d6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7d7: PushEmpty(cvector, cvector)
0x7d8: Push(CVector(0.0, 1.0, 0.0))
0x7d9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7da: Call2 0x874

0x7db: Pop(1)
0x7dc: Push((int) 25)
0x7dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7df: Push(CVector(0.0, 10.0, 0.0))
0x7e0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7e1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7e2: @ IsOverrideActive(Stack[-2])
0x7e3: Pop(0)
0x7e4: Push(Stack[-2])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e6: Stack[-21] = (bool) 0
0x7e7: Return(); Pop(18)

0x7e8: @ StopWorld()
0x7e9: Pop(0)
0x7ea: @ CameraTransit(Stack[-3], Stack[-5])
0x7eb: Pop(0)
0x7ec: Push(CvectorIndex(Stack[-4], 0))
0x7ed: Push(CvectorIndex(Stack[-5], 2))
0x7ee: @ Rotate(Stack[-2], Stack[-1])
0x7ef: Pop(2)
0x7f0: PushEmpty(bool)
0x7f1: Call2 0x9bb

0x7f2: Pop(0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f4: GOTO 0x7fd

0x7f5: Push("head")
0x7f6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7f7: Pop(1)
0x7f8: Push(Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fa: Push("head")
0x7fb: @ LookAsyncCamera(Stack[-1])
0x7fc: Pop(1)
0x7fd: @ CameraWaitForPlayFinish()
0x7fe: Pop(0)
0x7ff: @ ResumeWorld()
0x800: Pop(0)
0x801: Stack[-21] = (bool) 1
0x802: Return(); Pop(18)

0x803: PushEmpty(bool, bool)
0x804: @ CameraSwitchToNormal()
0x805: Pop(0)
0x806: PushEmpty(bool)
0x807: Call2 0x9bb

0x808: Pop(0)
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: GOTO 0x813

0x80b: Push("head")
0x80c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x80d: Pop(1)
0x80e: Push(Stack[-1])
0x80f: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x810: Push("head")
0x811: @ UnlookAsync(Stack[-1])
0x812: Pop(1)
0x813: Return(); Pop(2)

0x814: PushEmpty(bool, float, float, bool, float, float)
0x815: @ lshHasAnimation(Stack[-3], Stack[-7])
0x816: Pop(0)
0x817: Push(Stack[-3])
0x818: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x819: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x81a: Pop(0)
0x81b: Push((bool) 0)
0x81c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x81d: Pop(1)
0x81e: GOTO 0x823

0x81f: Push("Can't find lsh animation : ")
0x820: Pop(1); Push(Stack[-1] + Stack[-8]);
0x821: @ Trace(Stack[-1])
0x822: Pop(1)
0x823: Return(); Pop(6)

0x824: PushEmpty(bool, float, float, bool, float, float)
0x825: @ lshHasAnimation(Stack[-3], Stack[-8])
0x826: Pop(0)
0x827: Push(Stack[-3])
0x828: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x829: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x82a: Pop(0)
0x82b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x82c: Pop(0)
0x82d: GOTO 0x832

0x82e: Push("Can't find lsh animation : ")
0x82f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x830: @ Trace(Stack[-1])
0x831: Pop(1)
0x832: Return(); Pop(6)

0x833: PushEmpty(float, cvector, float, cvector)
0x834: @@ GetEyesHeight(Stack[-2])
0x835: Pop(0)
0x836: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x837: Push(CvectorIndex(Stack[-1], 1))
0x838: Stack[-1] = Stack[-3]
0x839: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x83a: Push("head")
0x83b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x83c: Pop(1)
0x83d: Return(); Pop(4)

0x83e: PushEmpty(bool)
0x83f: Call2 0x9bb

0x840: Pop(0)
0x841: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x842: @ lshStopSpeech()
0x843: Pop(0)
0x844: Return(); Pop(0)

0x845: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x846: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x847: Pop(0)
0x848: Pop(0); Push((bool) Stack[-8] == 0)
0x849: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x84a: Stack[-7] = (int) 0
0x84b: Push((int) 1)
0x84c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x84d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x84e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x84f: Pop(1)
0x850: Pop(0); Push((bool) Stack[-6] == 0)
0x851: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x852: GOTO 0x856

0x853: Push((int) 1)
0x854: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x855: GOTO 0x84b

0x856: Pop(0); Push((bool) Stack[-7] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x858: Return(); Pop(16)

0x859: @ irand(Stack[-5], Stack[-7])
0x85a: Pop(0)
0x85b: Push((int) 1)
0x85c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x85d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x85e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x85f: Pop(0)
0x860: Push(Stack[-4])
0x861: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x862: @ GetEyesHeight(Stack[-3])
0x863: Pop(0)
0x864: @ GetDirection(Stack[-2])
0x865: Pop(0)
0x866: Push((int) 50)
0x867: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x868: Push(CvectorIndex(Stack[-1], 1))
0x869: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x86a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x86b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x86c: Pop(0)
0x86d: Return(); Pop(16)

0x86e: PushEmpty(object, object)
0x86f: @ self(Stack[-1])
0x870: Pop(0)
0x871: Stack[-3] = Stack[-1]
0x872: Return(); Pop(2)

0x873: Stack[-1] = 0
0x874: PushEmpty(float, float)
0x875: Pop(0); Push(Stack[-3] | Stack[-3]);
0x876: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x877: Push((float)0.0)
0x878: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x87b: Return(); Pop(2)

0x87c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x87d: Return(); Pop(2)

0x87e: PushEmpty()
0x87f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-3] = Stack[-2]
0x882: GOTO 0x884

0x883: Stack[-3] = Stack[-1]
0x884: Return(); Pop(0)

0x885: PushEmpty()
0x886: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x887: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x888: Stack[-4] = Stack[-2]
0x889: Return(); Pop(0)

0x88a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x88b: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88c: Stack[-4] = Stack[-1]
0x88d: Return(); Pop(0)

0x88e: Stack[-4] = Stack[-3]
0x88f: Return(); Pop(0)

0x890: PushEmpty(object, object)
0x891: @ CreateFloatVector(Stack[-1])
0x892: Pop(0)
0x893: @@ add(Stack[-3])
0x894: Pop(0)
0x895: Push((int) 15)
0x896: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x897: Pop(1)
0x898: Return(); Pop(2)

0x899: Stack[-1] = 0
0x89a: PushEmpty(float, float)
0x89b: @ GetGameTime(Stack[-1])
0x89c: Pop(0)
0x89d: Stack[-3] = Stack[-1]
0x89e: Return(); Pop(2)

0x89f: PushEmpty(bool, bool)
0x8a0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8a1: Pop(0)
0x8a2: Push(Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a4: Push("attack")
0x8a5: @ PlayGlobalMusic(Stack[-1])
0x8a6: Pop(1)
0x8a7: Return(); Pop(2)

0x8a8: PushEmpty(object, object)
0x8a9: @ GetScene(Stack[-1])
0x8aa: Pop(0)
0x8ab: Push("battle")
0x8ac: PushEmpty(object)
0x8ad: Call2 0x86e

0x8ae: Pop(0)
0x8af: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x8b0: Pop(2)
0x8b1: Return(); Pop(2)

0x8b2: Stack[-1] = 0
0x8b3: PushEmpty(string, string)
0x8b4: Stack[-1] = "idle"
0x8b5: Push(Stack[-3])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8b8: Stack[-4] = Stack[-1]
0x8b9: Return(); Pop(2)

0x8ba: PushEmpty(int, bool, int, bool)
0x8bb: Stack[-2] = (int) 0
0x8bc: Push("all")
0x8bd: PushEmpty(string, int)
0x8be: Stack[-1] = Stack[-5]
0x8bf: Call2 0x8b3

0x8c0: Pop(1)
0x8c1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(2)
0x8c3: Pop(0); Push((bool) Stack[-1] == 0)
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: GOTO 0x8c9

0x8c6: Push((int) 1)
0x8c7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8c8: GOTO 0x8bc

0x8c9: Stack[-5] = Stack[-2]
0x8ca: Return(); Pop(4)

0x8cb: PushEmpty(object, object)
0x8cc: PushEmpty(object)
0x8cd: Call2 0x934

0x8ce: Stack[-2] = Stack[-1]
0x8cf: Pop(1)
0x8d0: Push("b1q05PatrolGroup")
0x8d1: Push("pt_b1q05_patrol1")
0x8d2: Push((int) 0)
0x8d3: Push((int) 530956)
0x8d4: PushEmpty(float)
0x8d5: Call2 0x89a

0x8d6: Pop(0)
0x8d7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(5)
0x8d9: PushEmpty()
0x8da: Call2 0x8f1

0x8db: Pop(0)
0x8dc: PushEmpty()
0x8dd: Call2 0x8fe

0x8de: Pop(0)
0x8df: Return(); Pop(2)

0x8e0: Stack[-1] = 0
0x8e1: PushEmpty()
0x8e2: PushEmpty(object, string, float)
0x8e3: PushEmpty(object)
0x8e4: Call2 0x934

0x8e5: Stack[-4] = Stack[-1]
0x8e6: Pop(1)
0x8e7: Stack[-2] = "pt_b1q05_patrol1"
0x8e8: Stack[-1] = (int) 2
0x8e9: Call2 0x945

0x8ea: Pop(3)
0x8eb: PushEmpty(object)
0x8ec: Call2 0x934

0x8ed: Pop(0)
0x8ee: @@ ShowMap(Stack[-1])
0x8ef: Pop(1)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty(object, object)
0x8f2: Push((int) 582)
0x8f3: Push((int) 2)
0x8f4: Push((int) 530951)
0x8f5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: PushEmpty(bool, object, int)
0x8f8: Stack[-2] = Stack[-4]
0x8f9: Stack[-1] = (int) -1
0x8fa: Call2 0x918

0x8fb: Pop(3)
0x8fc: Return(); Pop(2)

0x8fd: Stack[-1] = 0
0x8fe: PushEmpty(object, object)
0x8ff: Push((int) 583)
0x900: Push((int) 2)
0x901: Push((int) 530952)
0x902: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x903: Pop(3)
0x904: PushEmpty(bool, object, int)
0x905: Stack[-2] = Stack[-4]
0x906: Stack[-1] = (int) 582
0x907: Call2 0x918

0x908: Pop(3)
0x909: Return(); Pop(2)

0x90a: Stack[-1] = 0
0x90b: PushEmpty(object, object)
0x90c: @ GetDiaryRoot(Stack[-1])
0x90d: Pop(0)
0x90e: Pop(0); Push((bool) Stack[-1] == 0)
0x90f: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x910: Push("Can't retrieve diary root")
0x911: @ Trace(Stack[-1])
0x912: Pop(1)
0x913: Stack[-3] = (bool) 0
0x914: Return(); Pop(2)

0x915: Stack[-3] = Stack[-1]
0x916: Return(); Pop(2)

0x917: Stack[-1] = 0
0x918: PushEmpty(object, object, int, object, object, int)
0x919: PushEmpty(object)
0x91a: Call2 0x90b

0x91b: Stack[-4] = Stack[-1]
0x91c: Pop(1)
0x91d: @@ Find(Stack[-7], Stack[-2])
0x91e: Pop(0)
0x91f: Pop(0); Push((bool) Stack[-2] == 0)
0x920: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x921: Push("Can't find diary parent with id: ")
0x922: Pop(1); Push(Stack[-1] + Stack[-8]);
0x923: @ Trace(Stack[-1])
0x924: Pop(1)
0x925: Stack[-9] = (bool) 0
0x926: Return(); Pop(6)

0x927: @@ AddChild(Stack[-8])
0x928: Pop(0)
0x929: Push((int) 7)
0x92a: @ SendWorldWndMessage(Stack[-1])
0x92b: Pop(1)
0x92c: @@ GetCategory(Stack[-1])
0x92d: Pop(0)
0x92e: @ SetDiarySection(Stack[-1])
0x92f: Pop(0)
0x930: Stack[-9] = (bool) 0
0x931: Return(); Pop(6)

0x932: Stack[-2] = 0
0x933: Stack[-3] = 0
0x934: PushEmpty(object, object, object, object)
0x935: @ GetMainOutdoorScene(Stack[-2])
0x936: Pop(0)
0x937: Pop(0); Push((bool) Stack[-2] == 0)
0x938: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x939: Push("Can't find main outdoor scene")
0x93a: @ Trace(Stack[-1])
0x93b: Pop(1)
0x93c: Stack[-1] = 0
0x93d: Stack[-5] = Stack[-1]
0x93e: Return(); Pop(4)

0x93f: @@ GetMap(Stack[-1])
0x940: Pop(0)
0x941: Stack[-5] = Stack[-1]
0x942: Return(); Pop(4)

0x943: Stack[-1] = 0
0x944: Stack[-2] = 0
0x945: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x946: @ GetMainOutdoorScene(Stack[-2])
0x947: Pop(0)
0x948: Pop(0); Push((bool) Stack[-2] == 0)
0x949: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94a: Push("Can't find main outdoor scene")
0x94b: @ Trace(Stack[-1])
0x94c: Pop(1)
0x94d: Return(); Pop(8)

0x94e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x94f: Pop(0)
0x950: Pop(0); Push((bool) Stack[-1] == 0)
0x951: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x952: Push("Warning: outdoor scene locator ")
0x953: Pop(1); Push(Stack[-1] + Stack[-11]);
0x954: Push(" doesnt exist")
0x955: Pop(2); Push(Stack[-2] + Stack[-1]);
0x956: @ Trace(Stack[-1])
0x957: Pop(1)
0x958: @@ GetMap(Stack[-11])
0x959: Pop(0)
0x95a: Pop(0); Push((bool) Stack[-11] == 0)
0x95b: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95c: Push("Can't find map")
0x95d: @ Trace(Stack[-1])
0x95e: Pop(1)
0x95f: Return(); Pop(8)

0x960: Push(CvectorIndex(Stack[-4], 0))
0x961: Push(CvectorIndex(Stack[-5], 2))
0x962: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x963: Pop(2)
0x964: Return(); Pop(8)

0x965: Stack[-2] = 0
0x966: PushEmpty(int, int)
0x967: Push("branch")
0x968: @ GetVariable(Stack[-1], Stack[-2])
0x969: Pop(1)
0x96a: Push((int) 0)
0x96b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96c: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96d: Stack[-3] = (int) 1
0x96e: Return(); Pop(2)

0x96f: GOTO 0x975

0x970: Push((int) 1)
0x971: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x973: Stack[-3] = (int) 2
0x974: Return(); Pop(2)

0x975: Stack[-3] = (int) 3
0x976: Return(); Pop(2)

0x977: PushEmpty(int, int)
0x978: Push("branch")
0x979: @ GetVariable(Stack[-1], Stack[-2])
0x97a: Pop(1)
0x97b: Stack[-3] = Stack[-1]
0x97c: Return(); Pop(2)

0x97d: PushEmpty()
0x97e: PushEmpty(int)
0x97f: Call2 0x977

0x980: Pop(0)
0x981: Push((int) 1)
0x982: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x983: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x984: @ WorkWithCorpse(Stack[-1])
0x985: Pop(0)
0x986: GOTO 0x989

0x987: @ Barter(Stack[-1])
0x988: Pop(0)
0x989: Return(); Pop(0)

0x98a: PushEmpty(object, int, bool, object, int, bool)
0x98b: @ CreateInvItem(Stack[-3])
0x98c: Pop(0)
0x98d: @@ SetItemName(Stack[-7])
0x98e: Pop(0)
0x98f: Push("Organ")
0x990: Push((int) 1)
0x991: @@ SetProperty(Stack[-2], Stack[-1])
0x992: Pop(2)
0x993: @@ GetItemID(Stack[-2])
0x994: Pop(0)
0x995: Push((int) 0)
0x996: Push((int) 1)
0x997: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x998: Pop(2)
0x999: Return(); Pop(6)

0x99a: Stack[-3] = 0
0x99b: PushEmpty(int)
0x99c: Call2 0x977

0x99d: Pop(0)
0x99e: Push((int) 1)
0x99f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a1: Return(); Pop(0)

0x9a2: PushEmpty(string)
0x9a3: Stack[-1] = "liver"
0x9a4: Call2 0x98a

0x9a5: Pop(1)
0x9a6: PushEmpty(string)
0x9a7: Stack[-1] = "kidney"
0x9a8: Call2 0x98a

0x9a9: Pop(1)
0x9aa: PushEmpty(string)
0x9ab: Stack[-1] = "heart"
0x9ac: Call2 0x98a

0x9ad: Pop(1)
0x9ae: PushEmpty(string)
0x9af: Stack[-1] = "blood"
0x9b0: Call2 0x98a

0x9b1: Pop(1)
0x9b2: Return(); Pop(0)

0x9b3: Stack[-1] = (int) 515572
0x9b4: Return(); Pop(0)

0x9b5: Stack[-1] = (int) 504031
0x9b6: Return(); Pop(0)

0x9b7: Stack[-1] = "ui/NPC_Citizen2.png"
0x9b8: Return(); Pop(0)

0x9b9: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x9ba: Return(); Pop(0)

0x9bb: Stack[-1] = (bool) 0
0x9bc: Return(); Pop(0)

0x9bd: PushEmpty(int, int)
0x9be: Push("b1q05ToAttack")
0x9bf: @ GetVariable(Stack[-1], Stack[-2])
0x9c0: Pop(1)
0x9c1: Push((int) 0)
0x9c2: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x9c3: Return(); Pop(2)

0x9c4: Push("b1q05ToAttack")
0x9c5: Push((int) 1)
0x9c6: @ SetVariable(Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: Return(); Pop(0)

0x9c9: PushEmpty(object, object)
0x9ca: @ GetScene(Stack[-1])
0x9cb: Pop(0)
0x9cc: PushEmpty(object)
0x9cd: Call2 0x86e

0x9ce: Pop(0)
0x9cf: @@ RemoveStationaryActor(Stack[-1])
0x9d0: Pop(1)
0x9d1: PushEmpty()
0x9d2: Call2 0x99b

0x9d3: Pop(0)
0x9d4: PushEmpty(object)
0x9d5: Stack[-1] = Stack[-4]
0x9d6: Push(-1, 0); TaskCall(5)
0x9d7: Call2 0x5e5

0x9d8: Pop(-1, 0); TaskReturn
0x9d9: Pop(1)
0x9da: Return(); Pop(2)

0x9db: Stack[-1] = 0
0x9dc: PushEmpty()
0x9dd: PushEmpty(object, int, float)
0x9de: Stack[-3] = Stack[-7]
0x9df: Stack[-2] = Stack[-6]
0x9e0: Stack[-1] = Stack[-5]
0x9e1: Call2 0x75d

0x9e2: Pop(3)
0x9e3: Return(); Pop(0)

0x9e4: PushEmpty()
0x9e5: PushEmpty(object, int, float, cvector, cvector)
0x9e6: Stack[-5] = Stack[-11]
0x9e7: Stack[-4] = Stack[-10]
0x9e8: Stack[-3] = Stack[-9]
0x9e9: Stack[-2] = Stack[-7]
0x9ea: Stack[-1] = Stack[-6]
0x9eb: Call2 0x7a1

0x9ec: Pop(5)
0x9ed: Return(); Pop(0)

0x9ee: PushEmpty(float, float)
0x9ef: Push("health")
0x9f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x9f2: Push("health")
0x9f3: @ GetProperty(Stack[-1], Stack[-2])
0x9f4: Pop(1)
0x9f5: Push((int) 0)
0x9f6: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x9f8: @ SignalDeath(Stack[-4])
0x9f9: Pop(0)
0x9fa: Return(); Pop(2)

0x9fb: PushEmpty()
0x9fc: PushEmpty(object)
0x9fd: Stack[-1] = Stack[-2]
0x9fe: Call2 0x9c9

0x9ff: Pop(1)
0xa00: Return(); Pop(0)

