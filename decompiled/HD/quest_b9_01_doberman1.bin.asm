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
	quest_b9_01
	doberman_dead
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
	GetProperty
	SetProperty
	health
	armor
	armor_
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
	reputation
	battle
	rifle_ammo
	RemoveItemByType
	oob9Doberman1
	oob9Doberman2
	b9q01DankoFree
	danko_free
	playsound
	giveitem
	b9q01
	b1q03_retreat
	b1q03_dead
	GetItemCountOfType
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x6e9
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd8 Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x566 Vars = (int)
		EVENT_1 Op = 0x581 Vars = (object)
		EVENT_2 Op = 0x590 Vars = (object)
		EVENT_10 Op = 0x616 Vars = (object)
		EVENT_41 Op = 0x621 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x654 Vars = (object)
		EVENT_6 Op = 0x65e Vars = ()
		EVENT_22 Op = 0x6db Vars = (object, int, float, float)
		EVENT_16 Op = 0x6dd Vars = (object, string)
		EVENT_41 Op = 0x6df Vars = (object)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x6ed Vars = (object)
		EVENT_17 Op = 0x6f9 Vars = (object)
		EVENT_26 Op = 0x704 Vars = (string)

Events:
EVENT_22 Op = 0xaa6 Vars = (object, int, float, float)
EVENT_43 Op = 0xaae Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xab8 Vars = (object, string)
EVENT_41 Op = 0xac5 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x85d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xacd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xacb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xacf

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xad1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa59

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
0x41: Call2 0x8a2

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0xc2

0x53: Pop(1)
0x54: Push((int) 521564)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x9d4

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x9be

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 521565)
0x68: Push((int) 22727)
0x69: Push((int) 22726)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: PushEmpty(bool)
0x6d: Stack[-1] = (bool) 0
0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 0
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x9be

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x9ca

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x9e0

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x9d4

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0xa03

0x92: Pop(1)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: Push((int) 521573)
0x98: Push((int) 23390)
0x99: Push((int) 22734)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: Push((int) 521572)
0x9d: Push((int) -1)
0x9e: Push((int) 22733)
0x9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0: Pop(3)
0xa1: GOTO 0xa4

0xa2: Return(); Pop(0)

0xa3: GOTO 0x4e

0xa4: PushEmpty(bool)
0xa5: Call2 0xad3

0xa6: Pop(0)
0xa7: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa8: @ lshWaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: PushEmpty(string)
0xae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaf: Call2 0x8b4

0xb0: Pop(1)
0xb1: GOTO 0xa8

0xb2: GOTO 0xc1

0xb3: Push("all")
0xb4: Push("idle")
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: @ WaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: Push("all")
0xbd: Push("idle")
0xbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: GOTO 0xb7

0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: PushEmpty(bool)
0xc4: Call2 0xad3

0xc5: Pop(0)
0xc6: Pop(1); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Return(); Pop(0)

0xcc: PushEmpty(string, bool)
0xcd: Stack[-2] = Stack[-3]
0xce: Push("")
0xcf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd1: Stack[-1] = (bool) 0
0xd2: GOTO 0xd4

0xd3: Stack[-1] = (bool) 1
0xd4: Call2 0x8c4

0xd5: Pop(2)
0xd6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd7: Return(); Pop(0)

0xd8: PushEmpty()
0xd9: Push((int) 1)
0xda: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0xdb: PushEmpty()
0xdc: Call2 0x8de

0xdd: Pop(0)
0xde: Push((int) 22726)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x999

0xe5: Pop(2)
0xe6: Push((int) 23389)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x9a5

0xed: Pop(2)
0xee: Push((int) 22728)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x9a5

0xf5: Pop(2)
0xf6: Push((int) 23405)
0xf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0x9aa

0xfd: Pop(2)
0xfe: Push((int) 22734)
0xff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x99f

0x105: Pop(2)
0x106: Push((int) 22736)
0x107: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x993

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x9b8

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x9aa

0x117: Pop(2)
0x118: Push((int) 22725)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0xc2

0x11e: Pop(1)
0x11f: Push((int) 521564)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 0
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x9d4

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x9be

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 521565)
0x133: Push((int) 22727)
0x134: Push((int) 22726)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x9be

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x9ca

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x9e0

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x150: Stack[-1] = (bool) 1
0x151: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x152: PushEmpty(bool, object)
0x153: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x154: Call2 0x9d4

0x155: Pop(1)
0x156: Pop(1); Push((bool) Stack[-1] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (bool) 1
0x159: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0xa03

0x15d: Pop(1)
0x15e: Pop(1); Push((bool) Stack[-1] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push((int) 521573)
0x163: Push((int) 23390)
0x164: Push((int) 22734)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 521572)
0x168: Push((int) -1)
0x169: Push((int) 22733)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 23390)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0xc2

0x173: Pop(1)
0x174: Push((int) 522241)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 522242)
0x17a: Push((int) 22735)
0x17b: Push((int) 23391)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 522243)
0x17f: Push((int) 22735)
0x180: Push((int) 23392)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 22735)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral"
0x189: Call2 0xc2

0x18a: Pop(1)
0x18b: Push((int) 521574)
0x18c: @@ SetMessage(Stack[-1])
0x18d: Pop(1)
0x18e: @@ ClearReplies()
0x18f: Pop(0)
0x190: Push((int) 521575)
0x191: Push((int) -1)
0x192: Push((int) 22736)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 22727)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Call2 0x9ec

0x19c: Pop(1)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xc2

0x1a2: Pop(1)
0x1a3: Push((int) 521566)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 522231)
0x1a9: Push((int) 23381)
0x1aa: Push((int) 23380)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x9ec

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b3: PushEmpty(object, object)
0x1b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b6: Call2 0x99f

0x1b7: Pop(2)
0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Neutral"
0x1ba: Call2 0xc2

0x1bb: Pop(1)
0x1bc: Push((int) 521568)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 522251)
0x1c2: Push((int) 23403)
0x1c3: Push((int) 23402)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 23403)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Neutral"
0x1cc: Call2 0xc2

0x1cd: Pop(1)
0x1ce: Push((int) 522252)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 522244)
0x1d4: Push((int) 23395)
0x1d5: Push((int) 23394)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 522246)
0x1d9: Push((int) 23395)
0x1da: Push((int) 23396)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 23395)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Neutral"
0x1e3: Call2 0xc2

0x1e4: Pop(1)
0x1e5: Push((int) 522245)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 521569)
0x1eb: Push((int) 22731)
0x1ec: Push((int) 22730)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Push((int) 522247)
0x1f0: Push((int) 23399)
0x1f1: Push((int) 23398)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 23399)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral"
0x1fa: Call2 0xc2

0x1fb: Pop(1)
0x1fc: Push((int) 522248)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: Push((int) 522249)
0x202: Push((int) 23401)
0x203: Push((int) 23400)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 22731)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0xc2

0x20d: Pop(1)
0x20e: Push((int) 521570)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 521571)
0x214: Push((int) 23401)
0x215: Push((int) 22732)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 23401)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0xc2

0x21f: Pop(1)
0x220: Push((int) 522250)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 522253)
0x226: Push((int) -1)
0x227: Push((int) 23405)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 23381)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral"
0x230: Call2 0xc2

0x231: Pop(1)
0x232: Push((int) 522232)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 522233)
0x238: Push((int) 23383)
0x239: Push((int) 23382)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 522237)
0x23d: Push((int) -1)
0x23e: Push((int) 23386)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 23383)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0xc2

0x248: Pop(1)
0x249: Push((int) 522234)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 522235)
0x24f: Push((int) 23379)
0x250: Push((int) 23384)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 23379)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call2 0xc2

0x25a: Pop(1)
0x25b: Push((int) 522230)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 522238)
0x261: Push((int) 23388)
0x262: Push((int) 23387)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 521567)
0x266: Push((int) -1)
0x267: Push((int) 22728)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 23388)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral"
0x270: Call2 0xc2

0x271: Pop(1)
0x272: Push((int) 522239)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 522240)
0x278: Push((int) -1)
0x279: Push((int) 23389)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Return(); Pop(0)

0x27d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x27e: PushEmpty(bool)
0x27f: Call2 0xad3

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x282: @ lshStopAnimation()
0x283: Pop(0)
0x284: GOTO 0x287

0x285: @ StopAnimation()
0x286: Pop(0)
0x287: Return(); Pop(0)

0x288: GOTO 0xd9

0x289: Return(); Pop(0)

0x28a: PushEmpty(object, object)
0x28b: Push("player")
0x28c: @ FindActor(Stack[-2], Stack[-1])
0x28d: Pop(1)
0x28e: Pop(0); Push((bool) Stack[-1] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Return(); Pop(2)

0x291: PushEmpty(object, bool, float)
0x292: Stack[-3] = Stack[-4]
0x293: Stack[-2] = (bool) 1
0x294: Stack[-1] = (float) 180.0
0x295: Call2 0x29f

0x296: Pop(3)
0x297: Return(); Pop(2)

0x298: Stack[-1] = 0
0x299: PushEmpty()
0x29a: Stack[-3] = (float) 0.3
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Stack[-3] = (int) 0
0x29e: Return(); Pop(0)

0x29f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x2a0: PushEmpty()
0x2a1: Call2 0x384

0x2a2: Pop(0)
0x2a3: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x2a4: Push("@GetAttackDistance")
0x2a5: Push((int) 1)
0x2a6: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a8: @@ GetAttackDistance(Stack[-11])
0x2a9: Pop(0)
0x2aa: Push((int) 50)
0x2ab: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x2ac: GOTO 0x2ae

0x2ad: Stack[-11] = Stack[-23]
0x2ae: Push((int) 150)
0x2af: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Stack[-11] = (int) 150
0x2b2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x2b4: @ IsPlayerActor(Stack[-0], Stack[-8])
0x2b5: Pop(0)
0x2b6: Push(Stack[-8])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b8: Push("attack")
0x2b9: @ PlayGlobalMusic(Stack[-1])
0x2ba: Pop(1)
0x2bb: PushEmpty(object)
0x2bc: Call2 0x90e

0x2bd: Pop(0)
0x2be: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x2bf: Pop(1)
0x2c0: Push(Stack[-24])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-7] = (bool) 0
0x2c3: GOTO 0x2c5

0x2c4: Stack[-7] = (bool) 1
0x2c5: Push((float)400.0)
0x2c6: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x2c7: PushEmpty(bool)
0x2c8: Stack[-1] = (bool) 0
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cb: Call2 0x7bc

0x2cc: Pop(1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ce: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Stack[-1] = (bool) 1
0x2d1: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x2d2: PushEmpty()
0x2d3: Call2 0x521

0x2d4: Pop(0)
0x2d5: @@ GetPFPosition(Stack[-10])
0x2d6: Pop(0)
0x2d7: @ GetPFPosition(Stack[-9])
0x2d8: Pop(0)
0x2d9: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2da: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2db: Pop(0); Push(Stack[-6] * Stack[-6]);
0x2dc: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2de: PushEmpty(bool, object, float, float, bool, bool)
0x2df: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2e0: Stack[-4] = Stack[-17]
0x2e1: Stack[-3] = (float) 10000.0
0x2e2: Stack[-2] = (bool) 1
0x2e3: Stack[-1] = (bool) 0
0x2e4: Push(-6, 3); TaskCall(3)
0x2e5: Call2 0x535

0x2e6: Pop(-6, 3); TaskReturn
0x2e7: Pop(5)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x373

0x2eb: Stack[-7] = (bool) 0
0x2ec: GOTO 0x372

0x2ed: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2ee: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x2f0: @@ GetPFPosition(Stack[-3])
0x2f1: Pop(0)
0x2f2: @ CanReachByPF(Stack[-2], Stack[-3])
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-2] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2f6: PushEmpty(bool, object, float, float, bool, bool)
0x2f7: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Stack[-4] = Stack[-17]
0x2f9: Stack[-3] = (float) 10000.0
0x2fa: Stack[-2] = (bool) 1
0x2fb: Stack[-1] = (bool) 0
0x2fc: Push(-6, 3); TaskCall(3)
0x2fd: Call2 0x535

0x2fe: Pop(-6, 3); TaskReturn
0x2ff: Pop(5)
0x300: Pop(1); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x373

0x303: Stack[-7] = (bool) 0
0x304: GOTO 0x2c7

0x305: Pop(0); Push((bool) Stack[-7] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x307: PushEmpty(object)
0x308: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x309: Call2 0x852

0x30a: Pop(1)
0x30b: Push("all")
0x30c: Push("attack_on")
0x30d: @ PlayAnimation(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x521

0x313: Pop(0)
0x314: @ StopAsync()
0x315: Pop(0)
0x316: Stack[-7] = (bool) 1
0x317: PushEmpty(bool, object)
0x318: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x319: Call2 0x7bc

0x31a: Pop(1)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x373

0x31e: @ rand(Stack[-1])
0x31f: Pop(0)
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 1
0x322: Push((float)0.25)
0x323: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: PushEmpty(bool)
0x326: Call2 0x4f6

0x327: Pop(0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Stack[-1] = (bool) 0
0x32a: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x32b: @ Face(Stack[-0])
0x32c: Pop(0)
0x32d: PushEmpty()
0x32e: Call2 0x528

0x32f: Pop(0)
0x330: Push("all")
0x331: Push("attack_stay")
0x332: @ PlayAnimation(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: PushEmpty(bool, float)
0x335: Stack[-1] = Stack[-25]
0x336: Call2 0x472

0x337: Pop(2)
0x338: @ StopAsync()
0x339: Pop(0)
0x33a: GOTO 0x369

0x33b: @ Face(Stack[-0])
0x33c: Pop(0)
0x33d: Push("all")
0x33e: Push("fjump")
0x33f: @ PlayAnimation(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: @ WaitForAnimEnd()
0x342: Pop(0)
0x343: PushEmpty()
0x344: Call2 0x521

0x345: Pop(0)
0x346: Push(CVector(0.0, 0.0, 0.0))
0x347: @ SetSpeed(Stack[-1])
0x348: Pop(1)
0x349: @ Stop()
0x34a: Pop(0)
0x34b: @ StopAsync()
0x34c: Pop(0)
0x34d: PushEmpty(bool)
0x34e: Call2 0x4f6

0x34f: Pop(0)
0x350: Pop(1); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x352: PushEmpty(bool, object)
0x353: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x354: Call2 0x7bc

0x355: Pop(1)
0x356: Pop(1); Push((bool) Stack[-1] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x373

0x359: @@ GetPFPosition(Stack[-10])
0x35a: Pop(0)
0x35b: @ GetPFPosition(Stack[-9])
0x35c: Pop(0)
0x35d: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x35e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x35f: Pop(0); Push(Stack[-23] * Stack[-23]);
0x360: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x362: PushEmpty(bool, float)
0x363: Stack[-1] = Stack[-25]
0x364: Call2 0x3ce

0x365: Pop(1)
0x366: Pop(1); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x373

0x369: GOTO 0x372

0x36a: PushEmpty(bool, float)
0x36b: Stack[-1] = Stack[-25]
0x36c: Call2 0x3ce

0x36d: Pop(1)
0x36e: Pop(1); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: GOTO 0x373

0x371: Stack[-7] = (bool) 1
0x372: GOTO 0x2c7

0x373: @ WaitForAnimEnd()
0x374: Pop(0)
0x375: Push( Stack[3 + Tasks[-1].StackPointer] )
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Return(); Pop(22)

0x378: Push("all")
0x379: Push("attack_off")
0x37a: @ PlayAnimation(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: @ WaitForAnimEnd()
0x37d: Pop(0)
0x37e: Push(Stack[-8])
0x37f: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x380: Push((float)2.0)
0x381: @ Sleep(Stack[-1])
0x382: Pop(1)
0x383: Return(); Pop(22)

0x384: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x385: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x386: Push("all")
0x387: Push("attack_begin")
0x388: Push((int) 1)
0x389: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x38a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: Pop(0); Push((bool) Stack[-3] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: GOTO 0x393

0x390: Push((int) 1)
0x391: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x392: GOTO 0x386

0x393: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x394: Push("attack")
0x395: Push((int) 1)
0x396: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x397: Pop(2); Push(Stack[-2] + Stack[-1]);
0x398: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x399: Pop(1)
0x39a: Pop(0); Push((bool) Stack[-2] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3a0

0x39d: Push((int) 1)
0x39e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x39f: GOTO 0x394

0x3a0: Push("all")
0x3a1: Push("bjump")
0x3a2: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: Push(CvectorIndex(Stack[-1], 2))
0x3a5: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x3a6: Return(); Pop(6)

0x3a7: PushEmpty(object, float, float, object, float, float)
0x3a8: Push((float)0.9)
0x3a9: Pop(1); Push(Stack[-9] * Stack[-1]);
0x3aa: @ GetVictim(Stack[-1], Stack[-4])
0x3ab: Pop(1)
0x3ac: @ ReportAttack(Stack[-0])
0x3ad: Pop(0)
0x3ae: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x3af: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3b0: PushEmpty(float, object, int)
0x3b1: Stack[-2] = Stack[-6]
0x3b2: Stack[-1] = Stack[-10]
0x3b3: Call2 0x299

0x3b4: Stack[-5] = Stack[-3]
0x3b5: Pop(3)
0x3b6: PushEmpty(float, object, float, int)
0x3b7: Stack[-3] = Stack[-7]
0x3b8: Stack[-2] = Stack[-6]
0x3b9: PushEmpty(int, object, int)
0x3ba: Stack[-2] = Stack[-10]
0x3bb: Stack[-1] = Stack[-14]
0x3bc: Call2 0x29c

0x3bd: Stack[-4] = Stack[-3]
0x3be: Pop(3)
0x3bf: Call2 0x74a

0x3c0: Stack[-5] = Stack[-4]
0x3c1: Pop(4)
0x3c2: PushEmpty(int)
0x3c3: Call2 0x526

0x3c4: Pop(0)
0x3c5: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x3c6: Pop(1)
0x3c7: PushEmpty(object, float)
0x3c8: Stack[-2] = Stack[-5]
0x3c9: Stack[-1] = Stack[-3]
0x3ca: Call2 0x52d

0x3cb: Pop(2)
0x3cc: Return(); Pop(6)

0x3cd: Stack[-3] = 0
0x3ce: PushEmpty(int, bool, int, string, int, bool, int, string)
0x3cf: PushEmpty()
0x3d0: Call2 0x521

0x3d1: Pop(0)
0x3d2: @ irand(Stack[-4], Stack[-1])
0x3d3: Pop(0)
0x3d4: Push((int) 1)
0x3d5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d6: @ Face(Stack[-0])
0x3d7: Pop(0)
0x3d8: Push((bool) 1)
0x3d9: @ SetAttackState(Stack[-1])
0x3da: Pop(1)
0x3db: PushEmpty()
0x3dc: Call2 0x988

0x3dd: Pop(0)
0x3de: Push("all")
0x3df: Push("attack_begin")
0x3e0: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: @ WaitForAnimEnd()
0x3e4: Pop(0)
0x3e5: PushEmpty()
0x3e6: Call2 0x501

0x3e7: Pop(0)
0x3e8: PushEmpty(bool, object)
0x3e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ea: Call2 0x7bc

0x3eb: Pop(1)
0x3ec: Pop(1); Push((bool) Stack[-1] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3ee: @ StopAsync()
0x3ef: Pop(0)
0x3f0: Stack[-10] = (bool) 0
0x3f1: Return(); Pop(8)

0x3f2: PushEmpty(float, int)
0x3f3: Stack[-2] = Stack[-11]
0x3f4: Stack[-1] = Stack[-6]
0x3f5: Call2 0x3a7

0x3f6: Pop(2)
0x3f7: Push("all")
0x3f8: Push("attack_middle")
0x3f9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3fa: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3fb: Pop(2)
0x3fc: Push(Stack[-3])
0x3fd: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x3fe: PushEmpty()
0x3ff: Call2 0x988

0x400: Pop(0)
0x401: Push("all")
0x402: Push("attack_middle")
0x403: Pop(1); Push(Stack[-1] + Stack[-6]);
0x404: @ PlayAnimation(Stack[-2], Stack[-1])
0x405: Pop(2)
0x406: @ WaitForAnimEnd()
0x407: Pop(0)
0x408: PushEmpty()
0x409: Call2 0x521

0x40a: Pop(0)
0x40b: PushEmpty(bool, object)
0x40c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40d: Call2 0x7bc

0x40e: Pop(1)
0x40f: Pop(1); Push((bool) Stack[-1] == 0)
0x410: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x411: @ StopAsync()
0x412: Pop(0)
0x413: Stack[-10] = (bool) 0
0x414: Return(); Pop(8)

0x415: PushEmpty(float, int)
0x416: Stack[-2] = Stack[-11]
0x417: Stack[-1] = Stack[-6]
0x418: Call2 0x3a7

0x419: Pop(2)
0x41a: Stack[-2] = (int) 1
0x41b: Push("attack_middle")
0x41c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x41d: Push("_")
0x41e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41f: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x420: Push("all")
0x421: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x422: Pop(1)
0x423: Pop(0); Push((bool) Stack[-3] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x443

0x426: PushEmpty()
0x427: Call2 0x988

0x428: Pop(0)
0x429: Push("all")
0x42a: @ PlayAnimation(Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: @ WaitForAnimEnd()
0x42d: Pop(0)
0x42e: PushEmpty()
0x42f: Call2 0x521

0x430: Pop(0)
0x431: PushEmpty(bool, object)
0x432: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x433: Call2 0x7bc

0x434: Pop(1)
0x435: Pop(1); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x437: @ StopAsync()
0x438: Pop(0)
0x439: Stack[-10] = (bool) 0
0x43a: Return(); Pop(8)

0x43b: PushEmpty(float, int)
0x43c: Stack[-2] = Stack[-11]
0x43d: Stack[-1] = Stack[-6]
0x43e: Call2 0x3a7

0x43f: Pop(2)
0x440: Push((int) 1)
0x441: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x442: GOTO 0x41b

0x443: Push((bool) 0)
0x444: @ SetAttackState(Stack[-1])
0x445: Pop(1)
0x446: Push("all")
0x447: Push("attack_end")
0x448: Pop(1); Push(Stack[-1] + Stack[-6]);
0x449: @ PlayAnimation(Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: PushEmpty(bool)
0x44c: Call2 0x52f

0x44d: Pop(0)
0x44e: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44f: PushEmpty(bool, float)
0x450: Stack[-1] = (float) 0.75
0x451: Call2 0x457

0x452: Pop(2)
0x453: @ StopAsync()
0x454: Pop(0)
0x455: Stack[-10] = (bool) 1
0x456: Return(); Pop(8)

0x457: PushEmpty(float, bool, float, bool)
0x458: @ rand(Stack[-2])
0x459: Pop(0)
0x45a: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x45b: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x45c: @ IsAnimationPlaying(Stack[-1])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: GOTO 0x46a

0x461: PushEmpty(bool)
0x462: Call2 0x4b9

0x463: Pop(0)
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-6] = (bool) 1
0x466: Return(); Pop(4)

0x467: @ sync()
0x468: Pop(0)
0x469: GOTO 0x45c

0x46a: GOTO 0x470

0x46b: @ WaitForAnimEnd()
0x46c: Pop(0)
0x46d: PushEmpty()
0x46e: Call2 0x521

0x46f: Pop(0)
0x470: Stack[-6] = (bool) 0
0x471: Return(); Pop(4)

0x472: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x473: @ IsAnimationPlaying(Stack[-5])
0x474: Pop(0)
0x475: Pop(0); Push((bool) Stack[-5] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: GOTO 0x498

0x478: PushEmpty(bool)
0x479: Call2 0x4b9

0x47a: Pop(0)
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-12] = (bool) 1
0x47d: Return(); Pop(10)

0x47e: PushEmpty(bool, object)
0x47f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x480: Call2 0x7bc

0x481: Pop(1)
0x482: Pop(1); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-12] = (bool) 0
0x485: Return(); Pop(10)

0x486: @@ GetPFPosition(Stack[-4])
0x487: Pop(0)
0x488: @ GetPFPosition(Stack[-3])
0x489: Pop(0)
0x48a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x48b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x48c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x48d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: PushEmpty(bool, float)
0x490: Stack[-1] = Stack[-13]
0x491: Call2 0x3ce

0x492: Pop(2)
0x493: Stack[-12] = (bool) 1
0x494: Return(); Pop(10)

0x495: @ sync()
0x496: Pop(0)
0x497: GOTO 0x473

0x498: PushEmpty()
0x499: Call2 0x521

0x49a: Pop(0)
0x49b: Stack[-12] = (bool) 0
0x49c: Return(); Pop(10)

0x49d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a0: Call2 0x7bc

0x4a1: Pop(1)
0x4a2: Pop(1); Push((bool) Stack[-1] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a4: Stack[-11] = (bool) 0
0x4a5: Return(); Pop(10)

0x4a6: PushEmpty(bool)
0x4a7: Call2 0x4f6

0x4a8: Pop(0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4aa: @@ GetPFPosition(Stack[-5])
0x4ab: Pop(0)
0x4ac: @ GetPFPosition(Stack[-4])
0x4ad: Pop(0)
0x4ae: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4af: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4b0: @@ GetAttackDistance(Stack[-1])
0x4b1: Pop(0)
0x4b2: Push((int) 50)
0x4b3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4b4: Pop(0); Push(Stack[-1] * Stack[-1]);
0x4b5: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x4b6: Return(); Pop(10)

0x4b7: Stack[-11] = (bool) 0
0x4b8: Return(); Pop(10)

0x4b9: PushEmpty(bool)
0x4ba: Stack[-1] = (bool) 0
0x4bb: PushEmpty(bool)
0x4bc: Call2 0x49d

0x4bd: Pop(0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4bf: PushEmpty(bool)
0x4c0: Call2 0x4c9

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Stack[-1] = (bool) 1
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-1] = (bool) 1
0x4c6: Return(); Pop(0)

0x4c7: Stack[-1] = (bool) 0
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x4ca: @ GetScene(Stack[-5])
0x4cb: Pop(0)
0x4cc: Stack[-4] = (bool) 0
0x4cd: PushEmpty(cvector, object)
0x4ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cf: Call2 0x71c

0x4d0: Pop(1)
0x4d1: Pop(1); Push(( -Stack[-1])
0x4d2: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x4d3: Pop(1)
0x4d4: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4f3

0x4d7: @ Face(Stack[-0])
0x4d8: Pop(0)
0x4d9: Push("all")
0x4da: Push("bjump")
0x4db: @ PlayAnimation(Stack[-2], Stack[-1])
0x4dc: Pop(2)
0x4dd: @@ GetPFPosition(Stack[-2])
0x4de: Pop(0)
0x4df: @ GetPFPosition(Stack[-1])
0x4e0: Pop(0)
0x4e1: @ WaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: PushEmpty()
0x4e4: Call2 0x521

0x4e5: Pop(0)
0x4e6: @ StopAsync()
0x4e7: Pop(0)
0x4e8: Push(CVector(0.0, 0.0, 0.0))
0x4e9: @ SetSpeed(Stack[-1])
0x4ea: Pop(1)
0x4eb: Stack[-4] = (bool) 1
0x4ec: PushEmpty(bool)
0x4ed: Call2 0x49d

0x4ee: Pop(0)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: GOTO 0x4f3

0x4f2: GOTO 0x4cd

0x4f3: Stack[-11] = Stack[-4]
0x4f4: Return(); Pop(10)

0x4f5: Stack[-5] = 0
0x4f6: PushEmpty(bool, bool)
0x4f7: Push("IsAttacking")
0x4f8: Push((int) 1)
0x4f9: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4fa: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fb: @@ IsAttacking(Stack[-1])
0x4fc: Pop(0)
0x4fd: Stack[-3] = Stack[-1]
0x4fe: Return(); Pop(2)

0x4ff: Stack[-3] = (bool) 0
0x500: Return(); Pop(2)

0x501: PushEmpty(float, int, float, int)
0x502: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Return(); Pop(4)

0x505: Push( Stack[5 + Tasks[-1].StackPointer] )
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: Push((int) -1)
0x508: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x509: Push((int) 0)
0x50a: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Return(); Pop(4)

0x50d: @ rand(Stack[-2])
0x50e: Pop(0)
0x50f: PushEmpty(float)
0x510: Call2 0x533

0x511: Pop(0)
0x512: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x514: @ irand(Stack[-1], Stack[-2])
0x515: Pop(0)
0x516: Push((int) 1)
0x517: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x518: Push("attack")
0x519: Pop(1); Push(Stack[-1] + Stack[-2]);
0x51a: @ Speak(Stack[-1])
0x51b: Pop(1)
0x51c: PushEmpty(int)
0x51d: Call2 0x531

0x51e: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x51f: Pop(1)
0x520: Return(); Pop(4)

0x521: PushEmpty(object)
0x522: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x523: Call2 0x97f

0x524: Pop(1)
0x525: Return(); Pop(0)

0x526: Stack[-1] = (int) 0
0x527: Return(); Pop(0)

0x528: PushEmpty(string)
0x529: Stack[-1] = "attack_stay"
0x52a: Call2 0x8e5

0x52b: Pop(1)
0x52c: Return(); Pop(0)

0x52d: PushEmpty()
0x52e: Return(); Pop(0)

0x52f: Stack[-1] = (bool) 1
0x530: Return(); Pop(0)

0x531: Stack[-1] = (int) 1
0x532: Return(); Pop(0)

0x533: Stack[-1] = (float) 0.5
0x534: Return(); Pop(0)

0x535: PushEmpty(bool, bool, bool, bool)
0x536: PushEmpty(object)
0x537: Stack[-1] = Stack[-10]
0x538: Call2 0x97f

0x539: Pop(1)
0x53a: Push((int) 1)
0x53b: Push((int) 5)
0x53c: @ SetTimer(Stack[-2], Stack[-1])
0x53d: Pop(2)
0x53e: @ CanSee(Stack[-2], Stack[-9])
0x53f: Pop(0)
0x540: Push(Stack[-2])
0x541: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x542: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x543: PushEmpty(object)
0x544: Stack[-1] = Stack[-10]
0x545: Call2 0x8d3

0x546: Pop(1)
0x547: GOTO 0x549

0x548: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x549: PushEmpty(bool, object)
0x54a: Stack[-1] = Stack[-11]
0x54b: Call2 0x723

0x54c: Pop(1)
0x54d: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54e: PushEmpty(object)
0x54f: Call2 0x90e

0x550: Pop(0)
0x551: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x552: Pop(1)
0x553: PushEmpty(bool, object, float, float, bool, bool)
0x554: Stack[-5] = Stack[-15]
0x555: Stack[-4] = Stack[-14]
0x556: Stack[-3] = Stack[-13]
0x557: Stack[-2] = Stack[-12]
0x558: Stack[-1] = Stack[-11]
0x559: Call2 0x59e

0x55a: Stack[-7] = Stack[-6]
0x55b: Pop(6)
0x55c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x55d: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55e: Push("head")
0x55f: @ UnlookAsync(Stack[-1])
0x560: Pop(1)
0x561: Push((int) 1)
0x562: @ KillTimer(Stack[-1])
0x563: Pop(1)
0x564: Stack[-10] = Stack[-1]
0x565: Return(); Pop(4)

0x566: PushEmpty()
0x567: Push((int) 1)
0x568: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56a: PushEmpty(object)
0x56b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56c: Call2 0x97f

0x56d: Pop(1)
0x56e: GOTO 0x573

0x56f: PushEmpty(int)
0x570: Stack[-1] = Stack[-2]
0x571: Call2 0x604

0x572: Pop(1)
0x573: Return(); Pop(0)

0x574: Push((int) 1)
0x575: @ KillTimer(Stack[-1])
0x576: Pop(1)
0x577: Push( Stack[2 + Tasks[-1].StackPointer] )
0x578: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x579: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x57a: Push("head")
0x57b: @ UnlookAsync(Stack[-1])
0x57c: Pop(1)
0x57d: PushEmpty()
0x57e: Call2 0x61a

0x57f: Pop(0)
0x580: Return(); Pop(0)

0x581: PushEmpty()
0x582: PushEmpty(bool)
0x583: Stack[-1] = (bool) 0
0x584: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x585: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x586: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = (bool) 1
0x589: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x58b: PushEmpty(object)
0x58c: Stack[-1] = Stack[-2]
0x58d: Call2 0x8d3

0x58e: Pop(1)
0x58f: Return(); Pop(0)

0x590: PushEmpty()
0x591: PushEmpty(bool)
0x592: Stack[-1] = (bool) 0
0x593: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x594: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x595: Push( Stack[2 + Tasks[-1].StackPointer] )
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: Stack[-1] = (bool) 1
0x598: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x599: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x59a: Push("head")
0x59b: @ UnlookAsync(Stack[-1])
0x59c: Pop(1)
0x59d: Return(); Pop(0)

0x59e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x59f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5a1: Stack[-7] = Stack[-17]
0x5a2: PushEmpty(bool, object)
0x5a3: Stack[-1] = Stack[-23]
0x5a4: Call2 0x62a

0x5a5: Pop(1)
0x5a6: Pop(1); Push((bool) Stack[-1] == 0)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a8: Stack[-22] = (bool) 0
0x5a9: Return(); Pop(16)

0x5aa: @@ GetPosition(Stack[-5])
0x5ab: Pop(0)
0x5ac: @ GetPosition(Stack[-4])
0x5ad: Pop(0)
0x5ae: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5af: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5b0: PushEmpty(bool)
0x5b1: Stack[-1] = (bool) 0
0x5b2: Push((int) 0)
0x5b3: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b5: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5b6: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: Stack[-1] = (bool) 1
0x5b9: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5ba: @ Stop()
0x5bb: Pop(0)
0x5bc: Stack[-22] = (bool) 0
0x5bd: Return(); Pop(16)

0x5be: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5bf: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5c1: @@ GetPFPosition(Stack[-5])
0x5c2: Pop(0)
0x5c3: @ FindPathTo(Stack[-1], Stack[-5])
0x5c4: Pop(0)
0x5c5: Pop(0); Push(( Stack[-1] != 0 )
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-6] = Stack[-1]
0x5c8: Stack[-1] = 0
0x5c9: Pop(0); Push(( Stack[-6] != 0 )
0x5ca: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5cb: Push(Stack[-7])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5cd: Stack[-7] = (bool) 0
0x5ce: @ RotatePath(Stack[-6], Stack[-8])
0x5cf: Pop(0)
0x5d0: Pop(0); Push((bool) Stack[-8] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: GOTO 0x602

0x5d3: Push((int) 0)
0x5d4: Push((float)0.3)
0x5d5: @ SetTimer(Stack[-2], Stack[-1])
0x5d6: Pop(2)
0x5d7: PushEmpty(string)
0x5d8: Call2 0x631

0x5d9: Pop(0)
0x5da: PushEmpty(string)
0x5db: Call2 0x633

0x5dc: Pop(0)
0x5dd: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5de: Pop(2)
0x5df: Pop(0); Push((bool) Stack[-8] == 0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e3: Stack[-6] = 0
0x5e4: GOTO 0x602

0x5e5: GOTO 0x5e7

0x5e6: GOTO 0x601

0x5e7: GOTO 0x5e9

0x5e8: Stack[-6] = 0
0x5e9: GOTO 0x5fa

0x5ea: Push((int) 0)
0x5eb: @ KillTimer(Stack[-1])
0x5ec: Pop(1)
0x5ed: Push((float)0.5)
0x5ee: @ Sleep(Stack[-1], Stack[-9])
0x5ef: Pop(1)
0x5f0: Pop(0); Push((bool) Stack[-8] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-6] = 0
0x5f5: GOTO 0x602

0x5f6: Push((int) 0)
0x5f7: Push((float)0.3)
0x5f8: @ SetTimer(Stack[-2], Stack[-1])
0x5f9: Pop(2)
0x5fa: Stack[-1] = 0
0x5fb: GOTO 0x600

0x5fc: Push((int) 0)
0x5fd: @ KillTimer(Stack[-1])
0x5fe: Pop(1)
0x5ff: GOTO 0x602

0x600: Stack[-6] = 0
0x601: GOTO 0x5a2

0x602: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x603: Return(); Pop(16)

0x604: PushEmpty()
0x605: Push((int) 0)
0x606: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x608: Return(); Pop(0)

0x609: PushEmpty(bool, object)
0x60a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60b: Call2 0x62a

0x60c: Pop(1)
0x60d: Pop(1); Push((bool) Stack[-1] == 0)
0x60e: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x610: Push((int) 0)
0x611: @ KillTimer(Stack[-1])
0x612: Pop(1)
0x613: @ Stop()
0x614: Pop(0)
0x615: Return(); Pop(0)

0x616: PushEmpty()
0x617: @ RequestClearPath(Stack[-1])
0x618: Pop(0)
0x619: Return(); Pop(0)

0x61a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x61b: Push((int) 0)
0x61c: @ KillTimer(Stack[-1])
0x61d: Pop(1)
0x61e: @ Stop()
0x61f: Pop(0)
0x620: Return(); Pop(0)

0x621: PushEmpty()
0x622: PushEmpty()
0x623: Call2 0x574

0x624: Pop(0)
0x625: PushEmpty(object)
0x626: Stack[-1] = Stack[-2]
0x627: Call2 0xac5

0x628: Pop(1)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty(bool, object)
0x62c: Stack[-1] = Stack[-3]
0x62d: Call2 0x7bc

0x62e: Stack[-4] = Stack[-2]
0x62f: Pop(2)
0x630: Return(); Pop(0)

0x631: Stack[-1] = "walk"
0x632: Return(); Pop(0)

0x633: Stack[-1] = "run"
0x634: Return(); Pop(0)

0x635: PushEmpty()
0x636: PushEmpty(bool, string, string)
0x637: Stack[-2] = "quest_b9_01"
0x638: Stack[-1] = "doberman_dead"
0x639: Call2 0x973

0x63a: Pop(3)
0x63b: PushEmpty(object)
0x63c: Stack[-1] = Stack[-2]
0x63d: Call2 0x666

0x63e: Pop(1)
0x63f: Push((int) 50)
0x640: Push((int) 40)
0x641: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x642: Pop(2)
0x643: PushEmpty()
0x644: Call2 0xa8e

0x645: Pop(0)
0x646: PushEmpty(bool, object)
0x647: Stack[-1] = Stack[-3]
0x648: Call2 0x723

0x649: Pop(1)
0x64a: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64b: PushEmpty(bool, object, float)
0x64c: Stack[-2] = Stack[-4]
0x64d: Stack[-1] = (float) -0.03
0x64e: Call2 0x935

0x64f: Pop(3)
0x650: @ Hold()
0x651: Pop(0)
0x652: GOTO 0x650

0x653: Return(); Pop(0)

0x654: PushEmpty(bool, bool)
0x655: @ IsOverrideActive(Stack[-1])
0x656: Pop(0)
0x657: Pop(0); Push((bool) Stack[-1] == 0)
0x658: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x659: PushEmpty(object)
0x65a: Stack[-1] = Stack[-4]
0x65b: Call2 0xa70

0x65c: Pop(1)
0x65d: Return(); Pop(2)

0x65e: PushEmpty(object)
0x65f: Call2 0x90e

0x660: Pop(0)
0x661: @ RemoveActor(Stack[-1])
0x662: Pop(1)
0x663: @ Hold()
0x664: Pop(0)
0x665: Return(); Pop(0)

0x666: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x667: Pop(0); Push((bool) Stack[-21] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x669: PushEmpty(string)
0x66a: Stack[-1] = "fdie"
0x66b: Call2 0x6c1

0x66c: Pop(1)
0x66d: GOTO 0x6c0

0x66e: @@ GetPosition(Stack[-10])
0x66f: Pop(0)
0x670: @ GetPosition(Stack[-9])
0x671: Pop(0)
0x672: @ GetDirection(Stack[-8])
0x673: Pop(0)
0x674: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x675: Push(CvectorIndex(Stack[-7], 0))
0x676: Push(CvectorIndex(Stack[-9], 0))
0x677: Pop(2); Push(Stack[-2] * Stack[-1]);
0x678: Push(CvectorIndex(Stack[-8], 2))
0x679: Push(CvectorIndex(Stack[-10], 2))
0x67a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x67c: Push((int) 0)
0x67d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-6] = "fdie"
0x680: GOTO 0x682

0x681: Stack[-6] = "bdie"
0x682: @ RemoveRTEnvelope()
0x683: Pop(0)
0x684: @ SetDeathState()
0x685: Pop(0)
0x686: @ Stop()
0x687: Pop(0)
0x688: @ StopAsync()
0x689: Pop(0)
0x68a: Stack[-5] = Stack[-21]
0x68b: Push("GetScriptProperty")
0x68c: Push((int) 2)
0x68d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x68e: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x68f: Push("Owner")
0x690: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x691: Pop(1)
0x692: Push(Stack[-4])
0x693: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x694: Push("Owner")
0x695: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x696: Pop(1)
0x697: Pop(0); Push((bool) Stack[-5] == 0)
0x698: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x699: Stack[-5] = Stack[-21]
0x69a: Push("@GetEyesHeight")
0x69b: Push((int) 1)
0x69c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x69d: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69e: @@ GetEyesHeight(Stack[-2])
0x69f: Pop(0)
0x6a0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6a1: Push(CvectorIndex(Stack[-1], 1))
0x6a2: Stack[-1] = Stack[-3]
0x6a3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6a4: Push("head")
0x6a5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6a6: Pop(1)
0x6a7: Stack[-3] = (bool) 1
0x6a8: GOTO 0x6aa

0x6a9: Stack[-3] = (bool) 0
0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = Stack[-7]
0x6ac: Call2 0x8e5

0x6ad: Pop(1)
0x6ae: Push("all")
0x6af: @ PlayAnimation(Stack[-1], Stack[-7])
0x6b0: Pop(1)
0x6b1: @ WaitForAnimEnd()
0x6b2: Pop(0)
0x6b3: Push(Stack[-3])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b5: @ StopAsync()
0x6b6: Pop(0)
0x6b7: Push("head")
0x6b8: @ UnlookAsync(Stack[-1])
0x6b9: Pop(1)
0x6ba: Push("all")
0x6bb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6bc: Pop(1)
0x6bd: @ RemoveEnvelope()
0x6be: Pop(0)
0x6bf: Stack[-5] = 0
0x6c0: Return(); Pop(20)

0x6c1: PushEmpty()
0x6c2: @ RemoveRTEnvelope()
0x6c3: Pop(0)
0x6c4: @ SetDeathState()
0x6c5: Pop(0)
0x6c6: @ Stop()
0x6c7: Pop(0)
0x6c8: @ StopAsync()
0x6c9: Pop(0)
0x6ca: @ StopSecondaryAnimation()
0x6cb: Pop(0)
0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = Stack[-2]
0x6ce: Call2 0x8e5

0x6cf: Pop(1)
0x6d0: Push("all")
0x6d1: @ PlayAnimation(Stack[-1], Stack[-2])
0x6d2: Pop(1)
0x6d3: @ WaitForAnimEnd()
0x6d4: Pop(0)
0x6d5: Push("all")
0x6d6: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6d7: Pop(1)
0x6d8: @ RemoveEnvelope()
0x6d9: Pop(0)
0x6da: Return(); Pop(0)

0x6db: PushEmpty()
0x6dc: Return(); Pop(0)

0x6dd: PushEmpty()
0x6de: Return(); Pop(0)

0x6df: PushEmpty()
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty()
0x6e2: PushEmpty(int, object)
0x6e3: Stack[-1] = Stack[-3]
0x6e4: Push(-2, 1); TaskCall(0)
0x6e5: Call2 0x0

0x6e6: Pop(-2, 1); TaskReturn
0x6e7: Pop(2)
0x6e8: Return(); Pop(0)

0x6e9: @ Hold()
0x6ea: Pop(0)
0x6eb: GOTO 0x6e9

0x6ec: Return(); Pop(0)

0x6ed: PushEmpty()
0x6ee: PushEmpty(bool)
0x6ef: Call2 0x6f7

0x6f0: Pop(0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f2: PushEmpty(object)
0x6f3: Stack[-1] = Stack[-2]
0x6f4: Call2 0x6e1

0x6f5: Pop(1)
0x6f6: Return(); Pop(0)

0x6f7: Stack[-1] = (bool) 1
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty(bool, bool)
0x6fa: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6fb: Pop(0)
0x6fc: Push(Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6fe: PushEmpty(bool, string, string)
0x6ff: Stack[-2] = "quest_b9_01"
0x700: Stack[-1] = "factory_fight"
0x701: Call2 0x973

0x702: Pop(3)
0x703: Return(); Pop(2)

0x704: PushEmpty()
0x705: Push("attack")
0x706: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x708: PushEmpty()
0x709: Push(-0, 6); TaskCall(2)
0x70a: Call2 0x28a

0x70b: Pop(-0, 6); TaskReturn
0x70c: Pop(0)
0x70d: Return(); Pop(0)

0x70e: PushEmpty()
0x70f: Push((int) 2)
0x710: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x712: Stack[-2] = "fire"
0x713: Return(); Pop(0)

0x714: GOTO 0x71a

0x715: Push((int) 1)
0x716: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x718: Stack[-2] = "bullet"
0x719: Return(); Pop(0)

0x71a: Stack[-2] = "phys"
0x71b: Return(); Pop(0)

0x71c: PushEmpty(cvector, cvector, cvector, cvector)
0x71d: @ GetPosition(Stack[-2])
0x71e: Pop(0)
0x71f: @@ GetPosition(Stack[-1])
0x720: Pop(0)
0x721: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x722: Return(); Pop(4)

0x723: PushEmpty(bool, bool)
0x724: @ IsPlayerActor(Stack[-3], Stack[-1])
0x725: Pop(0)
0x726: Stack[-4] = Stack[-1]
0x727: Return(); Pop(2)

0x728: PushEmpty(bool, bool)
0x729: Push("HasProperty")
0x72a: Push((int) 2)
0x72b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x72c: Pop(1); Push((bool) Stack[-1] == 0)
0x72d: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72e: Stack[-5] = (bool) 0
0x72f: Return(); Pop(2)

0x730: @@ HasProperty(Stack[-3], Stack[-1])
0x731: Pop(0)
0x732: Stack[-5] = Stack[-1]
0x733: Return(); Pop(2)

0x734: PushEmpty(float, float)
0x735: PushEmpty(bool, object, string)
0x736: Stack[-2] = Stack[-10]
0x737: Stack[-1] = Stack[-9]
0x738: Call2 0x728

0x739: Pop(2)
0x73a: Pop(1); Push((bool) Stack[-1] == 0)
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-8] = (bool) 0
0x73d: Return(); Pop(2)

0x73e: @@ GetProperty(Stack[-6], Stack[-1])
0x73f: Pop(0)
0x740: PushEmpty(float, float, float, float)
0x741: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x742: Stack[-2] = Stack[-8]
0x743: Stack[-1] = Stack[-7]
0x744: Call2 0x925

0x745: Pop(3)
0x746: @@ SetProperty(Stack[-7], Stack[-1])
0x747: Pop(1)
0x748: Stack[-8] = (bool) 1
0x749: Return(); Pop(2)

0x74a: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x74b: PushEmpty(bool, object, string)
0x74c: Stack[-2] = Stack[-18]
0x74d: Stack[-1] = "health"
0x74e: Call2 0x728

0x74f: Pop(2)
0x750: Pop(1); Push((bool) Stack[-1] == 0)
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-16] = (float) 0.0
0x753: Return(); Pop(12)

0x754: PushEmpty(bool, object, string)
0x755: Stack[-2] = Stack[-18]
0x756: Stack[-1] = "armor"
0x757: Call2 0x728

0x758: Pop(2)
0x759: Pop(1); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-6] = (int) 0
0x75c: GOTO 0x760

0x75d: Push("armor")
0x75e: @@ GetProperty(Stack[-1], Stack[-7])
0x75f: Pop(1)
0x760: Push("armor_")
0x761: PushEmpty(string, int)
0x762: Stack[-1] = Stack[-16]
0x763: Call2 0x70e

0x764: Pop(1)
0x765: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x766: PushEmpty(bool, object, string)
0x767: Stack[-2] = Stack[-18]
0x768: Stack[-1] = Stack[-8]
0x769: Call2 0x728

0x76a: Pop(2)
0x76b: Pop(1); Push((bool) Stack[-1] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76d: Stack[-4] = (int) 0
0x76e: GOTO 0x771

0x76f: @@ GetProperty(Stack[-5], Stack[-4])
0x770: Pop(0)
0x771: PushEmpty(float, float, float)
0x772: Pop(0); Push(Stack[-9] + Stack[-7]);
0x773: Push((float)100.0)
0x774: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x775: Stack[-1] = (int) 1
0x776: Call2 0x91e

0x777: Stack[-6] = Stack[-3]
0x778: Pop(3)
0x779: Push("health")
0x77a: @@ GetProperty(Stack[-1], Stack[-3])
0x77b: Pop(1)
0x77c: Push((int) 1)
0x77d: Pop(1); Push(Stack[-1] - Stack[-4]);
0x77e: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x77f: Push("health")
0x780: PushEmpty(float, float, float, float)
0x781: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x782: Stack[-2] = (int) 0
0x783: Stack[-1] = (int) 1
0x784: Call2 0x925

0x785: Pop(3)
0x786: @@ SetProperty(Stack[-2], Stack[-1])
0x787: Pop(2)
0x788: PushEmpty(bool, object)
0x789: Stack[-1] = Stack[-17]
0x78a: Call2 0x723

0x78b: Pop(1)
0x78c: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78d: PushEmpty(float)
0x78e: Stack[-1] = -Stack[-2]; Pop(0);
0x78f: Call2 0x958

0x790: Pop(1)
0x791: Stack[-16] = Stack[-1]
0x792: Return(); Pop(12)

0x793: PushEmpty(bool, bool)
0x794: @@ IsDead(Stack[-1])
0x795: Pop(0)
0x796: Stack[-4] = Stack[-1]
0x797: Return(); Pop(2)

0x798: PushEmpty(object, object, object, object)
0x799: Pop(0); Push((bool) Stack[-5] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-6] = (bool) 0
0x79c: Return(); Pop(4)

0x79d: PushEmpty(bool)
0x79e: Stack[-1] = (bool) 0
0x79f: Push("IsDead")
0x7a0: Push((int) 1)
0x7a1: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a3: PushEmpty(bool, object)
0x7a4: Stack[-1] = Stack[-8]
0x7a5: Call2 0x793

0x7a6: Pop(1)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 1
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: Stack[-6] = (bool) 0
0x7ab: Return(); Pop(4)

0x7ac: @ GetScene(Stack[-2])
0x7ad: Pop(0)
0x7ae: Pop(0); Push((bool) Stack[-2] == 0)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b0: Stack[-6] = (bool) 0
0x7b1: Return(); Pop(4)

0x7b2: @@ GetScene(Stack[-1])
0x7b3: Pop(0)
0x7b4: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-6] = (bool) 0
0x7b7: Return(); Pop(4)

0x7b8: Stack[-6] = (bool) 1
0x7b9: Return(); Pop(4)

0x7ba: Stack[-1] = 0
0x7bb: Stack[-2] = 0
0x7bc: PushEmpty(int, int)
0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[-5]
0x7bf: Call2 0x798

0x7c0: Pop(1)
0x7c1: Pop(1); Push((bool) Stack[-1] == 0)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-4] = (bool) 0
0x7c4: Return(); Pop(2)

0x7c5: PushEmpty(bool, object, string)
0x7c6: Stack[-2] = Stack[-6]
0x7c7: Stack[-1] = "noaccess"
0x7c8: Call2 0x728

0x7c9: Pop(2)
0x7ca: Pop(1); Push((bool) Stack[-1] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: Stack[-4] = (bool) 1
0x7cd: Return(); Pop(2)

0x7ce: Push("noaccess")
0x7cf: @@ GetProperty(Stack[-1], Stack[-2])
0x7d0: Pop(1)
0x7d1: Push((int) 0)
0x7d2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x7d5: Pop(0); Push((bool) Stack[-15] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: Return(); Pop(14)

0x7d8: @ IsDead(Stack[-7])
0x7d9: Pop(0)
0x7da: Push(Stack[-7])
0x7db: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7dc: Return(); Pop(14)

0x7dd: @ GetSecondaryAnimationType(Stack[-6])
0x7de: Pop(0)
0x7df: Push((int) 0)
0x7e0: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7e2: Return(); Pop(14)

0x7e3: @@ GetPosition(Stack[-5])
0x7e4: Pop(0)
0x7e5: @ GetPosition(Stack[-4])
0x7e6: Pop(0)
0x7e7: @ GetDirection(Stack[-3])
0x7e8: Pop(0)
0x7e9: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x7ea: Push(CvectorIndex(Stack[-2], 0))
0x7eb: Push(CvectorIndex(Stack[-4], 0))
0x7ec: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7ed: Push(CvectorIndex(Stack[-3], 2))
0x7ee: Push(CvectorIndex(Stack[-5], 2))
0x7ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7f0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f1: Push((int) 0)
0x7f2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f4: Stack[-1] = "fhit"
0x7f5: GOTO 0x7f7

0x7f6: Stack[-1] = "bhit"
0x7f7: Push("hit_react")
0x7f8: Push("1")
0x7f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7fa: Push("2")
0x7fb: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7fc: Push((int) -10)
0x7fd: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(4)
0x7ff: Return(); Pop(14)

0x800: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x801: PushEmpty(bool)
0x802: Stack[-1] = (bool) 0
0x803: PushEmpty(bool)
0x804: Stack[-1] = (bool) 0
0x805: Push(Stack[-23])
0x806: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x807: Push((int) 4)
0x808: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: Stack[-1] = (bool) 1
0x80b: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80c: Push((int) 5)
0x80d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x80e: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80f: Stack[-1] = (bool) 1
0x810: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x811: PushEmpty(cvector, cvector)
0x812: PushEmpty(cvector, object)
0x813: Stack[-1] = Stack[-25]
0x814: Call2 0x71c

0x815: Stack[-3] = Stack[-2]
0x816: Pop(2)
0x817: Call2 0x914

0x818: Stack[-11] = Stack[-2]
0x819: Pop(2)
0x81a: @ CreateVectorVector(Stack[-8])
0x81b: Pop(0)
0x81c: Stack[-7] = (int) 1
0x81d: Push("hit")
0x81e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x81f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x820: Pop(1)
0x821: Pop(0); Push((bool) Stack[-6] == 0)
0x822: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x823: GOTO 0x82d

0x824: Pop(0); Push(Stack[-4] | Stack[-9]);
0x825: Push((float)0.70711)
0x826: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x828: @@ add(Stack[-5])
0x829: Pop(0)
0x82a: Push((int) 1)
0x82b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x82c: GOTO 0x81d

0x82d: @@ size(Stack[-3])
0x82e: Pop(0)
0x82f: Push(Stack[-3])
0x830: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x831: @ irand(Stack[-2], Stack[-3])
0x832: Pop(0)
0x833: @@ get(Stack[-1], Stack[-2])
0x834: Pop(0)
0x835: PushEmpty(object, int, float, cvector, cvector)
0x836: Stack[-5] = Stack[-26]
0x837: Stack[-4] = Stack[-25]
0x838: Stack[-3] = Stack[-24]
0x839: Stack[-2] = Stack[-6]
0x83a: Stack[-1] = -Stack[-14]; Pop(0);
0x83b: Call2 0x844

0x83c: Pop(5)
0x83d: Return(); Pop(18)

0x83e: Stack[-8] = 0
0x83f: PushEmpty(object)
0x840: Stack[-1] = Stack[-22]
0x841: Call2 0x7d4

0x842: Pop(1)
0x843: Return(); Pop(18)

0x844: PushEmpty(object, object, object, object)
0x845: @ GetScene(Stack[-2])
0x846: Pop(0)
0x847: Push("scripted")
0x848: Push("blood_dir.xml")
0x849: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x84a: Pop(2)
0x84b: PushEmpty(object)
0x84c: Stack[-1] = Stack[-10]
0x84d: Call2 0x7d4

0x84e: Pop(1)
0x84f: Return(); Pop(4)

0x850: Stack[-1] = 0
0x851: Stack[-2] = 0
0x852: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x853: @@ GetPosition(Stack[-3])
0x854: Pop(0)
0x855: @ GetPosition(Stack[-2])
0x856: Pop(0)
0x857: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x858: Push(CvectorIndex(Stack[-1], 0))
0x859: Push(CvectorIndex(Stack[-2], 2))
0x85a: @ RotateAsync(Stack[-2], Stack[-1])
0x85b: Pop(2)
0x85c: Return(); Pop(6)

0x85d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x85e: @@ GetPosition(Stack[-8])
0x85f: Pop(0)
0x860: @@ GetEyesHeight(Stack[-9])
0x861: Pop(0)
0x862: Push(CvectorIndex(Stack[-8], 1))
0x863: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x864: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x865: @ GetPosition(Stack[-7])
0x866: Pop(0)
0x867: @ GetEyesHeight(Stack[-9])
0x868: Pop(0)
0x869: Push(CvectorIndex(Stack[-7], 1))
0x86a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x86b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x86c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x86d: Push(CvectorIndex(Stack[-6], 1))
0x86e: Stack[-1] = (int) 0
0x86f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x870: Pop(0); Push(Stack[-6] | Stack[-6]);
0x871: Pop(1); Push(Sqrt(Stack[-1]))
0x872: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x873: Stack[-5] = -Stack[-6]; Pop(0);
0x874: Pop(0); Push(Stack[-6] * Stack[-19]);
0x875: PushEmpty(cvector, cvector)
0x876: Push(CVector(0.0, 1.0, 0.0))
0x877: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x878: Call2 0x914

0x879: Pop(1)
0x87a: Push((int) 25)
0x87b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x87c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87d: Push(CVector(0.0, 10.0, 0.0))
0x87e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x87f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x880: @ IsOverrideActive(Stack[-2])
0x881: Pop(0)
0x882: Push(Stack[-2])
0x883: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x884: Stack[-21] = (bool) 0
0x885: Return(); Pop(18)

0x886: @ StopWorld()
0x887: Pop(0)
0x888: Push((bool) 1)
0x889: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x88a: Pop(1)
0x88b: Push(CvectorIndex(Stack[-4], 0))
0x88c: Push(CvectorIndex(Stack[-5], 2))
0x88d: @ Rotate(Stack[-2], Stack[-1])
0x88e: Pop(2)
0x88f: PushEmpty(bool)
0x890: Call2 0xad3

0x891: Pop(0)
0x892: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x893: GOTO 0x89c

0x894: Push("head")
0x895: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x896: Pop(1)
0x897: Push(Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: Push("head")
0x89a: @ LookAsyncCamera(Stack[-1])
0x89b: Pop(1)
0x89c: @ CameraWaitForPlayFinish()
0x89d: Pop(0)
0x89e: @ ResumeWorld()
0x89f: Pop(0)
0x8a0: Stack[-21] = (bool) 1
0x8a1: Return(); Pop(18)

0x8a2: PushEmpty(bool, bool)
0x8a3: Push((bool) 1)
0x8a4: @ CameraSwitchToNormal(Stack[-1])
0x8a5: Pop(1)
0x8a6: PushEmpty(bool)
0x8a7: Call2 0xad3

0x8a8: Pop(0)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8aa: GOTO 0x8b3

0x8ab: Push("head")
0x8ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8ad: Pop(1)
0x8ae: Push(Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b0: Push("head")
0x8b1: @ UnlookAsync(Stack[-1])
0x8b2: Pop(1)
0x8b3: Return(); Pop(2)

0x8b4: PushEmpty(bool, float, float, bool, float, float)
0x8b5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8b6: Pop(0)
0x8b7: Push(Stack[-3])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8b9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8ba: Pop(0)
0x8bb: Push((bool) 0)
0x8bc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(1)
0x8be: GOTO 0x8c3

0x8bf: Push("Can't find lsh animation : ")
0x8c0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8c1: @ Trace(Stack[-1])
0x8c2: Pop(1)
0x8c3: Return(); Pop(6)

0x8c4: PushEmpty(bool, float, float, bool, float, float)
0x8c5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8c6: Pop(0)
0x8c7: Push(Stack[-3])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8ca: Pop(0)
0x8cb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8cc: Pop(0)
0x8cd: GOTO 0x8d2

0x8ce: Push("Can't find lsh animation : ")
0x8cf: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8d0: @ Trace(Stack[-1])
0x8d1: Pop(1)
0x8d2: Return(); Pop(6)

0x8d3: PushEmpty(float, cvector, float, cvector)
0x8d4: @@ GetEyesHeight(Stack[-2])
0x8d5: Pop(0)
0x8d6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x8d7: Push(CvectorIndex(Stack[-1], 1))
0x8d8: Stack[-1] = Stack[-3]
0x8d9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8da: Push("head")
0x8db: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x8dc: Pop(1)
0x8dd: Return(); Pop(4)

0x8de: PushEmpty(bool)
0x8df: Call2 0xad3

0x8e0: Pop(0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: @ lshStopSpeech()
0x8e3: Pop(0)
0x8e4: Return(); Pop(0)

0x8e5: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x8e6: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x8e7: Pop(0)
0x8e8: Pop(0); Push((bool) Stack[-8] == 0)
0x8e9: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8ea: Stack[-7] = (int) 0
0x8eb: Push((int) 1)
0x8ec: Pop(1); Push(Stack[-8] + Stack[-1]);
0x8ed: Pop(1); Push(Stack[-18] + Stack[-1]);
0x8ee: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x8ef: Pop(1)
0x8f0: Pop(0); Push((bool) Stack[-6] == 0)
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f2: GOTO 0x8f6

0x8f3: Push((int) 1)
0x8f4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8f5: GOTO 0x8eb

0x8f6: Pop(0); Push((bool) Stack[-7] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: Return(); Pop(16)

0x8f9: @ irand(Stack[-5], Stack[-7])
0x8fa: Pop(0)
0x8fb: Push((int) 1)
0x8fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8fd: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x8fe: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x8ff: Pop(0)
0x900: Push(Stack[-4])
0x901: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x902: @ GetEyesHeight(Stack[-3])
0x903: Pop(0)
0x904: @ GetDirection(Stack[-2])
0x905: Pop(0)
0x906: Push((int) 50)
0x907: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x908: Push(CvectorIndex(Stack[-1], 1))
0x909: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x90a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x90b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x90c: Pop(0)
0x90d: Return(); Pop(16)

0x90e: PushEmpty(object, object)
0x90f: @ self(Stack[-1])
0x910: Pop(0)
0x911: Stack[-3] = Stack[-1]
0x912: Return(); Pop(2)

0x913: Stack[-1] = 0
0x914: PushEmpty(float, float)
0x915: Pop(0); Push(Stack[-3] | Stack[-3]);
0x916: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x917: Push((float)0.0)
0x918: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x91b: Return(); Pop(2)

0x91c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x91d: Return(); Pop(2)

0x91e: PushEmpty()
0x91f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x921: Stack[-3] = Stack[-2]
0x922: GOTO 0x924

0x923: Stack[-3] = Stack[-1]
0x924: Return(); Pop(0)

0x925: PushEmpty()
0x926: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x927: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x928: Stack[-4] = Stack[-2]
0x929: Return(); Pop(0)

0x92a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-4] = Stack[-1]
0x92d: Return(); Pop(0)

0x92e: Stack[-4] = Stack[-3]
0x92f: Return(); Pop(0)

0x930: PushEmpty(int, int)
0x931: @ GetVariable(Stack[-3], Stack[-1])
0x932: Pop(0)
0x933: Stack[-4] = Stack[-1]
0x934: Return(); Pop(2)

0x935: PushEmpty()
0x936: Pop(0); Push((bool) Stack[-2] == 0)
0x937: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x938: Stack[-3] = (bool) 0
0x939: Return(); Pop(0)

0x93a: Push((int) 0)
0x93b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93d: Push((int) 8)
0x93e: @ SendWorldWndMessage(Stack[-1])
0x93f: Pop(1)
0x940: GOTO 0x94a

0x941: Push((int) 0)
0x942: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x944: Push((int) 9)
0x945: @ SendWorldWndMessage(Stack[-1])
0x946: Pop(1)
0x947: GOTO 0x94a

0x948: Stack[-3] = (bool) 0
0x949: Return(); Pop(0)

0x94a: PushEmpty(float)
0x94b: Stack[-1] = Stack[-2]
0x94c: Call2 0x969

0x94d: Pop(1)
0x94e: PushEmpty(bool, object, string, float, float, float)
0x94f: Stack[-5] = Stack[-8]
0x950: Stack[-4] = "reputation"
0x951: Stack[-3] = Stack[-7]
0x952: Stack[-2] = (int) 0
0x953: Stack[-1] = (int) 1
0x954: Call2 0x734

0x955: Pop(6)
0x956: Stack[-3] = (bool) 1
0x957: Return(); Pop(0)

0x958: PushEmpty(object, object)
0x959: @ CreateFloatVector(Stack[-1])
0x95a: Pop(0)
0x95b: @@ add(Stack[-3])
0x95c: Pop(0)
0x95d: Push((int) 0)
0x95e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x95f: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x960: Push((float)0.7)
0x961: Push((int) 500)
0x962: @ RumblePlay(Stack[-2], Stack[-1])
0x963: Pop(2)
0x964: Push((int) 15)
0x965: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x966: Pop(1)
0x967: Return(); Pop(2)

0x968: Stack[-1] = 0
0x969: PushEmpty(object, object)
0x96a: @ CreateFloatVector(Stack[-1])
0x96b: Pop(0)
0x96c: @@ add(Stack[-3])
0x96d: Pop(0)
0x96e: Push((int) 16)
0x96f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x970: Pop(1)
0x971: Return(); Pop(2)

0x972: Stack[-1] = 0
0x973: PushEmpty(object, object)
0x974: @ FindActor(Stack[-1], Stack[-4])
0x975: Pop(0)
0x976: Pop(0); Push((bool) Stack[-1] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: Stack[-5] = (bool) 0
0x979: Return(); Pop(2)

0x97a: @ Trigger(Stack[-1], Stack[-3])
0x97b: Pop(0)
0x97c: Stack[-5] = (bool) 1
0x97d: Return(); Pop(2)

0x97e: Stack[-1] = 0
0x97f: PushEmpty(bool, bool)
0x980: @ IsPlayerActor(Stack[-3], Stack[-1])
0x981: Pop(0)
0x982: Push(Stack[-1])
0x983: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x984: Push("attack")
0x985: @ PlayGlobalMusic(Stack[-1])
0x986: Pop(1)
0x987: Return(); Pop(2)

0x988: PushEmpty(object, object)
0x989: @ GetScene(Stack[-1])
0x98a: Pop(0)
0x98b: Push("battle")
0x98c: PushEmpty(object)
0x98d: Call2 0x90e

0x98e: Pop(0)
0x98f: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x990: Pop(2)
0x991: Return(); Pop(2)

0x992: Stack[-1] = 0
0x993: PushEmpty(int, int)
0x994: Push("rifle_ammo")
0x995: Push((int) 30)
0x996: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x997: Pop(2)
0x998: Return(); Pop(2)

0x999: PushEmpty()
0x99a: Push("oob9Doberman1")
0x99b: Push((int) 1)
0x99c: @ SetVariable(Stack[-2], Stack[-1])
0x99d: Pop(2)
0x99e: Return(); Pop(0)

0x99f: PushEmpty()
0x9a0: Push("oob9Doberman2")
0x9a1: Push((int) 1)
0x9a2: @ SetVariable(Stack[-2], Stack[-1])
0x9a3: Pop(2)
0x9a4: Return(); Pop(0)

0x9a5: PushEmpty()
0x9a6: PushEmpty()
0x9a7: Call2 0xa16

0x9a8: Pop(0)
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty()
0x9ab: Push("b9q01DankoFree")
0x9ac: Push((int) 1)
0x9ad: @ SetVariable(Stack[-2], Stack[-1])
0x9ae: Pop(2)
0x9af: PushEmpty()
0x9b0: Call2 0xa23

0x9b1: Pop(0)
0x9b2: PushEmpty(bool, string, string)
0x9b3: Stack[-2] = "quest_b9_01"
0x9b4: Stack[-1] = "danko_free"
0x9b5: Call2 0x973

0x9b6: Pop(3)
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty()
0x9b9: Push("playsound")
0x9ba: Push("giveitem")
0x9bb: @ TriggerWorld(Stack[-2], Stack[-1])
0x9bc: Pop(2)
0x9bd: Return(); Pop(0)

0x9be: PushEmpty()
0x9bf: PushEmpty(int, string)
0x9c0: Stack[-1] = "b9q01"
0x9c1: Call2 0x930

0x9c2: Pop(1)
0x9c3: Push((int) 2)
0x9c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c6: Stack[-2] = (bool) 1
0x9c7: Return(); Pop(0)

0x9c8: Stack[-2] = (bool) 0
0x9c9: Return(); Pop(0)

0x9ca: PushEmpty()
0x9cb: PushEmpty(bool, object)
0x9cc: Stack[-1] = Stack[-3]
0x9cd: Call2 0xa0f

0x9ce: Pop(1)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d0: Stack[-2] = (bool) 1
0x9d1: Return(); Pop(0)

0x9d2: Stack[-2] = (bool) 0
0x9d3: Return(); Pop(0)

0x9d4: PushEmpty()
0x9d5: PushEmpty(int, string)
0x9d6: Stack[-1] = "oob9Doberman1"
0x9d7: Call2 0x930

0x9d8: Pop(1)
0x9d9: Push((int) 0)
0x9da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9dc: Stack[-2] = (bool) 1
0x9dd: Return(); Pop(0)

0x9de: Stack[-2] = (bool) 0
0x9df: Return(); Pop(0)

0x9e0: PushEmpty()
0x9e1: PushEmpty(int, string)
0x9e2: Stack[-1] = "oob9Doberman2"
0x9e3: Call2 0x930

0x9e4: Pop(1)
0x9e5: Push((int) 0)
0x9e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e8: Stack[-2] = (bool) 1
0x9e9: Return(); Pop(0)

0x9ea: Stack[-2] = (bool) 0
0x9eb: Return(); Pop(0)

0x9ec: PushEmpty()
0x9ed: PushEmpty(bool)
0x9ee: Stack[-1] = (bool) 0
0x9ef: PushEmpty(int, string)
0x9f0: Stack[-1] = "b1q03_retreat"
0x9f1: Call2 0x930

0x9f2: Pop(1)
0x9f3: Push((int) 0)
0x9f4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f6: PushEmpty(int, string)
0x9f7: Stack[-1] = "b1q03_dead"
0x9f8: Call2 0x930

0x9f9: Pop(1)
0x9fa: Push((int) 0)
0x9fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9fc: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fd: Stack[-1] = (bool) 1
0x9fe: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9ff: Stack[-2] = (bool) 1
0xa00: Return(); Pop(0)

0xa01: Stack[-2] = (bool) 0
0xa02: Return(); Pop(0)

0xa03: PushEmpty()
0xa04: PushEmpty(int, string)
0xa05: Stack[-1] = "b9q01DankoFree"
0xa06: Call2 0x930

0xa07: Pop(1)
0xa08: Push((int) 0)
0xa09: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa0b: Stack[-2] = (bool) 1
0xa0c: Return(); Pop(0)

0xa0d: Stack[-2] = (bool) 0
0xa0e: Return(); Pop(0)

0xa0f: PushEmpty(int, int)
0xa10: Push("rifle_ammo")
0xa11: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0xa12: Pop(1)
0xa13: Push((int) 30)
0xa14: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0xa15: Return(); Pop(2)

0xa16: PushEmpty(object, object)
0xa17: Push((int) 301)
0xa18: Push((int) 1)
0xa19: Push((int) 521616)
0xa1a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa1b: Pop(3)
0xa1c: PushEmpty(bool, object, int)
0xa1d: Stack[-2] = Stack[-4]
0xa1e: Stack[-1] = (int) 297
0xa1f: Call2 0xa3d

0xa20: Pop(3)
0xa21: Return(); Pop(2)

0xa22: Stack[-1] = 0
0xa23: PushEmpty(object, object)
0xa24: Push((int) 302)
0xa25: Push((int) 1)
0xa26: Push((int) 521617)
0xa27: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa28: Pop(3)
0xa29: PushEmpty(bool, object, int)
0xa2a: Stack[-2] = Stack[-4]
0xa2b: Stack[-1] = (int) 297
0xa2c: Call2 0xa3d

0xa2d: Pop(3)
0xa2e: Return(); Pop(2)

0xa2f: Stack[-1] = 0
0xa30: PushEmpty(object, object)
0xa31: @ GetDiaryRoot(Stack[-1])
0xa32: Pop(0)
0xa33: Pop(0); Push((bool) Stack[-1] == 0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa35: Push("Can't retrieve diary root")
0xa36: @ Trace(Stack[-1])
0xa37: Pop(1)
0xa38: Stack[-3] = (bool) 0
0xa39: Return(); Pop(2)

0xa3a: Stack[-3] = Stack[-1]
0xa3b: Return(); Pop(2)

0xa3c: Stack[-1] = 0
0xa3d: PushEmpty(object, object, int, object, object, int)
0xa3e: PushEmpty(object)
0xa3f: Call2 0xa30

0xa40: Stack[-4] = Stack[-1]
0xa41: Pop(1)
0xa42: @@ Find(Stack[-7], Stack[-2])
0xa43: Pop(0)
0xa44: Pop(0); Push((bool) Stack[-2] == 0)
0xa45: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa46: Push("Can't find diary parent with id: ")
0xa47: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa48: @ Trace(Stack[-1])
0xa49: Pop(1)
0xa4a: Stack[-9] = (bool) 0
0xa4b: Return(); Pop(6)

0xa4c: @@ AddChild(Stack[-8])
0xa4d: Pop(0)
0xa4e: Push((int) 7)
0xa4f: @ SendWorldWndMessage(Stack[-1])
0xa50: Pop(1)
0xa51: @@ GetCategory(Stack[-1])
0xa52: Pop(0)
0xa53: @ SetDiarySection(Stack[-1])
0xa54: Pop(0)
0xa55: Stack[-9] = (bool) 0
0xa56: Return(); Pop(6)

0xa57: Stack[-2] = 0
0xa58: Stack[-3] = 0
0xa59: PushEmpty(int, int)
0xa5a: Push("branch")
0xa5b: @ GetVariable(Stack[-1], Stack[-2])
0xa5c: Pop(1)
0xa5d: Push((int) 0)
0xa5e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5f: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa60: Stack[-3] = (int) 1
0xa61: Return(); Pop(2)

0xa62: GOTO 0xa68

0xa63: Push((int) 1)
0xa64: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa65: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa66: Stack[-3] = (int) 2
0xa67: Return(); Pop(2)

0xa68: Stack[-3] = (int) 3
0xa69: Return(); Pop(2)

0xa6a: PushEmpty(int, int)
0xa6b: Push("branch")
0xa6c: @ GetVariable(Stack[-1], Stack[-2])
0xa6d: Pop(1)
0xa6e: Stack[-3] = Stack[-1]
0xa6f: Return(); Pop(2)

0xa70: PushEmpty()
0xa71: PushEmpty(int)
0xa72: Call2 0xa6a

0xa73: Pop(0)
0xa74: Push((int) 1)
0xa75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa77: @ WorkWithCorpse(Stack[-1])
0xa78: Pop(0)
0xa79: GOTO 0xa7c

0xa7a: @ Barter(Stack[-1])
0xa7b: Pop(0)
0xa7c: Return(); Pop(0)

0xa7d: PushEmpty(object, int, bool, object, int, bool)
0xa7e: @ CreateInvItem(Stack[-3])
0xa7f: Pop(0)
0xa80: @@ SetItemName(Stack[-7])
0xa81: Pop(0)
0xa82: Push("Organ")
0xa83: Push((int) 1)
0xa84: @@ SetProperty(Stack[-2], Stack[-1])
0xa85: Pop(2)
0xa86: @@ GetItemID(Stack[-2])
0xa87: Pop(0)
0xa88: Push((int) 0)
0xa89: Push((int) 1)
0xa8a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xa8b: Pop(2)
0xa8c: Return(); Pop(6)

0xa8d: Stack[-3] = 0
0xa8e: PushEmpty(int)
0xa8f: Call2 0xa6a

0xa90: Pop(0)
0xa91: Push((int) 1)
0xa92: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Return(); Pop(0)

0xa95: PushEmpty(string)
0xa96: Stack[-1] = "liver"
0xa97: Call2 0xa7d

0xa98: Pop(1)
0xa99: PushEmpty(string)
0xa9a: Stack[-1] = "kidney"
0xa9b: Call2 0xa7d

0xa9c: Pop(1)
0xa9d: PushEmpty(string)
0xa9e: Stack[-1] = "heart"
0xa9f: Call2 0xa7d

0xaa0: Pop(1)
0xaa1: PushEmpty(string)
0xaa2: Stack[-1] = "blood"
0xaa3: Call2 0xa7d

0xaa4: Pop(1)
0xaa5: Return(); Pop(0)

0xaa6: PushEmpty()
0xaa7: PushEmpty(object, int, float)
0xaa8: Stack[-3] = Stack[-7]
0xaa9: Stack[-2] = Stack[-6]
0xaaa: Stack[-1] = Stack[-5]
0xaab: Call2 0x800

0xaac: Pop(3)
0xaad: Return(); Pop(0)

0xaae: PushEmpty()
0xaaf: PushEmpty(object, int, float, cvector, cvector)
0xab0: Stack[-5] = Stack[-11]
0xab1: Stack[-4] = Stack[-10]
0xab2: Stack[-3] = Stack[-9]
0xab3: Stack[-2] = Stack[-7]
0xab4: Stack[-1] = Stack[-6]
0xab5: Call2 0x844

0xab6: Pop(5)
0xab7: Return(); Pop(0)

0xab8: PushEmpty(float, float)
0xab9: Push("health")
0xaba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xabc: Push("health")
0xabd: @ GetProperty(Stack[-1], Stack[-2])
0xabe: Pop(1)
0xabf: Push((int) 0)
0xac0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xac2: @ SignalDeath(Stack[-4])
0xac3: Pop(0)
0xac4: Return(); Pop(2)

0xac5: PushEmpty()
0xac6: PushEmpty(object)
0xac7: Stack[-1] = Stack[-2]
0xac8: Call2 0xad5

0xac9: Pop(1)
0xaca: Return(); Pop(0)

0xacb: Stack[-1] = (int) 518097
0xacc: Return(); Pop(0)

0xacd: Stack[-1] = (int) 518096
0xace: Return(); Pop(0)

0xacf: Stack[-1] = "ui/NPC_Citizen2.png"
0xad0: Return(); Pop(0)

0xad1: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xad2: Return(); Pop(0)

0xad3: Stack[-1] = (bool) 0
0xad4: Return(); Pop(0)

0xad5: PushEmpty()
0xad6: PushEmpty(object)
0xad7: Stack[-1] = Stack[-2]
0xad8: Push(-1, 0); TaskCall(4)
0xad9: Call2 0x635

0xada: Pop(-1, 0); TaskReturn
0xadb: Pop(1)
0xadc: Return(); Pop(0)

