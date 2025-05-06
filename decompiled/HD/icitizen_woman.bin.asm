GlobalVarCount = 1
	G_VAR_0 bool 

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
	SetReturnValue
	branch
	GetItemID
	Price
	BarterPrice
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	liver
	kidney
	heart
	blood
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
	class
	rat
	rat_big
	dog
	Received steal
	GetSubContainerCount
	GetItemCount
	GetItem
	HasDurability
	durability
	repair.xml
	money
	SetItem
	Category
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	ToDie

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
	SensePlayerOnly (1 args)
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
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
	CreateObjectVector (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	CanSee (2 args)
	CreateIntVector (1 args)
	ChooseItem (4 args)
	HasAnimation (3 args)
	SetProperty (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x715
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29f Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x688 Vars = (object)
		EVENT_6 Op = 0x696 Vars = ()
		EVENT_22 Op = 0x70f Vars = (object, int, float, float)
		EVENT_16 Op = 0x711 Vars = (object, string)
		EVENT_41 Op = 0x713 Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x740 Vars = (object)
		EVENT_17 Op = 0x754 Vars = (object)
		EVENT_30 Op = 0x76c Vars = (object, object, bool)
		EVENT_40 Op = 0x788 Vars = (object)
		EVENT_42 Op = 0x79c Vars = (object, string)
		EVENT_26 Op = 0x7c1 Vars = (string)
		EVENT_1 Op = 0x7cf Vars = (object)
		EVENT_3 Op = 0x7e5 Vars = (object)
		EVENT_7 Op = 0x7ee Vars = (int)
		EVENT_6 Op = 0x7fa Vars = ()
		EVENT_41 Op = 0x80e Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x870 Vars = (object)
		EVENT_17 Op = 0x884 Vars = (object)
		EVENT_30 Op = 0x89c Vars = (object, object, bool)
		EVENT_40 Op = 0x8b8 Vars = (object)
		EVENT_42 Op = 0x8cc Vars = (object, string)
		EVENT_26 Op = 0x8f1 Vars = (string)
		EVENT_41 Op = 0x90a Vars = (object)
		EVENT_7 Op = 0x913 Vars = (int)
		EVENT_6 Op = 0x936 Vars = ()
		EVENT_1 Op = 0x93d Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x967 Vars = ()
		EVENT_7 Op = 0x9d5 Vars = (int)
		EVENT_41 Op = 0xa10 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xa90 Vars = (int)
		EVENT_41 Op = 0xacb Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xae4 Vars = ()
		EVENT_7 Op = 0xb52 Vars = (int)
		EVENT_41 Op = 0xb8d Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xba6 Vars = ()
		EVENT_7 Op = 0xc14 Vars = (int)
		EVENT_41 Op = 0xc4f Vars = (object)

Events:
EVENT_16 Op = 0x10dc Vars = (object, string)
EVENT_41 Op = 0x10e9 Vars = (object)
EVENT_22 Op = 0x10ef Vars = (object, int, float, float)
EVENT_43 Op = 0x10f7 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xd5c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x130e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x130c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1310

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1312

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf6f

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
0x41: Call2 0xda1

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
0x4f: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xe82

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x289

0x58: Pop(1)
0x59: Push((int) 543180)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 1
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 1
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 1
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0xe8e

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0xea2

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 0
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0xeac

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 0
0x76: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0xeb6

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 0
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 543189)
0x7f: Push((int) 45648)
0x80: Push((int) 45645)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 1
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 1
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 1
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0xe98

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0xec0

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0xede

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0xee8

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 0
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: Push((int) 543190)
0xa4: Push((int) 45655)
0xa5: Push((int) 45646)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 1
0xaa: PushEmpty(bool)
0xab: Stack[-1] = (bool) 1
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0xeca

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0xed4

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0xea2

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: Push((int) 543191)
0xc0: Push((int) 45656)
0xc1: Push((int) 45647)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: PushEmpty(bool)
0xc5: Stack[-1] = (bool) 1
0xc6: PushEmpty(bool)
0xc7: Stack[-1] = (bool) 1
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0xe8e

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0xe98

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 0
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0xea2

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 543182)
0xdc: Push((int) -1)
0xdd: Push((int) 45638)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 1
0xe2: PushEmpty(bool)
0xe3: Stack[-1] = (bool) 1
0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 1
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0xe8e

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0xe98

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 0
0xf1: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0xea2

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Stack[-1] = (bool) 0
0xf8: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0xeac

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Stack[-1] = (bool) 0
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: Push((int) 543183)
0x101: Push((int) -1)
0x102: Push((int) 45639)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: PushEmpty(bool)
0x106: Stack[-1] = (bool) 1
0x107: PushEmpty(bool)
0x108: Stack[-1] = (bool) 1
0x109: PushEmpty(bool)
0x10a: Stack[-1] = (bool) 1
0x10b: PushEmpty(bool)
0x10c: Stack[-1] = (bool) 1
0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Call2 0xeac

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0xeb6

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Stack[-1] = (bool) 0
0x118: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x119: PushEmpty(bool, object)
0x11a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Call2 0xec0

0x11c: Pop(1)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Stack[-1] = (bool) 0
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0xeca

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 0
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0xed4

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = (bool) 0
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: Push((int) 543187)
0x12f: Push((int) -1)
0x130: Push((int) 45643)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 1
0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 1
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 1
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0xede

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0xee8

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: Stack[-1] = (bool) 0
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0xef2

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 0
0x14b: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0xefc

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Stack[-1] = (bool) 0
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: Push((int) 543208)
0x154: Push((int) -1)
0x155: Push((int) 45664)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 1
0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 1
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0xe8e

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0xe98

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0xea2

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 0
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: Push((int) 543181)
0x170: Push((int) -1)
0x171: Push((int) 45637)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 1
0x176: PushEmpty(bool)
0x177: Stack[-1] = (bool) 1
0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0xeac

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17d: PushEmpty(bool, object)
0x17e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17f: Call2 0xeb6

0x180: Pop(1)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 0
0x183: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0xec0

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 0
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: Push((int) 543184)
0x18c: Push((int) -1)
0x18d: Push((int) 45640)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: PushEmpty(bool)
0x191: Stack[-1] = (bool) 1
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 1
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 1
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0xea2

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0xec0

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 0
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0xeca

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 0
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0xed4

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 0
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: Push((int) 543185)
0x1b1: Push((int) -1)
0x1b2: Push((int) 45641)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 1
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 1
0x1b9: PushEmpty(bool, object)
0x1ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Call2 0xede

0x1bc: Pop(1)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1be: PushEmpty(bool, object)
0x1bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Call2 0xee8

0x1c1: Pop(1)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Stack[-1] = (bool) 0
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0xef2

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 0
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 543186)
0x1cd: Push((int) -1)
0x1ce: Push((int) 45642)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 1
0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 1
0x1d5: PushEmpty(bool)
0x1d6: Stack[-1] = (bool) 1
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 1
0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0xec0

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0xed4

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 0
0x1e4: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0xede

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 0
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call2 0xefc

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 0
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0xee8

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = (bool) 0
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: Push((int) 543188)
0x1fb: Push((int) -1)
0x1fc: Push((int) 45644)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: GOTO 0x26b

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral"
0x202: Call2 0x289

0x203: Pop(1)
0x204: Push((int) 538167)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 538168)
0x20a: Push((int) -1)
0x20b: Push((int) 40043)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: PushEmpty(bool, object)
0x211: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x212: Call2 0xe8e

0x213: Pop(1)
0x214: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x215: PushEmpty(bool, object)
0x216: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x217: Call2 0xe6a

0x218: Pop(1)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 1
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: Push((int) 538169)
0x21d: Push((int) 40045)
0x21e: Push((int) 40044)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call2 0xe8e

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Call2 0xf06

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x231: PushEmpty(bool, object)
0x232: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x233: Call2 0xe6a

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[-1] = (bool) 1
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: Push((int) 538179)
0x239: Push((int) 40055)
0x23a: Push((int) 40054)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: PushEmpty(bool, object)
0x240: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x241: Call2 0xe98

0x242: Pop(1)
0x243: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x246: Call2 0xe6a

0x247: Pop(1)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: Push((int) 538190)
0x24c: Push((int) 40067)
0x24d: Push((int) 40066)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: PushEmpty(bool)
0x251: Stack[-1] = (bool) 1
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0xe6a

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x259: Call2 0xe76

0x25a: Pop(1)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[-1] = (bool) 0
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: Push((int) 538204)
0x25f: Push((int) -1)
0x260: Push((int) 40081)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Push((int) 538205)
0x264: Push((int) -1)
0x265: Push((int) 40082)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: GOTO 0x26b

0x269: Return(); Pop(0)

0x26a: GOTO 0x4e

0x26b: PushEmpty(bool)
0x26c: Call2 0x1314

0x26d: Pop(0)
0x26e: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26f: @ lshWaitForAnimEnd()
0x270: Pop(0)
0x271: Push( Stack[3 + Tasks[-1].StackPointer] )
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x279

0x274: PushEmpty(string)
0x275: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x276: Call2 0xdb3

0x277: Pop(1)
0x278: GOTO 0x26f

0x279: GOTO 0x288

0x27a: Push("all")
0x27b: Push("idle")
0x27c: @ PlayAnimation(Stack[-2], Stack[-1])
0x27d: Pop(2)
0x27e: @ WaitForAnimEnd()
0x27f: Pop(0)
0x280: Push( Stack[3 + Tasks[-1].StackPointer] )
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x288

0x283: Push("all")
0x284: Push("idle")
0x285: @ PlayAnimation(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: GOTO 0x27e

0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: PushEmpty(bool)
0x28b: Call2 0x1314

0x28c: Pop(0)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Return(); Pop(0)

0x290: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Return(); Pop(0)

0x293: PushEmpty(string, bool)
0x294: Stack[-2] = Stack[-3]
0x295: Push("")
0x296: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: Stack[-1] = (bool) 0
0x299: GOTO 0x29b

0x29a: Stack[-1] = (bool) 1
0x29b: Call2 0xdc3

0x29c: Pop(2)
0x29d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29e: Return(); Pop(0)

0x29f: PushEmpty()
0x2a0: Push((int) 1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x2a2: PushEmpty()
0x2a3: Call2 0xddd

0x2a4: Pop(0)
0x2a5: Push((int) 45638)
0x2a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a8: PushEmpty(object, object)
0x2a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ab: Call2 0xe65

0x2ac: Pop(2)
0x2ad: Push((int) 45639)
0x2ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(object, object)
0x2b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b3: Call2 0xe65

0x2b4: Pop(2)
0x2b5: Push((int) 45643)
0x2b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b8: PushEmpty(object, object)
0x2b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bb: Call2 0xe65

0x2bc: Pop(2)
0x2bd: Push((int) 45664)
0x2be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: PushEmpty(object, object)
0x2c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0xe65

0x2c4: Pop(2)
0x2c5: Push((int) 40043)
0x2c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c8: PushEmpty(object, object)
0x2c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cb: Call2 0xe65

0x2cc: Pop(2)
0x2cd: Push((int) 45636)
0x2ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call2 0xe82

0x2d3: Pop(1)
0x2d4: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Neutral"
0x2d7: Call2 0x289

0x2d8: Pop(1)
0x2d9: Push((int) 543180)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: PushEmpty(bool)
0x2df: Stack[-1] = (bool) 1
0x2e0: PushEmpty(bool)
0x2e1: Stack[-1] = (bool) 1
0x2e2: PushEmpty(bool)
0x2e3: Stack[-1] = (bool) 1
0x2e4: PushEmpty(bool, object)
0x2e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Call2 0xe8e

0x2e7: Pop(1)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Call2 0xea2

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Stack[-1] = (bool) 0
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call2 0xeac

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Call2 0xeb6

0x2fa: Pop(1)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: Stack[-1] = (bool) 0
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: Push((int) 543189)
0x2ff: Push((int) 45648)
0x300: Push((int) 45645)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 1
0x305: PushEmpty(bool)
0x306: Stack[-1] = (bool) 1
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 1
0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0xe98

0x30c: Pop(1)
0x30d: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x310: Call2 0xec0

0x311: Pop(1)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 0
0x314: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x317: Call2 0xede

0x318: Pop(1)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Stack[-1] = (bool) 0
0x31b: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Call2 0xee8

0x31f: Pop(1)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Stack[-1] = (bool) 0
0x322: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x323: Push((int) 543190)
0x324: Push((int) 45655)
0x325: Push((int) 45646)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 1
0x32a: PushEmpty(bool)
0x32b: Stack[-1] = (bool) 1
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call2 0xeca

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x333: Call2 0xed4

0x334: Pop(1)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-1] = (bool) 0
0x337: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33a: Call2 0xea2

0x33b: Pop(1)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: Stack[-1] = (bool) 0
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: Push((int) 543191)
0x340: Push((int) 45656)
0x341: Push((int) 45647)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: PushEmpty(bool)
0x345: Stack[-1] = (bool) 1
0x346: PushEmpty(bool)
0x347: Stack[-1] = (bool) 1
0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0xe8e

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: PushEmpty(bool, object)
0x34e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34f: Call2 0xe98

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: Stack[-1] = (bool) 0
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x356: Call2 0xea2

0x357: Pop(1)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: Stack[-1] = (bool) 0
0x35a: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35b: Push((int) 543182)
0x35c: Push((int) -1)
0x35d: Push((int) 45638)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: PushEmpty(bool)
0x361: Stack[-1] = (bool) 1
0x362: PushEmpty(bool)
0x363: Stack[-1] = (bool) 1
0x364: PushEmpty(bool)
0x365: Stack[-1] = (bool) 1
0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0xe8e

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Call2 0xe98

0x36e: Pop(1)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 0
0x371: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x374: Call2 0xea2

0x375: Pop(1)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Stack[-1] = (bool) 0
0x378: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Call2 0xeac

0x37c: Pop(1)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Stack[-1] = (bool) 0
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: Push((int) 543183)
0x381: Push((int) -1)
0x382: Push((int) 45639)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: PushEmpty(bool)
0x386: Stack[-1] = (bool) 1
0x387: PushEmpty(bool)
0x388: Stack[-1] = (bool) 1
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 1
0x38b: PushEmpty(bool)
0x38c: Stack[-1] = (bool) 1
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Call2 0xeac

0x390: Pop(1)
0x391: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0xeb6

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-1] = (bool) 0
0x398: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39b: Call2 0xec0

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Stack[-1] = (bool) 0
0x39f: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call2 0xeca

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-1] = (bool) 0
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a9: Call2 0xed4

0x3aa: Pop(1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Stack[-1] = (bool) 0
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ae: Push((int) 543187)
0x3af: Push((int) -1)
0x3b0: Push((int) 45643)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: PushEmpty(bool)
0x3b4: Stack[-1] = (bool) 1
0x3b5: PushEmpty(bool)
0x3b6: Stack[-1] = (bool) 1
0x3b7: PushEmpty(bool)
0x3b8: Stack[-1] = (bool) 1
0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Call2 0xede

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3be: PushEmpty(bool, object)
0x3bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c0: Call2 0xee8

0x3c1: Pop(1)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 0
0x3c4: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0xef2

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 0
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: PushEmpty(bool, object)
0x3cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Call2 0xefc

0x3cf: Pop(1)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 0
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d3: Push((int) 543208)
0x3d4: Push((int) -1)
0x3d5: Push((int) 45664)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 1
0x3da: PushEmpty(bool)
0x3db: Stack[-1] = (bool) 1
0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Call2 0xe8e

0x3df: Pop(1)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Call2 0xe98

0x3e4: Pop(1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Stack[-1] = (bool) 0
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e8: PushEmpty(bool, object)
0x3e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Call2 0xea2

0x3eb: Pop(1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Stack[-1] = (bool) 0
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ef: Push((int) 543181)
0x3f0: Push((int) -1)
0x3f1: Push((int) 45637)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: PushEmpty(bool)
0x3f5: Stack[-1] = (bool) 1
0x3f6: PushEmpty(bool)
0x3f7: Stack[-1] = (bool) 1
0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fa: Call2 0xeac

0x3fb: Pop(1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ff: Call2 0xeb6

0x400: Pop(1)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-1] = (bool) 0
0x403: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x404: PushEmpty(bool, object)
0x405: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x406: Call2 0xec0

0x407: Pop(1)
0x408: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x409: Stack[-1] = (bool) 0
0x40a: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40b: Push((int) 543184)
0x40c: Push((int) -1)
0x40d: Push((int) 45640)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: PushEmpty(bool)
0x411: Stack[-1] = (bool) 1
0x412: PushEmpty(bool)
0x413: Stack[-1] = (bool) 1
0x414: PushEmpty(bool)
0x415: Stack[-1] = (bool) 1
0x416: PushEmpty(bool, object)
0x417: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x418: Call2 0xea2

0x419: Pop(1)
0x41a: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41d: Call2 0xec0

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: Stack[-1] = (bool) 0
0x421: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x422: PushEmpty(bool, object)
0x423: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x424: Call2 0xeca

0x425: Pop(1)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 0
0x428: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x429: PushEmpty(bool, object)
0x42a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42b: Call2 0xed4

0x42c: Pop(1)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-1] = (bool) 0
0x42f: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x430: Push((int) 543185)
0x431: Push((int) -1)
0x432: Push((int) 45641)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: PushEmpty(bool)
0x436: Stack[-1] = (bool) 1
0x437: PushEmpty(bool)
0x438: Stack[-1] = (bool) 1
0x439: PushEmpty(bool, object)
0x43a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Call2 0xede

0x43c: Pop(1)
0x43d: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43e: PushEmpty(bool, object)
0x43f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x440: Call2 0xee8

0x441: Pop(1)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: Stack[-1] = (bool) 0
0x444: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x447: Call2 0xef2

0x448: Pop(1)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 0
0x44b: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44c: Push((int) 543186)
0x44d: Push((int) -1)
0x44e: Push((int) 45642)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: PushEmpty(bool)
0x452: Stack[-1] = (bool) 1
0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 1
0x455: PushEmpty(bool)
0x456: Stack[-1] = (bool) 1
0x457: PushEmpty(bool)
0x458: Stack[-1] = (bool) 1
0x459: PushEmpty(bool, object)
0x45a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45b: Call2 0xec0

0x45c: Pop(1)
0x45d: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call2 0xed4

0x461: Pop(1)
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: Stack[-1] = (bool) 0
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x467: Call2 0xede

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: Stack[-1] = (bool) 0
0x46b: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46c: PushEmpty(bool, object)
0x46d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46e: Call2 0xefc

0x46f: Pop(1)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: Stack[-1] = (bool) 0
0x472: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call2 0xee8

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: Stack[-1] = (bool) 0
0x479: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47a: Push((int) 543188)
0x47b: Push((int) -1)
0x47c: Push((int) 45644)
0x47d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Neutral"
0x482: Call2 0x289

0x483: Pop(1)
0x484: Push((int) 538167)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: Push((int) 538168)
0x48a: Push((int) -1)
0x48b: Push((int) 40043)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x492: Call2 0xe8e

0x493: Pop(1)
0x494: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x495: PushEmpty(bool, object)
0x496: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x497: Call2 0xe6a

0x498: Pop(1)
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: Stack[-1] = (bool) 1
0x49b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49c: Push((int) 538169)
0x49d: Push((int) 40045)
0x49e: Push((int) 40044)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: PushEmpty(bool)
0x4a2: Stack[-1] = (bool) 0
0x4a3: PushEmpty(bool)
0x4a4: Stack[-1] = (bool) 0
0x4a5: PushEmpty(bool, object)
0x4a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a7: Call2 0xe8e

0x4a8: Pop(1)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Call2 0xf06

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Stack[-1] = (bool) 1
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b1: PushEmpty(bool, object)
0x4b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Call2 0xe6a

0x4b4: Pop(1)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Stack[-1] = (bool) 1
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: Push((int) 538179)
0x4b9: Push((int) 40055)
0x4ba: Push((int) 40054)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: PushEmpty(bool)
0x4be: Stack[-1] = (bool) 0
0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c1: Call2 0xe98

0x4c2: Pop(1)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c6: Call2 0xe6a

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-1] = (bool) 1
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cb: Push((int) 538190)
0x4cc: Push((int) 40067)
0x4cd: Push((int) 40066)
0x4ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(3)
0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 1
0x4d2: PushEmpty(bool, object)
0x4d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Call2 0xe6a

0x4d5: Pop(1)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call2 0xe76

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 0
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: Push((int) 538204)
0x4df: Push((int) -1)
0x4e0: Push((int) 40081)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Push((int) 538205)
0x4e4: Push((int) -1)
0x4e5: Push((int) 40082)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 40067)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Neutral"
0x4ee: Call2 0x289

0x4ef: Pop(1)
0x4f0: Push((int) 538191)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 538192)
0x4f6: Push((int) 40069)
0x4f7: Push((int) 40068)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Push((int) 538203)
0x4fb: Push((int) 40069)
0x4fc: Push((int) 40079)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Return(); Pop(0)

0x500: Push((int) 40069)
0x501: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call2 0x289

0x506: Pop(1)
0x507: Push((int) 538193)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: Push((int) 538194)
0x50d: Push((int) 40071)
0x50e: Push((int) 40070)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Push((int) 538202)
0x512: Push((int) -1)
0x513: Push((int) 40078)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Push((int) 40071)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Neutral"
0x51c: Call2 0x289

0x51d: Pop(1)
0x51e: Push((int) 538195)
0x51f: @@ SetMessage(Stack[-1])
0x520: Pop(1)
0x521: @@ ClearReplies()
0x522: Pop(0)
0x523: Push((int) 538196)
0x524: Push((int) 40073)
0x525: Push((int) 40072)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Push((int) 538201)
0x529: Push((int) -1)
0x52a: Push((int) 40077)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: Push((int) 40073)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral"
0x533: Call2 0x289

0x534: Pop(1)
0x535: Push((int) 538197)
0x536: @@ SetMessage(Stack[-1])
0x537: Pop(1)
0x538: @@ ClearReplies()
0x539: Pop(0)
0x53a: Push((int) 538198)
0x53b: Push((int) -1)
0x53c: Push((int) 40074)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Push((int) 538199)
0x540: Push((int) -1)
0x541: Push((int) 40075)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Push((int) 538200)
0x545: Push((int) -1)
0x546: Push((int) 40076)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Return(); Pop(0)

0x54a: Push((int) 40055)
0x54b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x54d: PushEmpty(string)
0x54e: Stack[-1] = "Neutral"
0x54f: Call2 0x289

0x550: Pop(1)
0x551: Push((int) 538180)
0x552: @@ SetMessage(Stack[-1])
0x553: Pop(1)
0x554: @@ ClearReplies()
0x555: Pop(0)
0x556: Push((int) 538181)
0x557: Push((int) 40057)
0x558: Push((int) 40056)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Push((int) 538188)
0x55c: Push((int) 40057)
0x55d: Push((int) 40063)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 538189)
0x561: Push((int) -1)
0x562: Push((int) 40065)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 40057)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x289

0x56c: Pop(1)
0x56d: Push((int) 538182)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 538183)
0x573: Push((int) 40059)
0x574: Push((int) 40058)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Push((int) 538187)
0x578: Push((int) -1)
0x579: Push((int) 40062)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 40059)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Neutral"
0x582: Call2 0x289

0x583: Pop(1)
0x584: Push((int) 538184)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 538185)
0x58a: Push((int) -1)
0x58b: Push((int) 40060)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 538186)
0x58f: Push((int) -1)
0x590: Push((int) 40061)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 40045)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Neutral"
0x599: Call2 0x289

0x59a: Pop(1)
0x59b: Push((int) 538170)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 538171)
0x5a1: Push((int) 40047)
0x5a2: Push((int) 40046)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 538175)
0x5a6: Push((int) 40051)
0x5a7: Push((int) 40050)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Push((int) 538178)
0x5ab: Push((int) -1)
0x5ac: Push((int) 40053)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: Return(); Pop(0)

0x5b0: Push((int) 40051)
0x5b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5b3: PushEmpty(string)
0x5b4: Stack[-1] = "Neutral"
0x5b5: Call2 0x289

0x5b6: Pop(1)
0x5b7: Push((int) 538176)
0x5b8: @@ SetMessage(Stack[-1])
0x5b9: Pop(1)
0x5ba: @@ ClearReplies()
0x5bb: Pop(0)
0x5bc: Push((int) 538177)
0x5bd: Push((int) -1)
0x5be: Push((int) 40052)
0x5bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(3)
0x5c1: Return(); Pop(0)

0x5c2: Push((int) 40047)
0x5c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5c5: PushEmpty(string)
0x5c6: Stack[-1] = "Neutral"
0x5c7: Call2 0x289

0x5c8: Pop(1)
0x5c9: Push((int) 538172)
0x5ca: @@ SetMessage(Stack[-1])
0x5cb: Pop(1)
0x5cc: @@ ClearReplies()
0x5cd: Pop(0)
0x5ce: Push((int) 538173)
0x5cf: Push((int) -1)
0x5d0: Push((int) 40048)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Push((int) 538174)
0x5d4: Push((int) -1)
0x5d5: Push((int) 40049)
0x5d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d7: Pop(3)
0x5d8: Return(); Pop(0)

0x5d9: Push((int) 45656)
0x5da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5dc: PushEmpty(string)
0x5dd: Stack[-1] = "Neutral"
0x5de: Call2 0x289

0x5df: Pop(1)
0x5e0: Push((int) 543200)
0x5e1: @@ SetMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ ClearReplies()
0x5e4: Pop(0)
0x5e5: Push((int) 543205)
0x5e6: Push((int) -1)
0x5e7: Push((int) 45661)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push((int) 543206)
0x5eb: Push((int) -1)
0x5ec: Push((int) 45662)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Push((int) 543207)
0x5f0: Push((int) -1)
0x5f1: Push((int) 45663)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 45655)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral"
0x5fa: Call2 0x289

0x5fb: Pop(1)
0x5fc: Push((int) 543199)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 543201)
0x602: Push((int) -1)
0x603: Push((int) 45657)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Push((int) 543202)
0x607: Push((int) -1)
0x608: Push((int) 45658)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: PushEmpty(bool, object)
0x60c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60d: Call2 0xe98

0x60e: Pop(1)
0x60f: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x610: Push((int) 543203)
0x611: Push((int) -1)
0x612: Push((int) 45659)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x617: Call2 0xec0

0x618: Pop(1)
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: Push((int) 543204)
0x61b: Push((int) -1)
0x61c: Push((int) 45660)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Return(); Pop(0)

0x620: Push((int) 45648)
0x621: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x623: PushEmpty(bool, object)
0x624: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x625: Call2 0xe8e

0x626: Pop(1)
0x627: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x628: PushEmpty(string)
0x629: Stack[-1] = "Neutral"
0x62a: Call2 0x289

0x62b: Pop(1)
0x62c: Push((int) 543192)
0x62d: @@ SetMessage(Stack[-1])
0x62e: Pop(1)
0x62f: @@ ClearReplies()
0x630: Pop(0)
0x631: Push((int) 543193)
0x632: Push((int) -1)
0x633: Push((int) 45649)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Push((int) 543194)
0x637: Push((int) -1)
0x638: Push((int) 45650)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Push((int) 543195)
0x63c: Push((int) -1)
0x63d: Push((int) 45651)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Return(); Pop(0)

0x641: PushEmpty(bool)
0x642: Stack[-1] = (bool) 1
0x643: PushEmpty(bool)
0x644: Stack[-1] = (bool) 1
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0xea2

0x648: Pop(1)
0x649: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64a: PushEmpty(bool, object)
0x64b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Call2 0xeac

0x64d: Pop(1)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: Stack[-1] = (bool) 0
0x650: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x653: Call2 0xeb6

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 0
0x657: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x289

0x65b: Pop(1)
0x65c: Push((int) 543196)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 543197)
0x662: Push((int) -1)
0x663: Push((int) 45653)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Push((int) 543198)
0x667: Push((int) -1)
0x668: Push((int) 45654)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Return(); Pop(0)

0x66c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x66d: PushEmpty(bool)
0x66e: Call2 0x1314

0x66f: Pop(0)
0x670: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x671: @ lshStopAnimation()
0x672: Pop(0)
0x673: GOTO 0x676

0x674: @ StopAnimation()
0x675: Pop(0)
0x676: Return(); Pop(0)

0x677: GOTO 0x2a0

0x678: Return(); Pop(0)

0x679: PushEmpty()
0x67a: EventDisable(0)
0x67b: PushEmpty(object)
0x67c: Stack[-1] = Stack[-2]
0x67d: Call2 0x69a

0x67e: Pop(1)
0x67f: PushEmpty(object)
0x680: Stack[-1] = Stack[-2]
0x681: Call2 0x1360

0x682: Pop(1)
0x683: EventEnable(0)
0x684: @ Hold()
0x685: Pop(0)
0x686: GOTO 0x684

0x687: Return(); Pop(0)

0x688: PushEmpty(int, int)
0x689: PushEmpty(int, object)
0x68a: Stack[-1] = Stack[-5]
0x68b: Call2 0x11f8

0x68c: Stack[-3] = Stack[-2]
0x68d: Pop(2)
0x68e: Push((int) 0)
0x68f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x691: PushEmpty(object)
0x692: Stack[-1] = Stack[-4]
0x693: Call2 0x11fb

0x694: Pop(1)
0x695: Return(); Pop(2)

0x696: PushEmpty()
0x697: Call2 0x1201

0x698: Pop(0)
0x699: Return(); Pop(0)

0x69a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x69b: Pop(0); Push((bool) Stack[-21] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69d: PushEmpty(string)
0x69e: Stack[-1] = "fdie"
0x69f: Call2 0x6f5

0x6a0: Pop(1)
0x6a1: GOTO 0x6f4

0x6a2: @@ GetPosition(Stack[-10])
0x6a3: Pop(0)
0x6a4: @ GetPosition(Stack[-9])
0x6a5: Pop(0)
0x6a6: @ GetDirection(Stack[-8])
0x6a7: Pop(0)
0x6a8: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x6a9: Push(CvectorIndex(Stack[-7], 0))
0x6aa: Push(CvectorIndex(Stack[-9], 0))
0x6ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ac: Push(CvectorIndex(Stack[-8], 2))
0x6ad: Push(CvectorIndex(Stack[-10], 2))
0x6ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b0: Push((int) 0)
0x6b1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-6] = "fdie"
0x6b4: GOTO 0x6b6

0x6b5: Stack[-6] = "bdie"
0x6b6: @ RemoveRTEnvelope()
0x6b7: Pop(0)
0x6b8: @ SetDeathState()
0x6b9: Pop(0)
0x6ba: @ Stop()
0x6bb: Pop(0)
0x6bc: @ StopAsync()
0x6bd: Pop(0)
0x6be: Stack[-5] = Stack[-21]
0x6bf: Push("GetScriptProperty")
0x6c0: Push((int) 2)
0x6c1: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6c2: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c3: Push("Owner")
0x6c4: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x6c5: Pop(1)
0x6c6: Push(Stack[-4])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c8: Push("Owner")
0x6c9: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x6ca: Pop(1)
0x6cb: Pop(0); Push((bool) Stack[-5] == 0)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: Stack[-5] = Stack[-21]
0x6ce: Push("@GetEyesHeight")
0x6cf: Push((int) 1)
0x6d0: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6d1: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6d2: @@ GetEyesHeight(Stack[-2])
0x6d3: Pop(0)
0x6d4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6d5: Push(CvectorIndex(Stack[-1], 1))
0x6d6: Stack[-1] = Stack[-3]
0x6d7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d8: Push("head")
0x6d9: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6da: Pop(1)
0x6db: Stack[-3] = (bool) 1
0x6dc: GOTO 0x6de

0x6dd: Stack[-3] = (bool) 0
0x6de: PushEmpty(string)
0x6df: Stack[-1] = Stack[-7]
0x6e0: Call2 0xde4

0x6e1: Pop(1)
0x6e2: Push("all")
0x6e3: @ PlayAnimation(Stack[-1], Stack[-7])
0x6e4: Pop(1)
0x6e5: @ WaitForAnimEnd()
0x6e6: Pop(0)
0x6e7: Push(Stack[-3])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e9: @ StopAsync()
0x6ea: Pop(0)
0x6eb: Push("head")
0x6ec: @ UnlookAsync(Stack[-1])
0x6ed: Pop(1)
0x6ee: Push("all")
0x6ef: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6f0: Pop(1)
0x6f1: @ RemoveEnvelope()
0x6f2: Pop(0)
0x6f3: Stack[-5] = 0
0x6f4: Return(); Pop(20)

0x6f5: PushEmpty()
0x6f6: @ RemoveRTEnvelope()
0x6f7: Pop(0)
0x6f8: @ SetDeathState()
0x6f9: Pop(0)
0x6fa: @ Stop()
0x6fb: Pop(0)
0x6fc: @ StopAsync()
0x6fd: Pop(0)
0x6fe: @ StopSecondaryAnimation()
0x6ff: Pop(0)
0x700: PushEmpty(string)
0x701: Stack[-1] = Stack[-2]
0x702: Call2 0xde4

0x703: Pop(1)
0x704: Push("all")
0x705: @ PlayAnimation(Stack[-1], Stack[-2])
0x706: Pop(1)
0x707: @ WaitForAnimEnd()
0x708: Pop(0)
0x709: Push("all")
0x70a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x70b: Pop(1)
0x70c: @ RemoveEnvelope()
0x70d: Pop(0)
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: Return(); Pop(0)

0x715: PushEmpty(int, int, int, int)
0x716: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x717: Push((bool) 1)
0x718: @ SensePlayerOnly(Stack[-1])
0x719: Pop(1)
0x71a: PushEmpty()
0x71b: Call2 0x1316

0x71c: Pop(0)
0x71d: PushEmpty()
0x71e: Call2 0x737

0x71f: Pop(0)
0x720: Push((int) 2)
0x721: @ irand(Stack[-3], Stack[-1])
0x722: Pop(1)
0x723: Push((int) 0)
0x724: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x726: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x727: PushEmpty()
0x728: Call2 0x1330

0x729: Pop(0)
0x72a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x72b: @ ResetAAS()
0x72c: Pop(0)
0x72d: GOTO 0x735

0x72e: Push((int) 4)
0x72f: @ irand(Stack[-2], Stack[-1])
0x730: Pop(1)
0x731: Push((int) 1)
0x732: Pop(1); Push(Stack[-2] + Stack[-1]);
0x733: @ Sleep(Stack[-1])
0x734: Pop(1)
0x735: GOTO 0x720

0x736: Return(); Pop(4)

0x737: PushEmpty(bool)
0x738: Call2 0xd57

0x739: Pop(0)
0x73a: Pop(1); Push((bool) Stack[-1] == 0)
0x73b: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73c: PushEmpty()
0x73d: Call2 0x1201

0x73e: Pop(0)
0x73f: Return(); Pop(0)

0x740: PushEmpty(int, int)
0x741: PushEmpty(int, object)
0x742: Stack[-1] = Stack[-5]
0x743: Call2 0x11f8

0x744: Stack[-3] = Stack[-2]
0x745: Pop(2)
0x746: Push((int) 0)
0x747: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x749: Push((int) 1)
0x74a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74c: PushEmpty()
0x74d: Call2 0x801

0x74e: Pop(0)
0x74f: PushEmpty(object)
0x750: Stack[-1] = Stack[-4]
0x751: Call2 0x11fb

0x752: Pop(1)
0x753: Return(); Pop(2)

0x754: PushEmpty(int, int)
0x755: PushEmpty(object)
0x756: Stack[-1] = Stack[-4]
0x757: Call2 0x1157

0x758: Pop(1)
0x759: PushEmpty(int, object)
0x75a: Stack[-1] = Stack[-5]
0x75b: Call2 0x1192

0x75c: Stack[-3] = Stack[-2]
0x75d: Pop(2)
0x75e: Push((int) 0)
0x75f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x761: Push((int) 1)
0x762: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x764: PushEmpty()
0x765: Call2 0x801

0x766: Pop(0)
0x767: PushEmpty(object)
0x768: Stack[-1] = Stack[-4]
0x769: Call2 0x119c

0x76a: Pop(1)
0x76b: Return(); Pop(2)

0x76c: PushEmpty(int, int)
0x76d: PushEmpty(bool, object, object, bool)
0x76e: Stack[-3] = Stack[-9]
0x76f: Stack[-2] = Stack[-8]
0x770: Stack[-1] = Stack[-7]
0x771: Call2 0x1350

0x772: Pop(3)
0x773: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x774: PushEmpty(int, object, bool)
0x775: Stack[-2] = Stack[-8]
0x776: Stack[-1] = Stack[-6]
0x777: Call2 0x11a4

0x778: Stack[-4] = Stack[-3]
0x779: Pop(3)
0x77a: Push((int) 0)
0x77b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x77d: Push((int) 1)
0x77e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x780: PushEmpty()
0x781: Call2 0x801

0x782: Pop(0)
0x783: PushEmpty(object)
0x784: Stack[-1] = Stack[-6]
0x785: Call2 0x11ae

0x786: Pop(1)
0x787: Return(); Pop(2)

0x788: PushEmpty(int, int)
0x789: PushEmpty(int, object)
0x78a: Stack[-1] = Stack[-5]
0x78b: Call2 0x1202

0x78c: Stack[-3] = Stack[-2]
0x78d: Pop(2)
0x78e: Push((int) 0)
0x78f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x791: Push((int) 1)
0x792: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x794: PushEmpty()
0x795: Call2 0x801

0x796: Pop(0)
0x797: PushEmpty(object)
0x798: Stack[-1] = Stack[-4]
0x799: Call2 0x1212

0x79a: Pop(1)
0x79b: Return(); Pop(2)

0x79c: PushEmpty(int, int)
0x79d: PushEmpty(bool, object, string)
0x79e: Stack[-2] = Stack[-7]
0x79f: Stack[-1] = Stack[-6]
0x7a0: Call2 0x1101

0x7a1: Pop(2)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a3: PushEmpty()
0x7a4: Call2 0x801

0x7a5: Pop(0)
0x7a6: PushEmpty(object, string)
0x7a7: Stack[-2] = Stack[-6]
0x7a8: Stack[-1] = Stack[-5]
0x7a9: Call2 0x1121

0x7aa: Pop(2)
0x7ab: GOTO 0x7c0

0x7ac: PushEmpty(int, string, object)
0x7ad: Stack[-2] = Stack[-6]
0x7ae: Stack[-1] = Stack[-7]
0x7af: Call2 0x1218

0x7b0: Stack[-4] = Stack[-3]
0x7b1: Pop(3)
0x7b2: Push((int) 0)
0x7b3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7b5: Push((int) 1)
0x7b6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b8: PushEmpty()
0x7b9: Call2 0x801

0x7ba: Pop(0)
0x7bb: PushEmpty(string, object)
0x7bc: Stack[-2] = Stack[-5]
0x7bd: Stack[-1] = Stack[-6]
0x7be: Call2 0x121b

0x7bf: Pop(2)
0x7c0: Return(); Pop(2)

0x7c1: PushEmpty()
0x7c2: PushEmpty(bool, string)
0x7c3: Stack[-1] = Stack[-3]
0x7c4: Call2 0x1164

0x7c5: Pop(1)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c7: PushEmpty()
0x7c8: Call2 0x801

0x7c9: Pop(0)
0x7ca: PushEmpty(string)
0x7cb: Stack[-1] = Stack[-2]
0x7cc: Call2 0x1174

0x7cd: Pop(1)
0x7ce: Return(); Pop(0)

0x7cf: PushEmpty()
0x7d0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d2: Return(); Pop(0)

0x7d3: PushEmpty(bool, object)
0x7d4: Stack[-1] = Stack[-3]
0x7d5: Call2 0x113a

0x7d6: Pop(1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d8: PushEmpty()
0x7d9: Call2 0x801

0x7da: Pop(0)
0x7db: PushEmpty(object)
0x7dc: Stack[-1] = Stack[-2]
0x7dd: Call2 0x1151

0x7de: Pop(1)
0x7df: GOTO 0x7e4

0x7e0: PushEmpty(object)
0x7e1: Stack[-1] = Stack[-2]
0x7e2: Call2 0x817

0x7e3: Pop(1)
0x7e4: Return(); Pop(0)

0x7e5: PushEmpty()
0x7e6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7e7: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e8: Return(); Pop(0)

0x7e9: PushEmpty(object)
0x7ea: Stack[-1] = Stack[-2]
0x7eb: Call2 0x817

0x7ec: Pop(1)
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty()
0x7ef: Push((int) 110)
0x7f0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Return(); Pop(0)

0x7f3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7f4: Push((int) 110)
0x7f5: @ KillTimer(Stack[-1])
0x7f6: Pop(1)
0x7f7: @ ResetAAS()
0x7f8: Pop(0)
0x7f9: Return(); Pop(0)

0x7fa: PushEmpty()
0x7fb: Call2 0x801

0x7fc: Pop(0)
0x7fd: PushEmpty()
0x7fe: Call2 0x1201

0x7ff: Pop(0)
0x800: Return(); Pop(0)

0x801: Push((int) 110)
0x802: @ KillTimer(Stack[-1])
0x803: Pop(1)
0x804: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x805: Push( Stack[0 + Tasks[-1].StackPointer] )
0x806: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x807: PushEmpty()
0x808: Call2 0x134b

0x809: Pop(0)
0x80a: GOTO 0x80d

0x80b: @ Stop()
0x80c: Pop(0)
0x80d: Return(); Pop(0)

0x80e: PushEmpty()
0x80f: PushEmpty()
0x810: Call2 0x801

0x811: Pop(0)
0x812: PushEmpty(object)
0x813: Stack[-1] = Stack[-2]
0x814: Call2 0x10e9

0x815: Pop(1)
0x816: Return(); Pop(0)

0x817: PushEmpty(bool, int, bool, int)
0x818: Push( Stack[1 + Tasks[-1].StackPointer] )
0x819: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x81a: Return(); Pop(4)

0x81b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x81c: Pop(0)
0x81d: Pop(0); Push((bool) Stack[-2] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Return(); Pop(4)

0x820: PushEmpty(int, object)
0x821: Stack[-1] = Stack[-7]
0x822: Call2 0x1181

0x823: Stack[-3] = Stack[-2]
0x824: Pop(2)
0x825: Push((int) 0)
0x826: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x828: Push((int) 1)
0x829: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82b: PushEmpty()
0x82c: Call2 0x801

0x82d: Pop(0)
0x82e: PushEmpty(object)
0x82f: Stack[-1] = Stack[-6]
0x830: Call2 0x118a

0x831: Pop(1)
0x832: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x833: Push((int) 110)
0x834: Push((float)5.0)
0x835: @ SetTimer(Stack[-2], Stack[-1])
0x836: Pop(2)
0x837: Return(); Pop(4)

0x838: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x839: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x83a: PushEmpty()
0x83b: Call2 0x86b

0x83c: Pop(0)
0x83d: @ GetDirection(Stack[-3])
0x83e: Pop(0)
0x83f: PushEmpty(cvector, object)
0x840: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x841: Call2 0xc6d

0x842: Stack[-4] = Stack[-2]
0x843: Pop(2)
0x844: PushEmpty(float, cvector, cvector)
0x845: Stack[-2] = Stack[-6]
0x846: Stack[-1] = Stack[-5]
0x847: Call2 0xe3e

0x848: Pop(2)
0x849: Push((int) 0)
0x84a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84c: PushEmpty(object)
0x84d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84e: Call2 0xd4c

0x84f: Pop(1)
0x850: Stack[-1] = (bool) 1
0x851: GOTO 0x855

0x852: Push((float)1.5)
0x853: @ Sleep(Stack[-1], Stack[-2])
0x854: Pop(1)
0x855: Push(Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x857: PushEmpty(object)
0x858: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x859: Call2 0xd4c

0x85a: Pop(1)
0x85b: Push((int) 111)
0x85c: Push((float)0.5)
0x85d: @ SetTimer(Stack[-2], Stack[-1])
0x85e: Pop(2)
0x85f: Push((float)5.0)
0x860: @ Sleep(Stack[-1])
0x861: Pop(1)
0x862: Push((int) 111)
0x863: @ KillTimer(Stack[-1])
0x864: Pop(1)
0x865: @ StopAsync()
0x866: Pop(0)
0x867: Push("head")
0x868: @ UnlookAsync(Stack[-1])
0x869: Pop(1)
0x86a: Return(); Pop(6)

0x86b: PushEmpty(object)
0x86c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86d: Call2 0xdd2

0x86e: Pop(1)
0x86f: Return(); Pop(0)

0x870: PushEmpty(int, int)
0x871: PushEmpty(int, object)
0x872: Stack[-1] = Stack[-5]
0x873: Call2 0x11f8

0x874: Stack[-3] = Stack[-2]
0x875: Pop(2)
0x876: Push((int) 0)
0x877: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x879: Push((int) 1)
0x87a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87c: PushEmpty()
0x87d: Call2 0x8ff

0x87e: Pop(0)
0x87f: PushEmpty(object)
0x880: Stack[-1] = Stack[-4]
0x881: Call2 0x11fb

0x882: Pop(1)
0x883: Return(); Pop(2)

0x884: PushEmpty(int, int)
0x885: PushEmpty(object)
0x886: Stack[-1] = Stack[-4]
0x887: Call2 0x1157

0x888: Pop(1)
0x889: PushEmpty(int, object)
0x88a: Stack[-1] = Stack[-5]
0x88b: Call2 0x1192

0x88c: Stack[-3] = Stack[-2]
0x88d: Pop(2)
0x88e: Push((int) 0)
0x88f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x891: Push((int) 1)
0x892: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x893: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x894: PushEmpty()
0x895: Call2 0x8ff

0x896: Pop(0)
0x897: PushEmpty(object)
0x898: Stack[-1] = Stack[-4]
0x899: Call2 0x119c

0x89a: Pop(1)
0x89b: Return(); Pop(2)

0x89c: PushEmpty(int, int)
0x89d: PushEmpty(bool, object, object, bool)
0x89e: Stack[-3] = Stack[-9]
0x89f: Stack[-2] = Stack[-8]
0x8a0: Stack[-1] = Stack[-7]
0x8a1: Call2 0x1350

0x8a2: Pop(3)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8a4: PushEmpty(int, object, bool)
0x8a5: Stack[-2] = Stack[-8]
0x8a6: Stack[-1] = Stack[-6]
0x8a7: Call2 0x11a4

0x8a8: Stack[-4] = Stack[-3]
0x8a9: Pop(3)
0x8aa: Push((int) 0)
0x8ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8ad: Push((int) 1)
0x8ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b0: PushEmpty()
0x8b1: Call2 0x8ff

0x8b2: Pop(0)
0x8b3: PushEmpty(object)
0x8b4: Stack[-1] = Stack[-6]
0x8b5: Call2 0x11ae

0x8b6: Pop(1)
0x8b7: Return(); Pop(2)

0x8b8: PushEmpty(int, int)
0x8b9: PushEmpty(int, object)
0x8ba: Stack[-1] = Stack[-5]
0x8bb: Call2 0x1202

0x8bc: Stack[-3] = Stack[-2]
0x8bd: Pop(2)
0x8be: Push((int) 0)
0x8bf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c1: Push((int) 1)
0x8c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8c4: PushEmpty()
0x8c5: Call2 0x8ff

0x8c6: Pop(0)
0x8c7: PushEmpty(object)
0x8c8: Stack[-1] = Stack[-4]
0x8c9: Call2 0x1212

0x8ca: Pop(1)
0x8cb: Return(); Pop(2)

0x8cc: PushEmpty(int, int)
0x8cd: PushEmpty(bool, object, string)
0x8ce: Stack[-2] = Stack[-7]
0x8cf: Stack[-1] = Stack[-6]
0x8d0: Call2 0x1101

0x8d1: Pop(2)
0x8d2: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d3: PushEmpty()
0x8d4: Call2 0x8ff

0x8d5: Pop(0)
0x8d6: PushEmpty(object, string)
0x8d7: Stack[-2] = Stack[-6]
0x8d8: Stack[-1] = Stack[-5]
0x8d9: Call2 0x1121

0x8da: Pop(2)
0x8db: GOTO 0x8f0

0x8dc: PushEmpty(int, string, object)
0x8dd: Stack[-2] = Stack[-6]
0x8de: Stack[-1] = Stack[-7]
0x8df: Call2 0x1218

0x8e0: Stack[-4] = Stack[-3]
0x8e1: Pop(3)
0x8e2: Push((int) 0)
0x8e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8e5: Push((int) 1)
0x8e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8e8: PushEmpty()
0x8e9: Call2 0x8ff

0x8ea: Pop(0)
0x8eb: PushEmpty(string, object)
0x8ec: Stack[-2] = Stack[-5]
0x8ed: Stack[-1] = Stack[-6]
0x8ee: Call2 0x121b

0x8ef: Pop(2)
0x8f0: Return(); Pop(2)

0x8f1: PushEmpty()
0x8f2: PushEmpty(bool, string)
0x8f3: Stack[-1] = Stack[-3]
0x8f4: Call2 0x1164

0x8f5: Pop(1)
0x8f6: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8f7: PushEmpty()
0x8f8: Call2 0x8ff

0x8f9: Pop(0)
0x8fa: PushEmpty(string)
0x8fb: Stack[-1] = Stack[-2]
0x8fc: Call2 0x1174

0x8fd: Pop(1)
0x8fe: Return(); Pop(0)

0x8ff: @ StopGroup0()
0x900: Pop(0)
0x901: @ StopAsync()
0x902: Pop(0)
0x903: Push("head")
0x904: @ UnlookAsync(Stack[-1])
0x905: Pop(1)
0x906: Push((int) 111)
0x907: @ KillTimer(Stack[-1])
0x908: Pop(1)
0x909: Return(); Pop(0)

0x90a: PushEmpty()
0x90b: PushEmpty()
0x90c: Call2 0x8ff

0x90d: Pop(0)
0x90e: PushEmpty(object)
0x90f: Stack[-1] = Stack[-2]
0x910: Call2 0x10e9

0x911: Pop(1)
0x912: Return(); Pop(0)

0x913: PushEmpty(cvector, cvector, cvector, cvector)
0x914: Push((int) 111)
0x915: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x917: Return(); Pop(4)

0x918: PushEmpty(bool, object)
0x919: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91a: Call2 0xcb6

0x91b: Pop(1)
0x91c: Pop(1); Push((bool) Stack[-1] == 0)
0x91d: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x91e: PushEmpty()
0x91f: Call2 0x8ff

0x920: Pop(0)
0x921: Return(); Pop(4)

0x922: @ GetDirection(Stack[-2])
0x923: Pop(0)
0x924: PushEmpty(cvector, object)
0x925: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x926: Call2 0xc6d

0x927: Stack[-3] = Stack[-2]
0x928: Pop(2)
0x929: PushEmpty(float, cvector, cvector)
0x92a: Stack[-2] = Stack[-5]
0x92b: Stack[-1] = Stack[-4]
0x92c: Call2 0xe3e

0x92d: Pop(2)
0x92e: Push((float)0.5)
0x92f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x930: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x931: PushEmpty(object)
0x932: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x933: Call2 0xd4c

0x934: Pop(1)
0x935: Return(); Pop(4)

0x936: PushEmpty()
0x937: Call2 0x8ff

0x938: Pop(0)
0x939: PushEmpty()
0x93a: Call2 0x1201

0x93b: Pop(0)
0x93c: Return(); Pop(0)

0x93d: PushEmpty()
0x93e: PushEmpty(bool, object)
0x93f: Stack[-1] = Stack[-3]
0x940: Call2 0x113a

0x941: Pop(1)
0x942: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x943: PushEmpty()
0x944: Call2 0x8ff

0x945: Pop(0)
0x946: PushEmpty(object)
0x947: Stack[-1] = Stack[-2]
0x948: Call2 0x1151

0x949: Pop(1)
0x94a: Return(); Pop(0)

0x94b: PushEmpty()
0x94c: @ Face(Stack[-1])
0x94d: Pop(0)
0x94e: Push("all")
0x94f: Push("attack_on")
0x950: @ PlayAnimation(Stack[-2], Stack[-1])
0x951: Pop(2)
0x952: @ WaitForAnimEnd()
0x953: Pop(0)
0x954: Push("all")
0x955: Push("attack_stay")
0x956: @ PlayAnimation(Stack[-2], Stack[-1])
0x957: Pop(2)
0x958: @ WaitForAnimEnd()
0x959: Pop(0)
0x95a: Push("all")
0x95b: Push("attack_off")
0x95c: @ PlayAnimation(Stack[-2], Stack[-1])
0x95d: Pop(2)
0x95e: @ WaitForAnimEnd()
0x95f: Pop(0)
0x960: @ StopAsync()
0x961: Pop(0)
0x962: PushEmpty(object)
0x963: Stack[-1] = Stack[-2]
0x964: Call2 0x98c

0x965: Pop(1)
0x966: Return(); Pop(0)

0x967: PushEmpty()
0x968: Call2 0xa09

0x969: Pop(0)
0x96a: PushEmpty()
0x96b: Call2 0x1201

0x96c: Pop(0)
0x96d: Return(); Pop(0)

0x96e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x96f: @ GetPosition(Stack[-6])
0x970: Pop(0)
0x971: @@ GetPosition(Stack[-5])
0x972: Pop(0)
0x973: @ GetDirection(Stack[-4])
0x974: Pop(0)
0x975: PushEmpty(cvector, cvector)
0x976: PushEmpty(cvector, cvector)
0x977: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x978: Call2 0xe13

0x979: Pop(1)
0x97a: Push((float)0.75)
0x97b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x97c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x97d: Call2 0xe13

0x97e: Stack[-5] = Stack[-2]
0x97f: Pop(2)
0x980: Push((int) 32)
0x981: Push((float)7000.0)
0x982: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x983: Pop(2)
0x984: Push((int) 100)
0x985: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x986: Push((int) 0)
0x987: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x989: Stack[-1] = (int) 0
0x98a: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x98b: Return(); Pop(12)

0x98c: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x98d: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x98e: PushEmpty(cvector, float)
0x98f: Stack[-1] = (float) 1.74533
0x990: Call2 0x96e

0x991: Stack[-7] = Stack[-2]
0x992: Pop(2)
0x993: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x994: Push((float)2500.0)
0x995: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x997: PushEmpty(cvector, float)
0x998: Stack[-1] = (float) 2.61799
0x999: Call2 0x96e

0x99a: Stack[-7] = Stack[-2]
0x99b: Pop(2)
0x99c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x99d: Push((float)2500.0)
0x99e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a0: Push("Can't retreat, distance: ")
0x9a1: Pop(0); Push(Sqrt(Stack[-5]))
0x9a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a3: @ Trace(Stack[-1])
0x9a4: Pop(1)
0x9a5: Push((float)0.5)
0x9a6: @ Sleep(Stack[-1])
0x9a7: Pop(1)
0x9a8: Return(); Pop(10)

0x9a9: Push(CvectorIndex(Stack[-5], 0))
0x9aa: Push(CvectorIndex(Stack[-6], 2))
0x9ab: @ Rotate(Stack[-2], Stack[-1])
0x9ac: Pop(2)
0x9ad: PushEmpty(cvector)
0x9ae: Call2 0xc68

0x9af: Pop(0)
0x9b0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x9b1: Push((int) 120)
0x9b2: Push((float)0.5)
0x9b3: @ SetTimer(Stack[-2], Stack[-1])
0x9b4: Pop(2)
0x9b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9b6: Push((int) 1)
0x9b7: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x9b8: Pop(1)
0x9b9: Push(Stack[-3])
0x9ba: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9bb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9bd: GOTO 0x9d4

0x9be: GOTO 0x9d2

0x9bf: PushEmpty(cvector, float)
0x9c0: Stack[-1] = (float) 2.61799
0x9c1: Call2 0x96e

0x9c2: Stack[-4] = Stack[-2]
0x9c3: Pop(2)
0x9c4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x9c5: Push((float)2500.0)
0x9c6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9c8: PushEmpty(cvector)
0x9c9: Call2 0xc68

0x9ca: Pop(0)
0x9cb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x9cc: Push((int) 120)
0x9cd: Push((float)0.5)
0x9ce: @ SetTimer(Stack[-2], Stack[-1])
0x9cf: Pop(2)
0x9d0: GOTO 0x9d2

0x9d1: GOTO 0x9d4

0x9d2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9d3: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9d4: Return(); Pop(10)

0x9d5: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x9d6: Push((int) 120)
0x9d7: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d9: Return(); Pop(8)

0x9da: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9db: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9dc: @ Stop()
0x9dd: Pop(0)
0x9de: Push((int) 1)
0x9df: @ KillTimer(Stack[-1])
0x9e0: Pop(1)
0x9e1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9e2: GOTO 0xa08

0x9e3: @ GetDirection(Stack[-4])
0x9e4: Pop(0)
0x9e5: Push((float)7000.0)
0x9e6: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x9e7: Pop(1)
0x9e8: PushEmpty(cvector, float)
0x9e9: Stack[-1] = (float) 1.74533
0x9ea: Call2 0x96e

0x9eb: Stack[-4] = Stack[-2]
0x9ec: Pop(2)
0x9ed: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x9ee: PushEmpty(bool)
0x9ef: Stack[-1] = (bool) 0
0x9f0: Push((float)2500.0)
0x9f1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9f3: PushEmpty(bool)
0x9f4: Stack[-1] = (bool) 1
0x9f5: Pop(0); Push(Stack[-5] * Stack[-5]);
0x9f6: Push((float)2.25)
0x9f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9f8: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fa: PushEmpty(bool)
0x9fb: Call2 0xa19

0x9fc: Pop(0)
0x9fd: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fe: Stack[-1] = (bool) 0
0x9ff: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0xa00: Stack[-1] = (bool) 1
0xa01: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0xa02: @ Stop()
0xa03: Pop(0)
0xa04: PushEmpty(cvector)
0xa05: Call2 0xc68

0xa06: Pop(0)
0xa07: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa08: Return(); Pop(8)

0xa09: @ Stop()
0xa0a: Pop(0)
0xa0b: Push((int) 120)
0xa0c: @ KillTimer(Stack[-1])
0xa0d: Pop(1)
0xa0e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa0f: Return(); Pop(0)

0xa10: PushEmpty()
0xa11: PushEmpty()
0xa12: Call2 0xa09

0xa13: Pop(0)
0xa14: PushEmpty(object)
0xa15: Stack[-1] = Stack[-2]
0xa16: Call2 0x10e9

0xa17: Pop(1)
0xa18: Return(); Pop(0)

0xa19: PushEmpty(cvector, cvector, cvector, cvector)
0xa1a: @ GetDirection(Stack[-2])
0xa1b: Pop(0)
0xa1c: PushEmpty(cvector, object)
0xa1d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1e: Call2 0xc6d

0xa1f: Stack[-3] = Stack[-2]
0xa20: Pop(2)
0xa21: PushEmpty(float, cvector, cvector)
0xa22: Stack[-2] = Stack[-5]
0xa23: Stack[-1] = Stack[-4]
0xa24: Call2 0xe23

0xa25: Pop(2)
0xa26: Push((float)-0.34202)
0xa27: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xa28: Return(); Pop(4)

0xa29: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xa2a: @ GetPosition(Stack[-6])
0xa2b: Pop(0)
0xa2c: @@ GetPosition(Stack[-5])
0xa2d: Pop(0)
0xa2e: @ GetDirection(Stack[-4])
0xa2f: Pop(0)
0xa30: PushEmpty(cvector, cvector)
0xa31: PushEmpty(cvector, cvector)
0xa32: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xa33: Call2 0xe13

0xa34: Pop(1)
0xa35: Push((float)0.75)
0xa36: Pop(1); Push(Stack[-8] * Stack[-1]);
0xa37: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa38: Call2 0xe13

0xa39: Stack[-5] = Stack[-2]
0xa3a: Pop(2)
0xa3b: Push((int) 32)
0xa3c: Push((float)7000.0)
0xa3d: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xa3e: Pop(2)
0xa3f: Push((int) 100)
0xa40: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xa41: Push((int) 0)
0xa42: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa43: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa44: Stack[-1] = (int) 0
0xa45: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xa46: Return(); Pop(12)

0xa47: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xa48: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xa49: PushEmpty(cvector, float)
0xa4a: Stack[-1] = (float) 1.74533
0xa4b: Call2 0xa29

0xa4c: Stack[-7] = Stack[-2]
0xa4d: Pop(2)
0xa4e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa4f: Push((float)2500.0)
0xa50: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa52: PushEmpty(cvector, float)
0xa53: Stack[-1] = (float) 2.61799
0xa54: Call2 0xa29

0xa55: Stack[-7] = Stack[-2]
0xa56: Pop(2)
0xa57: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa58: Push((float)2500.0)
0xa59: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa5a: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa5b: Push("Can't retreat, distance: ")
0xa5c: Pop(0); Push(Sqrt(Stack[-5]))
0xa5d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa5e: @ Trace(Stack[-1])
0xa5f: Pop(1)
0xa60: Push((float)0.5)
0xa61: @ Sleep(Stack[-1])
0xa62: Pop(1)
0xa63: Return(); Pop(10)

0xa64: Push(CvectorIndex(Stack[-5], 0))
0xa65: Push(CvectorIndex(Stack[-6], 2))
0xa66: @ Rotate(Stack[-2], Stack[-1])
0xa67: Pop(2)
0xa68: PushEmpty(cvector)
0xa69: Call2 0xc68

0xa6a: Pop(0)
0xa6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xa6c: Push((int) 120)
0xa6d: Push((float)0.5)
0xa6e: @ SetTimer(Stack[-2], Stack[-1])
0xa6f: Pop(2)
0xa70: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa71: Push((int) 1)
0xa72: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xa73: Pop(1)
0xa74: Push(Stack[-3])
0xa75: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa76: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa77: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa78: GOTO 0xa8f

0xa79: GOTO 0xa8d

0xa7a: PushEmpty(cvector, float)
0xa7b: Stack[-1] = (float) 2.61799
0xa7c: Call2 0xa29

0xa7d: Stack[-4] = Stack[-2]
0xa7e: Pop(2)
0xa7f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa80: Push((float)2500.0)
0xa81: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa83: PushEmpty(cvector)
0xa84: Call2 0xc68

0xa85: Pop(0)
0xa86: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa87: Push((int) 120)
0xa88: Push((float)0.5)
0xa89: @ SetTimer(Stack[-2], Stack[-1])
0xa8a: Pop(2)
0xa8b: GOTO 0xa8d

0xa8c: GOTO 0xa8f

0xa8d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa8e: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa8f: Return(); Pop(10)

0xa90: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xa91: Push((int) 120)
0xa92: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Return(); Pop(8)

0xa95: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa97: @ Stop()
0xa98: Pop(0)
0xa99: Push((int) 1)
0xa9a: @ KillTimer(Stack[-1])
0xa9b: Pop(1)
0xa9c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa9d: GOTO 0xac3

0xa9e: @ GetDirection(Stack[-4])
0xa9f: Pop(0)
0xaa0: Push((float)7000.0)
0xaa1: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xaa2: Pop(1)
0xaa3: PushEmpty(cvector, float)
0xaa4: Stack[-1] = (float) 1.74533
0xaa5: Call2 0xa29

0xaa6: Stack[-4] = Stack[-2]
0xaa7: Pop(2)
0xaa8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xaa9: PushEmpty(bool)
0xaaa: Stack[-1] = (bool) 0
0xaab: Push((float)2500.0)
0xaac: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xaad: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xaae: PushEmpty(bool)
0xaaf: Stack[-1] = (bool) 1
0xab0: Pop(0); Push(Stack[-5] * Stack[-5]);
0xab1: Push((float)2.25)
0xab2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xab3: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab5: PushEmpty(bool)
0xab6: Call2 0xad4

0xab7: Pop(0)
0xab8: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab9: Stack[-1] = (bool) 0
0xaba: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xabb: Stack[-1] = (bool) 1
0xabc: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xabd: @ Stop()
0xabe: Pop(0)
0xabf: PushEmpty(cvector)
0xac0: Call2 0xc68

0xac1: Pop(0)
0xac2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xac3: Return(); Pop(8)

0xac4: @ Stop()
0xac5: Pop(0)
0xac6: Push((int) 120)
0xac7: @ KillTimer(Stack[-1])
0xac8: Pop(1)
0xac9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xaca: Return(); Pop(0)

0xacb: PushEmpty()
0xacc: PushEmpty()
0xacd: Call2 0xac4

0xace: Pop(0)
0xacf: PushEmpty(object)
0xad0: Stack[-1] = Stack[-2]
0xad1: Call2 0x10e9

0xad2: Pop(1)
0xad3: Return(); Pop(0)

0xad4: PushEmpty(cvector, cvector, cvector, cvector)
0xad5: @ GetDirection(Stack[-2])
0xad6: Pop(0)
0xad7: PushEmpty(cvector, object)
0xad8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad9: Call2 0xc6d

0xada: Stack[-3] = Stack[-2]
0xadb: Pop(2)
0xadc: PushEmpty(float, cvector, cvector)
0xadd: Stack[-2] = Stack[-5]
0xade: Stack[-1] = Stack[-4]
0xadf: Call2 0xe23

0xae0: Pop(2)
0xae1: Push((float)-0.34202)
0xae2: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xae3: Return(); Pop(4)

0xae4: PushEmpty()
0xae5: Call2 0xb86

0xae6: Pop(0)
0xae7: PushEmpty()
0xae8: Call2 0x1201

0xae9: Pop(0)
0xaea: Return(); Pop(0)

0xaeb: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xaec: @ GetPosition(Stack[-6])
0xaed: Pop(0)
0xaee: @@ GetPosition(Stack[-5])
0xaef: Pop(0)
0xaf0: @ GetDirection(Stack[-4])
0xaf1: Pop(0)
0xaf2: PushEmpty(cvector, cvector)
0xaf3: PushEmpty(cvector, cvector)
0xaf4: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xaf5: Call2 0xe13

0xaf6: Pop(1)
0xaf7: Push((float)0.75)
0xaf8: Pop(1); Push(Stack[-8] * Stack[-1]);
0xaf9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xafa: Call2 0xe13

0xafb: Stack[-5] = Stack[-2]
0xafc: Pop(2)
0xafd: Push((int) 32)
0xafe: Push((float)7000.0)
0xaff: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xb00: Pop(2)
0xb01: Push((int) 100)
0xb02: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xb03: Push((int) 0)
0xb04: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb05: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb06: Stack[-1] = (int) 0
0xb07: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xb08: Return(); Pop(12)

0xb09: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xb0a: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xb0b: PushEmpty(cvector, float)
0xb0c: Stack[-1] = (float) 1.74533
0xb0d: Call2 0xaeb

0xb0e: Stack[-7] = Stack[-2]
0xb0f: Pop(2)
0xb10: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb11: Push((float)2500.0)
0xb12: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb14: PushEmpty(cvector, float)
0xb15: Stack[-1] = (float) 2.61799
0xb16: Call2 0xaeb

0xb17: Stack[-7] = Stack[-2]
0xb18: Pop(2)
0xb19: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb1a: Push((float)2500.0)
0xb1b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb1c: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb1d: Push("Can't retreat, distance: ")
0xb1e: Pop(0); Push(Sqrt(Stack[-5]))
0xb1f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb20: @ Trace(Stack[-1])
0xb21: Pop(1)
0xb22: Push((float)0.5)
0xb23: @ Sleep(Stack[-1])
0xb24: Pop(1)
0xb25: Return(); Pop(10)

0xb26: Push(CvectorIndex(Stack[-5], 0))
0xb27: Push(CvectorIndex(Stack[-6], 2))
0xb28: @ Rotate(Stack[-2], Stack[-1])
0xb29: Pop(2)
0xb2a: PushEmpty(cvector)
0xb2b: Call2 0xc68

0xb2c: Pop(0)
0xb2d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xb2e: Push((int) 120)
0xb2f: Push((float)0.5)
0xb30: @ SetTimer(Stack[-2], Stack[-1])
0xb31: Pop(2)
0xb32: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb33: Push((int) 1)
0xb34: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xb35: Pop(1)
0xb36: Push(Stack[-3])
0xb37: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb38: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb39: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb3a: GOTO 0xb51

0xb3b: GOTO 0xb4f

0xb3c: PushEmpty(cvector, float)
0xb3d: Stack[-1] = (float) 2.61799
0xb3e: Call2 0xaeb

0xb3f: Stack[-4] = Stack[-2]
0xb40: Pop(2)
0xb41: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb42: Push((float)2500.0)
0xb43: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb4e; Pop(1)

0xb45: PushEmpty(cvector)
0xb46: Call2 0xc68

0xb47: Pop(0)
0xb48: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb49: Push((int) 120)
0xb4a: Push((float)0.5)
0xb4b: @ SetTimer(Stack[-2], Stack[-1])
0xb4c: Pop(2)
0xb4d: GOTO 0xb4f

0xb4e: GOTO 0xb51

0xb4f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb50: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb51: Return(); Pop(10)

0xb52: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xb53: Push((int) 120)
0xb54: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xb55: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb56: Return(); Pop(8)

0xb57: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb58: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb59: @ Stop()
0xb5a: Pop(0)
0xb5b: Push((int) 1)
0xb5c: @ KillTimer(Stack[-1])
0xb5d: Pop(1)
0xb5e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb5f: GOTO 0xb85

0xb60: @ GetDirection(Stack[-4])
0xb61: Pop(0)
0xb62: Push((float)7000.0)
0xb63: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xb64: Pop(1)
0xb65: PushEmpty(cvector, float)
0xb66: Stack[-1] = (float) 1.74533
0xb67: Call2 0xaeb

0xb68: Stack[-4] = Stack[-2]
0xb69: Pop(2)
0xb6a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb6b: PushEmpty(bool)
0xb6c: Stack[-1] = (bool) 0
0xb6d: Push((float)2500.0)
0xb6e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb70: PushEmpty(bool)
0xb71: Stack[-1] = (bool) 1
0xb72: Pop(0); Push(Stack[-5] * Stack[-5]);
0xb73: Push((float)2.25)
0xb74: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb75: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xb76: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb77: PushEmpty(bool)
0xb78: Call2 0xb96

0xb79: Pop(0)
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7b: Stack[-1] = (bool) 0
0xb7c: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7d: Stack[-1] = (bool) 1
0xb7e: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb7f: @ Stop()
0xb80: Pop(0)
0xb81: PushEmpty(cvector)
0xb82: Call2 0xc68

0xb83: Pop(0)
0xb84: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb85: Return(); Pop(8)

0xb86: @ Stop()
0xb87: Pop(0)
0xb88: Push((int) 120)
0xb89: @ KillTimer(Stack[-1])
0xb8a: Pop(1)
0xb8b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb8c: Return(); Pop(0)

0xb8d: PushEmpty()
0xb8e: PushEmpty()
0xb8f: Call2 0xb86

0xb90: Pop(0)
0xb91: PushEmpty(object)
0xb92: Stack[-1] = Stack[-2]
0xb93: Call2 0x10e9

0xb94: Pop(1)
0xb95: Return(); Pop(0)

0xb96: PushEmpty(cvector, cvector, cvector, cvector)
0xb97: @ GetDirection(Stack[-2])
0xb98: Pop(0)
0xb99: PushEmpty(cvector, object)
0xb9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9b: Call2 0xc6d

0xb9c: Stack[-3] = Stack[-2]
0xb9d: Pop(2)
0xb9e: PushEmpty(float, cvector, cvector)
0xb9f: Stack[-2] = Stack[-5]
0xba0: Stack[-1] = Stack[-4]
0xba1: Call2 0xe23

0xba2: Pop(2)
0xba3: Push((float)-0.34202)
0xba4: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xba5: Return(); Pop(4)

0xba6: PushEmpty()
0xba7: Call2 0xc48

0xba8: Pop(0)
0xba9: PushEmpty()
0xbaa: Call2 0x1201

0xbab: Pop(0)
0xbac: Return(); Pop(0)

0xbad: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xbae: @ GetPosition(Stack[-6])
0xbaf: Pop(0)
0xbb0: @@ GetPosition(Stack[-5])
0xbb1: Pop(0)
0xbb2: @ GetDirection(Stack[-4])
0xbb3: Pop(0)
0xbb4: PushEmpty(cvector, cvector)
0xbb5: PushEmpty(cvector, cvector)
0xbb6: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xbb7: Call2 0xe13

0xbb8: Pop(1)
0xbb9: Push((float)0.75)
0xbba: Pop(1); Push(Stack[-8] * Stack[-1]);
0xbbb: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xbbc: Call2 0xe13

0xbbd: Stack[-5] = Stack[-2]
0xbbe: Pop(2)
0xbbf: Push((int) 32)
0xbc0: Push((float)7000.0)
0xbc1: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xbc2: Pop(2)
0xbc3: Push((int) 100)
0xbc4: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xbc5: Push((int) 0)
0xbc6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbc7: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbc8: Stack[-1] = (int) 0
0xbc9: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xbca: Return(); Pop(12)

0xbcb: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xbcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xbcd: PushEmpty(cvector, float)
0xbce: Stack[-1] = (float) 1.74533
0xbcf: Call2 0xbad

0xbd0: Stack[-7] = Stack[-2]
0xbd1: Pop(2)
0xbd2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbd3: Push((float)2500.0)
0xbd4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbd6: PushEmpty(cvector, float)
0xbd7: Stack[-1] = (float) 2.61799
0xbd8: Call2 0xbad

0xbd9: Stack[-7] = Stack[-2]
0xbda: Pop(2)
0xbdb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbdc: Push((float)2500.0)
0xbdd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xbde: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbdf: Push("Can't retreat, distance: ")
0xbe0: Pop(0); Push(Sqrt(Stack[-5]))
0xbe1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe2: @ Trace(Stack[-1])
0xbe3: Pop(1)
0xbe4: Push((float)0.5)
0xbe5: @ Sleep(Stack[-1])
0xbe6: Pop(1)
0xbe7: Return(); Pop(10)

0xbe8: Push(CvectorIndex(Stack[-5], 0))
0xbe9: Push(CvectorIndex(Stack[-6], 2))
0xbea: @ Rotate(Stack[-2], Stack[-1])
0xbeb: Pop(2)
0xbec: PushEmpty(cvector)
0xbed: Call2 0xc68

0xbee: Pop(0)
0xbef: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xbf0: Push((int) 120)
0xbf1: Push((float)0.5)
0xbf2: @ SetTimer(Stack[-2], Stack[-1])
0xbf3: Pop(2)
0xbf4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbf5: Push((int) 1)
0xbf6: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xbf7: Pop(1)
0xbf8: Push(Stack[-3])
0xbf9: IF (Stack[-1] == 0) GOTO 0xc11; Pop(1)

0xbfa: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfc: GOTO 0xc13

0xbfd: GOTO 0xc11

0xbfe: PushEmpty(cvector, float)
0xbff: Stack[-1] = (float) 2.61799
0xc00: Call2 0xbad

0xc01: Stack[-4] = Stack[-2]
0xc02: Pop(2)
0xc03: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc04: Push((float)2500.0)
0xc05: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc06: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc07: PushEmpty(cvector)
0xc08: Call2 0xc68

0xc09: Pop(0)
0xc0a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc0b: Push((int) 120)
0xc0c: Push((float)0.5)
0xc0d: @ SetTimer(Stack[-2], Stack[-1])
0xc0e: Pop(2)
0xc0f: GOTO 0xc11

0xc10: GOTO 0xc13

0xc11: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc12: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xc13: Return(); Pop(10)

0xc14: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xc15: Push((int) 120)
0xc16: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc18: Return(); Pop(8)

0xc19: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc1a: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc1b: @ Stop()
0xc1c: Pop(0)
0xc1d: Push((int) 1)
0xc1e: @ KillTimer(Stack[-1])
0xc1f: Pop(1)
0xc20: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc21: GOTO 0xc47

0xc22: @ GetDirection(Stack[-4])
0xc23: Pop(0)
0xc24: Push((float)7000.0)
0xc25: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xc26: Pop(1)
0xc27: PushEmpty(cvector, float)
0xc28: Stack[-1] = (float) 1.74533
0xc29: Call2 0xbad

0xc2a: Stack[-4] = Stack[-2]
0xc2b: Pop(2)
0xc2c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc2d: PushEmpty(bool)
0xc2e: Stack[-1] = (bool) 0
0xc2f: Push((float)2500.0)
0xc30: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc32: PushEmpty(bool)
0xc33: Stack[-1] = (bool) 1
0xc34: Pop(0); Push(Stack[-5] * Stack[-5]);
0xc35: Push((float)2.25)
0xc36: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc37: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc39: PushEmpty(bool)
0xc3a: Call2 0xc58

0xc3b: Pop(0)
0xc3c: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3d: Stack[-1] = (bool) 0
0xc3e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3f: Stack[-1] = (bool) 1
0xc40: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc41: @ Stop()
0xc42: Pop(0)
0xc43: PushEmpty(cvector)
0xc44: Call2 0xc68

0xc45: Pop(0)
0xc46: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc47: Return(); Pop(8)

0xc48: @ Stop()
0xc49: Pop(0)
0xc4a: Push((int) 120)
0xc4b: @ KillTimer(Stack[-1])
0xc4c: Pop(1)
0xc4d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc4e: Return(); Pop(0)

0xc4f: PushEmpty()
0xc50: PushEmpty()
0xc51: Call2 0xc48

0xc52: Pop(0)
0xc53: PushEmpty(object)
0xc54: Stack[-1] = Stack[-2]
0xc55: Call2 0x10e9

0xc56: Pop(1)
0xc57: Return(); Pop(0)

0xc58: PushEmpty(cvector, cvector, cvector, cvector)
0xc59: @ GetDirection(Stack[-2])
0xc5a: Pop(0)
0xc5b: PushEmpty(cvector, object)
0xc5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5d: Call2 0xc6d

0xc5e: Stack[-3] = Stack[-2]
0xc5f: Pop(2)
0xc60: PushEmpty(float, cvector, cvector)
0xc61: Stack[-2] = Stack[-5]
0xc62: Stack[-1] = Stack[-4]
0xc63: Call2 0xe23

0xc64: Pop(2)
0xc65: Push((float)-0.34202)
0xc66: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xc67: Return(); Pop(4)

0xc68: PushEmpty(cvector, cvector)
0xc69: @ GetPosition(Stack[-1])
0xc6a: Pop(0)
0xc6b: Stack[-3] = Stack[-1]
0xc6c: Return(); Pop(2)

0xc6d: PushEmpty(cvector, cvector, cvector, cvector)
0xc6e: @ GetPosition(Stack[-2])
0xc6f: Pop(0)
0xc70: @@ GetPosition(Stack[-1])
0xc71: Pop(0)
0xc72: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xc73: Return(); Pop(4)

0xc74: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc75: @ GetPosition(Stack[-3])
0xc76: Pop(0)
0xc77: @@ GetPosition(Stack[-2])
0xc78: Pop(0)
0xc79: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xc7a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xc7b: Return(); Pop(6)

0xc7c: PushEmpty(bool, bool)
0xc7d: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc7e: Pop(0)
0xc7f: Stack[-4] = Stack[-1]
0xc80: Return(); Pop(2)

0xc81: PushEmpty(bool, bool)
0xc82: Push("HasProperty")
0xc83: Push((int) 2)
0xc84: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xc85: Pop(1); Push((bool) Stack[-1] == 0)
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-5] = (bool) 0
0xc88: Return(); Pop(2)

0xc89: @@ HasProperty(Stack[-3], Stack[-1])
0xc8a: Pop(0)
0xc8b: Stack[-5] = Stack[-1]
0xc8c: Return(); Pop(2)

0xc8d: PushEmpty(bool, bool)
0xc8e: @@ IsDead(Stack[-1])
0xc8f: Pop(0)
0xc90: Stack[-4] = Stack[-1]
0xc91: Return(); Pop(2)

0xc92: PushEmpty(object, object, object, object)
0xc93: Pop(0); Push((bool) Stack[-5] == 0)
0xc94: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc95: Stack[-6] = (bool) 0
0xc96: Return(); Pop(4)

0xc97: PushEmpty(bool)
0xc98: Stack[-1] = (bool) 0
0xc99: Push("IsDead")
0xc9a: Push((int) 1)
0xc9b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xc9c: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc9d: PushEmpty(bool, object)
0xc9e: Stack[-1] = Stack[-8]
0xc9f: Call2 0xc8d

0xca0: Pop(1)
0xca1: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xca2: Stack[-1] = (bool) 1
0xca3: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xca4: Stack[-6] = (bool) 0
0xca5: Return(); Pop(4)

0xca6: @ GetScene(Stack[-2])
0xca7: Pop(0)
0xca8: Pop(0); Push((bool) Stack[-2] == 0)
0xca9: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcaa: Stack[-6] = (bool) 0
0xcab: Return(); Pop(4)

0xcac: @@ GetScene(Stack[-1])
0xcad: Pop(0)
0xcae: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xcaf: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xcb0: Stack[-6] = (bool) 0
0xcb1: Return(); Pop(4)

0xcb2: Stack[-6] = (bool) 1
0xcb3: Return(); Pop(4)

0xcb4: Stack[-1] = 0
0xcb5: Stack[-2] = 0
0xcb6: PushEmpty(int, int)
0xcb7: PushEmpty(bool, object)
0xcb8: Stack[-1] = Stack[-5]
0xcb9: Call2 0xc92

0xcba: Pop(1)
0xcbb: Pop(1); Push((bool) Stack[-1] == 0)
0xcbc: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcbd: Stack[-4] = (bool) 0
0xcbe: Return(); Pop(2)

0xcbf: PushEmpty(bool, object, string)
0xcc0: Stack[-2] = Stack[-6]
0xcc1: Stack[-1] = "noaccess"
0xcc2: Call2 0xc81

0xcc3: Pop(2)
0xcc4: Pop(1); Push((bool) Stack[-1] == 0)
0xcc5: IF (Stack[-1] == 0) GOTO 0xcc8; Pop(1)

0xcc6: Stack[-4] = (bool) 1
0xcc7: Return(); Pop(2)

0xcc8: Push("noaccess")
0xcc9: @@ GetProperty(Stack[-1], Stack[-2])
0xcca: Pop(1)
0xccb: Push((int) 0)
0xccc: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xccd: Return(); Pop(2)

0xcce: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xccf: Pop(0); Push((bool) Stack[-15] == 0)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcd1: Return(); Pop(14)

0xcd2: @ IsDead(Stack[-7])
0xcd3: Pop(0)
0xcd4: Push(Stack[-7])
0xcd5: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd6: Return(); Pop(14)

0xcd7: @ GetSecondaryAnimationType(Stack[-6])
0xcd8: Pop(0)
0xcd9: Push((int) 0)
0xcda: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xcdd; Pop(1)

0xcdc: Return(); Pop(14)

0xcdd: @@ GetPosition(Stack[-5])
0xcde: Pop(0)
0xcdf: @ GetPosition(Stack[-4])
0xce0: Pop(0)
0xce1: @ GetDirection(Stack[-3])
0xce2: Pop(0)
0xce3: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xce4: Push(CvectorIndex(Stack[-2], 0))
0xce5: Push(CvectorIndex(Stack[-4], 0))
0xce6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xce7: Push(CvectorIndex(Stack[-3], 2))
0xce8: Push(CvectorIndex(Stack[-5], 2))
0xce9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xceb: Push((int) 0)
0xcec: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xced: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcee: Stack[-1] = "fhit"
0xcef: GOTO 0xcf1

0xcf0: Stack[-1] = "bhit"
0xcf1: Push("hit_react")
0xcf2: Push("1")
0xcf3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcf4: Push("2")
0xcf5: Pop(1); Push(Stack[-4] + Stack[-1]);
0xcf6: Push((int) -10)
0xcf7: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcf8: Pop(4)
0xcf9: Return(); Pop(14)

0xcfa: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xcfb: PushEmpty(bool)
0xcfc: Stack[-1] = (bool) 0
0xcfd: PushEmpty(bool)
0xcfe: Stack[-1] = (bool) 0
0xcff: Push(Stack[-23])
0xd00: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd01: Push((int) 4)
0xd02: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xd03: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd04: Stack[-1] = (bool) 1
0xd05: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd06: Push((int) 5)
0xd07: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xd08: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd09: Stack[-1] = (bool) 1
0xd0a: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd0b: PushEmpty(cvector, cvector)
0xd0c: PushEmpty(cvector, object)
0xd0d: Stack[-1] = Stack[-25]
0xd0e: Call2 0xc6d

0xd0f: Stack[-3] = Stack[-2]
0xd10: Pop(2)
0xd11: Call2 0xe13

0xd12: Stack[-11] = Stack[-2]
0xd13: Pop(2)
0xd14: @ CreateVectorVector(Stack[-8])
0xd15: Pop(0)
0xd16: Stack[-7] = (int) 1
0xd17: Push("hit")
0xd18: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd19: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xd1a: Pop(1)
0xd1b: Pop(0); Push((bool) Stack[-6] == 0)
0xd1c: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1d: GOTO 0xd27

0xd1e: Pop(0); Push(Stack[-4] | Stack[-9]);
0xd1f: Push((float)0.70711)
0xd20: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd21: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd22: @@ add(Stack[-5])
0xd23: Pop(0)
0xd24: Push((int) 1)
0xd25: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xd26: GOTO 0xd17

0xd27: @@ size(Stack[-3])
0xd28: Pop(0)
0xd29: Push(Stack[-3])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd2b: @ irand(Stack[-2], Stack[-3])
0xd2c: Pop(0)
0xd2d: @@ get(Stack[-1], Stack[-2])
0xd2e: Pop(0)
0xd2f: PushEmpty(object, int, float, cvector, cvector)
0xd30: Stack[-5] = Stack[-26]
0xd31: Stack[-4] = Stack[-25]
0xd32: Stack[-3] = Stack[-24]
0xd33: Stack[-2] = Stack[-6]
0xd34: Stack[-1] = -Stack[-14]; Pop(0);
0xd35: Call2 0xd3e

0xd36: Pop(5)
0xd37: Return(); Pop(18)

0xd38: Stack[-8] = 0
0xd39: PushEmpty(object)
0xd3a: Stack[-1] = Stack[-22]
0xd3b: Call2 0xcce

0xd3c: Pop(1)
0xd3d: Return(); Pop(18)

0xd3e: PushEmpty(object, object, object, object)
0xd3f: @ GetScene(Stack[-2])
0xd40: Pop(0)
0xd41: Push("scripted")
0xd42: Push("blood_dir.xml")
0xd43: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xd44: Pop(2)
0xd45: PushEmpty(object)
0xd46: Stack[-1] = Stack[-10]
0xd47: Call2 0xcce

0xd48: Pop(1)
0xd49: Return(); Pop(4)

0xd4a: Stack[-1] = 0
0xd4b: Stack[-2] = 0
0xd4c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xd4d: @@ GetPosition(Stack[-3])
0xd4e: Pop(0)
0xd4f: @ GetPosition(Stack[-2])
0xd50: Pop(0)
0xd51: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xd52: Push(CvectorIndex(Stack[-1], 0))
0xd53: Push(CvectorIndex(Stack[-2], 2))
0xd54: @ RotateAsync(Stack[-2], Stack[-1])
0xd55: Pop(2)
0xd56: Return(); Pop(6)

0xd57: PushEmpty(bool, bool)
0xd58: @ IsLoaded(Stack[-1])
0xd59: Pop(0)
0xd5a: Stack[-3] = Stack[-1]
0xd5b: Return(); Pop(2)

0xd5c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xd5d: @@ GetPosition(Stack[-8])
0xd5e: Pop(0)
0xd5f: @@ GetEyesHeight(Stack[-9])
0xd60: Pop(0)
0xd61: Push(CvectorIndex(Stack[-8], 1))
0xd62: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd63: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xd64: @ GetPosition(Stack[-7])
0xd65: Pop(0)
0xd66: @ GetEyesHeight(Stack[-9])
0xd67: Pop(0)
0xd68: Push(CvectorIndex(Stack[-7], 1))
0xd69: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd6a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xd6b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd6c: Push(CvectorIndex(Stack[-6], 1))
0xd6d: Stack[-1] = (int) 0
0xd6e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xd6f: Pop(0); Push(Stack[-6] | Stack[-6]);
0xd70: Pop(1); Push(Sqrt(Stack[-1]))
0xd71: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xd72: Stack[-5] = -Stack[-6]; Pop(0);
0xd73: Pop(0); Push(Stack[-6] * Stack[-19]);
0xd74: PushEmpty(cvector, cvector)
0xd75: Push(CVector(0.0, 1.0, 0.0))
0xd76: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xd77: Call2 0xe13

0xd78: Pop(1)
0xd79: Push((int) 25)
0xd7a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd7b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd7c: Push(CVector(0.0, 10.0, 0.0))
0xd7d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xd7e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xd7f: @ IsOverrideActive(Stack[-2])
0xd80: Pop(0)
0xd81: Push(Stack[-2])
0xd82: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd83: Stack[-21] = (bool) 0
0xd84: Return(); Pop(18)

0xd85: @ StopWorld()
0xd86: Pop(0)
0xd87: Push((bool) 1)
0xd88: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xd89: Pop(1)
0xd8a: Push(CvectorIndex(Stack[-4], 0))
0xd8b: Push(CvectorIndex(Stack[-5], 2))
0xd8c: @ Rotate(Stack[-2], Stack[-1])
0xd8d: Pop(2)
0xd8e: PushEmpty(bool)
0xd8f: Call2 0x1314

0xd90: Pop(0)
0xd91: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd92: GOTO 0xd9b

0xd93: Push("head")
0xd94: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd95: Pop(1)
0xd96: Push(Stack[-1])
0xd97: IF (Stack[-1] == 0) GOTO 0xd9b; Pop(1)

0xd98: Push("head")
0xd99: @ LookAsyncCamera(Stack[-1])
0xd9a: Pop(1)
0xd9b: @ CameraWaitForPlayFinish()
0xd9c: Pop(0)
0xd9d: @ ResumeWorld()
0xd9e: Pop(0)
0xd9f: Stack[-21] = (bool) 1
0xda0: Return(); Pop(18)

0xda1: PushEmpty(bool, bool)
0xda2: Push((bool) 1)
0xda3: @ CameraSwitchToNormal(Stack[-1])
0xda4: Pop(1)
0xda5: PushEmpty(bool)
0xda6: Call2 0x1314

0xda7: Pop(0)
0xda8: IF (Stack[-1] == 0) GOTO 0xdaa; Pop(1)

0xda9: GOTO 0xdb2

0xdaa: Push("head")
0xdab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xdac: Pop(1)
0xdad: Push(Stack[-1])
0xdae: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdaf: Push("head")
0xdb0: @ UnlookAsync(Stack[-1])
0xdb1: Pop(1)
0xdb2: Return(); Pop(2)

0xdb3: PushEmpty(bool, float, float, bool, float, float)
0xdb4: @ lshHasAnimation(Stack[-3], Stack[-7])
0xdb5: Pop(0)
0xdb6: Push(Stack[-3])
0xdb7: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdb8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xdb9: Pop(0)
0xdba: Push((bool) 0)
0xdbb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdbc: Pop(1)
0xdbd: GOTO 0xdc2

0xdbe: Push("Can't find lsh animation : ")
0xdbf: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdc0: @ Trace(Stack[-1])
0xdc1: Pop(1)
0xdc2: Return(); Pop(6)

0xdc3: PushEmpty(bool, float, float, bool, float, float)
0xdc4: @ lshHasAnimation(Stack[-3], Stack[-8])
0xdc5: Pop(0)
0xdc6: Push(Stack[-3])
0xdc7: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdc8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xdc9: Pop(0)
0xdca: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xdcb: Pop(0)
0xdcc: GOTO 0xdd1

0xdcd: Push("Can't find lsh animation : ")
0xdce: Pop(1); Push(Stack[-1] + Stack[-9]);
0xdcf: @ Trace(Stack[-1])
0xdd0: Pop(1)
0xdd1: Return(); Pop(6)

0xdd2: PushEmpty(float, cvector, float, cvector)
0xdd3: @@ GetEyesHeight(Stack[-2])
0xdd4: Pop(0)
0xdd5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xdd6: Push(CvectorIndex(Stack[-1], 1))
0xdd7: Stack[-1] = Stack[-3]
0xdd8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xdd9: Push("head")
0xdda: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xddb: Pop(1)
0xddc: Return(); Pop(4)

0xddd: PushEmpty(bool)
0xdde: Call2 0x1314

0xddf: Pop(0)
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: @ lshStopSpeech()
0xde2: Pop(0)
0xde3: Return(); Pop(0)

0xde4: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xde5: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xde6: Pop(0)
0xde7: Pop(0); Push((bool) Stack[-8] == 0)
0xde8: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xde9: Stack[-7] = (int) 0
0xdea: Push((int) 1)
0xdeb: Pop(1); Push(Stack[-8] + Stack[-1]);
0xdec: Pop(1); Push(Stack[-18] + Stack[-1]);
0xded: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xdee: Pop(1)
0xdef: Pop(0); Push((bool) Stack[-6] == 0)
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdf1: GOTO 0xdf5

0xdf2: Push((int) 1)
0xdf3: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xdf4: GOTO 0xdea

0xdf5: Pop(0); Push((bool) Stack[-7] == 0)
0xdf6: IF (Stack[-1] == 0) GOTO 0xdf8; Pop(1)

0xdf7: Return(); Pop(16)

0xdf8: @ irand(Stack[-5], Stack[-7])
0xdf9: Pop(0)
0xdfa: Push((int) 1)
0xdfb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdfc: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xdfd: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xdfe: Pop(0)
0xdff: Push(Stack[-4])
0xe00: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xe01: @ GetEyesHeight(Stack[-3])
0xe02: Pop(0)
0xe03: @ GetDirection(Stack[-2])
0xe04: Pop(0)
0xe05: Push((int) 50)
0xe06: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xe07: Push(CvectorIndex(Stack[-1], 1))
0xe08: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xe09: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xe0a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xe0b: Pop(0)
0xe0c: Return(); Pop(16)

0xe0d: PushEmpty(object, object)
0xe0e: @ self(Stack[-1])
0xe0f: Pop(0)
0xe10: Stack[-3] = Stack[-1]
0xe11: Return(); Pop(2)

0xe12: Stack[-1] = 0
0xe13: PushEmpty(float, float)
0xe14: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe15: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe16: Push((float)0.0)
0xe17: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe18: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe19: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xe1a: Return(); Pop(2)

0xe1b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe1c: Return(); Pop(2)

0xe1d: PushEmpty(object, object)
0xe1e: @ CreateObjectVector(Stack[-1])
0xe1f: Pop(0)
0xe20: Stack[-3] = Stack[-1]
0xe21: Return(); Pop(2)

0xe22: Stack[-1] = 0
0xe23: PushEmpty()
0xe24: Pop(0); Push(Stack[-2] | Stack[-1]);
0xe25: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe26: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe27: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe28: Pop(1); Push(Sqrt(Stack[-1]))
0xe29: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xe2a: Return(); Pop(0)

0xe2b: PushEmpty()
0xe2c: Push(CvectorIndex(Stack[-2], 0))
0xe2d: Push(CvectorIndex(Stack[-2], 0))
0xe2e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe2f: Push(CvectorIndex(Stack[-3], 2))
0xe30: Push(CvectorIndex(Stack[-3], 2))
0xe31: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe32: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe33: Return(); Pop(0)

0xe34: PushEmpty()
0xe35: Push(CvectorIndex(Stack[-1], 0))
0xe36: Push(CvectorIndex(Stack[-2], 0))
0xe37: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe38: Push(CvectorIndex(Stack[-2], 2))
0xe39: Push(CvectorIndex(Stack[-3], 2))
0xe3a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe3b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe3c: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xe3d: Return(); Pop(0)

0xe3e: PushEmpty()
0xe3f: PushEmpty(float, cvector, cvector)
0xe40: Stack[-2] = Stack[-5]
0xe41: Stack[-1] = Stack[-4]
0xe42: Call2 0xe2b

0xe43: Pop(2)
0xe44: PushEmpty(float, cvector)
0xe45: Stack[-1] = Stack[-5]
0xe46: Call2 0xe34

0xe47: Pop(1)
0xe48: PushEmpty(float, cvector)
0xe49: Stack[-1] = Stack[-5]
0xe4a: Call2 0xe34

0xe4b: Pop(1)
0xe4c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe4d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xe4e: Return(); Pop(0)

0xe4f: PushEmpty(int, int)
0xe50: @ GetVariable(Stack[-3], Stack[-1])
0xe51: Pop(0)
0xe52: Stack[-4] = Stack[-1]
0xe53: Return(); Pop(2)

0xe54: PushEmpty(float, float)
0xe55: @ GetGameTime(Stack[-1])
0xe56: Pop(0)
0xe57: Push((int) 1)
0xe58: PushEmpty(int)
0xe59: Push((int) 24)
0xe5a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe5b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe5c: Return(); Pop(2)

0xe5d: PushEmpty(float, float)
0xe5e: @ GetGameTime(Stack[-1])
0xe5f: Pop(0)
0xe60: PushEmpty(int)
0xe61: Stack[-1] = Stack[-2]
0xe62: Push((int) 24)
0xe63: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xe64: Return(); Pop(2)

0xe65: PushEmpty()
0xe66: Push((int) 100)
0xe67: @@ SetReturnValue(Stack[-1])
0xe68: Pop(1)
0xe69: Return(); Pop(0)

0xe6a: PushEmpty()
0xe6b: PushEmpty(int, string)
0xe6c: Stack[-1] = "branch"
0xe6d: Call2 0xe4f

0xe6e: Pop(1)
0xe6f: Push((int) 0)
0xe70: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe72: Stack[-2] = (bool) 1
0xe73: Return(); Pop(0)

0xe74: Stack[-2] = (bool) 0
0xe75: Return(); Pop(0)

0xe76: PushEmpty()
0xe77: PushEmpty(int, string)
0xe78: Stack[-1] = "branch"
0xe79: Call2 0xe4f

0xe7a: Pop(1)
0xe7b: Push((int) 1)
0xe7c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7d: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe7e: Stack[-2] = (bool) 1
0xe7f: Return(); Pop(0)

0xe80: Stack[-2] = (bool) 0
0xe81: Return(); Pop(0)

0xe82: PushEmpty()
0xe83: PushEmpty(int, string)
0xe84: Stack[-1] = "branch"
0xe85: Call2 0xe4f

0xe86: Pop(1)
0xe87: Push((int) 2)
0xe88: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe89: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe8a: Stack[-2] = (bool) 1
0xe8b: Return(); Pop(0)

0xe8c: Stack[-2] = (bool) 0
0xe8d: Return(); Pop(0)

0xe8e: PushEmpty()
0xe8f: PushEmpty(bool, object)
0xe90: Stack[-1] = Stack[-3]
0xe91: Call2 0xf10

0xe92: Pop(1)
0xe93: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe94: Stack[-2] = (bool) 1
0xe95: Return(); Pop(0)

0xe96: Stack[-2] = (bool) 0
0xe97: Return(); Pop(0)

0xe98: PushEmpty()
0xe99: PushEmpty(bool, object)
0xe9a: Stack[-1] = Stack[-3]
0xe9b: Call2 0xf17

0xe9c: Pop(1)
0xe9d: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe9e: Stack[-2] = (bool) 1
0xe9f: Return(); Pop(0)

0xea0: Stack[-2] = (bool) 0
0xea1: Return(); Pop(0)

0xea2: PushEmpty()
0xea3: PushEmpty(bool, object)
0xea4: Stack[-1] = Stack[-3]
0xea5: Call2 0xf1e

0xea6: Pop(1)
0xea7: IF (Stack[-1] == 0) GOTO 0xeaa; Pop(1)

0xea8: Stack[-2] = (bool) 1
0xea9: Return(); Pop(0)

0xeaa: Stack[-2] = (bool) 0
0xeab: Return(); Pop(0)

0xeac: PushEmpty()
0xead: PushEmpty(bool, object)
0xeae: Stack[-1] = Stack[-3]
0xeaf: Call2 0xf25

0xeb0: Pop(1)
0xeb1: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xeb2: Stack[-2] = (bool) 1
0xeb3: Return(); Pop(0)

0xeb4: Stack[-2] = (bool) 0
0xeb5: Return(); Pop(0)

0xeb6: PushEmpty()
0xeb7: PushEmpty(bool, object)
0xeb8: Stack[-1] = Stack[-3]
0xeb9: Call2 0xf2c

0xeba: Pop(1)
0xebb: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xebc: Stack[-2] = (bool) 1
0xebd: Return(); Pop(0)

0xebe: Stack[-2] = (bool) 0
0xebf: Return(); Pop(0)

0xec0: PushEmpty()
0xec1: PushEmpty(bool, object)
0xec2: Stack[-1] = Stack[-3]
0xec3: Call2 0xf33

0xec4: Pop(1)
0xec5: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xec6: Stack[-2] = (bool) 1
0xec7: Return(); Pop(0)

0xec8: Stack[-2] = (bool) 0
0xec9: Return(); Pop(0)

0xeca: PushEmpty()
0xecb: PushEmpty(bool, object)
0xecc: Stack[-1] = Stack[-3]
0xecd: Call2 0xf3a

0xece: Pop(1)
0xecf: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xed0: Stack[-2] = (bool) 1
0xed1: Return(); Pop(0)

0xed2: Stack[-2] = (bool) 0
0xed3: Return(); Pop(0)

0xed4: PushEmpty()
0xed5: PushEmpty(bool, object)
0xed6: Stack[-1] = Stack[-3]
0xed7: Call2 0xf41

0xed8: Pop(1)
0xed9: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xeda: Stack[-2] = (bool) 1
0xedb: Return(); Pop(0)

0xedc: Stack[-2] = (bool) 0
0xedd: Return(); Pop(0)

0xede: PushEmpty()
0xedf: PushEmpty(bool, object)
0xee0: Stack[-1] = Stack[-3]
0xee1: Call2 0xf48

0xee2: Pop(1)
0xee3: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee4: Stack[-2] = (bool) 1
0xee5: Return(); Pop(0)

0xee6: Stack[-2] = (bool) 0
0xee7: Return(); Pop(0)

0xee8: PushEmpty()
0xee9: PushEmpty(bool, object)
0xeea: Stack[-1] = Stack[-3]
0xeeb: Call2 0xf4f

0xeec: Pop(1)
0xeed: IF (Stack[-1] == 0) GOTO 0xef0; Pop(1)

0xeee: Stack[-2] = (bool) 1
0xeef: Return(); Pop(0)

0xef0: Stack[-2] = (bool) 0
0xef1: Return(); Pop(0)

0xef2: PushEmpty()
0xef3: PushEmpty(bool, object)
0xef4: Stack[-1] = Stack[-3]
0xef5: Call2 0xf56

0xef6: Pop(1)
0xef7: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef8: Stack[-2] = (bool) 1
0xef9: Return(); Pop(0)

0xefa: Stack[-2] = (bool) 0
0xefb: Return(); Pop(0)

0xefc: PushEmpty()
0xefd: PushEmpty(bool, object)
0xefe: Stack[-1] = Stack[-3]
0xeff: Call2 0xf5d

0xf00: Pop(1)
0xf01: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf02: Stack[-2] = (bool) 1
0xf03: Return(); Pop(0)

0xf04: Stack[-2] = (bool) 0
0xf05: Return(); Pop(0)

0xf06: PushEmpty()
0xf07: PushEmpty(bool, object)
0xf08: Stack[-1] = Stack[-3]
0xf09: Call2 0xf64

0xf0a: Pop(1)
0xf0b: IF (Stack[-1] == 0) GOTO 0xf0e; Pop(1)

0xf0c: Stack[-2] = (bool) 1
0xf0d: Return(); Pop(0)

0xf0e: Stack[-2] = (bool) 0
0xf0f: Return(); Pop(0)

0xf10: PushEmpty()
0xf11: PushEmpty(int)
0xf12: Call2 0xe54

0xf13: Pop(0)
0xf14: Push((int) 1)
0xf15: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf16: Return(); Pop(0)

0xf17: PushEmpty()
0xf18: PushEmpty(int)
0xf19: Call2 0xe54

0xf1a: Pop(0)
0xf1b: Push((int) 2)
0xf1c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf1d: Return(); Pop(0)

0xf1e: PushEmpty()
0xf1f: PushEmpty(int)
0xf20: Call2 0xe54

0xf21: Pop(0)
0xf22: Push((int) 3)
0xf23: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf24: Return(); Pop(0)

0xf25: PushEmpty()
0xf26: PushEmpty(int)
0xf27: Call2 0xe54

0xf28: Pop(0)
0xf29: Push((int) 4)
0xf2a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf2b: Return(); Pop(0)

0xf2c: PushEmpty()
0xf2d: PushEmpty(int)
0xf2e: Call2 0xe54

0xf2f: Pop(0)
0xf30: Push((int) 5)
0xf31: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf32: Return(); Pop(0)

0xf33: PushEmpty()
0xf34: PushEmpty(int)
0xf35: Call2 0xe54

0xf36: Pop(0)
0xf37: Push((int) 6)
0xf38: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf39: Return(); Pop(0)

0xf3a: PushEmpty()
0xf3b: PushEmpty(int)
0xf3c: Call2 0xe54

0xf3d: Pop(0)
0xf3e: Push((int) 7)
0xf3f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf40: Return(); Pop(0)

0xf41: PushEmpty()
0xf42: PushEmpty(int)
0xf43: Call2 0xe54

0xf44: Pop(0)
0xf45: Push((int) 8)
0xf46: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf47: Return(); Pop(0)

0xf48: PushEmpty()
0xf49: PushEmpty(int)
0xf4a: Call2 0xe54

0xf4b: Pop(0)
0xf4c: Push((int) 9)
0xf4d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf4e: Return(); Pop(0)

0xf4f: PushEmpty()
0xf50: PushEmpty(int)
0xf51: Call2 0xe54

0xf52: Pop(0)
0xf53: Push((int) 10)
0xf54: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf55: Return(); Pop(0)

0xf56: PushEmpty()
0xf57: PushEmpty(int)
0xf58: Call2 0xe54

0xf59: Pop(0)
0xf5a: Push((int) 11)
0xf5b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf5c: Return(); Pop(0)

0xf5d: PushEmpty()
0xf5e: PushEmpty(int)
0xf5f: Call2 0xe54

0xf60: Pop(0)
0xf61: Push((int) 12)
0xf62: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf63: Return(); Pop(0)

0xf64: PushEmpty()
0xf65: PushEmpty(int)
0xf66: Call2 0xe5d

0xf67: Pop(0)
0xf68: Push((int) 12)
0xf69: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf6a: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf6b: Stack[-2] = (bool) 1
0xf6c: Return(); Pop(0)

0xf6d: Stack[-2] = (bool) 0
0xf6e: Return(); Pop(0)

0xf6f: PushEmpty(int, int)
0xf70: Push("branch")
0xf71: @ GetVariable(Stack[-1], Stack[-2])
0xf72: Pop(1)
0xf73: Push((int) 0)
0xf74: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf75: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf76: Stack[-3] = (int) 1
0xf77: Return(); Pop(2)

0xf78: GOTO 0xf7e

0xf79: Push((int) 1)
0xf7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7b: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf7c: Stack[-3] = (int) 2
0xf7d: Return(); Pop(2)

0xf7e: Stack[-3] = (int) 3
0xf7f: Return(); Pop(2)

0xf80: PushEmpty(int, int)
0xf81: Push("branch")
0xf82: @ GetVariable(Stack[-1], Stack[-2])
0xf83: Pop(1)
0xf84: Stack[-3] = Stack[-1]
0xf85: Return(); Pop(2)

0xf86: PushEmpty(int, int)
0xf87: @@ GetItemID(Stack[-1])
0xf88: Pop(0)
0xf89: Stack[-4] = Stack[-1]
0xf8a: Return(); Pop(2)

0xf8b: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0xf8c: Push((int) 0)
0xf8d: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xf8e: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xf8f: PushEmpty(int)
0xf90: Call2 0xe54

0xf91: Stack[-8] = Stack[-1]
0xf92: Pop(1)
0xf93: Stack[-6] = (int) 0
0xf94: Stack[-5] = (int) 1
0xf95: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0xf96: IF (Stack[-1] == 0) GOTO 0xfae; Pop(1)

0xf97: Stack[-4] = "Price"
0xf98: Push((int) 1)
0xf99: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xf9a: IF (Stack[-1] == 0) GOTO 0xf9c; Pop(1)

0xf9b: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0xf9c: PushEmpty(int, object)
0xf9d: Stack[-1] = Stack[-18]
0xf9e: Call2 0xf86

0xf9f: Pop(1)
0xfa0: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0xfa1: Pop(1)
0xfa2: Pop(0); Push((bool) Stack[-3] == 0)
0xfa3: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xfa4: GOTO 0xfab

0xfa5: PushEmpty(int, object)
0xfa6: Stack[-1] = Stack[-18]
0xfa7: Call2 0xf86

0xfa8: Pop(1)
0xfa9: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0xfaa: Pop(1)
0xfab: Push((int) 1)
0xfac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xfad: GOTO 0xf95

0xfae: Stack[-17] = Stack[-6]
0xfaf: Return(); Pop(14)

0xfb0: PushEmpty(int, object)
0xfb1: Stack[-1] = Stack[-18]
0xfb2: Call2 0xf86

0xfb3: Pop(1)
0xfb4: Push("BarterPrice")
0xfb5: Pop(1); Push(Stack[-1] + Stack[-17]);
0xfb6: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xfb7: Pop(2)
0xfb8: Pop(0); Push((bool) Stack[-2] == 0)
0xfb9: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfba: Stack[-17] = (int) 0
0xfbb: Return(); Pop(14)

0xfbc: PushEmpty(int, object)
0xfbd: Stack[-1] = Stack[-18]
0xfbe: Call2 0xf86

0xfbf: Pop(1)
0xfc0: Push("BarterPrice")
0xfc1: Pop(1); Push(Stack[-1] + Stack[-17]);
0xfc2: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xfc3: Pop(2)
0xfc4: Push((int) 0)
0xfc5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfc6: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc7: Stack[-17] = Stack[-1]
0xfc8: Return(); Pop(14)

0xfc9: Stack[-17] = -Stack[-1]; Pop(0);
0xfca: Return(); Pop(14)

0xfcb: PushEmpty()
0xfcc: PushEmpty(int)
0xfcd: Call2 0xf80

0xfce: Pop(0)
0xfcf: Push((int) 1)
0xfd0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd5; Pop(1)

0xfd2: @ WorkWithCorpse(Stack[-1])
0xfd3: Pop(0)
0xfd4: GOTO 0xfd7

0xfd5: @ Barter(Stack[-1])
0xfd6: Pop(0)
0xfd7: Return(); Pop(0)

0xfd8: PushEmpty(int, bool, int, bool)
0xfd9: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xfda: IF (Stack[-1] == 0) GOTO 0xfdf; Pop(1)

0xfdb: Push("GenerateMoney: iMin > iMax")
0xfdc: @ Trace(Stack[-1])
0xfdd: Pop(1)
0xfde: Return(); Pop(4)

0xfdf: Stack[-2] = (int) 0
0xfe0: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xfe1: IF (Stack[-1] == 0) GOTO 0xfe6; Pop(1)

0xfe2: Pop(0); Push(Stack[-5] - Stack[-6]);
0xfe3: @ irand(Stack[-3], Stack[-1])
0xfe4: Pop(1)
0xfe5: GOTO 0xfea

0xfe6: Push((int) 0)
0xfe7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xfe8: IF (Stack[-1] == 0) GOTO 0xfea; Pop(1)

0xfe9: Return(); Pop(4)

0xfea: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xfeb: Push((int) 0)
0xfec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfed: IF (Stack[-1] == 0) GOTO 0xfef; Pop(1)

0xfee: Return(); Pop(4)

0xfef: PushEmpty(int, string)
0xff0: Stack[-1] = "Money"
0xff1: Call2 0x10cf

0xff2: Pop(1)
0xff3: Push((int) 0)
0xff4: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xff5: Pop(2)
0xff6: Return(); Pop(4)

0xff7: PushEmpty(object, int, bool, object, int, bool)
0xff8: @ CreateInvItem(Stack[-3])
0xff9: Pop(0)
0xffa: @@ SetItemName(Stack[-7])
0xffb: Pop(0)
0xffc: Push("Organ")
0xffd: Push((int) 1)
0xffe: @@ SetProperty(Stack[-2], Stack[-1])
0xfff: Pop(2)
0x1000: @@ GetItemID(Stack[-2])
0x1001: Pop(0)
0x1002: Push((int) 0)
0x1003: Push((int) 1)
0x1004: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1005: Pop(2)
0x1006: Return(); Pop(6)

0x1007: Stack[-3] = 0
0x1008: PushEmpty(int)
0x1009: Call2 0xf80

0x100a: Pop(0)
0x100b: Push((int) 1)
0x100c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x100d: IF (Stack[-1] == 0) GOTO 0x100f; Pop(1)

0x100e: Return(); Pop(0)

0x100f: PushEmpty(string)
0x1010: Stack[-1] = "liver"
0x1011: Call2 0xff7

0x1012: Pop(1)
0x1013: PushEmpty(string)
0x1014: Stack[-1] = "kidney"
0x1015: Call2 0xff7

0x1016: Pop(1)
0x1017: PushEmpty(string)
0x1018: Stack[-1] = "heart"
0x1019: Call2 0xff7

0x101a: Pop(1)
0x101b: PushEmpty(string)
0x101c: Stack[-1] = "blood"
0x101d: Call2 0xff7

0x101e: Pop(1)
0x101f: Return(); Pop(0)

0x1020: PushEmpty(int, bool, int, bool)
0x1021: Push(Stack[-5])
0x1022: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1023: PushEmpty(int, int)
0x1024: Stack[-2] = (int) 0
0x1025: Push((int) 100)
0x1026: PushEmpty(int)
0x1027: Call2 0xe54

0x1028: Pop(0)
0x1029: Push((int) 100)
0x102a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x102b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x102c: Call2 0xfd8

0x102d: Pop(2)
0x102e: Push((int) 8)
0x102f: @ irand(Stack[-3], Stack[-1])
0x1030: Pop(1)
0x1031: Push((int) 0)
0x1032: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1033: IF (Stack[-1] == 0) GOTO 0x103d; Pop(1)

0x1034: PushEmpty(int, string)
0x1035: Stack[-1] = "lemon"
0x1036: Call2 0x10cf

0x1037: Pop(1)
0x1038: Push((int) 0)
0x1039: Push((int) 1)
0x103a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x103b: Pop(3)
0x103c: GOTO 0x1078

0x103d: Push((int) 1)
0x103e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1040: PushEmpty(int, string)
0x1041: Stack[-1] = "rusk"
0x1042: Call2 0x10cf

0x1043: Pop(1)
0x1044: Push((int) 0)
0x1045: Push((int) 1)
0x1046: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1047: Pop(3)
0x1048: GOTO 0x1078

0x1049: Push((int) 2)
0x104a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104b: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x104c: PushEmpty(int, string)
0x104d: Stack[-1] = "hook"
0x104e: Call2 0x10cf

0x104f: Pop(1)
0x1050: Push((int) 0)
0x1051: Push((int) 1)
0x1052: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1053: Pop(3)
0x1054: GOTO 0x1078

0x1055: Push((int) 4)
0x1056: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1057: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x1058: PushEmpty(int, string)
0x1059: Stack[-1] = "syringe"
0x105a: Call2 0x10cf

0x105b: Pop(1)
0x105c: Push((int) 0)
0x105d: Push((int) 1)
0x105e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x105f: Pop(3)
0x1060: GOTO 0x1078

0x1061: Push((int) 5)
0x1062: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x106d; Pop(1)

0x1064: PushEmpty(int, string)
0x1065: Stack[-1] = "watch"
0x1066: Call2 0x10cf

0x1067: Pop(1)
0x1068: Push((int) 0)
0x1069: Push((int) 1)
0x106a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x106b: Pop(3)
0x106c: GOTO 0x1078

0x106d: Push((int) 6)
0x106e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x1078; Pop(1)

0x1070: PushEmpty(int, string)
0x1071: Stack[-1] = "razor"
0x1072: Call2 0x10cf

0x1073: Pop(1)
0x1074: Push((int) 0)
0x1075: Push((int) 1)
0x1076: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1077: Pop(3)
0x1078: GOTO 0x10ce

0x1079: PushEmpty(int, int)
0x107a: Stack[-2] = (int) 0
0x107b: Push((int) 50)
0x107c: PushEmpty(int)
0x107d: Call2 0xe54

0x107e: Pop(0)
0x107f: Push((int) 50)
0x1080: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1081: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1082: Call2 0xfd8

0x1083: Pop(2)
0x1084: Push((int) 7)
0x1085: @ irand(Stack[-3], Stack[-1])
0x1086: Pop(1)
0x1087: Push((int) 0)
0x1088: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1089: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x108a: PushEmpty(int, string)
0x108b: Stack[-1] = "beads"
0x108c: Call2 0x10cf

0x108d: Pop(1)
0x108e: Push((int) 0)
0x108f: Push((int) 1)
0x1090: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1091: Pop(3)
0x1092: GOTO 0x10ce

0x1093: Push((int) 1)
0x1094: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1095: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x1096: PushEmpty(int, string)
0x1097: Stack[-1] = "bracelet"
0x1098: Call2 0x10cf

0x1099: Pop(1)
0x109a: Push((int) 0)
0x109b: Push((int) 1)
0x109c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x109d: Pop(3)
0x109e: GOTO 0x10ce

0x109f: Push((int) 2)
0x10a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a1: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x10a2: PushEmpty(int, string)
0x10a3: Stack[-1] = "ear_ring"
0x10a4: Call2 0x10cf

0x10a5: Pop(1)
0x10a6: Push((int) 0)
0x10a7: Push((int) 1)
0x10a8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10a9: Pop(3)
0x10aa: GOTO 0x10ce

0x10ab: Push((int) 3)
0x10ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ad: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10ae: PushEmpty(int, string)
0x10af: Stack[-1] = "gold_ring"
0x10b0: Call2 0x10cf

0x10b1: Pop(1)
0x10b2: Push((int) 0)
0x10b3: Push((int) 1)
0x10b4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: GOTO 0x10ce

0x10b7: Push((int) 4)
0x10b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10ba: PushEmpty(int, string)
0x10bb: Stack[-1] = "silver_ring"
0x10bc: Call2 0x10cf

0x10bd: Pop(1)
0x10be: Push((int) 0)
0x10bf: Push((int) 1)
0x10c0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10c1: Pop(3)
0x10c2: GOTO 0x10ce

0x10c3: Push((int) 5)
0x10c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c5: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10c6: PushEmpty(int, string)
0x10c7: Stack[-1] = "flower"
0x10c8: Call2 0x10cf

0x10c9: Pop(1)
0x10ca: Push((int) 0)
0x10cb: Push((int) 1)
0x10cc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10cd: Pop(3)
0x10ce: Return(); Pop(4)

0x10cf: PushEmpty(int, int)
0x10d0: @ GetInvItemByName(Stack[-1], Stack[-3])
0x10d1: Pop(0)
0x10d2: Stack[-4] = Stack[-1]
0x10d3: Return(); Pop(2)

0x10d4: PushEmpty()
0x10d5: PushEmpty(object)
0x10d6: Stack[-1] = Stack[-2]
0x10d7: Push(-1, 0); TaskCall(2)
0x10d8: Call2 0x679

0x10d9: Pop(-1, 0); TaskReturn
0x10da: Pop(1)
0x10db: Return(); Pop(0)

0x10dc: PushEmpty(float, float)
0x10dd: Push("health")
0x10de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10df: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10e0: Push("health")
0x10e1: @ GetProperty(Stack[-1], Stack[-2])
0x10e2: Pop(1)
0x10e3: Push((int) 0)
0x10e4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x10e5: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10e6: @ SignalDeath(Stack[-4])
0x10e7: Pop(0)
0x10e8: Return(); Pop(2)

0x10e9: PushEmpty()
0x10ea: PushEmpty(object)
0x10eb: Stack[-1] = Stack[-2]
0x10ec: Call2 0x10d4

0x10ed: Pop(1)
0x10ee: Return(); Pop(0)

0x10ef: PushEmpty()
0x10f0: PushEmpty(object, int, float)
0x10f1: Stack[-3] = Stack[-7]
0x10f2: Stack[-2] = Stack[-6]
0x10f3: Stack[-1] = Stack[-5]
0x10f4: Call2 0xcfa

0x10f5: Pop(3)
0x10f6: Return(); Pop(0)

0x10f7: PushEmpty()
0x10f8: PushEmpty(object, int, float, cvector, cvector)
0x10f9: Stack[-5] = Stack[-11]
0x10fa: Stack[-4] = Stack[-10]
0x10fb: Stack[-3] = Stack[-9]
0x10fc: Stack[-2] = Stack[-7]
0x10fd: Stack[-1] = Stack[-6]
0x10fe: Call2 0xd3e

0x10ff: Pop(5)
0x1100: Return(); Pop(0)

0x1101: PushEmpty()
0x1102: Push("unholster")
0x1103: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1104: IF (Stack[-1] == 0) GOTO 0x110c; Pop(1)

0x1105: PushEmpty(bool, object)
0x1106: Stack[-1] = Stack[-4]
0x1107: Call2 0x121d

0x1108: Stack[-5] = Stack[-2]
0x1109: Pop(2)
0x110a: Return(); Pop(0)

0x110b: GOTO 0x111f

0x110c: Push("player_shot")
0x110d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x110e: IF (Stack[-1] == 0) GOTO 0x1116; Pop(1)

0x110f: PushEmpty(bool, object)
0x1110: Stack[-1] = Stack[-4]
0x1111: Call2 0x122a

0x1112: Stack[-5] = Stack[-2]
0x1113: Pop(2)
0x1114: Return(); Pop(0)

0x1115: GOTO 0x111f

0x1116: Push("battle")
0x1117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1118: IF (Stack[-1] == 0) GOTO 0x111f; Pop(1)

0x1119: PushEmpty(bool, object)
0x111a: Stack[-1] = Stack[-4]
0x111b: Call2 0x1241

0x111c: Stack[-5] = Stack[-2]
0x111d: Pop(2)
0x111e: Return(); Pop(0)

0x111f: Stack[-3] = (bool) 0
0x1120: Return(); Pop(0)

0x1121: PushEmpty()
0x1122: Push("unholster")
0x1123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1124: IF (Stack[-1] == 0) GOTO 0x112a; Pop(1)

0x1125: PushEmpty(object)
0x1126: Stack[-1] = Stack[-3]
0x1127: Call2 0x1222

0x1128: Pop(1)
0x1129: GOTO 0x1139

0x112a: Push("player_shot")
0x112b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112c: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x112d: PushEmpty(object)
0x112e: Stack[-1] = Stack[-3]
0x112f: Call2 0x1239

0x1130: Pop(1)
0x1131: GOTO 0x1139

0x1132: Push("battle")
0x1133: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1134: IF (Stack[-1] == 0) GOTO 0x1139; Pop(1)

0x1135: PushEmpty(object)
0x1136: Stack[-1] = Stack[-3]
0x1137: Call2 0x1248

0x1138: Pop(1)
0x1139: Return(); Pop(0)

0x113a: PushEmpty(bool, bool)
0x113b: PushEmpty(bool)
0x113c: Stack[-1] = (bool) 0
0x113d: PushEmpty(bool, object)
0x113e: Stack[-1] = Stack[-6]
0x113f: Call2 0x121d

0x1140: Pop(1)
0x1141: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1142: PushEmpty(bool, object)
0x1143: Stack[-1] = Stack[-6]
0x1144: Call2 0xc7c

0x1145: Pop(1)
0x1146: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1147: Stack[-1] = (bool) 1
0x1148: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x1149: @@ IsWeaponHolstered(Stack[-1])
0x114a: Pop(0)
0x114b: Pop(0); Push((bool) Stack[-1] == 0)
0x114c: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x114d: Stack[-4] = (bool) 1
0x114e: Return(); Pop(2)

0x114f: Stack[-4] = (bool) 0
0x1150: Return(); Pop(2)

0x1151: PushEmpty()
0x1152: PushEmpty(object)
0x1153: Stack[-1] = Stack[-2]
0x1154: Call2 0x1222

0x1155: Pop(1)
0x1156: Return(); Pop(0)

0x1157: PushEmpty()
0x1158: PushEmpty(bool, object)
0x1159: Stack[-1] = Stack[-3]
0x115a: Call2 0xc7c

0x115b: Pop(1)
0x115c: IF (Stack[-1] == 0) GOTO 0x1163; Pop(1)

0x115d: PushEmpty(object)
0x115e: Call2 0xe0d

0x115f: Pop(0)
0x1160: Push((float)-0.05)
0x1161: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1162: Pop(2)
0x1163: Return(); Pop(0)

0x1164: PushEmpty(object, object)
0x1165: Push("heal")
0x1166: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1167: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x1168: Push("player")
0x1169: @ FindActor(Stack[-2], Stack[-1])
0x116a: Pop(1)
0x116b: PushEmpty(bool, object)
0x116c: Stack[-1] = Stack[-3]
0x116d: Call2 0x124e

0x116e: Stack[-6] = Stack[-2]
0x116f: Pop(2)
0x1170: Return(); Pop(2)

0x1171: Stack[-1] = 0
0x1172: Stack[-4] = (bool) 0
0x1173: Return(); Pop(2)

0x1174: PushEmpty(object, object)
0x1175: Push("heal")
0x1176: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1177: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x1178: Push("player")
0x1179: @ FindActor(Stack[-2], Stack[-1])
0x117a: Pop(1)
0x117b: PushEmpty(object)
0x117c: Stack[-1] = Stack[-2]
0x117d: Call2 0x1251

0x117e: Pop(1)
0x117f: Stack[-1] = 0
0x1180: Return(); Pop(2)

0x1181: PushEmpty()
0x1182: PushEmpty(bool)
0x1183: Call2 0x134e

0x1184: Pop(0)
0x1185: IF (Stack[-1] == 0) GOTO 0x1188; Pop(1)

0x1186: Stack[-2] = (int) 2
0x1187: GOTO 0x1189

0x1188: Stack[-2] = (int) 0
0x1189: Return(); Pop(0)

0x118a: PushEmpty()
0x118b: PushEmpty(object)
0x118c: Stack[-1] = Stack[-2]
0x118d: Push(-1, 1); TaskCall(4)
0x118e: Call2 0x838

0x118f: Pop(-1, 1); TaskReturn
0x1190: Pop(1)
0x1191: Return(); Pop(0)

0x1192: PushEmpty()
0x1193: PushEmpty(bool, object)
0x1194: Stack[-1] = Stack[-3]
0x1195: Call2 0xcb6

0x1196: Pop(1)
0x1197: IF (Stack[-1] == 0) GOTO 0x119a; Pop(1)

0x1198: Stack[-2] = (int) 2
0x1199: GOTO 0x119b

0x119a: Stack[-2] = (int) 0
0x119b: Return(); Pop(0)

0x119c: PushEmpty()
0x119d: PushEmpty(object)
0x119e: Stack[-1] = Stack[-2]
0x119f: Push(-1, 3); TaskCall(5)
0x11a0: Call2 0x94b

0x11a1: Pop(-1, 3); TaskReturn
0x11a2: Pop(1)
0x11a3: Return(); Pop(0)

0x11a4: PushEmpty()
0x11a5: PushEmpty(bool, object)
0x11a6: Stack[-1] = Stack[-4]
0x11a7: Call2 0xcb6

0x11a8: Pop(1)
0x11a9: IF (Stack[-1] == 0) GOTO 0x11ac; Pop(1)

0x11aa: Stack[-3] = (int) 2
0x11ab: GOTO 0x11ad

0x11ac: Stack[-3] = (int) 0
0x11ad: Return(); Pop(0)

0x11ae: PushEmpty()
0x11af: PushEmpty(object)
0x11b0: Stack[-1] = Stack[-2]
0x11b1: Push(-1, 3); TaskCall(6)
0x11b2: Call2 0xa47

0x11b3: Pop(-1, 3); TaskReturn
0x11b4: Pop(1)
0x11b5: Return(); Pop(0)

0x11b6: PushEmpty(string, bool, string, bool)
0x11b7: PushEmpty(bool, object, string)
0x11b8: Stack[-2] = Stack[-9]
0x11b9: Stack[-1] = "class"
0x11ba: Call2 0xc81

0x11bb: Pop(2)
0x11bc: Pop(1); Push((bool) Stack[-1] == 0)
0x11bd: IF (Stack[-1] == 0) GOTO 0x11c0; Pop(1)

0x11be: Stack[-8] = (bool) 0
0x11bf: Return(); Pop(4)

0x11c0: Push("class")
0x11c1: @@ GetProperty(Stack[-1], Stack[-3])
0x11c2: Pop(1)
0x11c3: Push("rat")
0x11c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c5: IF (Stack[-1] == 0) GOTO 0x11c9; Pop(1)

0x11c6: Stack[-8] = (bool) 0
0x11c7: Return(); Pop(4)

0x11c8: GOTO 0x11d4

0x11c9: Push("rat_big")
0x11ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11cc: Stack[-8] = (bool) 0
0x11cd: Return(); Pop(4)

0x11ce: GOTO 0x11d4

0x11cf: Push("dog")
0x11d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d1: IF (Stack[-1] == 0) GOTO 0x11d4; Pop(1)

0x11d2: Stack[-8] = (bool) 0
0x11d3: Return(); Pop(4)

0x11d4: @ CanSee(Stack[-1], Stack[-7])
0x11d5: Pop(0)
0x11d6: PushEmpty(bool)
0x11d7: Stack[-1] = (bool) 1
0x11d8: Push(Stack[-2])
0x11d9: IF (Stack[-1] == 0) GOTO 0x11e2; Pop(1)

0x11da: PushEmpty(float, object)
0x11db: Stack[-1] = Stack[-10]
0x11dc: Call2 0xc74

0x11dd: Pop(1)
0x11de: Pop(0); Push(Stack[-7] * Stack[-7]);
0x11df: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x11e0: IF (Stack[-1] == 0) GOTO 0x11e2; Pop(1)

0x11e1: Stack[-1] = (bool) 0
0x11e2: IF (Stack[-1] == 0) GOTO 0x11e5; Pop(1)

0x11e3: Stack[-8] = (bool) 1
0x11e4: Return(); Pop(4)

0x11e5: @ CanSee(Stack[-1], Stack[-6])
0x11e6: Pop(0)
0x11e7: PushEmpty(bool)
0x11e8: Stack[-1] = (bool) 1
0x11e9: Push(Stack[-2])
0x11ea: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11eb: PushEmpty(float, object)
0x11ec: Stack[-1] = Stack[-9]
0x11ed: Call2 0xc74

0x11ee: Pop(1)
0x11ef: Pop(0); Push(Stack[-7] * Stack[-7]);
0x11f0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x11f1: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11f2: Stack[-1] = (bool) 0
0x11f3: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f4: Stack[-8] = (bool) 1
0x11f5: Return(); Pop(4)

0x11f6: Stack[-8] = (bool) 0
0x11f7: Return(); Pop(4)

0x11f8: PushEmpty()
0x11f9: Stack[-2] = (int) 2
0x11fa: Return(); Pop(0)

0x11fb: PushEmpty()
0x11fc: PushEmpty(object)
0x11fd: Stack[-1] = Stack[-2]
0x11fe: Call2 0x131e

0x11ff: Pop(1)
0x1200: Return(); Pop(0)

0x1201: Return(); Pop(0)

0x1202: PushEmpty(bool, bool)
0x1203: Push("Received steal")
0x1204: @ Trace(Stack[-1])
0x1205: Pop(1)
0x1206: @ CanSee(Stack[-1], Stack[-3])
0x1207: Pop(0)
0x1208: Push(Stack[-1])
0x1209: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120a: PushEmpty(int, object)
0x120b: Stack[-1] = Stack[-5]
0x120c: Call2 0x1192

0x120d: Stack[-6] = Stack[-2]
0x120e: Pop(2)
0x120f: Return(); Pop(2)

0x1210: Stack[-4] = (int) 0
0x1211: Return(); Pop(2)

0x1212: PushEmpty()
0x1213: PushEmpty(object)
0x1214: Stack[-1] = Stack[-2]
0x1215: Call2 0x119c

0x1216: Pop(1)
0x1217: Return(); Pop(0)

0x1218: PushEmpty()
0x1219: Stack[-3] = (int) 0
0x121a: Return(); Pop(0)

0x121b: PushEmpty()
0x121c: Return(); Pop(0)

0x121d: PushEmpty(bool, bool)
0x121e: @ CanSee(Stack[-1], Stack[-3])
0x121f: Pop(0)
0x1220: Stack[-4] = Stack[-1]
0x1221: Return(); Pop(2)

0x1222: PushEmpty()
0x1223: PushEmpty(object)
0x1224: Stack[-1] = Stack[-2]
0x1225: Push(-1, 3); TaskCall(7)
0x1226: Call2 0xb09

0x1227: Pop(-1, 3); TaskReturn
0x1228: Pop(1)
0x1229: Return(); Pop(0)

0x122a: PushEmpty(bool, bool)
0x122b: @ CanSee(Stack[-1], Stack[-3])
0x122c: Pop(0)
0x122d: Stack[-4] = (bool) 1
0x122e: Push(Stack[-1])
0x122f: IF (Stack[-1] == 0) GOTO 0x1238; Pop(1)

0x1230: PushEmpty(float, object)
0x1231: Stack[-1] = Stack[-5]
0x1232: Call2 0xc74

0x1233: Pop(1)
0x1234: Push((int) 4000000)
0x1235: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1236: IF (Stack[-1] == 0) GOTO 0x1238; Pop(1)

0x1237: Stack[-4] = (bool) 0
0x1238: Return(); Pop(2)

0x1239: PushEmpty()
0x123a: PushEmpty(object)
0x123b: Stack[-1] = Stack[-2]
0x123c: Push(-1, 3); TaskCall(8)
0x123d: Call2 0xbcb

0x123e: Pop(-1, 3); TaskReturn
0x123f: Pop(1)
0x1240: Return(); Pop(0)

0x1241: PushEmpty()
0x1242: PushEmpty(bool, object)
0x1243: Stack[-1] = Stack[-3]
0x1244: Call2 0x122a

0x1245: Stack[-4] = Stack[-2]
0x1246: Pop(2)
0x1247: Return(); Pop(0)

0x1248: PushEmpty()
0x1249: PushEmpty(object)
0x124a: Stack[-1] = Stack[-2]
0x124b: Call2 0x1239

0x124c: Pop(1)
0x124d: Return(); Pop(0)

0x124e: PushEmpty()
0x124f: Stack[-2] = (bool) 0
0x1250: Return(); Pop(0)

0x1251: PushEmpty()
0x1252: Return(); Pop(0)

0x1253: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x1254: PushEmpty(object)
0x1255: Call2 0xe1d

0x1256: Stack[-27] = Stack[-1]
0x1257: Pop(1)
0x1258: @ CreateIntVector(Stack[-25])
0x1259: Pop(0)
0x125a: @ CreateIntVector(Stack[-24])
0x125b: Pop(0)
0x125c: @ CreateIntVector(Stack[-23])
0x125d: Pop(0)
0x125e: @@ GetSubContainerCount(Stack[-22])
0x125f: Pop(0)
0x1260: Stack[-21] = (int) 0
0x1261: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x1262: IF (Stack[-1] == 0) GOTO 0x12a9; Pop(1)

0x1263: @@ GetItemCount(Stack[-20], Stack[-21])
0x1264: Pop(0)
0x1265: Stack[-19] = (int) 0
0x1266: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x1267: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x1268: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x1269: Pop(0)
0x126a: @@ GetItemID(Stack[-17])
0x126b: Pop(0)
0x126c: Push("HasDurability")
0x126d: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x126e: Pop(1)
0x126f: Push(Stack[-16])
0x1270: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x1271: Push("durability")
0x1272: @@ HasProperty(Stack[-17], Stack[-1])
0x1273: Pop(1)
0x1274: Push(Stack[-16])
0x1275: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x1276: Push("durability")
0x1277: @@ GetProperty(Stack[-16], Stack[-1])
0x1278: Pop(1)
0x1279: PushEmpty(bool)
0x127a: Stack[-1] = (bool) 0
0x127b: Push((int) 100)
0x127c: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x127d: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x127e: PushEmpty(bool, object)
0x127f: Stack[-1] = Stack[-21]
0x1280: Call2 0x12e6

0x1281: Pop(1)
0x1282: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x1283: Stack[-1] = (bool) 1
0x1284: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x1285: @@ add(Stack[-18])
0x1286: Pop(0)
0x1287: @@ add(Stack[-21])
0x1288: Pop(0)
0x1289: @@ add(Stack[-19])
0x128a: Pop(0)
0x128b: PushEmpty(int, object, int)
0x128c: Stack[-2] = Stack[-21]
0x128d: Stack[-1] = (int) 0
0x128e: Call2 0xf8b

0x128f: Stack[-17] = Stack[-3]
0x1290: Pop(3)
0x1291: Push((float)1.0)
0x1292: Push((float)2.0)
0x1293: Pop(1); Push(Stack[-1] * Stack[-17]);
0x1294: Push((float)100.0)
0x1295: Pop(2); Push(Stack[-2] / Stack[-1]);
0x1296: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1297: Pop(1); Push(Stack[-15] * Stack[-1]);
0x1298: Push((int) 100)
0x1299: Pop(1); Push(Stack[-1] - Stack[-17]);
0x129a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x129b: Push((int) 300)
0x129c: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x129d: Pop(0); Push((bool) Stack[-13] == 0)
0x129e: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129f: Stack[-13] = (int) 1
0x12a0: @@ add(Stack[-13])
0x12a1: Pop(0)
0x12a2: Stack[-18] = 0
0x12a3: Push((int) 1)
0x12a4: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x12a5: GOTO 0x1266

0x12a6: Push((int) 1)
0x12a7: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x12a8: GOTO 0x1261

0x12a9: @ CreateIntVector(Stack[-12])
0x12aa: Pop(0)
0x12ab: Push("repair.xml")
0x12ac: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x12ad: Pop(1)
0x12ae: @@ size(Stack[-11])
0x12af: Pop(0)
0x12b0: Pop(0); Push((bool) Stack[-11] == 0)
0x12b1: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12b2: Return(); Pop(52)

0x12b3: Stack[-10] = (int) 0
0x12b4: Stack[-9] = (int) 0
0x12b5: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x12b6: IF (Stack[-1] == 0) GOTO 0x12bf; Pop(1)

0x12b7: @@ get(Stack[-8], Stack[-9])
0x12b8: Pop(0)
0x12b9: @@ get(Stack[-7], Stack[-8])
0x12ba: Pop(0)
0x12bb: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x12bc: Push((int) 1)
0x12bd: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x12be: GOTO 0x12b5

0x12bf: Push("money")
0x12c0: @@ GetProperty(Stack[-1], Stack[-7])
0x12c1: Pop(1)
0x12c2: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x12c3: Push((int) 0)
0x12c4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x12c5: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c6: Return(); Pop(52)

0x12c7: Push("money")
0x12c8: @@ SetProperty(Stack[-1], Stack[-7])
0x12c9: Pop(1)
0x12ca: Stack[-5] = (int) 0
0x12cb: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x12cc: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12cd: @@ get(Stack[-4], Stack[-5])
0x12ce: Pop(0)
0x12cf: @@ get(Stack[-3], Stack[-4])
0x12d0: Pop(0)
0x12d1: @@ get(Stack[-2], Stack[-4])
0x12d2: Pop(0)
0x12d3: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x12d4: Pop(0)
0x12d5: Push("durability")
0x12d6: Push((int) 100)
0x12d7: @@ SetProperty(Stack[-2], Stack[-1])
0x12d8: Pop(2)
0x12d9: Push((int) 1)
0x12da: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x12db: Pop(1)
0x12dc: Stack[-1] = 0
0x12dd: Push((int) 1)
0x12de: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x12df: GOTO 0x12cb

0x12e0: Return(); Pop(52)

0x12e1: Stack[-12] = 0
0x12e2: Stack[-23] = 0
0x12e3: Stack[-24] = 0
0x12e4: Stack[-25] = 0
0x12e5: Stack[-26] = 0
0x12e6: PushEmpty(int, bool, int, int, bool, int)
0x12e7: @@ GetItemID(Stack[-3])
0x12e8: Pop(0)
0x12e9: Push("Category")
0x12ea: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12eb: Pop(1)
0x12ec: Pop(0); Push((bool) Stack[-2] == 0)
0x12ed: IF (Stack[-1] == 0) GOTO 0x12f0; Pop(1)

0x12ee: Stack[-8] = (bool) 0
0x12ef: Return(); Pop(6)

0x12f0: Push("Category")
0x12f1: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x12f2: Pop(1)
0x12f3: Push((int) 1)
0x12f4: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x12f5: Return(); Pop(6)

0x12f6: PushEmpty()
0x12f7: PushEmpty(int, object)
0x12f8: Stack[-1] = Stack[-3]
0x12f9: Push(-2, 1); TaskCall(0)
0x12fa: Call2 0x0

0x12fb: Pop(-2, 1); TaskReturn
0x12fc: Pop(1)
0x12fd: Push((int) 100)
0x12fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ff: IF (Stack[-1] == 0) GOTO 0x1304; Pop(1)

0x1300: PushEmpty(object)
0x1301: Stack[-1] = Stack[-2]
0x1302: Call2 0x1253

0x1303: Pop(1)
0x1304: Return(); Pop(0)

0x1305: PushEmpty(string, string)
0x1306: Stack[-1] = "idle"
0x1307: Push(Stack[-3])
0x1308: IF (Stack[-1] == 0) GOTO 0x130a; Pop(1)

0x1309: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x130a: Stack[-4] = Stack[-1]
0x130b: Return(); Pop(2)

0x130c: Stack[-1] = (int) 515567
0x130d: Return(); Pop(0)

0x130e: Stack[-1] = (int) 503352
0x130f: Return(); Pop(0)

0x1310: Stack[-1] = "ui/NPC_Citizen3.png"
0x1311: Return(); Pop(0)

0x1312: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1313: Return(); Pop(0)

0x1314: Stack[-1] = (bool) 0
0x1315: Return(); Pop(0)

0x1316: Push(GlobalVars[0])
0x1317: Stack[-1] = (bool) 0
0x1318: GlobalVars[0] = Stack[-1]; Pop(1)
0x1319: PushEmpty(bool)
0x131a: Stack[-1] = (bool) 0
0x131b: Call2 0x1020

0x131c: Pop(1)
0x131d: Return(); Pop(0)

0x131e: PushEmpty(bool, bool)
0x131f: Push(GlobalVars[0])
0x1320: IF (Stack[-1] == 0) GOTO 0x132b; Pop(1)

0x1321: @ IsOverrideActive(Stack[-1])
0x1322: Pop(0)
0x1323: Pop(0); Push((bool) Stack[-1] == 0)
0x1324: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1325: PushEmpty(object)
0x1326: Stack[-1] = Stack[-4]
0x1327: Call2 0xfcb

0x1328: Pop(1)
0x1329: Return(); Pop(2)

0x132a: GOTO 0x132f

0x132b: PushEmpty(object)
0x132c: Stack[-1] = Stack[-4]
0x132d: Call2 0x12f6

0x132e: Pop(1)
0x132f: Return(); Pop(2)

0x1330: PushEmpty(int, bool, int, int, bool, int)
0x1331: Stack[-3] = (int) 0
0x1332: Push("all")
0x1333: PushEmpty(string, int)
0x1334: Stack[-1] = Stack[-6]
0x1335: Call2 0x1305

0x1336: Pop(1)
0x1337: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x1338: Pop(2)
0x1339: Pop(0); Push((bool) Stack[-2] == 0)
0x133a: IF (Stack[-1] == 0) GOTO 0x133c; Pop(1)

0x133b: GOTO 0x133f

0x133c: Push((int) 1)
0x133d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x133e: GOTO 0x1332

0x133f: @ irand(Stack[-1], Stack[-3])
0x1340: Pop(0)
0x1341: Push("all")
0x1342: PushEmpty(string, int)
0x1343: Stack[-1] = Stack[-4]
0x1344: Call2 0x1305

0x1345: Pop(1)
0x1346: @ PlayAnimation(Stack[-2], Stack[-1])
0x1347: Pop(2)
0x1348: @ WaitForAnimEnd()
0x1349: Pop(0)
0x134a: Return(); Pop(6)

0x134b: @ StopAnimation()
0x134c: Pop(0)
0x134d: Return(); Pop(0)

0x134e: Stack[-1] = (bool) 1
0x134f: Return(); Pop(0)

0x1350: PushEmpty()
0x1351: PushEmpty(bool, object, object, float)
0x1352: Stack[-3] = Stack[-7]
0x1353: Stack[-2] = Stack[-6]
0x1354: Stack[-1] = (float) 500.0
0x1355: Call2 0x11b6

0x1356: Pop(3)
0x1357: IF (Stack[-1] == 0) GOTO 0x135e; Pop(1)

0x1358: Push("ToDie")
0x1359: Push((bool) 1)
0x135a: @ SetProperty(Stack[-2], Stack[-1])
0x135b: Pop(2)
0x135c: Stack[-4] = (bool) 1
0x135d: Return(); Pop(0)

0x135e: Stack[-4] = (bool) 0
0x135f: Return(); Pop(0)

0x1360: PushEmpty()
0x1361: PushEmpty(bool, object)
0x1362: Stack[-1] = Stack[-3]
0x1363: Call2 0xc7c

0x1364: Pop(1)
0x1365: IF (Stack[-1] == 0) GOTO 0x1371; Pop(1)

0x1366: PushEmpty(object)
0x1367: Call2 0xe0d

0x1368: Pop(0)
0x1369: Push((float)-0.1)
0x136a: Push((bool) 1)
0x136b: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x136c: Pop(3)
0x136d: PushEmpty(bool)
0x136e: Stack[-1] = (bool) 0
0x136f: Call2 0x1020

0x1370: Pop(1)
0x1371: PushEmpty()
0x1372: Call2 0x1008

0x1373: Pop(0)
0x1374: Push(GlobalVars[0])
0x1375: Stack[-1] = (bool) 1
0x1376: GlobalVars[0] = Stack[-1]; Pop(1)
0x1377: Push((int) 50)
0x1378: Push((int) 40)
0x1379: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x137a: Pop(2)
0x137b: Return(); Pop(0)

