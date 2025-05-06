GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 object 

Strings:
	cleanup
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
	hunt
	attack_off
	@Stop hunt
	attack_begin1
	attack
	light-dynamic
	soldier_fire.xml
	shot
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	in
	quest_d10_01
	soldier_fight
	fire
	bullet
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
	fhit
	bhit
	hit_react
	2
	add
	size
	get
	blood_dir.xml
	Can't find lsh animation : 
	woman
	worker
	butcher
	wasted_girl
	boy
	vaxxabitka
	unosha
	wasted_male
	alkash
	dohodyaga
	vaxxabit
	nudegirl
	morlok
	battle
	d10q01SoldierTalk
	ood10MSoldier1
	ood10MSoldier2
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	rifle_ammo
	rusk
	bandage
	tourniquet
	class
	patrol
	sanitar
	soldier
	little_girl
	reputation
	bomber
	hunter
	grabitel
	disease
	dog
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

Import:
	RemoveActor (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	SetRTEnvelope (2 args)
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
	SetTimer (2 args)
	SetAttackState (1 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	Trace (1 args)
	ReportAttack (1 args)
	SendPlayerEnemy (2 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	PlayGlobalSound (4 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	IsLoaded (1 args)
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
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	PlayGlobalMusic (1 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (4 args)
	ResetAAS (0 args)
	ReportReputationChange (3 args)

RunOp = 0x49d
RunTask = 6

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x0 Vars = (string)
		EVENT_5 Op = 0x14 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xef Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x240 Vars = (object)
		EVENT_22 Op = 0x2bf Vars = (object, int, float, float)
		EVENT_16 Op = 0x2c1 Vars = (object, string)
		EVENT_41 Op = 0x2c3 Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_41 Op = 0x2e5 Vars = (object)
		EVENT_3 Op = 0x2ee Vars = (object)
		EVENT_4 Op = 0x2f7 Vars = (object)
		EVENT_17 Op = 0x303 Vars = (object)
		EVENT_30 Op = 0x317 Vars = (object, object, bool)
		EVENT_1 Op = 0x324 Vars = (object)
		EVENT_7 Op = 0x332 Vars = (int)
	GTASK_5 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x3cd Vars = (object)
		EVENT_1 Op = 0x3db Vars = (object)
		EVENT_17 Op = 0x46d Vars = (object)
		EVENT_30 Op = 0x485 Vars = (object, object, bool)
	GTASK_6 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x4ab Vars = (object)
		EVENT_26 Op = 0x4b6 Vars = (string)
		EVENT_17 Op = 0x4cc Vars = (object)
		EVENT_30 Op = 0x4d3 Vars = (object, object, bool)
		EVENT_3 Op = 0x4d5 Vars = (object)
		EVENT_1 Op = 0x4f5 Vars = (object)

Events:
EVENT_22 Op = 0x95c Vars = (object, int, float, float)
EVENT_43 Op = 0x964 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x96e Vars = (object, string)
EVENT_41 Op = 0x97b Vars = (object)
EVENT_6 Op = 0xadc Vars = ()

0x0: PushEmpty()
0x1: Push("cleanup")
0x2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x4: PushEmpty(object)
0x5: Call2 0x7c8

0x6: Pop(0)
0x7: @ RemoveActor(Stack[-1])
0x8: Pop(1)
0x9: @ Hold()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: @ Hold()
0xd: Pop(0)
0xe: PushEmpty(bool)
0xf: Call2 0x6ac

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x13: Return(); Pop(0)

0x14: @ StopGroup0()
0x15: Pop(0)
0x16: @ sync()
0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1b: PushEmpty(bool, object, float)
0x1c: Stack[-2] = Stack[-12]
0x1d: Stack[-1] = (float) 70.0
0x1e: Call2 0x6b1

0x1f: Pop(2)
0x20: Pop(1); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-10] = (int) -2
0x23: Return(); Pop(8)

0x24: @ CreateDialog(Stack[-4])
0x25: Pop(0)
0x26: PushEmpty(int)
0x27: Call2 0xaec

0x28: Pop(0)
0x29: @@ SetNPCName(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(int)
0x2c: Call2 0xaea

0x2d: Pop(0)
0x2e: @@ SetNPCDescription(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xaee

0x32: Pop(0)
0x33: @@ SetPhoto(Stack[-1])
0x34: Pop(1)
0x35: PushEmpty(string)
0x36: Call2 0xaf0

0x37: Pop(0)
0x38: @@ SetPhoto2(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x8bf

0x3c: Pop(0)
0x3d: @@ SetPlayerName(Stack[-1])
0x3e: Pop(1)
0x3f: Stack[-2] = (int) -1
0x40: @ IsOverrideActive(Stack[-3])
0x41: Pop(0)
0x42: Push(Stack[-3])
0x43: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x44: Stack[-10] = (int) -2
0x45: Return(); Pop(8)

0x46: @ DoDialog(Stack[-4])
0x47: Pop(0)
0x48: PushEmpty(object, object)
0x49: Stack[-2] = Stack[-11]
0x4a: Stack[-1] = Stack[-6]
0x4b: Push(-2, 4); TaskCall(2)
0x4c: Call2 0x63

0x4d: Pop(-2, 4); TaskReturn
0x4e: Pop(2)
0x4f: @@ IsDialogEnd(Stack[-1])
0x50: Pop(0)
0x51: Pop(0); Push((bool) Stack[-1] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: @ sync()
0x54: Pop(0)
0x55: @@ IsDialogEnd(Stack[-1])
0x56: Pop(0)
0x57: GOTO 0x51

0x58: PushEmpty(object)
0x59: Stack[-1] = Stack[-10]
0x5a: Call2 0x6f6

0x5b: Pop(1)
0x5c: @ StopDialog(Stack[-4])
0x5d: Pop(0)
0x5e: @@ GetReturnValue(Stack[-2])
0x5f: Pop(0)
0x60: Stack[-10] = Stack[-2]
0x61: Return(); Pop(8)

0x62: Stack[-4] = 0
0x63: PushEmpty()
0x64: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x65: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x66: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x67: Push((int) 1)
0x68: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x871

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x6e: PushEmpty(object, object)
0x6f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x71: Call2 0x859

0x72: Pop(2)
0x73: PushEmpty(object, object)
0x74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x853

0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xd9

0x7b: Pop(1)
0x7c: Push((int) 515453)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: Push((int) 515454)
0x82: Push((int) 16572)
0x83: Push((int) 16571)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push((int) 539571)
0x87: Push((int) 41513)
0x88: Push((int) 41512)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: GOTO 0xbb

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x87d

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x91: PushEmpty(object, object)
0x92: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x93: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x94: Call2 0x85f

0x95: Pop(2)
0x96: PushEmpty(string)
0x97: Stack[-1] = "Neutral"
0x98: Call2 0xd9

0x99: Pop(1)
0x9a: Push((int) 515459)
0x9b: @@ SetMessage(Stack[-1])
0x9c: Pop(1)
0x9d: @@ ClearReplies()
0x9e: Pop(0)
0x9f: Push((int) 515460)
0xa0: Push((int) 41515)
0xa1: Push((int) 16577)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: Push((int) 539577)
0xa5: Push((int) 41519)
0xa6: Push((int) 41518)
0xa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8: Pop(3)
0xa9: GOTO 0xbb

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0xd9

0xad: Pop(1)
0xae: Push((int) 515465)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 515466)
0xb4: Push((int) -1)
0xb5: Push((int) 16583)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: GOTO 0xbb

0xb9: Return(); Pop(0)

0xba: GOTO 0x67

0xbb: PushEmpty(bool)
0xbc: Call2 0xaf2

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xbf: @ lshWaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: PushEmpty(string)
0xc5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc6: Call2 0x708

0xc7: Pop(1)
0xc8: GOTO 0xbf

0xc9: GOTO 0xd8

0xca: Push("all")
0xcb: Push("idle")
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: @ WaitForAnimEnd()
0xcf: Pop(0)
0xd0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: GOTO 0xd8

0xd3: Push("all")
0xd4: Push("idle")
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: GOTO 0xce

0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: PushEmpty(bool)
0xdb: Call2 0xaf2

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(0)

0xe0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(0)

0xe3: PushEmpty(string, bool)
0xe4: Stack[-2] = Stack[-3]
0xe5: Push("")
0xe6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-1] = (bool) 0
0xe9: GOTO 0xeb

0xea: Stack[-1] = (bool) 1
0xeb: Call2 0x718

0xec: Pop(2)
0xed: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Push((int) 1)
0xf1: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0x727

0xf4: Pop(0)
0xf5: Push((int) 41529)
0xf6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0x865

0xfc: Pop(2)
0xfd: Push((int) 16575)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x865

0x104: Pop(2)
0x105: Push((int) 16583)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x86a

0x10c: Pop(2)
0x10d: Push((int) 16570)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0x871

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x859

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x853

0x11e: Pop(2)
0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0xd9

0x122: Pop(1)
0x123: Push((int) 515453)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 515454)
0x129: Push((int) 16572)
0x12a: Push((int) 16571)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 539571)
0x12e: Push((int) 41513)
0x12f: Push((int) 41512)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x87d

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x85f

0x13c: Pop(2)
0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call2 0xd9

0x140: Pop(1)
0x141: Push((int) 515459)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 515460)
0x147: Push((int) 41515)
0x148: Push((int) 16577)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 539577)
0x14c: Push((int) 41519)
0x14d: Push((int) 41518)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0xd9

0x154: Pop(1)
0x155: Push((int) 515465)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 515466)
0x15b: Push((int) -1)
0x15c: Push((int) 16583)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 41515)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral"
0x165: Call2 0xd9

0x166: Pop(1)
0x167: Push((int) 539574)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 539575)
0x16d: Push((int) 41519)
0x16e: Push((int) 41516)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 539576)
0x172: Push((int) 41519)
0x173: Push((int) 41517)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 41519)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0xd9

0x17d: Pop(1)
0x17e: Push((int) 539578)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 539579)
0x184: Push((int) -1)
0x185: Push((int) 41522)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Push((int) 539580)
0x189: Push((int) -1)
0x18a: Push((int) 41523)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 41513)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0xd9

0x194: Pop(1)
0x195: Push((int) 539572)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 539878)
0x19b: Push((int) 41840)
0x19c: Push((int) 41833)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Push((int) 539573)
0x1a0: Push((int) 16572)
0x1a1: Push((int) 41514)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 16572)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0xd9

0x1ab: Pop(1)
0x1ac: Push((int) 515455)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 515456)
0x1b2: Push((int) 16574)
0x1b3: Push((int) 16573)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 539581)
0x1b7: Push((int) 16574)
0x1b8: Push((int) 41525)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 16574)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0xd9

0x1c2: Pop(1)
0x1c3: Push((int) 515457)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 539582)
0x1c9: Push((int) 41528)
0x1ca: Push((int) 41527)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 539880)
0x1ce: Push((int) 41836)
0x1cf: Push((int) 41835)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 41836)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0xd9

0x1d9: Pop(1)
0x1da: Push((int) 539881)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 539882)
0x1e0: Push((int) 41528)
0x1e1: Push((int) 41837)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Push((int) 539883)
0x1e5: Push((int) 41840)
0x1e6: Push((int) 41839)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 41840)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral"
0x1ef: Call2 0xd9

0x1f0: Pop(1)
0x1f1: Push((int) 539884)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: Push((int) 539885)
0x1f7: Push((int) 41528)
0x1f8: Push((int) 41842)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Push((int) 41528)
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Neutral"
0x201: Call2 0xd9

0x202: Pop(1)
0x203: Push((int) 539583)
0x204: @@ SetMessage(Stack[-1])
0x205: Pop(1)
0x206: @@ ClearReplies()
0x207: Pop(0)
0x208: Push((int) 539584)
0x209: Push((int) -1)
0x20a: Push((int) 41529)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Push((int) 515458)
0x20e: Push((int) -1)
0x20f: Push((int) 16575)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x214: PushEmpty(bool)
0x215: Call2 0xaf2

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x218: @ lshStopAnimation()
0x219: Pop(0)
0x21a: GOTO 0x21d

0x21b: @ StopAnimation()
0x21c: Pop(0)
0x21d: Return(); Pop(0)

0x21e: GOTO 0xf0

0x21f: Return(); Pop(0)

0x220: PushEmpty()
0x221: PushEmpty(bool, object)
0x222: Stack[-1] = Stack[-3]
0x223: Call2 0x581

0x224: Pop(1)
0x225: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x226: PushEmpty()
0x227: Call2 0x92b

0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x913

0x22b: Pop(0)
0x22c: PushEmpty(object)
0x22d: Stack[-1] = Stack[-2]
0x22e: Call2 0x231

0x22f: Pop(1)
0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: EventDisable(0)
0x233: PushEmpty(object)
0x234: Stack[-1] = Stack[-2]
0x235: Call2 0x24a

0x236: Pop(1)
0x237: Push((int) 50)
0x238: Push((int) 40)
0x239: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: EventEnable(0)
0x23c: @ Hold()
0x23d: Pop(0)
0x23e: GOTO 0x23c

0x23f: Return(); Pop(0)

0x240: PushEmpty(bool, bool)
0x241: @ IsOverrideActive(Stack[-1])
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x245: PushEmpty(object)
0x246: Stack[-1] = Stack[-4]
0x247: Call2 0x8d6

0x248: Pop(1)
0x249: Return(); Pop(2)

0x24a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x24b: Pop(0); Push((bool) Stack[-21] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "fdie"
0x24f: Call2 0x2a5

0x250: Pop(1)
0x251: GOTO 0x2a4

0x252: @@ GetPosition(Stack[-10])
0x253: Pop(0)
0x254: @ GetPosition(Stack[-9])
0x255: Pop(0)
0x256: @ GetDirection(Stack[-8])
0x257: Pop(0)
0x258: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x259: Push(CvectorIndex(Stack[-7], 0))
0x25a: Push(CvectorIndex(Stack[-9], 0))
0x25b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25c: Push(CvectorIndex(Stack[-8], 2))
0x25d: Push(CvectorIndex(Stack[-10], 2))
0x25e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x260: Push((int) 0)
0x261: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-6] = "fdie"
0x264: GOTO 0x266

0x265: Stack[-6] = "bdie"
0x266: @ RemoveRTEnvelope()
0x267: Pop(0)
0x268: @ SetDeathState()
0x269: Pop(0)
0x26a: @ Stop()
0x26b: Pop(0)
0x26c: @ StopAsync()
0x26d: Pop(0)
0x26e: Stack[-5] = Stack[-21]
0x26f: Push("GetScriptProperty")
0x270: Push((int) 2)
0x271: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x272: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x273: Push("Owner")
0x274: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x275: Pop(1)
0x276: Push(Stack[-4])
0x277: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x278: Push("Owner")
0x279: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x27a: Pop(1)
0x27b: Pop(0); Push((bool) Stack[-5] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-5] = Stack[-21]
0x27e: Push("@GetEyesHeight")
0x27f: Push((int) 1)
0x280: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x281: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x282: @@ GetEyesHeight(Stack[-2])
0x283: Pop(0)
0x284: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x285: Push(CvectorIndex(Stack[-1], 1))
0x286: Stack[-1] = Stack[-3]
0x287: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x288: Push("head")
0x289: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: Stack[-3] = (bool) 1
0x28c: GOTO 0x28e

0x28d: Stack[-3] = (bool) 0
0x28e: PushEmpty(string)
0x28f: Stack[-1] = Stack[-7]
0x290: Call2 0x748

0x291: Pop(1)
0x292: Push("all")
0x293: @ PlayAnimation(Stack[-1], Stack[-7])
0x294: Pop(1)
0x295: @ WaitForAnimEnd()
0x296: Pop(0)
0x297: Push(Stack[-3])
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: @ StopAsync()
0x29a: Pop(0)
0x29b: Push("head")
0x29c: @ UnlookAsync(Stack[-1])
0x29d: Pop(1)
0x29e: Push("all")
0x29f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2a0: Pop(1)
0x2a1: @ RemoveEnvelope()
0x2a2: Pop(0)
0x2a3: Stack[-5] = 0
0x2a4: Return(); Pop(20)

0x2a5: PushEmpty()
0x2a6: @ RemoveRTEnvelope()
0x2a7: Pop(0)
0x2a8: @ SetDeathState()
0x2a9: Pop(0)
0x2aa: @ Stop()
0x2ab: Pop(0)
0x2ac: @ StopAsync()
0x2ad: Pop(0)
0x2ae: @ StopSecondaryAnimation()
0x2af: Pop(0)
0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call2 0x748

0x2b3: Pop(1)
0x2b4: Push("all")
0x2b5: @ PlayAnimation(Stack[-1], Stack[-2])
0x2b6: Pop(1)
0x2b7: @ WaitForAnimEnd()
0x2b8: Pop(0)
0x2b9: Push("all")
0x2ba: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x2bb: Pop(1)
0x2bc: @ RemoveEnvelope()
0x2bd: Pop(0)
0x2be: Return(); Pop(0)

0x2bf: PushEmpty()
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(bool, bool)
0x2c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x2c7: @ Face(Stack[-3])
0x2c8: Pop(0)
0x2c9: Push((float)0.5)
0x2ca: @ Sleep(Stack[-1], Stack[-2])
0x2cb: Pop(1)
0x2cc: PushEmpty(bool)
0x2cd: Stack[-1] = (bool) 1
0x2ce: Pop(0); Push((bool) Stack[-2] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call2 0x604

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = (bool) 0
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: GOTO 0x2da

0x2d9: GOTO 0x2c9

0x2da: @ StopAsync()
0x2db: Pop(0)
0x2dc: Return(); Pop(2)

0x2dd: @ StopAsync()
0x2de: Pop(0)
0x2df: Push((int) 100)
0x2e0: @ KillTimer(Stack[-1])
0x2e1: Pop(1)
0x2e2: @ StopGroup0()
0x2e3: Pop(0)
0x2e4: Return(); Pop(0)

0x2e5: PushEmpty()
0x2e6: PushEmpty()
0x2e7: Call2 0x2dd

0x2e8: Pop(0)
0x2e9: PushEmpty(object)
0x2ea: Stack[-1] = Stack[-2]
0x2eb: Call2 0x97b

0x2ec: Pop(1)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: Push((int) 100)
0x2f2: @ KillTimer(Stack[-1])
0x2f3: Pop(1)
0x2f4: @ Face(Stack[-0])
0x2f5: Pop(0)
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty()
0x2f8: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2f9: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2fa: Push((int) 100)
0x2fb: Push((float)3.0)
0x2fc: @ SetTimer(Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: PushEmpty(object)
0x2ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x300: Call2 0x69a

0x301: Pop(1)
0x302: Return(); Pop(0)

0x303: PushEmpty()
0x304: PushEmpty(bool, object)
0x305: Stack[-1] = Stack[-3]
0x306: Call2 0x604

0x307: Pop(1)
0x308: Pop(1); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: PushEmpty(object)
0x30b: Stack[-1] = Stack[-2]
0x30c: Call2 0xa27

0x30d: Pop(1)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Call2 0x2dd

0x311: Pop(0)
0x312: PushEmpty(object)
0x313: Stack[-1] = Stack[-2]
0x314: Call2 0xa3f

0x315: Pop(1)
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: PushEmpty(bool, object, object, bool)
0x319: Stack[-3] = Stack[-7]
0x31a: Stack[-2] = Stack[-6]
0x31b: Stack[-1] = Stack[-5]
0x31c: Call2 0xab6

0x31d: Pop(3)
0x31e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31f: PushEmpty(object)
0x320: Stack[-1] = Stack[-4]
0x321: Call2 0x303

0x322: Pop(1)
0x323: Return(); Pop(0)

0x324: PushEmpty()
0x325: PushEmpty(bool, object)
0x326: Stack[-1] = Stack[-3]
0x327: Call2 0xa9a

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32a: PushEmpty()
0x32b: Call2 0x2dd

0x32c: Pop(0)
0x32d: PushEmpty(object)
0x32e: Stack[-1] = Stack[-2]
0x32f: Call2 0xab0

0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: PushEmpty()
0x333: Push((int) 100)
0x334: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Return(); Pop(0)

0x337: Push((int) 100)
0x338: @ KillTimer(Stack[-1])
0x339: Pop(1)
0x33a: @ StopGroup0()
0x33b: Pop(0)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(bool, bool, bool, bool)
0x33e: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x33f: PushEmpty(object)
0x340: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x341: Call2 0x83f

0x342: Pop(1)
0x343: PushEmpty()
0x344: Call2 0x848

0x345: Pop(0)
0x346: @ Face(Stack[-0])
0x347: Pop(0)
0x348: Push(Stack[-5])
0x349: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34a: Push("all")
0x34b: Push("attack_on")
0x34c: @ PlayAnimation(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: @ WaitForAnimEnd()
0x34f: Pop(0)
0x350: Push("all")
0x351: Push("attack_on")
0x352: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Push((bool) 1)
0x355: @ SetAttackState(Stack[-1])
0x356: Pop(1)
0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x359: Call2 0x604

0x35a: Pop(1)
0x35b: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x35c: @ CanSee(Stack[-1], Stack[-0])
0x35d: Pop(0)
0x35e: Push(Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x362: Call2 0x83f

0x363: Pop(1)
0x364: PushEmpty()
0x365: Call2 0x3f1

0x366: Pop(0)
0x367: GOTO 0x3b7

0x368: PushEmpty(object)
0x369: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36a: Call2 0x69a

0x36b: Pop(1)
0x36c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x36d: Push("all")
0x36e: Push("hunt")
0x36f: @ PlayAnimation(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: @ WaitForAnimEnd(Stack[-2])
0x372: Pop(0)
0x373: Pop(0); Push((bool) Stack[-2] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x375: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x376: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x377: PushEmpty()
0x378: Call2 0x3ec

0x379: Pop(0)
0x37a: Push("all")
0x37b: Push("attack_on")
0x37c: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x37d: Pop(2)
0x37e: GOTO 0x357

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call2 0x604

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: GOTO 0x3c1

0x386: @ CanSee(Stack[-1], Stack[-0])
0x387: Pop(0)
0x388: Push(Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: @ Face(Stack[-0])
0x38c: Pop(0)
0x38d: PushEmpty()
0x38e: Call2 0x3f1

0x38f: Pop(0)
0x390: GOTO 0x3b7

0x391: Push("all")
0x392: Push("attack_on")
0x393: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: Push((int) 3)
0x396: @ Sleep(Stack[-1], Stack[-3])
0x397: Pop(1)
0x398: Pop(0); Push((bool) Stack[-2] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39a: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x39b: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39c: PushEmpty()
0x39d: Call2 0x3ec

0x39e: Pop(0)
0x39f: Push("all")
0x3a0: Push("attack_on")
0x3a1: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: GOTO 0x357

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a6: Call2 0x604

0x3a7: Pop(1)
0x3a8: Pop(1); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: GOTO 0x3c1

0x3ab: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3ac: @ CanSee(Stack[-1], Stack[-0])
0x3ad: Pop(0)
0x3ae: Push(Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b0: @ Face(Stack[-0])
0x3b1: Pop(0)
0x3b2: PushEmpty()
0x3b3: Call2 0x3f1

0x3b4: Pop(0)
0x3b5: GOTO 0x3b7

0x3b6: GOTO 0x3c1

0x3b7: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b9: PushEmpty()
0x3ba: Call2 0x3ec

0x3bb: Pop(0)
0x3bc: GOTO 0x3c0

0x3bd: Push((int) 2)
0x3be: @ Sleep(Stack[-1])
0x3bf: Pop(1)
0x3c0: GOTO 0x357

0x3c1: Push((bool) 0)
0x3c2: @ SetAttackState(Stack[-1])
0x3c3: Pop(1)
0x3c4: @ StopAsync()
0x3c5: Pop(0)
0x3c6: Push("all")
0x3c7: Push("attack_off")
0x3c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c9: Pop(2)
0x3ca: @ WaitForAnimEnd()
0x3cb: Pop(0)
0x3cc: Return(); Pop(4)

0x3cd: PushEmpty()
0x3ce: PushEmpty(bool)
0x3cf: Stack[-1] = (bool) 0
0x3d0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d2: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 1
0x3d5: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d6: PushEmpty(object)
0x3d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d8: Call2 0x69a

0x3d9: Pop(1)
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: PushEmpty(bool)
0x3dd: Stack[-1] = (bool) 0
0x3de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3df: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e0: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-1] = (bool) 1
0x3e3: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e4: Push("@Stop hunt")
0x3e5: @ Trace(Stack[-1])
0x3e6: Pop(1)
0x3e7: @ StopAnimation()
0x3e8: Pop(0)
0x3e9: @ StopGroup0()
0x3ea: Pop(0)
0x3eb: Return(); Pop(0)

0x3ec: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x3ed: Stack[1 + Tasks[-1].StackPointer] = 0
0x3ee: @ Face(Stack[-0])
0x3ef: Pop(0)
0x3f0: Return(); Pop(0)

0x3f1: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x3f2: PushEmpty(object)
0x3f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f4: Call2 0x83f

0x3f5: Pop(1)
0x3f6: @ ReportAttack(Stack[-0])
0x3f7: Pop(0)
0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fa: Call2 0x581

0x3fb: Pop(1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: PushEmpty(object)
0x3fe: Call2 0x7c8

0x3ff: Pop(0)
0x400: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x401: Pop(1)
0x402: @ GetDirection(Stack[-14])
0x403: Pop(0)
0x404: PushEmpty(cvector, object)
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0x56b

0x407: Stack[-15] = Stack[-2]
0x408: Pop(2)
0x409: PushEmpty(float, cvector, cvector)
0x40a: Stack[-2] = Stack[-17]
0x40b: Stack[-1] = Stack[-16]
0x40c: Call2 0x80c

0x40d: Pop(2)
0x40e: Push((float)0.99939)
0x40f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Return(); Pop(28)

0x412: PushEmpty()
0x413: Call2 0x848

0x414: Pop(0)
0x415: Push("all")
0x416: Push("attack_begin1")
0x417: @ PlayAnimation(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: Push("attack")
0x41a: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x41b: Pop(1)
0x41c: Push(Stack[-12])
0x41d: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x41e: @ GetScene(Stack[-8])
0x41f: Pop(0)
0x420: Push("light-dynamic")
0x421: Push("soldier_fire.xml")
0x422: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x423: Pop(2)
0x424: Stack[-8] = 0
0x425: Stack[-9] = 0
0x426: GOTO 0x429

0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push("shot")
0x42a: Push(CVector(0.0, 150.0, 0.0))
0x42b: Push((int) 800)
0x42c: Push((int) 100000)
0x42d: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(4)
0x42f: @ GetDirection(Stack[-14])
0x430: Pop(0)
0x431: PushEmpty(cvector, object)
0x432: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x433: Call2 0x56b

0x434: Stack[-15] = Stack[-2]
0x435: Pop(2)
0x436: Push(CvectorIndex(Stack[-13], 1))
0x437: PushEmpty(float, object)
0x438: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x439: Call2 0x6a5

0x43a: Pop(1)
0x43b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x43c: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x43d: Push((float)0.03491)
0x43e: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x43f: Pop(1)
0x440: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x441: Pop(0)
0x442: Pop(0); Push(( Stack[-6] != 0 )
0x443: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x444: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x445: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x446: PushEmpty(float, object, float, int)
0x447: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x448: Stack[-2] = (float) 1.5
0x449: Stack[-1] = (int) 1
0x44a: Call2 0x592

0x44b: Stack[-7] = Stack[-4]
0x44c: Pop(4)
0x44d: Push((int) 2)
0x44e: Push((float)1.5)
0x44f: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x450: Pop(2)
0x451: GOTO 0x461

0x452: Push((int) -1)
0x453: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x455: @ GetScene(Stack[-2])
0x456: Pop(0)
0x457: Push("scripted")
0x458: Push(CVector(0.0, 0.0, 1.0))
0x459: Push("richochet.xml")
0x45a: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Push("Material")
0x45d: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x45e: Pop(1)
0x45f: Stack[-1] = 0
0x460: Stack[-2] = 0
0x461: Push("all")
0x462: Push("attack_end1")
0x463: @ PlayAnimation(Stack[-2], Stack[-1])
0x464: Pop(2)
0x465: @ WaitForAnimEnd()
0x466: Pop(0)
0x467: Push("all")
0x468: Push("attack_on")
0x469: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: Return(); Pop(28)

0x46c: Stack[-6] = 0
0x46d: PushEmpty()
0x46e: PushEmpty(bool, object)
0x46f: Stack[-1] = Stack[-3]
0x470: Call2 0x604

0x471: Pop(1)
0x472: Pop(1); Push((bool) Stack[-1] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: Return(); Pop(0)

0x475: PushEmpty(object)
0x476: Stack[-1] = Stack[-2]
0x477: Call2 0xa27

0x478: Pop(1)
0x479: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[1 + Tasks[-1].StackPointer] = 0
0x47c: GOTO 0x484

0x47d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x47e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x47f: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x480: @ StopAnimation()
0x481: Pop(0)
0x482: @ StopGroup0()
0x483: Pop(0)
0x484: Return(); Pop(0)

0x485: PushEmpty()
0x486: PushEmpty(bool, object, object, bool)
0x487: Stack[-3] = Stack[-7]
0x488: Stack[-2] = Stack[-6]
0x489: Stack[-1] = Stack[-5]
0x48a: Call2 0xab6

0x48b: Pop(3)
0x48c: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48d: PushEmpty(object)
0x48e: Stack[-1] = Stack[-4]
0x48f: Call2 0x46d

0x490: Pop(1)
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: PushEmpty()
0x494: Call2 0x557

0x495: Pop(0)
0x496: PushEmpty(int, object)
0x497: Stack[-1] = Stack[-3]
0x498: Push(-2, 1); TaskCall(1)
0x499: Call2 0x19

0x49a: Pop(-2, 1); TaskReturn
0x49b: Pop(2)
0x49c: Return(); Pop(0)

0x49d: PushEmpty(bool)
0x49e: Call2 0x6ac

0x49f: Pop(0)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a2: PushEmpty()
0x4a3: Push(-0, 0); TaskCall(0)
0x4a4: Call2 0xc

0x4a5: Pop(-0, 0); TaskReturn
0x4a6: Pop(0)
0x4a7: PushEmpty()
0x4a8: Call2 0x4ec

0x4a9: Pop(0)
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty(bool, bool)
0x4ac: Push(GlobalVars[0])
0x4ad: @@ in(Stack[-2], Stack[-4])
0x4ae: Pop(1)
0x4af: Pop(0); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b1: PushEmpty(object)
0x4b2: Stack[-1] = Stack[-4]
0x4b3: Call2 0x492

0x4b4: Pop(1)
0x4b5: Return(); Pop(2)

0x4b6: PushEmpty(object, object)
0x4b7: Push("attack")
0x4b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4ba: PushEmpty(object)
0x4bb: Call2 0x57a

0x4bc: Stack[-2] = Stack[-1]
0x4bd: Pop(1)
0x4be: PushEmpty()
0x4bf: Call2 0x557

0x4c0: Pop(0)
0x4c1: PushEmpty(object)
0x4c2: Stack[-1] = Stack[-2]
0x4c3: Call2 0xa3f

0x4c4: Pop(1)
0x4c5: Stack[-1] = 0
0x4c6: GOTO 0x4cb

0x4c7: Push("cleanup")
0x4c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4cb: Return(); Pop(2)

0x4cc: PushEmpty()
0x4cd: PushEmpty(bool, string, string)
0x4ce: Stack[-2] = "quest_d10_01"
0x4cf: Stack[-1] = "soldier_fight"
0x4d0: Call2 0x833

0x4d1: Pop(3)
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty(bool, bool)
0x4d6: PushEmpty(bool, object)
0x4d7: Stack[-1] = Stack[-5]
0x4d8: Call2 0x604

0x4d9: Pop(1)
0x4da: Pop(1); Push((bool) Stack[-1] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Return(); Pop(2)

0x4dd: Push(GlobalVars[0])
0x4de: @@ in(Stack[-2], Stack[-4])
0x4df: Pop(1)
0x4e0: Push(Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e2: PushEmpty()
0x4e3: Call2 0x557

0x4e4: Pop(0)
0x4e5: PushEmpty(object)
0x4e6: Stack[-1] = Stack[-4]
0x4e7: Push(-1, 1); TaskCall(4)
0x4e8: Call2 0x2c5

0x4e9: Pop(-1, 1); TaskReturn
0x4ea: Pop(1)
0x4eb: Return(); Pop(2)

0x4ec: PushEmpty()
0x4ed: Call2 0xa15

0x4ee: Pop(0)
0x4ef: PushEmpty()
0x4f0: Call2 0x503

0x4f1: Pop(0)
0x4f2: GOTO 0x4ef

0x4f3: Return(); Pop(0)

0x4f4: Return(); Pop(0)

0x4f5: PushEmpty()
0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[-3]
0x4f8: Call2 0xa9a

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fb: PushEmpty()
0x4fc: Call2 0x557

0x4fd: Pop(0)
0x4fe: PushEmpty(object)
0x4ff: Stack[-1] = Stack[-2]
0x500: Call2 0xad0

0x501: Pop(1)
0x502: Return(); Pop(0)

0x503: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x504: @ GetPFPosition(Stack[-1])
0x505: Pop(0)
0x506: @ GetDirection(Stack[-0])
0x507: Pop(0)
0x508: PushEmpty()
0x509: Call2 0x55c

0x50a: Pop(0)
0x50b: Push((int) 10)
0x50c: @ irand(Stack[-5], Stack[-1])
0x50d: Pop(1)
0x50e: Push((int) 5)
0x50f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x510: @ Sleep(Stack[-1], Stack[-4])
0x511: Pop(1)
0x512: Push(Stack[-3])
0x513: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x514: PushEmpty()
0x515: Call2 0x4f4

0x516: Pop(0)
0x517: GOTO 0x555

0x518: PushEmpty()
0x519: Call2 0x55c

0x51a: Pop(0)
0x51b: @ GetPFPosition(Stack[-2])
0x51c: Pop(0)
0x51d: PushEmpty(float, cvector, cvector)
0x51e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51f: Stack[-1] = Stack[-5]
0x520: Call2 0x7d8

0x521: Pop(2)
0x522: Push((int) 40000)
0x523: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x525: @ FindPathTo(Stack[-1], Stack[-1])
0x526: Pop(0)
0x527: Pop(0); Push(( Stack[-1] != 0 )
0x528: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x529: @ RotatePath(Stack[-1], Stack[-3])
0x52a: Pop(0)
0x52b: Pop(0); Push((bool) Stack[-3] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: GOTO 0x554

0x52e: Push((bool) 0)
0x52f: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x530: Pop(1)
0x531: Pop(0); Push((bool) Stack[-3] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x533: GOTO 0x554

0x534: Push(CvectorIndex(Stack[-0], 0))
0x535: Push(CvectorIndex(Stack[-0], 2))
0x536: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x537: Pop(2)
0x538: Pop(0); Push((bool) Stack[-3] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x53a: GOTO 0x554

0x53b: @ WaitForAnimEnd(Stack[-3])
0x53c: Pop(0)
0x53d: Pop(0); Push((bool) Stack[-3] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: GOTO 0x554

0x540: GOTO 0x555

0x541: GOTO 0x545

0x542: Push((int) 1)
0x543: @ Sleep(Stack[-1])
0x544: Pop(1)
0x545: Stack[-1] = 0
0x546: GOTO 0x554

0x547: Push(CvectorIndex(Stack[-0], 0))
0x548: Push(CvectorIndex(Stack[-0], 2))
0x549: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x54a: Pop(2)
0x54b: Pop(0); Push((bool) Stack[-3] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54d: GOTO 0x554

0x54e: @ WaitForAnimEnd(Stack[-3])
0x54f: Pop(0)
0x550: Pop(0); Push((bool) Stack[-3] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: GOTO 0x554

0x553: GOTO 0x555

0x554: GOTO 0x518

0x555: GOTO 0x508

0x556: Return(); Pop(8)

0x557: @ StopGroup0()
0x558: Pop(0)
0x559: @ Stop()
0x55a: Pop(0)
0x55b: Return(); Pop(0)

0x55c: Return(); Pop(0)

0x55d: PushEmpty()
0x55e: Push((int) 2)
0x55f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x561: Stack[-2] = "fire"
0x562: Return(); Pop(0)

0x563: GOTO 0x569

0x564: Push((int) 1)
0x565: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-2] = "bullet"
0x568: Return(); Pop(0)

0x569: Stack[-2] = "phys"
0x56a: Return(); Pop(0)

0x56b: PushEmpty(cvector, cvector, cvector, cvector)
0x56c: @ GetPosition(Stack[-2])
0x56d: Pop(0)
0x56e: @@ GetPosition(Stack[-1])
0x56f: Pop(0)
0x570: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x571: Return(); Pop(4)

0x572: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x573: @ GetPosition(Stack[-3])
0x574: Pop(0)
0x575: @@ GetPosition(Stack[-2])
0x576: Pop(0)
0x577: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x578: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x579: Return(); Pop(6)

0x57a: PushEmpty(object, object)
0x57b: Push("player")
0x57c: @ FindActor(Stack[-2], Stack[-1])
0x57d: Pop(1)
0x57e: Stack[-3] = Stack[-1]
0x57f: Return(); Pop(2)

0x580: Stack[-1] = 0
0x581: PushEmpty(bool, bool)
0x582: @ IsPlayerActor(Stack[-3], Stack[-1])
0x583: Pop(0)
0x584: Stack[-4] = Stack[-1]
0x585: Return(); Pop(2)

0x586: PushEmpty(bool, bool)
0x587: Push("HasProperty")
0x588: Push((int) 2)
0x589: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x58a: Pop(1); Push((bool) Stack[-1] == 0)
0x58b: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58c: Stack[-5] = (bool) 0
0x58d: Return(); Pop(2)

0x58e: @@ HasProperty(Stack[-3], Stack[-1])
0x58f: Pop(0)
0x590: Stack[-5] = Stack[-1]
0x591: Return(); Pop(2)

0x592: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x593: PushEmpty(bool, object, string)
0x594: Stack[-2] = Stack[-18]
0x595: Stack[-1] = "health"
0x596: Call2 0x586

0x597: Pop(2)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-16] = (float) 0.0
0x59b: Return(); Pop(12)

0x59c: PushEmpty(bool, object, string)
0x59d: Stack[-2] = Stack[-18]
0x59e: Stack[-1] = "armor"
0x59f: Call2 0x586

0x5a0: Pop(2)
0x5a1: Pop(1); Push((bool) Stack[-1] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-6] = (int) 0
0x5a4: GOTO 0x5a8

0x5a5: Push("armor")
0x5a6: @@ GetProperty(Stack[-1], Stack[-7])
0x5a7: Pop(1)
0x5a8: Push("armor_")
0x5a9: PushEmpty(string, int)
0x5aa: Stack[-1] = Stack[-16]
0x5ab: Call2 0x55d

0x5ac: Pop(1)
0x5ad: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5ae: PushEmpty(bool, object, string)
0x5af: Stack[-2] = Stack[-18]
0x5b0: Stack[-1] = Stack[-8]
0x5b1: Call2 0x586

0x5b2: Pop(2)
0x5b3: Pop(1); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: Stack[-4] = (int) 0
0x5b6: GOTO 0x5b9

0x5b7: @@ GetProperty(Stack[-5], Stack[-4])
0x5b8: Pop(0)
0x5b9: PushEmpty(float, float, float)
0x5ba: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5bb: Push((float)100.0)
0x5bc: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5bd: Stack[-1] = (int) 1
0x5be: Call2 0x7dc

0x5bf: Stack[-6] = Stack[-3]
0x5c0: Pop(3)
0x5c1: Push("health")
0x5c2: @@ GetProperty(Stack[-1], Stack[-3])
0x5c3: Pop(1)
0x5c4: Push((int) 1)
0x5c5: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5c6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5c7: Push("health")
0x5c8: PushEmpty(float, float, float, float)
0x5c9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5ca: Stack[-2] = (int) 0
0x5cb: Stack[-1] = (int) 1
0x5cc: Call2 0x7e3

0x5cd: Pop(3)
0x5ce: @@ SetProperty(Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: PushEmpty(bool, object)
0x5d1: Stack[-1] = Stack[-17]
0x5d2: Call2 0x581

0x5d3: Pop(1)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d5: PushEmpty(float)
0x5d6: Stack[-1] = -Stack[-2]; Pop(0);
0x5d7: Call2 0x822

0x5d8: Pop(1)
0x5d9: Stack[-16] = Stack[-1]
0x5da: Return(); Pop(12)

0x5db: PushEmpty(bool, bool)
0x5dc: @@ IsDead(Stack[-1])
0x5dd: Pop(0)
0x5de: Stack[-4] = Stack[-1]
0x5df: Return(); Pop(2)

0x5e0: PushEmpty(object, object, object, object)
0x5e1: Pop(0); Push((bool) Stack[-5] == 0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: Stack[-6] = (bool) 0
0x5e4: Return(); Pop(4)

0x5e5: PushEmpty(bool)
0x5e6: Stack[-1] = (bool) 0
0x5e7: Push("IsDead")
0x5e8: Push((int) 1)
0x5e9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5eb: PushEmpty(bool, object)
0x5ec: Stack[-1] = Stack[-8]
0x5ed: Call2 0x5db

0x5ee: Pop(1)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5f0: Stack[-1] = (bool) 1
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: Stack[-6] = (bool) 0
0x5f3: Return(); Pop(4)

0x5f4: @ GetScene(Stack[-2])
0x5f5: Pop(0)
0x5f6: Pop(0); Push((bool) Stack[-2] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-6] = (bool) 0
0x5f9: Return(); Pop(4)

0x5fa: @@ GetScene(Stack[-1])
0x5fb: Pop(0)
0x5fc: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-6] = (bool) 0
0x5ff: Return(); Pop(4)

0x600: Stack[-6] = (bool) 1
0x601: Return(); Pop(4)

0x602: Stack[-1] = 0
0x603: Stack[-2] = 0
0x604: PushEmpty(int, int)
0x605: PushEmpty(bool, object)
0x606: Stack[-1] = Stack[-5]
0x607: Call2 0x5e0

0x608: Pop(1)
0x609: Pop(1); Push((bool) Stack[-1] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60b: Stack[-4] = (bool) 0
0x60c: Return(); Pop(2)

0x60d: PushEmpty(bool, object, string)
0x60e: Stack[-2] = Stack[-6]
0x60f: Stack[-1] = "noaccess"
0x610: Call2 0x586

0x611: Pop(2)
0x612: Pop(1); Push((bool) Stack[-1] == 0)
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-4] = (bool) 1
0x615: Return(); Pop(2)

0x616: Push("noaccess")
0x617: @@ GetProperty(Stack[-1], Stack[-2])
0x618: Pop(1)
0x619: Push((int) 0)
0x61a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x61b: Return(); Pop(2)

0x61c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x61d: Pop(0); Push((bool) Stack[-15] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61f: Return(); Pop(14)

0x620: @ IsDead(Stack[-7])
0x621: Pop(0)
0x622: Push(Stack[-7])
0x623: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x624: Return(); Pop(14)

0x625: @ GetSecondaryAnimationType(Stack[-6])
0x626: Pop(0)
0x627: Push((int) 0)
0x628: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x62a: Return(); Pop(14)

0x62b: @@ GetPosition(Stack[-5])
0x62c: Pop(0)
0x62d: @ GetPosition(Stack[-4])
0x62e: Pop(0)
0x62f: @ GetDirection(Stack[-3])
0x630: Pop(0)
0x631: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x632: Push(CvectorIndex(Stack[-2], 0))
0x633: Push(CvectorIndex(Stack[-4], 0))
0x634: Pop(2); Push(Stack[-2] * Stack[-1]);
0x635: Push(CvectorIndex(Stack[-3], 2))
0x636: Push(CvectorIndex(Stack[-5], 2))
0x637: Pop(2); Push(Stack[-2] * Stack[-1]);
0x638: Pop(2); Push(Stack[-2] + Stack[-1]);
0x639: Push((int) 0)
0x63a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[-1] = "fhit"
0x63d: GOTO 0x63f

0x63e: Stack[-1] = "bhit"
0x63f: Push("hit_react")
0x640: Push("1")
0x641: Pop(1); Push(Stack[-3] + Stack[-1]);
0x642: Push("2")
0x643: Pop(1); Push(Stack[-4] + Stack[-1]);
0x644: Push((int) -10)
0x645: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x646: Pop(4)
0x647: Return(); Pop(14)

0x648: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x649: PushEmpty(bool)
0x64a: Stack[-1] = (bool) 0
0x64b: PushEmpty(bool)
0x64c: Stack[-1] = (bool) 0
0x64d: Push(Stack[-23])
0x64e: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64f: Push((int) 4)
0x650: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x652: Stack[-1] = (bool) 1
0x653: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x654: Push((int) 5)
0x655: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[-1] = (bool) 1
0x658: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x659: PushEmpty(cvector, cvector)
0x65a: PushEmpty(cvector, object)
0x65b: Stack[-1] = Stack[-25]
0x65c: Call2 0x56b

0x65d: Stack[-3] = Stack[-2]
0x65e: Pop(2)
0x65f: Call2 0x7ce

0x660: Stack[-11] = Stack[-2]
0x661: Pop(2)
0x662: @ CreateVectorVector(Stack[-8])
0x663: Pop(0)
0x664: Stack[-7] = (int) 1
0x665: Push("hit")
0x666: Pop(1); Push(Stack[-1] + Stack[-8]);
0x667: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x668: Pop(1)
0x669: Pop(0); Push((bool) Stack[-6] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66b: GOTO 0x675

0x66c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x66d: Push((float)0.70711)
0x66e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: @@ add(Stack[-5])
0x671: Pop(0)
0x672: Push((int) 1)
0x673: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x674: GOTO 0x665

0x675: @@ size(Stack[-3])
0x676: Pop(0)
0x677: Push(Stack[-3])
0x678: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x679: @ irand(Stack[-2], Stack[-3])
0x67a: Pop(0)
0x67b: @@ get(Stack[-1], Stack[-2])
0x67c: Pop(0)
0x67d: PushEmpty(object, int, float, cvector, cvector)
0x67e: Stack[-5] = Stack[-26]
0x67f: Stack[-4] = Stack[-25]
0x680: Stack[-3] = Stack[-24]
0x681: Stack[-2] = Stack[-6]
0x682: Stack[-1] = -Stack[-14]; Pop(0);
0x683: Call2 0x68c

0x684: Pop(5)
0x685: Return(); Pop(18)

0x686: Stack[-8] = 0
0x687: PushEmpty(object)
0x688: Stack[-1] = Stack[-22]
0x689: Call2 0x61c

0x68a: Pop(1)
0x68b: Return(); Pop(18)

0x68c: PushEmpty(object, object, object, object)
0x68d: @ GetScene(Stack[-2])
0x68e: Pop(0)
0x68f: Push("scripted")
0x690: Push("blood_dir.xml")
0x691: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x692: Pop(2)
0x693: PushEmpty(object)
0x694: Stack[-1] = Stack[-10]
0x695: Call2 0x61c

0x696: Pop(1)
0x697: Return(); Pop(4)

0x698: Stack[-1] = 0
0x699: Stack[-2] = 0
0x69a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x69b: @@ GetPosition(Stack[-3])
0x69c: Pop(0)
0x69d: @ GetPosition(Stack[-2])
0x69e: Pop(0)
0x69f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6a0: Push(CvectorIndex(Stack[-1], 0))
0x6a1: Push(CvectorIndex(Stack[-2], 2))
0x6a2: @ RotateAsync(Stack[-2], Stack[-1])
0x6a3: Pop(2)
0x6a4: Return(); Pop(6)

0x6a5: PushEmpty(float, float, float, float)
0x6a6: @ GetEyesHeight(Stack[-2])
0x6a7: Pop(0)
0x6a8: @@ GetEyesHeight(Stack[-1])
0x6a9: Pop(0)
0x6aa: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6ab: Return(); Pop(4)

0x6ac: PushEmpty(bool, bool)
0x6ad: @ IsLoaded(Stack[-1])
0x6ae: Pop(0)
0x6af: Stack[-3] = Stack[-1]
0x6b0: Return(); Pop(2)

0x6b1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6b2: @@ GetPosition(Stack[-8])
0x6b3: Pop(0)
0x6b4: @@ GetEyesHeight(Stack[-9])
0x6b5: Pop(0)
0x6b6: Push(CvectorIndex(Stack[-8], 1))
0x6b7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6b8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6b9: @ GetPosition(Stack[-7])
0x6ba: Pop(0)
0x6bb: @ GetEyesHeight(Stack[-9])
0x6bc: Pop(0)
0x6bd: Push(CvectorIndex(Stack[-7], 1))
0x6be: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6bf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6c0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6c1: Push(CvectorIndex(Stack[-6], 1))
0x6c2: Stack[-1] = (int) 0
0x6c3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6c4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6c5: Pop(1); Push(Sqrt(Stack[-1]))
0x6c6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6c7: Stack[-5] = -Stack[-6]; Pop(0);
0x6c8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6c9: PushEmpty(cvector, cvector)
0x6ca: Push(CVector(0.0, 1.0, 0.0))
0x6cb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6cc: Call2 0x7ce

0x6cd: Pop(1)
0x6ce: Push((int) 25)
0x6cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d1: Push(CVector(0.0, 10.0, 0.0))
0x6d2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6d3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6d4: @ IsOverrideActive(Stack[-2])
0x6d5: Pop(0)
0x6d6: Push(Stack[-2])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d8: Stack[-21] = (bool) 0
0x6d9: Return(); Pop(18)

0x6da: @ StopWorld()
0x6db: Pop(0)
0x6dc: Push((bool) 1)
0x6dd: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x6de: Pop(1)
0x6df: Push(CvectorIndex(Stack[-4], 0))
0x6e0: Push(CvectorIndex(Stack[-5], 2))
0x6e1: @ Rotate(Stack[-2], Stack[-1])
0x6e2: Pop(2)
0x6e3: PushEmpty(bool)
0x6e4: Call2 0xaf2

0x6e5: Pop(0)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e7: GOTO 0x6f0

0x6e8: Push("head")
0x6e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6ea: Pop(1)
0x6eb: Push(Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ed: Push("head")
0x6ee: @ LookAsyncCamera(Stack[-1])
0x6ef: Pop(1)
0x6f0: @ CameraWaitForPlayFinish()
0x6f1: Pop(0)
0x6f2: @ ResumeWorld()
0x6f3: Pop(0)
0x6f4: Stack[-21] = (bool) 1
0x6f5: Return(); Pop(18)

0x6f6: PushEmpty(bool, bool)
0x6f7: Push((bool) 1)
0x6f8: @ CameraSwitchToNormal(Stack[-1])
0x6f9: Pop(1)
0x6fa: PushEmpty(bool)
0x6fb: Call2 0xaf2

0x6fc: Pop(0)
0x6fd: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fe: GOTO 0x707

0x6ff: Push("head")
0x700: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x701: Pop(1)
0x702: Push(Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x704: Push("head")
0x705: @ UnlookAsync(Stack[-1])
0x706: Pop(1)
0x707: Return(); Pop(2)

0x708: PushEmpty(bool, float, float, bool, float, float)
0x709: @ lshHasAnimation(Stack[-3], Stack[-7])
0x70a: Pop(0)
0x70b: Push(Stack[-3])
0x70c: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x70d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x70e: Pop(0)
0x70f: Push((bool) 0)
0x710: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(1)
0x712: GOTO 0x717

0x713: Push("Can't find lsh animation : ")
0x714: Pop(1); Push(Stack[-1] + Stack[-8]);
0x715: @ Trace(Stack[-1])
0x716: Pop(1)
0x717: Return(); Pop(6)

0x718: PushEmpty(bool, float, float, bool, float, float)
0x719: @ lshHasAnimation(Stack[-3], Stack[-8])
0x71a: Pop(0)
0x71b: Push(Stack[-3])
0x71c: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x71e: Pop(0)
0x71f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x720: Pop(0)
0x721: GOTO 0x726

0x722: Push("Can't find lsh animation : ")
0x723: Pop(1); Push(Stack[-1] + Stack[-9]);
0x724: @ Trace(Stack[-1])
0x725: Pop(1)
0x726: Return(); Pop(6)

0x727: PushEmpty(bool)
0x728: Call2 0xaf2

0x729: Pop(0)
0x72a: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72b: @ lshStopSpeech()
0x72c: Pop(0)
0x72d: Return(); Pop(0)

0x72e: PushEmpty(bool, bool)
0x72f: PushEmpty(bool, int, int)
0x730: Stack[-2] = Stack[-7]
0x731: Stack[-1] = Stack[-6]
0x732: Call2 0x7ee

0x733: Pop(2)
0x734: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x735: Push((int) 0)
0x736: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x737: Pop(1)
0x738: Return(); Pop(2)

0x739: PushEmpty(int, bool, int, bool)
0x73a: PushEmpty(bool, int, int)
0x73b: Stack[-2] = Stack[-10]
0x73c: Stack[-1] = Stack[-9]
0x73d: Call2 0x7ee

0x73e: Pop(2)
0x73f: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x740: @ irand(Stack[-2], Stack[-5])
0x741: Pop(0)
0x742: Push((int) 0)
0x743: Push((int) 1)
0x744: Pop(1); Push(Stack[-4] + Stack[-1]);
0x745: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x746: Pop(2)
0x747: Return(); Pop(4)

0x748: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x749: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x74a: Pop(0)
0x74b: Pop(0); Push((bool) Stack[-8] == 0)
0x74c: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x74d: Stack[-7] = (int) 0
0x74e: Push((int) 1)
0x74f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x750: Pop(1); Push(Stack[-18] + Stack[-1]);
0x751: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x752: Pop(1)
0x753: Pop(0); Push((bool) Stack[-6] == 0)
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: GOTO 0x759

0x756: Push((int) 1)
0x757: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x758: GOTO 0x74e

0x759: Pop(0); Push((bool) Stack[-7] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Return(); Pop(16)

0x75c: @ irand(Stack[-5], Stack[-7])
0x75d: Pop(0)
0x75e: Push((int) 1)
0x75f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x760: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x761: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x762: Pop(0)
0x763: Push(Stack[-4])
0x764: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x765: @ GetEyesHeight(Stack[-3])
0x766: Pop(0)
0x767: @ GetDirection(Stack[-2])
0x768: Pop(0)
0x769: Push((int) 50)
0x76a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x76b: Push(CvectorIndex(Stack[-1], 1))
0x76c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x76d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x76e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x76f: Pop(0)
0x770: Return(); Pop(16)

0x771: PushEmpty()
0x772: Stack[-2] = (bool) 1
0x773: PushEmpty(bool)
0x774: Stack[-1] = (bool) 1
0x775: PushEmpty(bool)
0x776: Stack[-1] = (bool) 1
0x777: PushEmpty(bool)
0x778: Stack[-1] = (bool) 1
0x779: PushEmpty(bool)
0x77a: Stack[-1] = (bool) 1
0x77b: PushEmpty(bool)
0x77c: Stack[-1] = (bool) 1
0x77d: PushEmpty(bool)
0x77e: Stack[-1] = (bool) 1
0x77f: PushEmpty(bool)
0x780: Stack[-1] = (bool) 1
0x781: PushEmpty(bool)
0x782: Stack[-1] = (bool) 1
0x783: PushEmpty(bool)
0x784: Stack[-1] = (bool) 1
0x785: PushEmpty(bool)
0x786: Stack[-1] = (bool) 1
0x787: PushEmpty(bool)
0x788: Stack[-1] = (bool) 1
0x789: Push("woman")
0x78a: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78c: Push("worker")
0x78d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: Stack[-1] = (bool) 0
0x790: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x791: Push("butcher")
0x792: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x794: Stack[-1] = (bool) 0
0x795: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x796: Push("wasted_girl")
0x797: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x799: Stack[-1] = (bool) 0
0x79a: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79b: Push("boy")
0x79c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79e: Stack[-1] = (bool) 0
0x79f: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a0: Push("vaxxabitka")
0x7a1: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Stack[-1] = (bool) 0
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a5: Push("unosha")
0x7a6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 0
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7aa: Push("wasted_male")
0x7ab: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ad: Stack[-1] = (bool) 0
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7af: Push("alkash")
0x7b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b2: Stack[-1] = (bool) 0
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b4: Push("dohodyaga")
0x7b5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b7: Stack[-1] = (bool) 0
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b9: Push("vaxxabit")
0x7ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: Stack[-1] = (bool) 0
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7be: Push("nudegirl")
0x7bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c1: Stack[-1] = (bool) 0
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c3: Push("morlok")
0x7c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c6: Stack[-2] = (bool) 0
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty(object, object)
0x7c9: @ self(Stack[-1])
0x7ca: Pop(0)
0x7cb: Stack[-3] = Stack[-1]
0x7cc: Return(); Pop(2)

0x7cd: Stack[-1] = 0
0x7ce: PushEmpty(float, float)
0x7cf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7d0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7d1: Push((float)0.0)
0x7d2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7d5: Return(); Pop(2)

0x7d6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7d7: Return(); Pop(2)

0x7d8: PushEmpty(cvector, cvector)
0x7d9: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x7da: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x7db: Return(); Pop(2)

0x7dc: PushEmpty()
0x7dd: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-3] = Stack[-2]
0x7e0: GOTO 0x7e2

0x7e1: Stack[-3] = Stack[-1]
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty()
0x7e4: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e6: Stack[-4] = Stack[-2]
0x7e7: Return(); Pop(0)

0x7e8: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-4] = Stack[-1]
0x7eb: Return(); Pop(0)

0x7ec: Stack[-4] = Stack[-3]
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty(int, int)
0x7ef: @ irand(Stack[-1], Stack[-3])
0x7f0: Pop(0)
0x7f1: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x7f2: Return(); Pop(2)

0x7f3: PushEmpty(object, object)
0x7f4: @ CreateObjectSet(Stack[-1])
0x7f5: Pop(0)
0x7f6: Stack[-3] = Stack[-1]
0x7f7: Return(); Pop(2)

0x7f8: Stack[-1] = 0
0x7f9: PushEmpty()
0x7fa: Push(CvectorIndex(Stack[-2], 0))
0x7fb: Push(CvectorIndex(Stack[-2], 0))
0x7fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7fd: Push(CvectorIndex(Stack[-3], 2))
0x7fe: Push(CvectorIndex(Stack[-3], 2))
0x7ff: Pop(2); Push(Stack[-2] * Stack[-1]);
0x800: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x801: Return(); Pop(0)

0x802: PushEmpty()
0x803: Push(CvectorIndex(Stack[-1], 0))
0x804: Push(CvectorIndex(Stack[-2], 0))
0x805: Pop(2); Push(Stack[-2] * Stack[-1]);
0x806: Push(CvectorIndex(Stack[-2], 2))
0x807: Push(CvectorIndex(Stack[-3], 2))
0x808: Pop(2); Push(Stack[-2] * Stack[-1]);
0x809: Pop(2); Push(Stack[-2] + Stack[-1]);
0x80a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: PushEmpty(float, cvector, cvector)
0x80e: Stack[-2] = Stack[-5]
0x80f: Stack[-1] = Stack[-4]
0x810: Call2 0x7f9

0x811: Pop(2)
0x812: PushEmpty(float, cvector)
0x813: Stack[-1] = Stack[-5]
0x814: Call2 0x802

0x815: Pop(1)
0x816: PushEmpty(float, cvector)
0x817: Stack[-1] = Stack[-5]
0x818: Call2 0x802

0x819: Pop(1)
0x81a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x81b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x81c: Return(); Pop(0)

0x81d: PushEmpty(int, int)
0x81e: @ GetVariable(Stack[-3], Stack[-1])
0x81f: Pop(0)
0x820: Stack[-4] = Stack[-1]
0x821: Return(); Pop(2)

0x822: PushEmpty(object, object)
0x823: @ CreateFloatVector(Stack[-1])
0x824: Pop(0)
0x825: @@ add(Stack[-3])
0x826: Pop(0)
0x827: Push((int) 0)
0x828: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82a: Push((float)0.7)
0x82b: Push((int) 500)
0x82c: @ RumblePlay(Stack[-2], Stack[-1])
0x82d: Pop(2)
0x82e: Push((int) 15)
0x82f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x830: Pop(1)
0x831: Return(); Pop(2)

0x832: Stack[-1] = 0
0x833: PushEmpty(object, object)
0x834: @ FindActor(Stack[-1], Stack[-4])
0x835: Pop(0)
0x836: Pop(0); Push((bool) Stack[-1] == 0)
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-5] = (bool) 0
0x839: Return(); Pop(2)

0x83a: @ Trigger(Stack[-1], Stack[-3])
0x83b: Pop(0)
0x83c: Stack[-5] = (bool) 1
0x83d: Return(); Pop(2)

0x83e: Stack[-1] = 0
0x83f: PushEmpty(bool, bool)
0x840: @ IsPlayerActor(Stack[-3], Stack[-1])
0x841: Pop(0)
0x842: Push(Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x844: Push("attack")
0x845: @ PlayGlobalMusic(Stack[-1])
0x846: Pop(1)
0x847: Return(); Pop(2)

0x848: PushEmpty(object, object)
0x849: @ GetScene(Stack[-1])
0x84a: Pop(0)
0x84b: Push("battle")
0x84c: PushEmpty(object)
0x84d: Call2 0x7c8

0x84e: Pop(0)
0x84f: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x850: Pop(2)
0x851: Return(); Pop(2)

0x852: Stack[-1] = 0
0x853: PushEmpty()
0x854: Push("d10q01SoldierTalk")
0x855: Push((int) 1)
0x856: @ SetVariable(Stack[-2], Stack[-1])
0x857: Pop(2)
0x858: Return(); Pop(0)

0x859: PushEmpty()
0x85a: Push("ood10MSoldier1")
0x85b: Push((int) 1)
0x85c: @ SetVariable(Stack[-2], Stack[-1])
0x85d: Pop(2)
0x85e: Return(); Pop(0)

0x85f: PushEmpty()
0x860: Push("ood10MSoldier2")
0x861: Push((int) 1)
0x862: @ SetVariable(Stack[-2], Stack[-1])
0x863: Pop(2)
0x864: Return(); Pop(0)

0x865: PushEmpty()
0x866: PushEmpty()
0x867: Call2 0x889

0x868: Pop(0)
0x869: Return(); Pop(0)

0x86a: PushEmpty()
0x86b: PushEmpty(bool, string, string)
0x86c: Stack[-2] = "quest_d10_01"
0x86d: Stack[-1] = "soldier_fight"
0x86e: Call2 0x833

0x86f: Pop(3)
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: PushEmpty(int, string)
0x873: Stack[-1] = "ood10MSoldier1"
0x874: Call2 0x81d

0x875: Pop(1)
0x876: Push((int) 0)
0x877: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-2] = (bool) 1
0x87a: Return(); Pop(0)

0x87b: Stack[-2] = (bool) 0
0x87c: Return(); Pop(0)

0x87d: PushEmpty()
0x87e: PushEmpty(int, string)
0x87f: Stack[-1] = "ood10MSoldier2"
0x880: Call2 0x81d

0x881: Pop(1)
0x882: Push((int) 0)
0x883: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x885: Stack[-2] = (bool) 1
0x886: Return(); Pop(0)

0x887: Stack[-2] = (bool) 0
0x888: Return(); Pop(0)

0x889: PushEmpty(object, object)
0x88a: Push((int) 188)
0x88b: Push((int) 1)
0x88c: Push((int) 515473)
0x88d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x88e: Pop(3)
0x88f: PushEmpty(bool, object, int)
0x890: Stack[-2] = Stack[-4]
0x891: Stack[-1] = (int) 186
0x892: Call2 0x8a3

0x893: Pop(3)
0x894: Return(); Pop(2)

0x895: Stack[-1] = 0
0x896: PushEmpty(object, object)
0x897: @ GetDiaryRoot(Stack[-1])
0x898: Pop(0)
0x899: Pop(0); Push((bool) Stack[-1] == 0)
0x89a: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89b: Push("Can't retrieve diary root")
0x89c: @ Trace(Stack[-1])
0x89d: Pop(1)
0x89e: Stack[-3] = (bool) 0
0x89f: Return(); Pop(2)

0x8a0: Stack[-3] = Stack[-1]
0x8a1: Return(); Pop(2)

0x8a2: Stack[-1] = 0
0x8a3: PushEmpty(object, object, int, object, object, int)
0x8a4: PushEmpty(object)
0x8a5: Call2 0x896

0x8a6: Stack[-4] = Stack[-1]
0x8a7: Pop(1)
0x8a8: @@ Find(Stack[-7], Stack[-2])
0x8a9: Pop(0)
0x8aa: Pop(0); Push((bool) Stack[-2] == 0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8ac: Push("Can't find diary parent with id: ")
0x8ad: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8ae: @ Trace(Stack[-1])
0x8af: Pop(1)
0x8b0: Stack[-9] = (bool) 0
0x8b1: Return(); Pop(6)

0x8b2: @@ AddChild(Stack[-8])
0x8b3: Pop(0)
0x8b4: Push((int) 7)
0x8b5: @ SendWorldWndMessage(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ GetCategory(Stack[-1])
0x8b8: Pop(0)
0x8b9: @ SetDiarySection(Stack[-1])
0x8ba: Pop(0)
0x8bb: Stack[-9] = (bool) 0
0x8bc: Return(); Pop(6)

0x8bd: Stack[-2] = 0
0x8be: Stack[-3] = 0
0x8bf: PushEmpty(int, int)
0x8c0: Push("branch")
0x8c1: @ GetVariable(Stack[-1], Stack[-2])
0x8c2: Pop(1)
0x8c3: Push((int) 0)
0x8c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c6: Stack[-3] = (int) 1
0x8c7: Return(); Pop(2)

0x8c8: GOTO 0x8ce

0x8c9: Push((int) 1)
0x8ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cc: Stack[-3] = (int) 2
0x8cd: Return(); Pop(2)

0x8ce: Stack[-3] = (int) 3
0x8cf: Return(); Pop(2)

0x8d0: PushEmpty(int, int)
0x8d1: Push("branch")
0x8d2: @ GetVariable(Stack[-1], Stack[-2])
0x8d3: Pop(1)
0x8d4: Stack[-3] = Stack[-1]
0x8d5: Return(); Pop(2)

0x8d6: PushEmpty()
0x8d7: PushEmpty(int)
0x8d8: Call2 0x8d0

0x8d9: Pop(0)
0x8da: Push((int) 1)
0x8db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8dd: @ WorkWithCorpse(Stack[-1])
0x8de: Pop(0)
0x8df: GOTO 0x8e2

0x8e0: @ Barter(Stack[-1])
0x8e1: Pop(0)
0x8e2: Return(); Pop(0)

0x8e3: PushEmpty(int, bool, int, bool)
0x8e4: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e6: Push("GenerateMoney: iMin > iMax")
0x8e7: @ Trace(Stack[-1])
0x8e8: Pop(1)
0x8e9: Return(); Pop(4)

0x8ea: Stack[-2] = (int) 0
0x8eb: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ed: Pop(0); Push(Stack[-5] - Stack[-6]);
0x8ee: @ irand(Stack[-3], Stack[-1])
0x8ef: Pop(1)
0x8f0: GOTO 0x8f5

0x8f1: Push((int) 0)
0x8f2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f4: Return(); Pop(4)

0x8f5: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x8f6: Push((int) 0)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f9: Return(); Pop(4)

0x8fa: PushEmpty(int, string)
0x8fb: Stack[-1] = "Money"
0x8fc: Call2 0x94f

0x8fd: Pop(1)
0x8fe: Push((int) 0)
0x8ff: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x900: Pop(2)
0x901: Return(); Pop(4)

0x902: PushEmpty(object, int, bool, object, int, bool)
0x903: @ CreateInvItem(Stack[-3])
0x904: Pop(0)
0x905: @@ SetItemName(Stack[-7])
0x906: Pop(0)
0x907: Push("Organ")
0x908: Push((int) 1)
0x909: @@ SetProperty(Stack[-2], Stack[-1])
0x90a: Pop(2)
0x90b: @@ GetItemID(Stack[-2])
0x90c: Pop(0)
0x90d: Push((int) 0)
0x90e: Push((int) 1)
0x90f: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x910: Pop(2)
0x911: Return(); Pop(6)

0x912: Stack[-3] = 0
0x913: PushEmpty(int)
0x914: Call2 0x8d0

0x915: Pop(0)
0x916: Push((int) 1)
0x917: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x919: Return(); Pop(0)

0x91a: PushEmpty(string)
0x91b: Stack[-1] = "liver"
0x91c: Call2 0x902

0x91d: Pop(1)
0x91e: PushEmpty(string)
0x91f: Stack[-1] = "kidney"
0x920: Call2 0x902

0x921: Pop(1)
0x922: PushEmpty(string)
0x923: Stack[-1] = "heart"
0x924: Call2 0x902

0x925: Pop(1)
0x926: PushEmpty(string)
0x927: Stack[-1] = "blood"
0x928: Call2 0x902

0x929: Pop(1)
0x92a: Return(); Pop(0)

0x92b: PushEmpty(int, bool, int, bool)
0x92c: Push((int) 0)
0x92d: @ ClearSubContainer(Stack[-1])
0x92e: Pop(1)
0x92f: PushEmpty(int, int)
0x930: Stack[-2] = (int) 500
0x931: Stack[-1] = (int) 1000
0x932: Call2 0x8e3

0x933: Pop(2)
0x934: PushEmpty(string, int, int, int)
0x935: Stack[-4] = "rifle_ammo"
0x936: Stack[-3] = (int) 1
0x937: Stack[-2] = (int) 3
0x938: Stack[-1] = (int) 3
0x939: Call2 0x739

0x93a: Pop(4)
0x93b: PushEmpty(string, int, int, int)
0x93c: Stack[-4] = "rusk"
0x93d: Stack[-3] = (int) 1
0x93e: Stack[-2] = (int) 3
0x93f: Stack[-1] = (int) 2
0x940: Call2 0x739

0x941: Pop(4)
0x942: PushEmpty(string, int, int)
0x943: Stack[-3] = "bandage"
0x944: Stack[-2] = (int) 1
0x945: Stack[-1] = (int) 6
0x946: Call2 0x72e

0x947: Pop(3)
0x948: PushEmpty(string, int, int)
0x949: Stack[-3] = "tourniquet"
0x94a: Stack[-2] = (int) 1
0x94b: Stack[-1] = (int) 6
0x94c: Call2 0x72e

0x94d: Pop(3)
0x94e: Return(); Pop(4)

0x94f: PushEmpty(int, int)
0x950: @ GetInvItemByName(Stack[-1], Stack[-3])
0x951: Pop(0)
0x952: Stack[-4] = Stack[-1]
0x953: Return(); Pop(2)

0x954: PushEmpty()
0x955: PushEmpty(object)
0x956: Stack[-1] = Stack[-2]
0x957: Push(-1, 0); TaskCall(3)
0x958: Call2 0x220

0x959: Pop(-1, 0); TaskReturn
0x95a: Pop(1)
0x95b: Return(); Pop(0)

0x95c: PushEmpty()
0x95d: PushEmpty(object, int, float)
0x95e: Stack[-3] = Stack[-7]
0x95f: Stack[-2] = Stack[-6]
0x960: Stack[-1] = Stack[-5]
0x961: Call2 0x648

0x962: Pop(3)
0x963: Return(); Pop(0)

0x964: PushEmpty()
0x965: PushEmpty(object, int, float, cvector, cvector)
0x966: Stack[-5] = Stack[-11]
0x967: Stack[-4] = Stack[-10]
0x968: Stack[-3] = Stack[-9]
0x969: Stack[-2] = Stack[-7]
0x96a: Stack[-1] = Stack[-6]
0x96b: Call2 0x68c

0x96c: Pop(5)
0x96d: Return(); Pop(0)

0x96e: PushEmpty(float, float)
0x96f: Push("health")
0x970: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x971: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x972: Push("health")
0x973: @ GetProperty(Stack[-1], Stack[-2])
0x974: Pop(1)
0x975: Push((int) 0)
0x976: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: @ SignalDeath(Stack[-4])
0x979: Pop(0)
0x97a: Return(); Pop(2)

0x97b: PushEmpty()
0x97c: PushEmpty(bool, object)
0x97d: Stack[-1] = Stack[-3]
0x97e: Call2 0x581

0x97f: Pop(1)
0x980: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x981: PushEmpty(object)
0x982: Call2 0x7c8

0x983: Pop(0)
0x984: Push((float)0.0)
0x985: Push((bool) 1)
0x986: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x987: Pop(3)
0x988: PushEmpty(object)
0x989: Stack[-1] = Stack[-2]
0x98a: Call2 0xae4

0x98b: Pop(1)
0x98c: Return(); Pop(0)

0x98d: PushEmpty(string, string)
0x98e: PushEmpty(bool, object, string)
0x98f: Stack[-2] = Stack[-7]
0x990: Stack[-1] = "class"
0x991: Call2 0x586

0x992: Pop(2)
0x993: Pop(1); Push((bool) Stack[-1] == 0)
0x994: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x995: Stack[-5] = (bool) 0
0x996: Return(); Pop(2)

0x997: Push("class")
0x998: @@ GetProperty(Stack[-1], Stack[-2])
0x999: Pop(1)
0x99a: PushEmpty(bool)
0x99b: Stack[-1] = (bool) 1
0x99c: PushEmpty(bool)
0x99d: Stack[-1] = (bool) 1
0x99e: PushEmpty(bool)
0x99f: Stack[-1] = (bool) 1
0x9a0: PushEmpty(bool)
0x9a1: Stack[-1] = (bool) 1
0x9a2: PushEmpty(bool)
0x9a3: Stack[-1] = (bool) 1
0x9a4: PushEmpty(bool)
0x9a5: Stack[-1] = (bool) 1
0x9a6: PushEmpty(bool)
0x9a7: Stack[-1] = (bool) 1
0x9a8: PushEmpty(bool)
0x9a9: Stack[-1] = (bool) 1
0x9aa: PushEmpty(bool)
0x9ab: Stack[-1] = (bool) 1
0x9ac: PushEmpty(bool)
0x9ad: Stack[-1] = (bool) 1
0x9ae: Push("patrol")
0x9af: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b1: Push("sanitar")
0x9b2: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: Stack[-1] = (bool) 0
0x9b5: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b6: Push("soldier")
0x9b7: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b9: Stack[-1] = (bool) 0
0x9ba: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9bb: Push("woman")
0x9bc: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9be: Stack[-1] = (bool) 0
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c0: Push("wasted_girl")
0x9c1: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c3: Stack[-1] = (bool) 0
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c5: Push("vaxxabitka")
0x9c6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: Stack[-1] = (bool) 0
0x9c9: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9ca: Push("vaxxabit")
0x9cb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: Stack[-1] = (bool) 0
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9cf: Push("little_girl")
0x9d0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d2: Stack[-1] = (bool) 0
0x9d3: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d4: Push("girl")
0x9d5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d7: Stack[-1] = (bool) 0
0x9d8: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d9: Push("dohodyaga")
0x9da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9dc: Stack[-1] = (bool) 0
0x9dd: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9de: Push("nudegirl")
0x9df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e1: Stack[-1] = (bool) 0
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e3: Stack[-5] = (bool) 1
0x9e4: Return(); Pop(2)

0x9e5: Push(Stack[-3])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e7: Stack[-5] = (bool) 0
0x9e8: Return(); Pop(2)

0x9e9: Stack[-5] = (bool) 1
0x9ea: PushEmpty(bool)
0x9eb: Stack[-1] = (bool) 1
0x9ec: PushEmpty(bool)
0x9ed: Stack[-1] = (bool) 1
0x9ee: PushEmpty(bool)
0x9ef: Stack[-1] = (bool) 1
0x9f0: PushEmpty(bool)
0x9f1: Stack[-1] = (bool) 1
0x9f2: PushEmpty(bool)
0x9f3: Stack[-1] = (bool) 1
0x9f4: Push("worker")
0x9f5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f7: Push("butcher")
0x9f8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Stack[-1] = (bool) 0
0x9fb: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fc: Push("boy")
0x9fd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ff: Stack[-1] = (bool) 0
0xa00: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa01: Push("unosha")
0xa02: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa04: Stack[-1] = (bool) 0
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: Push("wasted_male")
0xa07: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa08: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa09: Stack[-1] = (bool) 0
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0b: Push("alkash")
0xa0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0e: Stack[-1] = (bool) 0
0xa0f: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa10: Push("morlok")
0xa11: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa12: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa13: Stack[-5] = (bool) 0
0xa14: Return(); Pop(2)

0xa15: Push(GlobalVars[0])
0xa16: PushEmpty(object)
0xa17: Call2 0x7f3

0xa18: Stack[-2] = Stack[-1]
0xa19: Pop(1)
0xa1a: GlobalVars[0] = Stack[-1]; Pop(1)
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty()
0xa1d: PushEmpty(object, bool)
0xa1e: Stack[-2] = Stack[-4]
0xa1f: Stack[-1] = Stack[-3]
0xa20: Push(-2, 3); TaskCall(5)
0xa21: Call2 0x33d

0xa22: Pop(-2, 3); TaskReturn
0xa23: Pop(2)
0xa24: @ ResetAAS()
0xa25: Pop(0)
0xa26: Return(); Pop(0)

0xa27: PushEmpty(bool, bool)
0xa28: Pop(0); Push((bool) Stack[-3] == 0)
0xa29: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa2a: Return(); Pop(2)

0xa2b: Push(GlobalVars[0])
0xa2c: @@ in(Stack[-2], Stack[-4])
0xa2d: Pop(1)
0xa2e: Pop(0); Push((bool) Stack[-1] == 0)
0xa2f: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa30: Push(GlobalVars[0])
0xa31: @@ add(Stack[-4])
0xa32: Pop(1)
0xa33: PushEmpty(bool, object)
0xa34: Stack[-1] = Stack[-5]
0xa35: Call2 0x581

0xa36: Pop(1)
0xa37: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa38: PushEmpty(object)
0xa39: Call2 0x7c8

0xa3a: Pop(0)
0xa3b: Push((float)0.0)
0xa3c: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0xa3d: Pop(2)
0xa3e: Return(); Pop(2)

0xa3f: PushEmpty()
0xa40: PushEmpty(object)
0xa41: Stack[-1] = Stack[-2]
0xa42: Call2 0xa27

0xa43: Pop(1)
0xa44: PushEmpty(object, bool)
0xa45: Stack[-2] = Stack[-3]
0xa46: Stack[-1] = (bool) 1
0xa47: Call2 0xa1c

0xa48: Pop(2)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(float, string, float, float, string, float)
0xa4b: PushEmpty(bool, object)
0xa4c: Stack[-1] = Stack[-9]
0xa4d: Call2 0x604

0xa4e: Pop(1)
0xa4f: Pop(1); Push((bool) Stack[-1] == 0)
0xa50: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa51: Stack[-8] = (bool) 0
0xa52: Return(); Pop(6)

0xa53: PushEmpty(bool, object)
0xa54: Stack[-1] = Stack[-9]
0xa55: Call2 0x581

0xa56: Pop(1)
0xa57: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa58: Push("reputation")
0xa59: @@ GetProperty(Stack[-1], Stack[-4])
0xa5a: Pop(1)
0xa5b: Push((float)0.33)
0xa5c: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0xa5d: Return(); Pop(6)

0xa5e: PushEmpty(bool, object, string)
0xa5f: Stack[-2] = Stack[-10]
0xa60: Stack[-1] = "class"
0xa61: Call2 0x586

0xa62: Pop(2)
0xa63: Pop(1); Push((bool) Stack[-1] == 0)
0xa64: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa65: Stack[-8] = (bool) 0
0xa66: Return(); Pop(6)

0xa67: Push("class")
0xa68: @@ GetProperty(Stack[-1], Stack[-3])
0xa69: Pop(1)
0xa6a: PushEmpty(bool)
0xa6b: Stack[-1] = (bool) 1
0xa6c: PushEmpty(bool)
0xa6d: Stack[-1] = (bool) 1
0xa6e: Push("bomber")
0xa6f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa71: Push("hunter")
0xa72: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa74: Stack[-1] = (bool) 0
0xa75: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa76: Push("grabitel")
0xa77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa79: Stack[-1] = (bool) 0
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa7b: Stack[-8] = (bool) 1
0xa7c: Return(); Pop(6)

0xa7d: PushEmpty(bool, object, string)
0xa7e: Stack[-2] = Stack[-10]
0xa7f: Stack[-1] = "disease"
0xa80: Call2 0x586

0xa81: Pop(2)
0xa82: Pop(1); Push((bool) Stack[-1] == 0)
0xa83: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa84: Stack[-8] = (bool) 0
0xa85: Return(); Pop(6)

0xa86: PushEmpty(bool)
0xa87: Stack[-1] = (bool) 1
0xa88: PushEmpty(bool, string)
0xa89: Stack[-1] = Stack[-5]
0xa8a: Call2 0x771

0xa8b: Pop(1)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8d: Push("dog")
0xa8e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8f: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa90: Stack[-1] = (bool) 0
0xa91: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa92: Push("disease")
0xa93: @@ GetProperty(Stack[-1], Stack[-2])
0xa94: Pop(1)
0xa95: Push((int) 0)
0xa96: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0xa97: Return(); Pop(6)

0xa98: Stack[-8] = (bool) 0
0xa99: Return(); Pop(6)

0xa9a: PushEmpty(bool, bool)
0xa9b: PushEmpty(bool, object)
0xa9c: Stack[-1] = Stack[-5]
0xa9d: Call2 0x604

0xa9e: Pop(1)
0xa9f: Pop(1); Push((bool) Stack[-1] == 0)
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xaa1: Stack[-4] = (bool) 0
0xaa2: Return(); Pop(2)

0xaa3: Push(GlobalVars[0])
0xaa4: @@ in(Stack[-2], Stack[-4])
0xaa5: Pop(1)
0xaa6: Push(Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa8: Stack[-4] = (bool) 1
0xaa9: Return(); Pop(2)

0xaaa: PushEmpty(bool, object)
0xaab: Stack[-1] = Stack[-5]
0xaac: Call2 0xa4a

0xaad: Stack[-6] = Stack[-2]
0xaae: Pop(2)
0xaaf: Return(); Pop(2)

0xab0: PushEmpty()
0xab1: PushEmpty(object)
0xab2: Stack[-1] = Stack[-2]
0xab3: Call2 0xad0

0xab4: Pop(1)
0xab5: Return(); Pop(0)

0xab6: PushEmpty(bool, bool)
0xab7: PushEmpty(bool, object, bool)
0xab8: Stack[-2] = Stack[-7]
0xab9: Stack[-1] = !Stack[-6]; Pop(0);
0xaba: Call2 0x98d

0xabb: Pop(2)
0xabc: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xabd: @ CanSee(Stack[-1], Stack[-5])
0xabe: Pop(0)
0xabf: PushEmpty(bool)
0xac0: Stack[-1] = (bool) 1
0xac1: Push(Stack[-2])
0xac2: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac3: PushEmpty(float, object)
0xac4: Stack[-1] = Stack[-8]
0xac5: Call2 0x572

0xac6: Pop(1)
0xac7: Push((float)490000.0)
0xac8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xac9: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xaca: Stack[-1] = (bool) 0
0xacb: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xacc: Stack[-6] = (bool) 1
0xacd: Return(); Pop(2)

0xace: Stack[-6] = (bool) 0
0xacf: Return(); Pop(2)

0xad0: PushEmpty(bool, bool)
0xad1: Push(GlobalVars[0])
0xad2: @@ in(Stack[-2], Stack[-4])
0xad3: Pop(1)
0xad4: Push(Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xad6: PushEmpty(object, bool)
0xad7: Stack[-2] = Stack[-5]
0xad8: Stack[-1] = (bool) 1
0xad9: Call2 0xa1c

0xada: Pop(2)
0xadb: Return(); Pop(2)

0xadc: PushEmpty(object)
0xadd: Call2 0x7c8

0xade: Pop(0)
0xadf: @ RemoveActor(Stack[-1])
0xae0: Pop(1)
0xae1: @ Hold()
0xae2: Pop(0)
0xae3: Return(); Pop(0)

0xae4: PushEmpty()
0xae5: PushEmpty(object)
0xae6: Stack[-1] = Stack[-2]
0xae7: Call2 0x954

0xae8: Pop(1)
0xae9: Return(); Pop(0)

0xaea: Stack[-1] = (int) 515597
0xaeb: Return(); Pop(0)

0xaec: Stack[-1] = (int) 514841
0xaed: Return(); Pop(0)

0xaee: Stack[-1] = "ui/NPC_Citizen2.png"
0xaef: Return(); Pop(0)

0xaf0: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xaf1: Return(); Pop(0)

0xaf2: Stack[-1] = (bool) 0
0xaf3: Return(); Pop(0)

