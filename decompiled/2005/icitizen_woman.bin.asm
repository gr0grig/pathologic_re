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

RunOp = 0x534
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x20a Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x4a7 Vars = (object)
		EVENT_6 Op = 0x4b5 Vars = ()
		EVENT_22 Op = 0x52e Vars = (object, int, float, float)
		EVENT_16 Op = 0x530 Vars = (object, string)
		EVENT_41 Op = 0x532 Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x55f Vars = (object)
		EVENT_17 Op = 0x573 Vars = (object)
		EVENT_30 Op = 0x58b Vars = (object, object, bool)
		EVENT_40 Op = 0x5a7 Vars = (object)
		EVENT_42 Op = 0x5bb Vars = (object, string)
		EVENT_26 Op = 0x5e0 Vars = (string)
		EVENT_1 Op = 0x5ee Vars = (object)
		EVENT_3 Op = 0x604 Vars = (object)
		EVENT_7 Op = 0x60d Vars = (int)
		EVENT_6 Op = 0x619 Vars = ()
		EVENT_41 Op = 0x62d Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x68f Vars = (object)
		EVENT_17 Op = 0x6a3 Vars = (object)
		EVENT_30 Op = 0x6bb Vars = (object, object, bool)
		EVENT_40 Op = 0x6d7 Vars = (object)
		EVENT_42 Op = 0x6eb Vars = (object, string)
		EVENT_26 Op = 0x710 Vars = (string)
		EVENT_41 Op = 0x729 Vars = (object)
		EVENT_7 Op = 0x732 Vars = (int)
		EVENT_6 Op = 0x755 Vars = ()
		EVENT_1 Op = 0x75c Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x786 Vars = ()
		EVENT_7 Op = 0x7f4 Vars = (int)
		EVENT_41 Op = 0x82f Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x8af Vars = (int)
		EVENT_41 Op = 0x8ea Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x903 Vars = ()
		EVENT_7 Op = 0x971 Vars = (int)
		EVENT_41 Op = 0x9ac Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x9c5 Vars = ()
		EVENT_7 Op = 0xa33 Vars = (int)
		EVENT_41 Op = 0xa6e Vars = (object)

Events:
EVENT_16 Op = 0xedc Vars = (object, string)
EVENT_41 Op = 0xee9 Vars = (object)
EVENT_22 Op = 0xeef Vars = (object, int, float, float)
EVENT_43 Op = 0xef7 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xb7b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x110e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x110c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1110

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1112

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd6f

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
0x41: Call2 0xbbf

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
0x4f: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xc97

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x1f4

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
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0xca3

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0xcad

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 0
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0xcb7

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 0
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 543182)
0x76: Push((int) -1)
0x77: Push((int) 45638)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 1
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 1
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0xca3

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0xcad

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 0
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0xcb7

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[-1] = (bool) 0
0x92: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call2 0xcc1

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 543183)
0x9b: Push((int) -1)
0x9c: Push((int) 45639)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 1
0xa1: PushEmpty(bool)
0xa2: Stack[-1] = (bool) 1
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 1
0xa5: PushEmpty(bool)
0xa6: Stack[-1] = (bool) 1
0xa7: PushEmpty(bool, object)
0xa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9: Call2 0xcc1

0xaa: Pop(1)
0xab: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0xccb

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: PushEmpty(bool, object)
0xb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Call2 0xcd5

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call2 0xcdf

0xbd: Pop(1)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 0
0xc0: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0xce9

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Stack[-1] = (bool) 0
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 543187)
0xc9: Push((int) -1)
0xca: Push((int) 45643)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 1
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 1
0xd1: PushEmpty(bool)
0xd2: Stack[-1] = (bool) 1
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0xcf3

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0xcfd

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 0
0xde: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0xd07

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Stack[-1] = (bool) 0
0xe5: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0xd11

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Stack[-1] = (bool) 0
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: Push((int) 543208)
0xee: Push((int) -1)
0xef: Push((int) 45664)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 1
0xf4: PushEmpty(bool)
0xf5: Stack[-1] = (bool) 1
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Call2 0xca3

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfb: PushEmpty(bool, object)
0xfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Call2 0xcad

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 0
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0xcb7

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 0
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: Push((int) 543181)
0x10a: Push((int) -1)
0x10b: Push((int) 45637)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 1
0x110: PushEmpty(bool)
0x111: Stack[-1] = (bool) 1
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0xcc1

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0xccb

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 0
0x11d: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0xcd5

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Stack[-1] = (bool) 0
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: Push((int) 543184)
0x126: Push((int) -1)
0x127: Push((int) 45640)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 1
0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 1
0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 1
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x132: Call2 0xcb7

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0xcd5

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: Stack[-1] = (bool) 0
0x13b: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0xcdf

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 0
0x142: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0xce9

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 0
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: Push((int) 543185)
0x14b: Push((int) -1)
0x14c: Push((int) 45641)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: PushEmpty(bool)
0x150: Stack[-1] = (bool) 1
0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 1
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0xcf3

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0xcfd

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[-1] = (bool) 0
0x15e: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0xd07

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 0
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: Push((int) 543186)
0x167: Push((int) -1)
0x168: Push((int) 45642)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: PushEmpty(bool)
0x16c: Stack[-1] = (bool) 1
0x16d: PushEmpty(bool)
0x16e: Stack[-1] = (bool) 1
0x16f: PushEmpty(bool)
0x170: Stack[-1] = (bool) 1
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 1
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0xcd5

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0xce9

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 0
0x17e: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x181: Call2 0xcf3

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: Stack[-1] = (bool) 0
0x185: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0xd11

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[-1] = (bool) 0
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call2 0xcfd

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-1] = (bool) 0
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: Push((int) 543188)
0x195: Push((int) -1)
0x196: Push((int) 45644)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: GOTO 0x1d6

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0x1f4

0x19d: Pop(1)
0x19e: Push((int) 538167)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 538168)
0x1a4: Push((int) -1)
0x1a5: Push((int) 40043)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0xca3

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call2 0xc7f

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 538169)
0x1b7: Push((int) 40045)
0x1b8: Push((int) 40044)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 1
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Call2 0xc7f

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call2 0xc8b

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 0
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 538204)
0x1ca: Push((int) -1)
0x1cb: Push((int) 40081)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Push((int) 538205)
0x1cf: Push((int) -1)
0x1d0: Push((int) 40082)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: GOTO 0x1d6

0x1d4: Return(); Pop(0)

0x1d5: GOTO 0x4e

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x1114

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1da: @ lshWaitForAnimEnd()
0x1db: Pop(0)
0x1dc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: GOTO 0x1e4

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e1: Call2 0xbd0

0x1e2: Pop(1)
0x1e3: GOTO 0x1da

0x1e4: GOTO 0x1f3

0x1e5: Push("all")
0x1e6: Push("idle")
0x1e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: @ WaitForAnimEnd()
0x1ea: Pop(0)
0x1eb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f3

0x1ee: Push("all")
0x1ef: Push("idle")
0x1f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: GOTO 0x1e9

0x1f3: Return(); Pop(0)

0x1f4: PushEmpty()
0x1f5: PushEmpty(bool)
0x1f6: Call2 0x1114

0x1f7: Pop(0)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Return(); Pop(0)

0x1fb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(string, bool)
0x1ff: Stack[-2] = Stack[-3]
0x200: Push("")
0x201: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-1] = (bool) 0
0x204: GOTO 0x206

0x205: Stack[-1] = (bool) 1
0x206: Call2 0xbe0

0x207: Pop(2)
0x208: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: Push((int) 1)
0x20c: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x20d: PushEmpty()
0x20e: Call2 0xbfa

0x20f: Pop(0)
0x210: Push((int) 45638)
0x211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(object, object)
0x214: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0xc7a

0x217: Pop(2)
0x218: Push((int) 45639)
0x219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0xc7a

0x21f: Pop(2)
0x220: Push((int) 45643)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: PushEmpty(object, object)
0x224: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x225: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x226: Call2 0xc7a

0x227: Pop(2)
0x228: Push((int) 45664)
0x229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0xc7a

0x22f: Pop(2)
0x230: Push((int) 40043)
0x231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: PushEmpty(object, object)
0x234: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x235: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x236: Call2 0xc7a

0x237: Pop(2)
0x238: Push((int) 45636)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x23b: PushEmpty(bool, object)
0x23c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Call2 0xc97

0x23e: Pop(1)
0x23f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Neutral"
0x242: Call2 0x1f4

0x243: Pop(1)
0x244: Push((int) 543180)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 1
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 1
0x24d: PushEmpty(bool, object)
0x24e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Call2 0xca3

0x250: Pop(1)
0x251: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0xcad

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 0
0x258: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x259: PushEmpty(bool, object)
0x25a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Call2 0xcb7

0x25c: Pop(1)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = (bool) 0
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: Push((int) 543182)
0x261: Push((int) -1)
0x262: Push((int) 45638)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 1
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 1
0x269: PushEmpty(bool)
0x26a: Stack[-1] = (bool) 1
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call2 0xca3

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0xcad

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 0
0x276: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x279: Call2 0xcb7

0x27a: Pop(1)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Stack[-1] = (bool) 0
0x27d: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x280: Call2 0xcc1

0x281: Pop(1)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Stack[-1] = (bool) 0
0x284: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x285: Push((int) 543183)
0x286: Push((int) -1)
0x287: Push((int) 45639)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: PushEmpty(bool)
0x28b: Stack[-1] = (bool) 1
0x28c: PushEmpty(bool)
0x28d: Stack[-1] = (bool) 1
0x28e: PushEmpty(bool)
0x28f: Stack[-1] = (bool) 1
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 1
0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call2 0xcc1

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x299: Call2 0xccb

0x29a: Pop(1)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 0
0x29d: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0xcd5

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 0
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call2 0xcdf

0x2a8: Pop(1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 0
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Call2 0xce9

0x2af: Pop(1)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Stack[-1] = (bool) 0
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: Push((int) 543187)
0x2b4: Push((int) -1)
0x2b5: Push((int) 45643)
0x2b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(3)
0x2b8: PushEmpty(bool)
0x2b9: Stack[-1] = (bool) 1
0x2ba: PushEmpty(bool)
0x2bb: Stack[-1] = (bool) 1
0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 1
0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call2 0xcf3

0x2c1: Pop(1)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: PushEmpty(bool, object)
0x2c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Call2 0xcfd

0x2c6: Pop(1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 0
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Call2 0xd07

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Stack[-1] = (bool) 0
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call2 0xd11

0x2d4: Pop(1)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = (bool) 0
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: Push((int) 543208)
0x2d9: Push((int) -1)
0x2da: Push((int) 45664)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 1
0x2df: PushEmpty(bool)
0x2e0: Stack[-1] = (bool) 1
0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Call2 0xca3

0x2e4: Pop(1)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call2 0xcad

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 0
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ed: PushEmpty(bool, object)
0x2ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Call2 0xcb7

0x2f0: Pop(1)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 0
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: Push((int) 543181)
0x2f5: Push((int) -1)
0x2f6: Push((int) 45637)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: PushEmpty(bool)
0x2fa: Stack[-1] = (bool) 1
0x2fb: PushEmpty(bool)
0x2fc: Stack[-1] = (bool) 1
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Call2 0xcc1

0x300: Pop(1)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0xccb

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (bool) 0
0x308: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0xcd5

0x30c: Pop(1)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Stack[-1] = (bool) 0
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: Push((int) 543184)
0x311: Push((int) -1)
0x312: Push((int) 45640)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: PushEmpty(bool)
0x316: Stack[-1] = (bool) 1
0x317: PushEmpty(bool)
0x318: Stack[-1] = (bool) 1
0x319: PushEmpty(bool)
0x31a: Stack[-1] = (bool) 1
0x31b: PushEmpty(bool, object)
0x31c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31d: Call2 0xcb7

0x31e: Pop(1)
0x31f: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x322: Call2 0xcd5

0x323: Pop(1)
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: Stack[-1] = (bool) 0
0x326: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x329: Call2 0xcdf

0x32a: Pop(1)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 0
0x32d: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x330: Call2 0xce9

0x331: Pop(1)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: Stack[-1] = (bool) 0
0x334: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x335: Push((int) 543185)
0x336: Push((int) -1)
0x337: Push((int) 45641)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: PushEmpty(bool)
0x33b: Stack[-1] = (bool) 1
0x33c: PushEmpty(bool)
0x33d: Stack[-1] = (bool) 1
0x33e: PushEmpty(bool, object)
0x33f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x340: Call2 0xcf3

0x341: Pop(1)
0x342: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x343: PushEmpty(bool, object)
0x344: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x345: Call2 0xcfd

0x346: Pop(1)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Stack[-1] = (bool) 0
0x349: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34c: Call2 0xd07

0x34d: Pop(1)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Stack[-1] = (bool) 0
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: Push((int) 543186)
0x352: Push((int) -1)
0x353: Push((int) 45642)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 1
0x358: PushEmpty(bool)
0x359: Stack[-1] = (bool) 1
0x35a: PushEmpty(bool)
0x35b: Stack[-1] = (bool) 1
0x35c: PushEmpty(bool)
0x35d: Stack[-1] = (bool) 1
0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x360: Call2 0xcd5

0x361: Pop(1)
0x362: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x363: PushEmpty(bool, object)
0x364: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x365: Call2 0xce9

0x366: Pop(1)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: Stack[-1] = (bool) 0
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call2 0xcf3

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 0
0x370: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x373: Call2 0xd11

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x376: Stack[-1] = (bool) 0
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0xcfd

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 0
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: Push((int) 543188)
0x380: Push((int) -1)
0x381: Push((int) 45644)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x1f4

0x388: Pop(1)
0x389: Push((int) 538167)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 538168)
0x38f: Push((int) -1)
0x390: Push((int) 40043)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: PushEmpty(bool)
0x394: Stack[-1] = (bool) 0
0x395: PushEmpty(bool, object)
0x396: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x397: Call2 0xca3

0x398: Pop(1)
0x399: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39a: PushEmpty(bool, object)
0x39b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Call2 0xc7f

0x39d: Pop(1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-1] = (bool) 1
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a1: Push((int) 538169)
0x3a2: Push((int) 40045)
0x3a3: Push((int) 40044)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: PushEmpty(bool)
0x3a7: Stack[-1] = (bool) 1
0x3a8: PushEmpty(bool, object)
0x3a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3aa: Call2 0xc7f

0x3ab: Pop(1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3af: Call2 0xc8b

0x3b0: Pop(1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (bool) 0
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b4: Push((int) 538204)
0x3b5: Push((int) -1)
0x3b6: Push((int) 40081)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Push((int) 538205)
0x3ba: Push((int) -1)
0x3bb: Push((int) 40082)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Push((int) 40067)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c2: Push((int) 40069)
0x3c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = "Neutral"
0x3c7: Call2 0x1f4

0x3c8: Pop(1)
0x3c9: Push((int) 538193)
0x3ca: @@ SetMessage(Stack[-1])
0x3cb: Pop(1)
0x3cc: @@ ClearReplies()
0x3cd: Pop(0)
0x3ce: Push((int) 538194)
0x3cf: Push((int) 40071)
0x3d0: Push((int) 40070)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 538202)
0x3d4: Push((int) -1)
0x3d5: Push((int) 40078)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Return(); Pop(0)

0x3d9: Push((int) 40071)
0x3da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3dc: PushEmpty(string)
0x3dd: Stack[-1] = "Neutral"
0x3de: Call2 0x1f4

0x3df: Pop(1)
0x3e0: Push((int) 538195)
0x3e1: @@ SetMessage(Stack[-1])
0x3e2: Pop(1)
0x3e3: @@ ClearReplies()
0x3e4: Pop(0)
0x3e5: Push((int) 538196)
0x3e6: Push((int) 40073)
0x3e7: Push((int) 40072)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Push((int) 538201)
0x3eb: Push((int) -1)
0x3ec: Push((int) 40077)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 40073)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Neutral"
0x3f5: Call2 0x1f4

0x3f6: Pop(1)
0x3f7: Push((int) 538197)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 538198)
0x3fd: Push((int) -1)
0x3fe: Push((int) 40074)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Push((int) 538199)
0x402: Push((int) -1)
0x403: Push((int) 40075)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Push((int) 538200)
0x407: Push((int) -1)
0x408: Push((int) 40076)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 40055)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40f: Push((int) 40057)
0x410: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral"
0x414: Call2 0x1f4

0x415: Pop(1)
0x416: Push((int) 538182)
0x417: @@ SetMessage(Stack[-1])
0x418: Pop(1)
0x419: @@ ClearReplies()
0x41a: Pop(0)
0x41b: Push((int) 538183)
0x41c: Push((int) 40059)
0x41d: Push((int) 40058)
0x41e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41f: Pop(3)
0x420: Push((int) 538187)
0x421: Push((int) -1)
0x422: Push((int) 40062)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Return(); Pop(0)

0x426: Push((int) 40059)
0x427: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral"
0x42b: Call2 0x1f4

0x42c: Pop(1)
0x42d: Push((int) 538184)
0x42e: @@ SetMessage(Stack[-1])
0x42f: Pop(1)
0x430: @@ ClearReplies()
0x431: Pop(0)
0x432: Push((int) 538185)
0x433: Push((int) -1)
0x434: Push((int) 40060)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Push((int) 538186)
0x438: Push((int) -1)
0x439: Push((int) 40061)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 40045)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral"
0x442: Call2 0x1f4

0x443: Pop(1)
0x444: Push((int) 538170)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 538171)
0x44a: Push((int) 40047)
0x44b: Push((int) 40046)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Push((int) 538175)
0x44f: Push((int) 40051)
0x450: Push((int) 40050)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Push((int) 538178)
0x454: Push((int) -1)
0x455: Push((int) 40053)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 40051)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Neutral"
0x45e: Call2 0x1f4

0x45f: Pop(1)
0x460: Push((int) 538176)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 538177)
0x466: Push((int) -1)
0x467: Push((int) 40052)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 40047)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Neutral"
0x470: Call2 0x1f4

0x471: Pop(1)
0x472: Push((int) 538172)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: Push((int) 538173)
0x478: Push((int) -1)
0x479: Push((int) 40048)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Push((int) 538174)
0x47d: Push((int) -1)
0x47e: Push((int) 40049)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 45656)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x485: Push((int) 45655)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x488: Push((int) 45648)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x48c: PushEmpty(bool)
0x48d: Call2 0x1114

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: @ lshStopAnimation()
0x491: Pop(0)
0x492: GOTO 0x495

0x493: @ StopAnimation()
0x494: Pop(0)
0x495: Return(); Pop(0)

0x496: GOTO 0x20b

0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: EventDisable(0)
0x49a: PushEmpty(object)
0x49b: Stack[-1] = Stack[-2]
0x49c: Call2 0x4b9

0x49d: Pop(1)
0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[-2]
0x4a0: Call2 0x1160

0x4a1: Pop(1)
0x4a2: EventEnable(0)
0x4a3: @ Hold()
0x4a4: Pop(0)
0x4a5: GOTO 0x4a3

0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(int, int)
0x4a8: PushEmpty(int, object)
0x4a9: Stack[-1] = Stack[-5]
0x4aa: Call2 0xff8

0x4ab: Stack[-3] = Stack[-2]
0x4ac: Pop(2)
0x4ad: Push((int) 0)
0x4ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: PushEmpty(object)
0x4b1: Stack[-1] = Stack[-4]
0x4b2: Call2 0xffb

0x4b3: Pop(1)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty()
0x4b6: Call2 0x1001

0x4b7: Pop(0)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4ba: Pop(0); Push((bool) Stack[-21] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "fdie"
0x4be: Call2 0x514

0x4bf: Pop(1)
0x4c0: GOTO 0x513

0x4c1: @@ GetPosition(Stack[-10])
0x4c2: Pop(0)
0x4c3: @ GetPosition(Stack[-9])
0x4c4: Pop(0)
0x4c5: @ GetDirection(Stack[-8])
0x4c6: Pop(0)
0x4c7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4c8: Push(CvectorIndex(Stack[-7], 0))
0x4c9: Push(CvectorIndex(Stack[-9], 0))
0x4ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4cb: Push(CvectorIndex(Stack[-8], 2))
0x4cc: Push(CvectorIndex(Stack[-10], 2))
0x4cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4cf: Push((int) 0)
0x4d0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-6] = "fdie"
0x4d3: GOTO 0x4d5

0x4d4: Stack[-6] = "bdie"
0x4d5: @ RemoveRTEnvelope()
0x4d6: Pop(0)
0x4d7: @ SetDeathState()
0x4d8: Pop(0)
0x4d9: @ Stop()
0x4da: Pop(0)
0x4db: @ StopAsync()
0x4dc: Pop(0)
0x4dd: Stack[-5] = Stack[-21]
0x4de: Push("GetScriptProperty")
0x4df: Push((int) 2)
0x4e0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4e1: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e2: Push("Owner")
0x4e3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4e4: Pop(1)
0x4e5: Push(Stack[-4])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e7: Push("Owner")
0x4e8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4e9: Pop(1)
0x4ea: Pop(0); Push((bool) Stack[-5] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Stack[-5] = Stack[-21]
0x4ed: Push("@GetEyesHeight")
0x4ee: Push((int) 1)
0x4ef: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4f0: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f1: @@ GetEyesHeight(Stack[-2])
0x4f2: Pop(0)
0x4f3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4f4: Push(CvectorIndex(Stack[-1], 1))
0x4f5: Stack[-1] = Stack[-3]
0x4f6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4f7: Push("head")
0x4f8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4f9: Pop(1)
0x4fa: Stack[-3] = (bool) 1
0x4fb: GOTO 0x4fd

0x4fc: Stack[-3] = (bool) 0
0x4fd: PushEmpty(string)
0x4fe: Stack[-1] = Stack[-7]
0x4ff: Call2 0xc01

0x500: Pop(1)
0x501: Push("all")
0x502: @ PlayAnimation(Stack[-1], Stack[-7])
0x503: Pop(1)
0x504: @ WaitForAnimEnd()
0x505: Pop(0)
0x506: Push(Stack[-3])
0x507: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x508: @ StopAsync()
0x509: Pop(0)
0x50a: Push("head")
0x50b: @ UnlookAsync(Stack[-1])
0x50c: Pop(1)
0x50d: Push("all")
0x50e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x50f: Pop(1)
0x510: @ RemoveEnvelope()
0x511: Pop(0)
0x512: Stack[-5] = 0
0x513: Return(); Pop(20)

0x514: PushEmpty()
0x515: @ RemoveRTEnvelope()
0x516: Pop(0)
0x517: @ SetDeathState()
0x518: Pop(0)
0x519: @ Stop()
0x51a: Pop(0)
0x51b: @ StopAsync()
0x51c: Pop(0)
0x51d: @ StopSecondaryAnimation()
0x51e: Pop(0)
0x51f: PushEmpty(string)
0x520: Stack[-1] = Stack[-2]
0x521: Call2 0xc01

0x522: Pop(1)
0x523: Push("all")
0x524: @ PlayAnimation(Stack[-1], Stack[-2])
0x525: Pop(1)
0x526: @ WaitForAnimEnd()
0x527: Pop(0)
0x528: Push("all")
0x529: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x52a: Pop(1)
0x52b: @ RemoveEnvelope()
0x52c: Pop(0)
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: Return(); Pop(0)

0x530: PushEmpty()
0x531: Return(); Pop(0)

0x532: PushEmpty()
0x533: Return(); Pop(0)

0x534: PushEmpty(int, int, int, int)
0x535: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x536: Push((bool) 1)
0x537: @ SensePlayerOnly(Stack[-1])
0x538: Pop(1)
0x539: PushEmpty()
0x53a: Call2 0x1116

0x53b: Pop(0)
0x53c: PushEmpty()
0x53d: Call2 0x556

0x53e: Pop(0)
0x53f: Push((int) 2)
0x540: @ irand(Stack[-3], Stack[-1])
0x541: Pop(1)
0x542: Push((int) 0)
0x543: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x545: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x546: PushEmpty()
0x547: Call2 0x1130

0x548: Pop(0)
0x549: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x54a: @ ResetAAS()
0x54b: Pop(0)
0x54c: GOTO 0x554

0x54d: Push((int) 4)
0x54e: @ irand(Stack[-2], Stack[-1])
0x54f: Pop(1)
0x550: Push((int) 1)
0x551: Pop(1); Push(Stack[-2] + Stack[-1]);
0x552: @ Sleep(Stack[-1])
0x553: Pop(1)
0x554: GOTO 0x53f

0x555: Return(); Pop(4)

0x556: PushEmpty(bool)
0x557: Call2 0xb76

0x558: Pop(0)
0x559: Pop(1); Push((bool) Stack[-1] == 0)
0x55a: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55b: PushEmpty()
0x55c: Call2 0x1001

0x55d: Pop(0)
0x55e: Return(); Pop(0)

0x55f: PushEmpty(int, int)
0x560: PushEmpty(int, object)
0x561: Stack[-1] = Stack[-5]
0x562: Call2 0xff8

0x563: Stack[-3] = Stack[-2]
0x564: Pop(2)
0x565: Push((int) 0)
0x566: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x568: Push((int) 1)
0x569: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56b: PushEmpty()
0x56c: Call2 0x620

0x56d: Pop(0)
0x56e: PushEmpty(object)
0x56f: Stack[-1] = Stack[-4]
0x570: Call2 0xffb

0x571: Pop(1)
0x572: Return(); Pop(2)

0x573: PushEmpty(int, int)
0x574: PushEmpty(object)
0x575: Stack[-1] = Stack[-4]
0x576: Call2 0xf57

0x577: Pop(1)
0x578: PushEmpty(int, object)
0x579: Stack[-1] = Stack[-5]
0x57a: Call2 0xf92

0x57b: Stack[-3] = Stack[-2]
0x57c: Pop(2)
0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x580: Push((int) 1)
0x581: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x583: PushEmpty()
0x584: Call2 0x620

0x585: Pop(0)
0x586: PushEmpty(object)
0x587: Stack[-1] = Stack[-4]
0x588: Call2 0xf9c

0x589: Pop(1)
0x58a: Return(); Pop(2)

0x58b: PushEmpty(int, int)
0x58c: PushEmpty(bool, object, object, bool)
0x58d: Stack[-3] = Stack[-9]
0x58e: Stack[-2] = Stack[-8]
0x58f: Stack[-1] = Stack[-7]
0x590: Call2 0x1150

0x591: Pop(3)
0x592: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x593: PushEmpty(int, object, bool)
0x594: Stack[-2] = Stack[-8]
0x595: Stack[-1] = Stack[-6]
0x596: Call2 0xfa4

0x597: Stack[-4] = Stack[-3]
0x598: Pop(3)
0x599: Push((int) 0)
0x59a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x59c: Push((int) 1)
0x59d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59f: PushEmpty()
0x5a0: Call2 0x620

0x5a1: Pop(0)
0x5a2: PushEmpty(object)
0x5a3: Stack[-1] = Stack[-6]
0x5a4: Call2 0xfae

0x5a5: Pop(1)
0x5a6: Return(); Pop(2)

0x5a7: PushEmpty(int, int)
0x5a8: PushEmpty(int, object)
0x5a9: Stack[-1] = Stack[-5]
0x5aa: Call2 0x1002

0x5ab: Stack[-3] = Stack[-2]
0x5ac: Pop(2)
0x5ad: Push((int) 0)
0x5ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b0: Push((int) 1)
0x5b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b3: PushEmpty()
0x5b4: Call2 0x620

0x5b5: Pop(0)
0x5b6: PushEmpty(object)
0x5b7: Stack[-1] = Stack[-4]
0x5b8: Call2 0x1012

0x5b9: Pop(1)
0x5ba: Return(); Pop(2)

0x5bb: PushEmpty(int, int)
0x5bc: PushEmpty(bool, object, string)
0x5bd: Stack[-2] = Stack[-7]
0x5be: Stack[-1] = Stack[-6]
0x5bf: Call2 0xf01

0x5c0: Pop(2)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c2: PushEmpty()
0x5c3: Call2 0x620

0x5c4: Pop(0)
0x5c5: PushEmpty(object, string)
0x5c6: Stack[-2] = Stack[-6]
0x5c7: Stack[-1] = Stack[-5]
0x5c8: Call2 0xf21

0x5c9: Pop(2)
0x5ca: GOTO 0x5df

0x5cb: PushEmpty(int, string, object)
0x5cc: Stack[-2] = Stack[-6]
0x5cd: Stack[-1] = Stack[-7]
0x5ce: Call2 0x1018

0x5cf: Stack[-4] = Stack[-3]
0x5d0: Pop(3)
0x5d1: Push((int) 0)
0x5d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d4: Push((int) 1)
0x5d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d7: PushEmpty()
0x5d8: Call2 0x620

0x5d9: Pop(0)
0x5da: PushEmpty(string, object)
0x5db: Stack[-2] = Stack[-5]
0x5dc: Stack[-1] = Stack[-6]
0x5dd: Call2 0x101b

0x5de: Pop(2)
0x5df: Return(); Pop(2)

0x5e0: PushEmpty()
0x5e1: PushEmpty(bool, string)
0x5e2: Stack[-1] = Stack[-3]
0x5e3: Call2 0xf64

0x5e4: Pop(1)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e6: PushEmpty()
0x5e7: Call2 0x620

0x5e8: Pop(0)
0x5e9: PushEmpty(string)
0x5ea: Stack[-1] = Stack[-2]
0x5eb: Call2 0xf74

0x5ec: Pop(1)
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty()
0x5ef: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: Return(); Pop(0)

0x5f2: PushEmpty(bool, object)
0x5f3: Stack[-1] = Stack[-3]
0x5f4: Call2 0xf3a

0x5f5: Pop(1)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f7: PushEmpty()
0x5f8: Call2 0x620

0x5f9: Pop(0)
0x5fa: PushEmpty(object)
0x5fb: Stack[-1] = Stack[-2]
0x5fc: Call2 0xf51

0x5fd: Pop(1)
0x5fe: GOTO 0x603

0x5ff: PushEmpty(object)
0x600: Stack[-1] = Stack[-2]
0x601: Call2 0x636

0x602: Pop(1)
0x603: Return(); Pop(0)

0x604: PushEmpty()
0x605: Push( Stack[0 + Tasks[-1].StackPointer] )
0x606: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x607: Return(); Pop(0)

0x608: PushEmpty(object)
0x609: Stack[-1] = Stack[-2]
0x60a: Call2 0x636

0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: Push((int) 110)
0x60f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Return(); Pop(0)

0x612: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x613: Push((int) 110)
0x614: @ KillTimer(Stack[-1])
0x615: Pop(1)
0x616: @ ResetAAS()
0x617: Pop(0)
0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: Call2 0x620

0x61b: Pop(0)
0x61c: PushEmpty()
0x61d: Call2 0x1001

0x61e: Pop(0)
0x61f: Return(); Pop(0)

0x620: Push((int) 110)
0x621: @ KillTimer(Stack[-1])
0x622: Pop(1)
0x623: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x624: Push( Stack[0 + Tasks[-1].StackPointer] )
0x625: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x626: PushEmpty()
0x627: Call2 0x114b

0x628: Pop(0)
0x629: GOTO 0x62c

0x62a: @ Stop()
0x62b: Pop(0)
0x62c: Return(); Pop(0)

0x62d: PushEmpty()
0x62e: PushEmpty()
0x62f: Call2 0x620

0x630: Pop(0)
0x631: PushEmpty(object)
0x632: Stack[-1] = Stack[-2]
0x633: Call2 0xee9

0x634: Pop(1)
0x635: Return(); Pop(0)

0x636: PushEmpty(bool, int, bool, int)
0x637: Push( Stack[1 + Tasks[-1].StackPointer] )
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: Return(); Pop(4)

0x63a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x63b: Pop(0)
0x63c: Pop(0); Push((bool) Stack[-2] == 0)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Return(); Pop(4)

0x63f: PushEmpty(int, object)
0x640: Stack[-1] = Stack[-7]
0x641: Call2 0xf81

0x642: Stack[-3] = Stack[-2]
0x643: Pop(2)
0x644: Push((int) 0)
0x645: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x647: Push((int) 1)
0x648: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64a: PushEmpty()
0x64b: Call2 0x620

0x64c: Pop(0)
0x64d: PushEmpty(object)
0x64e: Stack[-1] = Stack[-6]
0x64f: Call2 0xf8a

0x650: Pop(1)
0x651: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x652: Push((int) 110)
0x653: Push((float)5.0)
0x654: @ SetTimer(Stack[-2], Stack[-1])
0x655: Pop(2)
0x656: Return(); Pop(4)

0x657: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x658: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x659: PushEmpty()
0x65a: Call2 0x68a

0x65b: Pop(0)
0x65c: @ GetDirection(Stack[-3])
0x65d: Pop(0)
0x65e: PushEmpty(cvector, object)
0x65f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x660: Call2 0xa8c

0x661: Stack[-4] = Stack[-2]
0x662: Pop(2)
0x663: PushEmpty(float, cvector, cvector)
0x664: Stack[-2] = Stack[-6]
0x665: Stack[-1] = Stack[-5]
0x666: Call2 0xc5b

0x667: Pop(2)
0x668: Push((int) 0)
0x669: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66b: PushEmpty(object)
0x66c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66d: Call2 0xb6b

0x66e: Pop(1)
0x66f: Stack[-1] = (bool) 1
0x670: GOTO 0x674

0x671: Push((float)1.5)
0x672: @ Sleep(Stack[-1], Stack[-2])
0x673: Pop(1)
0x674: Push(Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x676: PushEmpty(object)
0x677: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x678: Call2 0xb6b

0x679: Pop(1)
0x67a: Push((int) 111)
0x67b: Push((float)0.5)
0x67c: @ SetTimer(Stack[-2], Stack[-1])
0x67d: Pop(2)
0x67e: Push((float)5.0)
0x67f: @ Sleep(Stack[-1])
0x680: Pop(1)
0x681: Push((int) 111)
0x682: @ KillTimer(Stack[-1])
0x683: Pop(1)
0x684: @ StopAsync()
0x685: Pop(0)
0x686: Push("head")
0x687: @ UnlookAsync(Stack[-1])
0x688: Pop(1)
0x689: Return(); Pop(6)

0x68a: PushEmpty(object)
0x68b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68c: Call2 0xbef

0x68d: Pop(1)
0x68e: Return(); Pop(0)

0x68f: PushEmpty(int, int)
0x690: PushEmpty(int, object)
0x691: Stack[-1] = Stack[-5]
0x692: Call2 0xff8

0x693: Stack[-3] = Stack[-2]
0x694: Pop(2)
0x695: Push((int) 0)
0x696: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x698: Push((int) 1)
0x699: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69b: PushEmpty()
0x69c: Call2 0x71e

0x69d: Pop(0)
0x69e: PushEmpty(object)
0x69f: Stack[-1] = Stack[-4]
0x6a0: Call2 0xffb

0x6a1: Pop(1)
0x6a2: Return(); Pop(2)

0x6a3: PushEmpty(int, int)
0x6a4: PushEmpty(object)
0x6a5: Stack[-1] = Stack[-4]
0x6a6: Call2 0xf57

0x6a7: Pop(1)
0x6a8: PushEmpty(int, object)
0x6a9: Stack[-1] = Stack[-5]
0x6aa: Call2 0xf92

0x6ab: Stack[-3] = Stack[-2]
0x6ac: Pop(2)
0x6ad: Push((int) 0)
0x6ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b0: Push((int) 1)
0x6b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b3: PushEmpty()
0x6b4: Call2 0x71e

0x6b5: Pop(0)
0x6b6: PushEmpty(object)
0x6b7: Stack[-1] = Stack[-4]
0x6b8: Call2 0xf9c

0x6b9: Pop(1)
0x6ba: Return(); Pop(2)

0x6bb: PushEmpty(int, int)
0x6bc: PushEmpty(bool, object, object, bool)
0x6bd: Stack[-3] = Stack[-9]
0x6be: Stack[-2] = Stack[-8]
0x6bf: Stack[-1] = Stack[-7]
0x6c0: Call2 0x1150

0x6c1: Pop(3)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6c3: PushEmpty(int, object, bool)
0x6c4: Stack[-2] = Stack[-8]
0x6c5: Stack[-1] = Stack[-6]
0x6c6: Call2 0xfa4

0x6c7: Stack[-4] = Stack[-3]
0x6c8: Pop(3)
0x6c9: Push((int) 0)
0x6ca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6cc: Push((int) 1)
0x6cd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6cf: PushEmpty()
0x6d0: Call2 0x71e

0x6d1: Pop(0)
0x6d2: PushEmpty(object)
0x6d3: Stack[-1] = Stack[-6]
0x6d4: Call2 0xfae

0x6d5: Pop(1)
0x6d6: Return(); Pop(2)

0x6d7: PushEmpty(int, int)
0x6d8: PushEmpty(int, object)
0x6d9: Stack[-1] = Stack[-5]
0x6da: Call2 0x1002

0x6db: Stack[-3] = Stack[-2]
0x6dc: Pop(2)
0x6dd: Push((int) 0)
0x6de: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e0: Push((int) 1)
0x6e1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e3: PushEmpty()
0x6e4: Call2 0x71e

0x6e5: Pop(0)
0x6e6: PushEmpty(object)
0x6e7: Stack[-1] = Stack[-4]
0x6e8: Call2 0x1012

0x6e9: Pop(1)
0x6ea: Return(); Pop(2)

0x6eb: PushEmpty(int, int)
0x6ec: PushEmpty(bool, object, string)
0x6ed: Stack[-2] = Stack[-7]
0x6ee: Stack[-1] = Stack[-6]
0x6ef: Call2 0xf01

0x6f0: Pop(2)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f2: PushEmpty()
0x6f3: Call2 0x71e

0x6f4: Pop(0)
0x6f5: PushEmpty(object, string)
0x6f6: Stack[-2] = Stack[-6]
0x6f7: Stack[-1] = Stack[-5]
0x6f8: Call2 0xf21

0x6f9: Pop(2)
0x6fa: GOTO 0x70f

0x6fb: PushEmpty(int, string, object)
0x6fc: Stack[-2] = Stack[-6]
0x6fd: Stack[-1] = Stack[-7]
0x6fe: Call2 0x1018

0x6ff: Stack[-4] = Stack[-3]
0x700: Pop(3)
0x701: Push((int) 0)
0x702: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x704: Push((int) 1)
0x705: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x707: PushEmpty()
0x708: Call2 0x71e

0x709: Pop(0)
0x70a: PushEmpty(string, object)
0x70b: Stack[-2] = Stack[-5]
0x70c: Stack[-1] = Stack[-6]
0x70d: Call2 0x101b

0x70e: Pop(2)
0x70f: Return(); Pop(2)

0x710: PushEmpty()
0x711: PushEmpty(bool, string)
0x712: Stack[-1] = Stack[-3]
0x713: Call2 0xf64

0x714: Pop(1)
0x715: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x716: PushEmpty()
0x717: Call2 0x71e

0x718: Pop(0)
0x719: PushEmpty(string)
0x71a: Stack[-1] = Stack[-2]
0x71b: Call2 0xf74

0x71c: Pop(1)
0x71d: Return(); Pop(0)

0x71e: @ StopGroup0()
0x71f: Pop(0)
0x720: @ StopAsync()
0x721: Pop(0)
0x722: Push("head")
0x723: @ UnlookAsync(Stack[-1])
0x724: Pop(1)
0x725: Push((int) 111)
0x726: @ KillTimer(Stack[-1])
0x727: Pop(1)
0x728: Return(); Pop(0)

0x729: PushEmpty()
0x72a: PushEmpty()
0x72b: Call2 0x71e

0x72c: Pop(0)
0x72d: PushEmpty(object)
0x72e: Stack[-1] = Stack[-2]
0x72f: Call2 0xee9

0x730: Pop(1)
0x731: Return(); Pop(0)

0x732: PushEmpty(cvector, cvector, cvector, cvector)
0x733: Push((int) 111)
0x734: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Return(); Pop(4)

0x737: PushEmpty(bool, object)
0x738: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x739: Call2 0xad5

0x73a: Pop(1)
0x73b: Pop(1); Push((bool) Stack[-1] == 0)
0x73c: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73d: PushEmpty()
0x73e: Call2 0x71e

0x73f: Pop(0)
0x740: Return(); Pop(4)

0x741: @ GetDirection(Stack[-2])
0x742: Pop(0)
0x743: PushEmpty(cvector, object)
0x744: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x745: Call2 0xa8c

0x746: Stack[-3] = Stack[-2]
0x747: Pop(2)
0x748: PushEmpty(float, cvector, cvector)
0x749: Stack[-2] = Stack[-5]
0x74a: Stack[-1] = Stack[-4]
0x74b: Call2 0xc5b

0x74c: Pop(2)
0x74d: Push((float)0.5)
0x74e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x750: PushEmpty(object)
0x751: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x752: Call2 0xb6b

0x753: Pop(1)
0x754: Return(); Pop(4)

0x755: PushEmpty()
0x756: Call2 0x71e

0x757: Pop(0)
0x758: PushEmpty()
0x759: Call2 0x1001

0x75a: Pop(0)
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[-3]
0x75f: Call2 0xf3a

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x762: PushEmpty()
0x763: Call2 0x71e

0x764: Pop(0)
0x765: PushEmpty(object)
0x766: Stack[-1] = Stack[-2]
0x767: Call2 0xf51

0x768: Pop(1)
0x769: Return(); Pop(0)

0x76a: PushEmpty()
0x76b: @ Face(Stack[-1])
0x76c: Pop(0)
0x76d: Push("all")
0x76e: Push("attack_on")
0x76f: @ PlayAnimation(Stack[-2], Stack[-1])
0x770: Pop(2)
0x771: @ WaitForAnimEnd()
0x772: Pop(0)
0x773: Push("all")
0x774: Push("attack_stay")
0x775: @ PlayAnimation(Stack[-2], Stack[-1])
0x776: Pop(2)
0x777: @ WaitForAnimEnd()
0x778: Pop(0)
0x779: Push("all")
0x77a: Push("attack_off")
0x77b: @ PlayAnimation(Stack[-2], Stack[-1])
0x77c: Pop(2)
0x77d: @ WaitForAnimEnd()
0x77e: Pop(0)
0x77f: @ StopAsync()
0x780: Pop(0)
0x781: PushEmpty(object)
0x782: Stack[-1] = Stack[-2]
0x783: Call2 0x7ab

0x784: Pop(1)
0x785: Return(); Pop(0)

0x786: PushEmpty()
0x787: Call2 0x828

0x788: Pop(0)
0x789: PushEmpty()
0x78a: Call2 0x1001

0x78b: Pop(0)
0x78c: Return(); Pop(0)

0x78d: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x78e: @ GetPosition(Stack[-6])
0x78f: Pop(0)
0x790: @@ GetPosition(Stack[-5])
0x791: Pop(0)
0x792: @ GetDirection(Stack[-4])
0x793: Pop(0)
0x794: PushEmpty(cvector, cvector)
0x795: PushEmpty(cvector, cvector)
0x796: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x797: Call2 0xc30

0x798: Pop(1)
0x799: Push((float)0.75)
0x79a: Pop(1); Push(Stack[-8] * Stack[-1]);
0x79b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x79c: Call2 0xc30

0x79d: Stack[-5] = Stack[-2]
0x79e: Pop(2)
0x79f: Push((int) 32)
0x7a0: Push((float)7000.0)
0x7a1: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x7a2: Pop(2)
0x7a3: Push((int) 100)
0x7a4: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x7a5: Push((int) 0)
0x7a6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (int) 0
0x7a9: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x7aa: Return(); Pop(12)

0x7ab: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x7ac: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x7ad: PushEmpty(cvector, float)
0x7ae: Stack[-1] = (float) 1.74533
0x7af: Call2 0x78d

0x7b0: Stack[-7] = Stack[-2]
0x7b1: Pop(2)
0x7b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7b3: Push((float)2500.0)
0x7b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7b6: PushEmpty(cvector, float)
0x7b7: Stack[-1] = (float) 2.61799
0x7b8: Call2 0x78d

0x7b9: Stack[-7] = Stack[-2]
0x7ba: Pop(2)
0x7bb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7bc: Push((float)2500.0)
0x7bd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7bf: Push("Can't retreat, distance: ")
0x7c0: Pop(0); Push(Sqrt(Stack[-5]))
0x7c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7c2: @ Trace(Stack[-1])
0x7c3: Pop(1)
0x7c4: Push((float)0.5)
0x7c5: @ Sleep(Stack[-1])
0x7c6: Pop(1)
0x7c7: Return(); Pop(10)

0x7c8: Push(CvectorIndex(Stack[-5], 0))
0x7c9: Push(CvectorIndex(Stack[-6], 2))
0x7ca: @ Rotate(Stack[-2], Stack[-1])
0x7cb: Pop(2)
0x7cc: PushEmpty(cvector)
0x7cd: Call2 0xa87

0x7ce: Pop(0)
0x7cf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x7d0: Push((int) 120)
0x7d1: Push((float)0.5)
0x7d2: @ SetTimer(Stack[-2], Stack[-1])
0x7d3: Pop(2)
0x7d4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7d5: Push((int) 1)
0x7d6: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x7d7: Pop(1)
0x7d8: Push(Stack[-3])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7da: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: GOTO 0x7f3

0x7dd: GOTO 0x7f1

0x7de: PushEmpty(cvector, float)
0x7df: Stack[-1] = (float) 2.61799
0x7e0: Call2 0x78d

0x7e1: Stack[-4] = Stack[-2]
0x7e2: Pop(2)
0x7e3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7e4: Push((float)2500.0)
0x7e5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7e7: PushEmpty(cvector)
0x7e8: Call2 0xa87

0x7e9: Pop(0)
0x7ea: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x7eb: Push((int) 120)
0x7ec: Push((float)0.5)
0x7ed: @ SetTimer(Stack[-2], Stack[-1])
0x7ee: Pop(2)
0x7ef: GOTO 0x7f1

0x7f0: GOTO 0x7f3

0x7f1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7f3: Return(); Pop(10)

0x7f4: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x7f5: Push((int) 120)
0x7f6: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: Return(); Pop(8)

0x7f9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7fa: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7fb: @ Stop()
0x7fc: Pop(0)
0x7fd: Push((int) 1)
0x7fe: @ KillTimer(Stack[-1])
0x7ff: Pop(1)
0x800: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x801: GOTO 0x827

0x802: @ GetDirection(Stack[-4])
0x803: Pop(0)
0x804: Push((float)7000.0)
0x805: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x806: Pop(1)
0x807: PushEmpty(cvector, float)
0x808: Stack[-1] = (float) 1.74533
0x809: Call2 0x78d

0x80a: Stack[-4] = Stack[-2]
0x80b: Pop(2)
0x80c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x80d: PushEmpty(bool)
0x80e: Stack[-1] = (bool) 0
0x80f: Push((float)2500.0)
0x810: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x812: PushEmpty(bool)
0x813: Stack[-1] = (bool) 1
0x814: Pop(0); Push(Stack[-5] * Stack[-5]);
0x815: Push((float)2.25)
0x816: Pop(2); Push(Stack[-2] * Stack[-1]);
0x817: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x819: PushEmpty(bool)
0x81a: Call2 0x838

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: Stack[-1] = (bool) 0
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Stack[-1] = (bool) 1
0x820: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x821: @ Stop()
0x822: Pop(0)
0x823: PushEmpty(cvector)
0x824: Call2 0xa87

0x825: Pop(0)
0x826: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x827: Return(); Pop(8)

0x828: @ Stop()
0x829: Pop(0)
0x82a: Push((int) 120)
0x82b: @ KillTimer(Stack[-1])
0x82c: Pop(1)
0x82d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x82e: Return(); Pop(0)

0x82f: PushEmpty()
0x830: PushEmpty()
0x831: Call2 0x828

0x832: Pop(0)
0x833: PushEmpty(object)
0x834: Stack[-1] = Stack[-2]
0x835: Call2 0xee9

0x836: Pop(1)
0x837: Return(); Pop(0)

0x838: PushEmpty(cvector, cvector, cvector, cvector)
0x839: @ GetDirection(Stack[-2])
0x83a: Pop(0)
0x83b: PushEmpty(cvector, object)
0x83c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83d: Call2 0xa8c

0x83e: Stack[-3] = Stack[-2]
0x83f: Pop(2)
0x840: PushEmpty(float, cvector, cvector)
0x841: Stack[-2] = Stack[-5]
0x842: Stack[-1] = Stack[-4]
0x843: Call2 0xc40

0x844: Pop(2)
0x845: Push((float)-0.34202)
0x846: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x847: Return(); Pop(4)

0x848: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x849: @ GetPosition(Stack[-6])
0x84a: Pop(0)
0x84b: @@ GetPosition(Stack[-5])
0x84c: Pop(0)
0x84d: @ GetDirection(Stack[-4])
0x84e: Pop(0)
0x84f: PushEmpty(cvector, cvector)
0x850: PushEmpty(cvector, cvector)
0x851: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x852: Call2 0xc30

0x853: Pop(1)
0x854: Push((float)0.75)
0x855: Pop(1); Push(Stack[-8] * Stack[-1]);
0x856: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x857: Call2 0xc30

0x858: Stack[-5] = Stack[-2]
0x859: Pop(2)
0x85a: Push((int) 32)
0x85b: Push((float)7000.0)
0x85c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x85d: Pop(2)
0x85e: Push((int) 100)
0x85f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x860: Push((int) 0)
0x861: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x863: Stack[-1] = (int) 0
0x864: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x865: Return(); Pop(12)

0x866: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x867: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x868: PushEmpty(cvector, float)
0x869: Stack[-1] = (float) 1.74533
0x86a: Call2 0x848

0x86b: Stack[-7] = Stack[-2]
0x86c: Pop(2)
0x86d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x86e: Push((float)2500.0)
0x86f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x871: PushEmpty(cvector, float)
0x872: Stack[-1] = (float) 2.61799
0x873: Call2 0x848

0x874: Stack[-7] = Stack[-2]
0x875: Pop(2)
0x876: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x877: Push((float)2500.0)
0x878: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x87a: Push("Can't retreat, distance: ")
0x87b: Pop(0); Push(Sqrt(Stack[-5]))
0x87c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87d: @ Trace(Stack[-1])
0x87e: Pop(1)
0x87f: Push((float)0.5)
0x880: @ Sleep(Stack[-1])
0x881: Pop(1)
0x882: Return(); Pop(10)

0x883: Push(CvectorIndex(Stack[-5], 0))
0x884: Push(CvectorIndex(Stack[-6], 2))
0x885: @ Rotate(Stack[-2], Stack[-1])
0x886: Pop(2)
0x887: PushEmpty(cvector)
0x888: Call2 0xa87

0x889: Pop(0)
0x88a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x88b: Push((int) 120)
0x88c: Push((float)0.5)
0x88d: @ SetTimer(Stack[-2], Stack[-1])
0x88e: Pop(2)
0x88f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x890: Push((int) 1)
0x891: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x892: Pop(1)
0x893: Push(Stack[-3])
0x894: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x895: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x896: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x897: GOTO 0x8ae

0x898: GOTO 0x8ac

0x899: PushEmpty(cvector, float)
0x89a: Stack[-1] = (float) 2.61799
0x89b: Call2 0x848

0x89c: Stack[-4] = Stack[-2]
0x89d: Pop(2)
0x89e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x89f: Push((float)2500.0)
0x8a0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a2: PushEmpty(cvector)
0x8a3: Call2 0xa87

0x8a4: Pop(0)
0x8a5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8a6: Push((int) 120)
0x8a7: Push((float)0.5)
0x8a8: @ SetTimer(Stack[-2], Stack[-1])
0x8a9: Pop(2)
0x8aa: GOTO 0x8ac

0x8ab: GOTO 0x8ae

0x8ac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8ad: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x8ae: Return(); Pop(10)

0x8af: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x8b0: Push((int) 120)
0x8b1: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8b3: Return(); Pop(8)

0x8b4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b6: @ Stop()
0x8b7: Pop(0)
0x8b8: Push((int) 1)
0x8b9: @ KillTimer(Stack[-1])
0x8ba: Pop(1)
0x8bb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8bc: GOTO 0x8e2

0x8bd: @ GetDirection(Stack[-4])
0x8be: Pop(0)
0x8bf: Push((float)7000.0)
0x8c0: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x8c1: Pop(1)
0x8c2: PushEmpty(cvector, float)
0x8c3: Stack[-1] = (float) 1.74533
0x8c4: Call2 0x848

0x8c5: Stack[-4] = Stack[-2]
0x8c6: Pop(2)
0x8c7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x8c8: PushEmpty(bool)
0x8c9: Stack[-1] = (bool) 0
0x8ca: Push((float)2500.0)
0x8cb: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8cd: PushEmpty(bool)
0x8ce: Stack[-1] = (bool) 1
0x8cf: Pop(0); Push(Stack[-5] * Stack[-5]);
0x8d0: Push((float)2.25)
0x8d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d2: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d4: PushEmpty(bool)
0x8d5: Call2 0x8f3

0x8d6: Pop(0)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d8: Stack[-1] = (bool) 0
0x8d9: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8da: Stack[-1] = (bool) 1
0x8db: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8dc: @ Stop()
0x8dd: Pop(0)
0x8de: PushEmpty(cvector)
0x8df: Call2 0xa87

0x8e0: Pop(0)
0x8e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8e2: Return(); Pop(8)

0x8e3: @ Stop()
0x8e4: Pop(0)
0x8e5: Push((int) 120)
0x8e6: @ KillTimer(Stack[-1])
0x8e7: Pop(1)
0x8e8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8e9: Return(); Pop(0)

0x8ea: PushEmpty()
0x8eb: PushEmpty()
0x8ec: Call2 0x8e3

0x8ed: Pop(0)
0x8ee: PushEmpty(object)
0x8ef: Stack[-1] = Stack[-2]
0x8f0: Call2 0xee9

0x8f1: Pop(1)
0x8f2: Return(); Pop(0)

0x8f3: PushEmpty(cvector, cvector, cvector, cvector)
0x8f4: @ GetDirection(Stack[-2])
0x8f5: Pop(0)
0x8f6: PushEmpty(cvector, object)
0x8f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f8: Call2 0xa8c

0x8f9: Stack[-3] = Stack[-2]
0x8fa: Pop(2)
0x8fb: PushEmpty(float, cvector, cvector)
0x8fc: Stack[-2] = Stack[-5]
0x8fd: Stack[-1] = Stack[-4]
0x8fe: Call2 0xc40

0x8ff: Pop(2)
0x900: Push((float)-0.34202)
0x901: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x902: Return(); Pop(4)

0x903: PushEmpty()
0x904: Call2 0x9a5

0x905: Pop(0)
0x906: PushEmpty()
0x907: Call2 0x1001

0x908: Pop(0)
0x909: Return(); Pop(0)

0x90a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x90b: @ GetPosition(Stack[-6])
0x90c: Pop(0)
0x90d: @@ GetPosition(Stack[-5])
0x90e: Pop(0)
0x90f: @ GetDirection(Stack[-4])
0x910: Pop(0)
0x911: PushEmpty(cvector, cvector)
0x912: PushEmpty(cvector, cvector)
0x913: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x914: Call2 0xc30

0x915: Pop(1)
0x916: Push((float)0.75)
0x917: Pop(1); Push(Stack[-8] * Stack[-1]);
0x918: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x919: Call2 0xc30

0x91a: Stack[-5] = Stack[-2]
0x91b: Pop(2)
0x91c: Push((int) 32)
0x91d: Push((float)7000.0)
0x91e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x91f: Pop(2)
0x920: Push((int) 100)
0x921: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x922: Push((int) 0)
0x923: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x925: Stack[-1] = (int) 0
0x926: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x927: Return(); Pop(12)

0x928: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x929: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x92a: PushEmpty(cvector, float)
0x92b: Stack[-1] = (float) 1.74533
0x92c: Call2 0x90a

0x92d: Stack[-7] = Stack[-2]
0x92e: Pop(2)
0x92f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x930: Push((float)2500.0)
0x931: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x932: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x933: PushEmpty(cvector, float)
0x934: Stack[-1] = (float) 2.61799
0x935: Call2 0x90a

0x936: Stack[-7] = Stack[-2]
0x937: Pop(2)
0x938: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x939: Push((float)2500.0)
0x93a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93c: Push("Can't retreat, distance: ")
0x93d: Pop(0); Push(Sqrt(Stack[-5]))
0x93e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x93f: @ Trace(Stack[-1])
0x940: Pop(1)
0x941: Push((float)0.5)
0x942: @ Sleep(Stack[-1])
0x943: Pop(1)
0x944: Return(); Pop(10)

0x945: Push(CvectorIndex(Stack[-5], 0))
0x946: Push(CvectorIndex(Stack[-6], 2))
0x947: @ Rotate(Stack[-2], Stack[-1])
0x948: Pop(2)
0x949: PushEmpty(cvector)
0x94a: Call2 0xa87

0x94b: Pop(0)
0x94c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x94d: Push((int) 120)
0x94e: Push((float)0.5)
0x94f: @ SetTimer(Stack[-2], Stack[-1])
0x950: Pop(2)
0x951: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x952: Push((int) 1)
0x953: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x954: Pop(1)
0x955: Push(Stack[-3])
0x956: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x957: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x958: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x959: GOTO 0x970

0x95a: GOTO 0x96e

0x95b: PushEmpty(cvector, float)
0x95c: Stack[-1] = (float) 2.61799
0x95d: Call2 0x90a

0x95e: Stack[-4] = Stack[-2]
0x95f: Pop(2)
0x960: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x961: Push((float)2500.0)
0x962: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x963: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x964: PushEmpty(cvector)
0x965: Call2 0xa87

0x966: Pop(0)
0x967: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x968: Push((int) 120)
0x969: Push((float)0.5)
0x96a: @ SetTimer(Stack[-2], Stack[-1])
0x96b: Pop(2)
0x96c: GOTO 0x96e

0x96d: GOTO 0x970

0x96e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x96f: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x970: Return(); Pop(10)

0x971: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x972: Push((int) 120)
0x973: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x974: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x975: Return(); Pop(8)

0x976: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x978: @ Stop()
0x979: Pop(0)
0x97a: Push((int) 1)
0x97b: @ KillTimer(Stack[-1])
0x97c: Pop(1)
0x97d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x97e: GOTO 0x9a4

0x97f: @ GetDirection(Stack[-4])
0x980: Pop(0)
0x981: Push((float)7000.0)
0x982: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x983: Pop(1)
0x984: PushEmpty(cvector, float)
0x985: Stack[-1] = (float) 1.74533
0x986: Call2 0x90a

0x987: Stack[-4] = Stack[-2]
0x988: Pop(2)
0x989: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x98a: PushEmpty(bool)
0x98b: Stack[-1] = (bool) 0
0x98c: Push((float)2500.0)
0x98d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x98f: PushEmpty(bool)
0x990: Stack[-1] = (bool) 1
0x991: Pop(0); Push(Stack[-5] * Stack[-5]);
0x992: Push((float)2.25)
0x993: Pop(2); Push(Stack[-2] * Stack[-1]);
0x994: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x995: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x996: PushEmpty(bool)
0x997: Call2 0x9b5

0x998: Pop(0)
0x999: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x99a: Stack[-1] = (bool) 0
0x99b: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x99c: Stack[-1] = (bool) 1
0x99d: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x99e: @ Stop()
0x99f: Pop(0)
0x9a0: PushEmpty(cvector)
0x9a1: Call2 0xa87

0x9a2: Pop(0)
0x9a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x9a4: Return(); Pop(8)

0x9a5: @ Stop()
0x9a6: Pop(0)
0x9a7: Push((int) 120)
0x9a8: @ KillTimer(Stack[-1])
0x9a9: Pop(1)
0x9aa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9ab: Return(); Pop(0)

0x9ac: PushEmpty()
0x9ad: PushEmpty()
0x9ae: Call2 0x9a5

0x9af: Pop(0)
0x9b0: PushEmpty(object)
0x9b1: Stack[-1] = Stack[-2]
0x9b2: Call2 0xee9

0x9b3: Pop(1)
0x9b4: Return(); Pop(0)

0x9b5: PushEmpty(cvector, cvector, cvector, cvector)
0x9b6: @ GetDirection(Stack[-2])
0x9b7: Pop(0)
0x9b8: PushEmpty(cvector, object)
0x9b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ba: Call2 0xa8c

0x9bb: Stack[-3] = Stack[-2]
0x9bc: Pop(2)
0x9bd: PushEmpty(float, cvector, cvector)
0x9be: Stack[-2] = Stack[-5]
0x9bf: Stack[-1] = Stack[-4]
0x9c0: Call2 0xc40

0x9c1: Pop(2)
0x9c2: Push((float)-0.34202)
0x9c3: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x9c4: Return(); Pop(4)

0x9c5: PushEmpty()
0x9c6: Call2 0xa67

0x9c7: Pop(0)
0x9c8: PushEmpty()
0x9c9: Call2 0x1001

0x9ca: Pop(0)
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x9cd: @ GetPosition(Stack[-6])
0x9ce: Pop(0)
0x9cf: @@ GetPosition(Stack[-5])
0x9d0: Pop(0)
0x9d1: @ GetDirection(Stack[-4])
0x9d2: Pop(0)
0x9d3: PushEmpty(cvector, cvector)
0x9d4: PushEmpty(cvector, cvector)
0x9d5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x9d6: Call2 0xc30

0x9d7: Pop(1)
0x9d8: Push((float)0.75)
0x9d9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x9da: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x9db: Call2 0xc30

0x9dc: Stack[-5] = Stack[-2]
0x9dd: Pop(2)
0x9de: Push((int) 32)
0x9df: Push((float)7000.0)
0x9e0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x9e1: Pop(2)
0x9e2: Push((int) 100)
0x9e3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x9e4: Push((int) 0)
0x9e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e7: Stack[-1] = (int) 0
0x9e8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x9e9: Return(); Pop(12)

0x9ea: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x9eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x9ec: PushEmpty(cvector, float)
0x9ed: Stack[-1] = (float) 1.74533
0x9ee: Call2 0x9cc

0x9ef: Stack[-7] = Stack[-2]
0x9f0: Pop(2)
0x9f1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x9f2: Push((float)2500.0)
0x9f3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9f4: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0x9f5: PushEmpty(cvector, float)
0x9f6: Stack[-1] = (float) 2.61799
0x9f7: Call2 0x9cc

0x9f8: Stack[-7] = Stack[-2]
0x9f9: Pop(2)
0x9fa: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x9fb: Push((float)2500.0)
0x9fc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0x9fe: Push("Can't retreat, distance: ")
0x9ff: Pop(0); Push(Sqrt(Stack[-5]))
0xa00: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa01: @ Trace(Stack[-1])
0xa02: Pop(1)
0xa03: Push((float)0.5)
0xa04: @ Sleep(Stack[-1])
0xa05: Pop(1)
0xa06: Return(); Pop(10)

0xa07: Push(CvectorIndex(Stack[-5], 0))
0xa08: Push(CvectorIndex(Stack[-6], 2))
0xa09: @ Rotate(Stack[-2], Stack[-1])
0xa0a: Pop(2)
0xa0b: PushEmpty(cvector)
0xa0c: Call2 0xa87

0xa0d: Pop(0)
0xa0e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xa0f: Push((int) 120)
0xa10: Push((float)0.5)
0xa11: @ SetTimer(Stack[-2], Stack[-1])
0xa12: Pop(2)
0xa13: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa14: Push((int) 1)
0xa15: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xa16: Pop(1)
0xa17: Push(Stack[-3])
0xa18: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa19: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1b: GOTO 0xa32

0xa1c: GOTO 0xa30

0xa1d: PushEmpty(cvector, float)
0xa1e: Stack[-1] = (float) 2.61799
0xa1f: Call2 0x9cc

0xa20: Stack[-4] = Stack[-2]
0xa21: Pop(2)
0xa22: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa23: Push((float)2500.0)
0xa24: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa25: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa26: PushEmpty(cvector)
0xa27: Call2 0xa87

0xa28: Pop(0)
0xa29: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa2a: Push((int) 120)
0xa2b: Push((float)0.5)
0xa2c: @ SetTimer(Stack[-2], Stack[-1])
0xa2d: Pop(2)
0xa2e: GOTO 0xa30

0xa2f: GOTO 0xa32

0xa30: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa32: Return(); Pop(10)

0xa33: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xa34: Push((int) 120)
0xa35: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xa36: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa37: Return(); Pop(8)

0xa38: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa39: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3a: @ Stop()
0xa3b: Pop(0)
0xa3c: Push((int) 1)
0xa3d: @ KillTimer(Stack[-1])
0xa3e: Pop(1)
0xa3f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa40: GOTO 0xa66

0xa41: @ GetDirection(Stack[-4])
0xa42: Pop(0)
0xa43: Push((float)7000.0)
0xa44: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xa45: Pop(1)
0xa46: PushEmpty(cvector, float)
0xa47: Stack[-1] = (float) 1.74533
0xa48: Call2 0x9cc

0xa49: Stack[-4] = Stack[-2]
0xa4a: Pop(2)
0xa4b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa4c: PushEmpty(bool)
0xa4d: Stack[-1] = (bool) 0
0xa4e: Push((float)2500.0)
0xa4f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa51: PushEmpty(bool)
0xa52: Stack[-1] = (bool) 1
0xa53: Pop(0); Push(Stack[-5] * Stack[-5]);
0xa54: Push((float)2.25)
0xa55: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa56: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xa57: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa58: PushEmpty(bool)
0xa59: Call2 0xa77

0xa5a: Pop(0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: Stack[-1] = (bool) 0
0xa5d: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa5e: Stack[-1] = (bool) 1
0xa5f: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa60: @ Stop()
0xa61: Pop(0)
0xa62: PushEmpty(cvector)
0xa63: Call2 0xa87

0xa64: Pop(0)
0xa65: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa66: Return(); Pop(8)

0xa67: @ Stop()
0xa68: Pop(0)
0xa69: Push((int) 120)
0xa6a: @ KillTimer(Stack[-1])
0xa6b: Pop(1)
0xa6c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa6d: Return(); Pop(0)

0xa6e: PushEmpty()
0xa6f: PushEmpty()
0xa70: Call2 0xa67

0xa71: Pop(0)
0xa72: PushEmpty(object)
0xa73: Stack[-1] = Stack[-2]
0xa74: Call2 0xee9

0xa75: Pop(1)
0xa76: Return(); Pop(0)

0xa77: PushEmpty(cvector, cvector, cvector, cvector)
0xa78: @ GetDirection(Stack[-2])
0xa79: Pop(0)
0xa7a: PushEmpty(cvector, object)
0xa7b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7c: Call2 0xa8c

0xa7d: Stack[-3] = Stack[-2]
0xa7e: Pop(2)
0xa7f: PushEmpty(float, cvector, cvector)
0xa80: Stack[-2] = Stack[-5]
0xa81: Stack[-1] = Stack[-4]
0xa82: Call2 0xc40

0xa83: Pop(2)
0xa84: Push((float)-0.34202)
0xa85: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xa86: Return(); Pop(4)

0xa87: PushEmpty(cvector, cvector)
0xa88: @ GetPosition(Stack[-1])
0xa89: Pop(0)
0xa8a: Stack[-3] = Stack[-1]
0xa8b: Return(); Pop(2)

0xa8c: PushEmpty(cvector, cvector, cvector, cvector)
0xa8d: @ GetPosition(Stack[-2])
0xa8e: Pop(0)
0xa8f: @@ GetPosition(Stack[-1])
0xa90: Pop(0)
0xa91: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xa92: Return(); Pop(4)

0xa93: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa94: @ GetPosition(Stack[-3])
0xa95: Pop(0)
0xa96: @@ GetPosition(Stack[-2])
0xa97: Pop(0)
0xa98: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa99: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa9a: Return(); Pop(6)

0xa9b: PushEmpty(bool, bool)
0xa9c: @ IsPlayerActor(Stack[-3], Stack[-1])
0xa9d: Pop(0)
0xa9e: Stack[-4] = Stack[-1]
0xa9f: Return(); Pop(2)

0xaa0: PushEmpty(bool, bool)
0xaa1: Push("HasProperty")
0xaa2: Push((int) 2)
0xaa3: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xaa4: Pop(1); Push((bool) Stack[-1] == 0)
0xaa5: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa6: Stack[-5] = (bool) 0
0xaa7: Return(); Pop(2)

0xaa8: @@ HasProperty(Stack[-3], Stack[-1])
0xaa9: Pop(0)
0xaaa: Stack[-5] = Stack[-1]
0xaab: Return(); Pop(2)

0xaac: PushEmpty(bool, bool)
0xaad: @@ IsDead(Stack[-1])
0xaae: Pop(0)
0xaaf: Stack[-4] = Stack[-1]
0xab0: Return(); Pop(2)

0xab1: PushEmpty(object, object, object, object)
0xab2: Pop(0); Push((bool) Stack[-5] == 0)
0xab3: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab4: Stack[-6] = (bool) 0
0xab5: Return(); Pop(4)

0xab6: PushEmpty(bool)
0xab7: Stack[-1] = (bool) 0
0xab8: Push("IsDead")
0xab9: Push((int) 1)
0xaba: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xabb: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xabc: PushEmpty(bool, object)
0xabd: Stack[-1] = Stack[-8]
0xabe: Call2 0xaac

0xabf: Pop(1)
0xac0: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xac1: Stack[-1] = (bool) 1
0xac2: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac3: Stack[-6] = (bool) 0
0xac4: Return(); Pop(4)

0xac5: @ GetScene(Stack[-2])
0xac6: Pop(0)
0xac7: Pop(0); Push((bool) Stack[-2] == 0)
0xac8: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac9: Stack[-6] = (bool) 0
0xaca: Return(); Pop(4)

0xacb: @@ GetScene(Stack[-1])
0xacc: Pop(0)
0xacd: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: Stack[-6] = (bool) 0
0xad0: Return(); Pop(4)

0xad1: Stack[-6] = (bool) 1
0xad2: Return(); Pop(4)

0xad3: Stack[-1] = 0
0xad4: Stack[-2] = 0
0xad5: PushEmpty(int, int)
0xad6: PushEmpty(bool, object)
0xad7: Stack[-1] = Stack[-5]
0xad8: Call2 0xab1

0xad9: Pop(1)
0xada: Pop(1); Push((bool) Stack[-1] == 0)
0xadb: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadc: Stack[-4] = (bool) 0
0xadd: Return(); Pop(2)

0xade: PushEmpty(bool, object, string)
0xadf: Stack[-2] = Stack[-6]
0xae0: Stack[-1] = "noaccess"
0xae1: Call2 0xaa0

0xae2: Pop(2)
0xae3: Pop(1); Push((bool) Stack[-1] == 0)
0xae4: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae5: Stack[-4] = (bool) 1
0xae6: Return(); Pop(2)

0xae7: Push("noaccess")
0xae8: @@ GetProperty(Stack[-1], Stack[-2])
0xae9: Pop(1)
0xaea: Push((int) 0)
0xaeb: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xaec: Return(); Pop(2)

0xaed: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xaee: Pop(0); Push((bool) Stack[-15] == 0)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaf0: Return(); Pop(14)

0xaf1: @ IsDead(Stack[-7])
0xaf2: Pop(0)
0xaf3: Push(Stack[-7])
0xaf4: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf5: Return(); Pop(14)

0xaf6: @ GetSecondaryAnimationType(Stack[-6])
0xaf7: Pop(0)
0xaf8: Push((int) 0)
0xaf9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xafb: Return(); Pop(14)

0xafc: @@ GetPosition(Stack[-5])
0xafd: Pop(0)
0xafe: @ GetPosition(Stack[-4])
0xaff: Pop(0)
0xb00: @ GetDirection(Stack[-3])
0xb01: Pop(0)
0xb02: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xb03: Push(CvectorIndex(Stack[-2], 0))
0xb04: Push(CvectorIndex(Stack[-4], 0))
0xb05: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb06: Push(CvectorIndex(Stack[-3], 2))
0xb07: Push(CvectorIndex(Stack[-5], 2))
0xb08: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb09: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0a: Push((int) 0)
0xb0b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-1] = "fhit"
0xb0e: GOTO 0xb10

0xb0f: Stack[-1] = "bhit"
0xb10: Push("hit_react")
0xb11: Push("1")
0xb12: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb13: Push("2")
0xb14: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb15: Push((int) -10)
0xb16: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb17: Pop(4)
0xb18: Return(); Pop(14)

0xb19: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xb1a: PushEmpty(bool)
0xb1b: Stack[-1] = (bool) 0
0xb1c: PushEmpty(bool)
0xb1d: Stack[-1] = (bool) 0
0xb1e: Push(Stack[-23])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb20: Push((int) 4)
0xb21: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xb22: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb23: Stack[-1] = (bool) 1
0xb24: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb25: Push((int) 5)
0xb26: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xb27: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb28: Stack[-1] = (bool) 1
0xb29: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb2a: PushEmpty(cvector, cvector)
0xb2b: PushEmpty(cvector, object)
0xb2c: Stack[-1] = Stack[-25]
0xb2d: Call2 0xa8c

0xb2e: Stack[-3] = Stack[-2]
0xb2f: Pop(2)
0xb30: Call2 0xc30

0xb31: Stack[-11] = Stack[-2]
0xb32: Pop(2)
0xb33: @ CreateVectorVector(Stack[-8])
0xb34: Pop(0)
0xb35: Stack[-7] = (int) 1
0xb36: Push("hit")
0xb37: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb38: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xb39: Pop(1)
0xb3a: Pop(0); Push((bool) Stack[-6] == 0)
0xb3b: IF (Stack[-1] == 0) GOTO 0xb3d; Pop(1)

0xb3c: GOTO 0xb46

0xb3d: Pop(0); Push(Stack[-4] | Stack[-9]);
0xb3e: Push((float)0.70711)
0xb3f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb40: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb41: @@ add(Stack[-5])
0xb42: Pop(0)
0xb43: Push((int) 1)
0xb44: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb45: GOTO 0xb36

0xb46: @@ size(Stack[-3])
0xb47: Pop(0)
0xb48: Push(Stack[-3])
0xb49: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb4a: @ irand(Stack[-2], Stack[-3])
0xb4b: Pop(0)
0xb4c: @@ get(Stack[-1], Stack[-2])
0xb4d: Pop(0)
0xb4e: PushEmpty(object, int, float, cvector, cvector)
0xb4f: Stack[-5] = Stack[-26]
0xb50: Stack[-4] = Stack[-25]
0xb51: Stack[-3] = Stack[-24]
0xb52: Stack[-2] = Stack[-6]
0xb53: Stack[-1] = -Stack[-14]; Pop(0);
0xb54: Call2 0xb5d

0xb55: Pop(5)
0xb56: Return(); Pop(18)

0xb57: Stack[-8] = 0
0xb58: PushEmpty(object)
0xb59: Stack[-1] = Stack[-22]
0xb5a: Call2 0xaed

0xb5b: Pop(1)
0xb5c: Return(); Pop(18)

0xb5d: PushEmpty(object, object, object, object)
0xb5e: @ GetScene(Stack[-2])
0xb5f: Pop(0)
0xb60: Push("scripted")
0xb61: Push("blood_dir.xml")
0xb62: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xb63: Pop(2)
0xb64: PushEmpty(object)
0xb65: Stack[-1] = Stack[-10]
0xb66: Call2 0xaed

0xb67: Pop(1)
0xb68: Return(); Pop(4)

0xb69: Stack[-1] = 0
0xb6a: Stack[-2] = 0
0xb6b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb6c: @@ GetPosition(Stack[-3])
0xb6d: Pop(0)
0xb6e: @ GetPosition(Stack[-2])
0xb6f: Pop(0)
0xb70: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xb71: Push(CvectorIndex(Stack[-1], 0))
0xb72: Push(CvectorIndex(Stack[-2], 2))
0xb73: @ RotateAsync(Stack[-2], Stack[-1])
0xb74: Pop(2)
0xb75: Return(); Pop(6)

0xb76: PushEmpty(bool, bool)
0xb77: @ IsLoaded(Stack[-1])
0xb78: Pop(0)
0xb79: Stack[-3] = Stack[-1]
0xb7a: Return(); Pop(2)

0xb7b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb7c: @@ GetPosition(Stack[-8])
0xb7d: Pop(0)
0xb7e: @@ GetEyesHeight(Stack[-9])
0xb7f: Pop(0)
0xb80: Push(CvectorIndex(Stack[-8], 1))
0xb81: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb82: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb83: @ GetPosition(Stack[-7])
0xb84: Pop(0)
0xb85: @ GetEyesHeight(Stack[-9])
0xb86: Pop(0)
0xb87: Push(CvectorIndex(Stack[-7], 1))
0xb88: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb89: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb8a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb8b: Push(CvectorIndex(Stack[-6], 1))
0xb8c: Stack[-1] = (int) 0
0xb8d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb8e: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb8f: Pop(1); Push(Sqrt(Stack[-1]))
0xb90: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xb91: Stack[-5] = -Stack[-6]; Pop(0);
0xb92: Pop(0); Push(Stack[-6] * Stack[-19]);
0xb93: PushEmpty(cvector, cvector)
0xb94: Push(CVector(0.0, 1.0, 0.0))
0xb95: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb96: Call2 0xc30

0xb97: Pop(1)
0xb98: Push((int) 25)
0xb99: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb9a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb9b: Push(CVector(0.0, 10.0, 0.0))
0xb9c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb9d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb9e: @ IsOverrideActive(Stack[-2])
0xb9f: Pop(0)
0xba0: Push(Stack[-2])
0xba1: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xba2: Stack[-21] = (bool) 0
0xba3: Return(); Pop(18)

0xba4: @ StopWorld()
0xba5: Pop(0)
0xba6: @ CameraTransit(Stack[-3], Stack[-5])
0xba7: Pop(0)
0xba8: Push(CvectorIndex(Stack[-4], 0))
0xba9: Push(CvectorIndex(Stack[-5], 2))
0xbaa: @ Rotate(Stack[-2], Stack[-1])
0xbab: Pop(2)
0xbac: PushEmpty(bool)
0xbad: Call2 0x1114

0xbae: Pop(0)
0xbaf: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbb0: GOTO 0xbb9

0xbb1: Push("head")
0xbb2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbb3: Pop(1)
0xbb4: Push(Stack[-1])
0xbb5: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb6: Push("head")
0xbb7: @ LookAsyncCamera(Stack[-1])
0xbb8: Pop(1)
0xbb9: @ CameraWaitForPlayFinish()
0xbba: Pop(0)
0xbbb: @ ResumeWorld()
0xbbc: Pop(0)
0xbbd: Stack[-21] = (bool) 1
0xbbe: Return(); Pop(18)

0xbbf: PushEmpty(bool, bool)
0xbc0: @ CameraSwitchToNormal()
0xbc1: Pop(0)
0xbc2: PushEmpty(bool)
0xbc3: Call2 0x1114

0xbc4: Pop(0)
0xbc5: IF (Stack[-1] == 0) GOTO 0xbc7; Pop(1)

0xbc6: GOTO 0xbcf

0xbc7: Push("head")
0xbc8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbc9: Pop(1)
0xbca: Push(Stack[-1])
0xbcb: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbcc: Push("head")
0xbcd: @ UnlookAsync(Stack[-1])
0xbce: Pop(1)
0xbcf: Return(); Pop(2)

0xbd0: PushEmpty(bool, float, float, bool, float, float)
0xbd1: @ lshHasAnimation(Stack[-3], Stack[-7])
0xbd2: Pop(0)
0xbd3: Push(Stack[-3])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbd5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xbd6: Pop(0)
0xbd7: Push((bool) 0)
0xbd8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(1)
0xbda: GOTO 0xbdf

0xbdb: Push("Can't find lsh animation : ")
0xbdc: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbdd: @ Trace(Stack[-1])
0xbde: Pop(1)
0xbdf: Return(); Pop(6)

0xbe0: PushEmpty(bool, float, float, bool, float, float)
0xbe1: @ lshHasAnimation(Stack[-3], Stack[-8])
0xbe2: Pop(0)
0xbe3: Push(Stack[-3])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xbe6: Pop(0)
0xbe7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xbe8: Pop(0)
0xbe9: GOTO 0xbee

0xbea: Push("Can't find lsh animation : ")
0xbeb: Pop(1); Push(Stack[-1] + Stack[-9]);
0xbec: @ Trace(Stack[-1])
0xbed: Pop(1)
0xbee: Return(); Pop(6)

0xbef: PushEmpty(float, cvector, float, cvector)
0xbf0: @@ GetEyesHeight(Stack[-2])
0xbf1: Pop(0)
0xbf2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xbf3: Push(CvectorIndex(Stack[-1], 1))
0xbf4: Stack[-1] = Stack[-3]
0xbf5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xbf6: Push("head")
0xbf7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xbf8: Pop(1)
0xbf9: Return(); Pop(4)

0xbfa: PushEmpty(bool)
0xbfb: Call2 0x1114

0xbfc: Pop(0)
0xbfd: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbfe: @ lshStopSpeech()
0xbff: Pop(0)
0xc00: Return(); Pop(0)

0xc01: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xc02: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xc03: Pop(0)
0xc04: Pop(0); Push((bool) Stack[-8] == 0)
0xc05: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc06: Stack[-7] = (int) 0
0xc07: Push((int) 1)
0xc08: Pop(1); Push(Stack[-8] + Stack[-1]);
0xc09: Pop(1); Push(Stack[-18] + Stack[-1]);
0xc0a: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xc0b: Pop(1)
0xc0c: Pop(0); Push((bool) Stack[-6] == 0)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0e: GOTO 0xc12

0xc0f: Push((int) 1)
0xc10: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc11: GOTO 0xc07

0xc12: Pop(0); Push((bool) Stack[-7] == 0)
0xc13: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc14: Return(); Pop(16)

0xc15: @ irand(Stack[-5], Stack[-7])
0xc16: Pop(0)
0xc17: Push((int) 1)
0xc18: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc19: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xc1a: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xc1b: Pop(0)
0xc1c: Push(Stack[-4])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc1e: @ GetEyesHeight(Stack[-3])
0xc1f: Pop(0)
0xc20: @ GetDirection(Stack[-2])
0xc21: Pop(0)
0xc22: Push((int) 50)
0xc23: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xc24: Push(CvectorIndex(Stack[-1], 1))
0xc25: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xc26: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc27: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xc28: Pop(0)
0xc29: Return(); Pop(16)

0xc2a: PushEmpty(object, object)
0xc2b: @ self(Stack[-1])
0xc2c: Pop(0)
0xc2d: Stack[-3] = Stack[-1]
0xc2e: Return(); Pop(2)

0xc2f: Stack[-1] = 0
0xc30: PushEmpty(float, float)
0xc31: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc32: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc33: Push((float)0.0)
0xc34: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc35: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc36: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc37: Return(); Pop(2)

0xc38: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc39: Return(); Pop(2)

0xc3a: PushEmpty(object, object)
0xc3b: @ CreateObjectVector(Stack[-1])
0xc3c: Pop(0)
0xc3d: Stack[-3] = Stack[-1]
0xc3e: Return(); Pop(2)

0xc3f: Stack[-1] = 0
0xc40: PushEmpty()
0xc41: Pop(0); Push(Stack[-2] | Stack[-1]);
0xc42: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc43: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc44: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc45: Pop(1); Push(Sqrt(Stack[-1]))
0xc46: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xc47: Return(); Pop(0)

0xc48: PushEmpty()
0xc49: Push(CvectorIndex(Stack[-2], 0))
0xc4a: Push(CvectorIndex(Stack[-2], 0))
0xc4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc4c: Push(CvectorIndex(Stack[-3], 2))
0xc4d: Push(CvectorIndex(Stack[-3], 2))
0xc4e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc4f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc50: Return(); Pop(0)

0xc51: PushEmpty()
0xc52: Push(CvectorIndex(Stack[-1], 0))
0xc53: Push(CvectorIndex(Stack[-2], 0))
0xc54: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc55: Push(CvectorIndex(Stack[-2], 2))
0xc56: Push(CvectorIndex(Stack[-3], 2))
0xc57: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc58: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc59: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xc5a: Return(); Pop(0)

0xc5b: PushEmpty()
0xc5c: PushEmpty(float, cvector, cvector)
0xc5d: Stack[-2] = Stack[-5]
0xc5e: Stack[-1] = Stack[-4]
0xc5f: Call2 0xc48

0xc60: Pop(2)
0xc61: PushEmpty(float, cvector)
0xc62: Stack[-1] = Stack[-5]
0xc63: Call2 0xc51

0xc64: Pop(1)
0xc65: PushEmpty(float, cvector)
0xc66: Stack[-1] = Stack[-5]
0xc67: Call2 0xc51

0xc68: Pop(1)
0xc69: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc6a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xc6b: Return(); Pop(0)

0xc6c: PushEmpty(int, int)
0xc6d: @ GetVariable(Stack[-3], Stack[-1])
0xc6e: Pop(0)
0xc6f: Stack[-4] = Stack[-1]
0xc70: Return(); Pop(2)

0xc71: PushEmpty(float, float)
0xc72: @ GetGameTime(Stack[-1])
0xc73: Pop(0)
0xc74: Push((int) 1)
0xc75: PushEmpty(int)
0xc76: Push((int) 24)
0xc77: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc78: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc79: Return(); Pop(2)

0xc7a: PushEmpty()
0xc7b: Push((int) 100)
0xc7c: @@ SetReturnValue(Stack[-1])
0xc7d: Pop(1)
0xc7e: Return(); Pop(0)

0xc7f: PushEmpty()
0xc80: PushEmpty(int, string)
0xc81: Stack[-1] = "branch"
0xc82: Call2 0xc6c

0xc83: Pop(1)
0xc84: Push((int) 0)
0xc85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc89; Pop(1)

0xc87: Stack[-2] = (bool) 1
0xc88: Return(); Pop(0)

0xc89: Stack[-2] = (bool) 0
0xc8a: Return(); Pop(0)

0xc8b: PushEmpty()
0xc8c: PushEmpty(int, string)
0xc8d: Stack[-1] = "branch"
0xc8e: Call2 0xc6c

0xc8f: Pop(1)
0xc90: Push((int) 1)
0xc91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc93: Stack[-2] = (bool) 1
0xc94: Return(); Pop(0)

0xc95: Stack[-2] = (bool) 0
0xc96: Return(); Pop(0)

0xc97: PushEmpty()
0xc98: PushEmpty(int, string)
0xc99: Stack[-1] = "branch"
0xc9a: Call2 0xc6c

0xc9b: Pop(1)
0xc9c: Push((int) 2)
0xc9d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc9e: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc9f: Stack[-2] = (bool) 1
0xca0: Return(); Pop(0)

0xca1: Stack[-2] = (bool) 0
0xca2: Return(); Pop(0)

0xca3: PushEmpty()
0xca4: PushEmpty(bool, object)
0xca5: Stack[-1] = Stack[-3]
0xca6: Call2 0xd1b

0xca7: Pop(1)
0xca8: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca9: Stack[-2] = (bool) 1
0xcaa: Return(); Pop(0)

0xcab: Stack[-2] = (bool) 0
0xcac: Return(); Pop(0)

0xcad: PushEmpty()
0xcae: PushEmpty(bool, object)
0xcaf: Stack[-1] = Stack[-3]
0xcb0: Call2 0xd22

0xcb1: Pop(1)
0xcb2: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb3: Stack[-2] = (bool) 1
0xcb4: Return(); Pop(0)

0xcb5: Stack[-2] = (bool) 0
0xcb6: Return(); Pop(0)

0xcb7: PushEmpty()
0xcb8: PushEmpty(bool, object)
0xcb9: Stack[-1] = Stack[-3]
0xcba: Call2 0xd29

0xcbb: Pop(1)
0xcbc: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcbd: Stack[-2] = (bool) 1
0xcbe: Return(); Pop(0)

0xcbf: Stack[-2] = (bool) 0
0xcc0: Return(); Pop(0)

0xcc1: PushEmpty()
0xcc2: PushEmpty(bool, object)
0xcc3: Stack[-1] = Stack[-3]
0xcc4: Call2 0xd30

0xcc5: Pop(1)
0xcc6: IF (Stack[-1] == 0) GOTO 0xcc9; Pop(1)

0xcc7: Stack[-2] = (bool) 1
0xcc8: Return(); Pop(0)

0xcc9: Stack[-2] = (bool) 0
0xcca: Return(); Pop(0)

0xccb: PushEmpty()
0xccc: PushEmpty(bool, object)
0xccd: Stack[-1] = Stack[-3]
0xcce: Call2 0xd37

0xccf: Pop(1)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd1: Stack[-2] = (bool) 1
0xcd2: Return(); Pop(0)

0xcd3: Stack[-2] = (bool) 0
0xcd4: Return(); Pop(0)

0xcd5: PushEmpty()
0xcd6: PushEmpty(bool, object)
0xcd7: Stack[-1] = Stack[-3]
0xcd8: Call2 0xd3e

0xcd9: Pop(1)
0xcda: IF (Stack[-1] == 0) GOTO 0xcdd; Pop(1)

0xcdb: Stack[-2] = (bool) 1
0xcdc: Return(); Pop(0)

0xcdd: Stack[-2] = (bool) 0
0xcde: Return(); Pop(0)

0xcdf: PushEmpty()
0xce0: PushEmpty(bool, object)
0xce1: Stack[-1] = Stack[-3]
0xce2: Call2 0xd45

0xce3: Pop(1)
0xce4: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce5: Stack[-2] = (bool) 1
0xce6: Return(); Pop(0)

0xce7: Stack[-2] = (bool) 0
0xce8: Return(); Pop(0)

0xce9: PushEmpty()
0xcea: PushEmpty(bool, object)
0xceb: Stack[-1] = Stack[-3]
0xcec: Call2 0xd4c

0xced: Pop(1)
0xcee: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xcef: Stack[-2] = (bool) 1
0xcf0: Return(); Pop(0)

0xcf1: Stack[-2] = (bool) 0
0xcf2: Return(); Pop(0)

0xcf3: PushEmpty()
0xcf4: PushEmpty(bool, object)
0xcf5: Stack[-1] = Stack[-3]
0xcf6: Call2 0xd53

0xcf7: Pop(1)
0xcf8: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf9: Stack[-2] = (bool) 1
0xcfa: Return(); Pop(0)

0xcfb: Stack[-2] = (bool) 0
0xcfc: Return(); Pop(0)

0xcfd: PushEmpty()
0xcfe: PushEmpty(bool, object)
0xcff: Stack[-1] = Stack[-3]
0xd00: Call2 0xd5a

0xd01: Pop(1)
0xd02: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd03: Stack[-2] = (bool) 1
0xd04: Return(); Pop(0)

0xd05: Stack[-2] = (bool) 0
0xd06: Return(); Pop(0)

0xd07: PushEmpty()
0xd08: PushEmpty(bool, object)
0xd09: Stack[-1] = Stack[-3]
0xd0a: Call2 0xd61

0xd0b: Pop(1)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xd0d: Stack[-2] = (bool) 1
0xd0e: Return(); Pop(0)

0xd0f: Stack[-2] = (bool) 0
0xd10: Return(); Pop(0)

0xd11: PushEmpty()
0xd12: PushEmpty(bool, object)
0xd13: Stack[-1] = Stack[-3]
0xd14: Call2 0xd68

0xd15: Pop(1)
0xd16: IF (Stack[-1] == 0) GOTO 0xd19; Pop(1)

0xd17: Stack[-2] = (bool) 1
0xd18: Return(); Pop(0)

0xd19: Stack[-2] = (bool) 0
0xd1a: Return(); Pop(0)

0xd1b: PushEmpty()
0xd1c: PushEmpty(int)
0xd1d: Call2 0xc71

0xd1e: Pop(0)
0xd1f: Push((int) 1)
0xd20: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd21: Return(); Pop(0)

0xd22: PushEmpty()
0xd23: PushEmpty(int)
0xd24: Call2 0xc71

0xd25: Pop(0)
0xd26: Push((int) 2)
0xd27: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd28: Return(); Pop(0)

0xd29: PushEmpty()
0xd2a: PushEmpty(int)
0xd2b: Call2 0xc71

0xd2c: Pop(0)
0xd2d: Push((int) 3)
0xd2e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd2f: Return(); Pop(0)

0xd30: PushEmpty()
0xd31: PushEmpty(int)
0xd32: Call2 0xc71

0xd33: Pop(0)
0xd34: Push((int) 4)
0xd35: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd36: Return(); Pop(0)

0xd37: PushEmpty()
0xd38: PushEmpty(int)
0xd39: Call2 0xc71

0xd3a: Pop(0)
0xd3b: Push((int) 5)
0xd3c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd3d: Return(); Pop(0)

0xd3e: PushEmpty()
0xd3f: PushEmpty(int)
0xd40: Call2 0xc71

0xd41: Pop(0)
0xd42: Push((int) 6)
0xd43: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd44: Return(); Pop(0)

0xd45: PushEmpty()
0xd46: PushEmpty(int)
0xd47: Call2 0xc71

0xd48: Pop(0)
0xd49: Push((int) 7)
0xd4a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd4b: Return(); Pop(0)

0xd4c: PushEmpty()
0xd4d: PushEmpty(int)
0xd4e: Call2 0xc71

0xd4f: Pop(0)
0xd50: Push((int) 8)
0xd51: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd52: Return(); Pop(0)

0xd53: PushEmpty()
0xd54: PushEmpty(int)
0xd55: Call2 0xc71

0xd56: Pop(0)
0xd57: Push((int) 9)
0xd58: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd59: Return(); Pop(0)

0xd5a: PushEmpty()
0xd5b: PushEmpty(int)
0xd5c: Call2 0xc71

0xd5d: Pop(0)
0xd5e: Push((int) 10)
0xd5f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd60: Return(); Pop(0)

0xd61: PushEmpty()
0xd62: PushEmpty(int)
0xd63: Call2 0xc71

0xd64: Pop(0)
0xd65: Push((int) 11)
0xd66: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd67: Return(); Pop(0)

0xd68: PushEmpty()
0xd69: PushEmpty(int)
0xd6a: Call2 0xc71

0xd6b: Pop(0)
0xd6c: Push((int) 12)
0xd6d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd6e: Return(); Pop(0)

0xd6f: PushEmpty(int, int)
0xd70: Push("branch")
0xd71: @ GetVariable(Stack[-1], Stack[-2])
0xd72: Pop(1)
0xd73: Push((int) 0)
0xd74: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd75: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd76: Stack[-3] = (int) 1
0xd77: Return(); Pop(2)

0xd78: GOTO 0xd7e

0xd79: Push((int) 1)
0xd7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7b: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd7c: Stack[-3] = (int) 2
0xd7d: Return(); Pop(2)

0xd7e: Stack[-3] = (int) 3
0xd7f: Return(); Pop(2)

0xd80: PushEmpty(int, int)
0xd81: Push("branch")
0xd82: @ GetVariable(Stack[-1], Stack[-2])
0xd83: Pop(1)
0xd84: Stack[-3] = Stack[-1]
0xd85: Return(); Pop(2)

0xd86: PushEmpty(int, int)
0xd87: @@ GetItemID(Stack[-1])
0xd88: Pop(0)
0xd89: Stack[-4] = Stack[-1]
0xd8a: Return(); Pop(2)

0xd8b: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0xd8c: Push((int) 0)
0xd8d: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xd8e: IF (Stack[-1] == 0) GOTO 0xdb0; Pop(1)

0xd8f: PushEmpty(int)
0xd90: Call2 0xc71

0xd91: Stack[-8] = Stack[-1]
0xd92: Pop(1)
0xd93: Stack[-6] = (int) 0
0xd94: Stack[-5] = (int) 1
0xd95: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0xd96: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xd97: Stack[-4] = "Price"
0xd98: Push((int) 1)
0xd99: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd9b: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0xd9c: PushEmpty(int, object)
0xd9d: Stack[-1] = Stack[-18]
0xd9e: Call2 0xd86

0xd9f: Pop(1)
0xda0: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0xda1: Pop(1)
0xda2: Pop(0); Push((bool) Stack[-3] == 0)
0xda3: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda4: GOTO 0xdab

0xda5: PushEmpty(int, object)
0xda6: Stack[-1] = Stack[-18]
0xda7: Call2 0xd86

0xda8: Pop(1)
0xda9: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0xdaa: Pop(1)
0xdab: Push((int) 1)
0xdac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xdad: GOTO 0xd95

0xdae: Stack[-17] = Stack[-6]
0xdaf: Return(); Pop(14)

0xdb0: PushEmpty(int, object)
0xdb1: Stack[-1] = Stack[-18]
0xdb2: Call2 0xd86

0xdb3: Pop(1)
0xdb4: Push("BarterPrice")
0xdb5: Pop(1); Push(Stack[-1] + Stack[-17]);
0xdb6: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xdb7: Pop(2)
0xdb8: Pop(0); Push((bool) Stack[-2] == 0)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdba: Stack[-17] = (int) 0
0xdbb: Return(); Pop(14)

0xdbc: PushEmpty(int, object)
0xdbd: Stack[-1] = Stack[-18]
0xdbe: Call2 0xd86

0xdbf: Pop(1)
0xdc0: Push("BarterPrice")
0xdc1: Pop(1); Push(Stack[-1] + Stack[-17]);
0xdc2: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xdc3: Pop(2)
0xdc4: Push((int) 0)
0xdc5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdc6: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdc7: Stack[-17] = Stack[-1]
0xdc8: Return(); Pop(14)

0xdc9: Stack[-17] = -Stack[-1]; Pop(0);
0xdca: Return(); Pop(14)

0xdcb: PushEmpty()
0xdcc: PushEmpty(int)
0xdcd: Call2 0xd80

0xdce: Pop(0)
0xdcf: Push((int) 1)
0xdd0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd5; Pop(1)

0xdd2: @ WorkWithCorpse(Stack[-1])
0xdd3: Pop(0)
0xdd4: GOTO 0xdd7

0xdd5: @ Barter(Stack[-1])
0xdd6: Pop(0)
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty(int, bool, int, bool)
0xdd9: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xdda: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddb: Push("GenerateMoney: iMin > iMax")
0xddc: @ Trace(Stack[-1])
0xddd: Pop(1)
0xdde: Return(); Pop(4)

0xddf: Stack[-2] = (int) 0
0xde0: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xde1: IF (Stack[-1] == 0) GOTO 0xde6; Pop(1)

0xde2: Pop(0); Push(Stack[-5] - Stack[-6]);
0xde3: @ irand(Stack[-3], Stack[-1])
0xde4: Pop(1)
0xde5: GOTO 0xdea

0xde6: Push((int) 0)
0xde7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xde8: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde9: Return(); Pop(4)

0xdea: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xdeb: Push((int) 0)
0xdec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xded: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xdee: Return(); Pop(4)

0xdef: PushEmpty(int, string)
0xdf0: Stack[-1] = "Money"
0xdf1: Call2 0xecf

0xdf2: Pop(1)
0xdf3: Push((int) 0)
0xdf4: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xdf5: Pop(2)
0xdf6: Return(); Pop(4)

0xdf7: PushEmpty(object, int, bool, object, int, bool)
0xdf8: @ CreateInvItem(Stack[-3])
0xdf9: Pop(0)
0xdfa: @@ SetItemName(Stack[-7])
0xdfb: Pop(0)
0xdfc: Push("Organ")
0xdfd: Push((int) 1)
0xdfe: @@ SetProperty(Stack[-2], Stack[-1])
0xdff: Pop(2)
0xe00: @@ GetItemID(Stack[-2])
0xe01: Pop(0)
0xe02: Push((int) 0)
0xe03: Push((int) 1)
0xe04: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xe05: Pop(2)
0xe06: Return(); Pop(6)

0xe07: Stack[-3] = 0
0xe08: PushEmpty(int)
0xe09: Call2 0xd80

0xe0a: Pop(0)
0xe0b: Push((int) 1)
0xe0c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe0f; Pop(1)

0xe0e: Return(); Pop(0)

0xe0f: PushEmpty(string)
0xe10: Stack[-1] = "liver"
0xe11: Call2 0xdf7

0xe12: Pop(1)
0xe13: PushEmpty(string)
0xe14: Stack[-1] = "kidney"
0xe15: Call2 0xdf7

0xe16: Pop(1)
0xe17: PushEmpty(string)
0xe18: Stack[-1] = "heart"
0xe19: Call2 0xdf7

0xe1a: Pop(1)
0xe1b: PushEmpty(string)
0xe1c: Stack[-1] = "blood"
0xe1d: Call2 0xdf7

0xe1e: Pop(1)
0xe1f: Return(); Pop(0)

0xe20: PushEmpty(int, bool, int, bool)
0xe21: Push(Stack[-5])
0xe22: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe23: PushEmpty(int, int)
0xe24: Stack[-2] = (int) 0
0xe25: Push((int) 100)
0xe26: PushEmpty(int)
0xe27: Call2 0xc71

0xe28: Pop(0)
0xe29: Push((int) 100)
0xe2a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe2b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe2c: Call2 0xdd8

0xe2d: Pop(2)
0xe2e: Push((int) 8)
0xe2f: @ irand(Stack[-3], Stack[-1])
0xe30: Pop(1)
0xe31: Push((int) 0)
0xe32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe33: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe34: PushEmpty(int, string)
0xe35: Stack[-1] = "lemon"
0xe36: Call2 0xecf

0xe37: Pop(1)
0xe38: Push((int) 0)
0xe39: Push((int) 1)
0xe3a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe3b: Pop(3)
0xe3c: GOTO 0xe78

0xe3d: Push((int) 1)
0xe3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3f: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe40: PushEmpty(int, string)
0xe41: Stack[-1] = "rusk"
0xe42: Call2 0xecf

0xe43: Pop(1)
0xe44: Push((int) 0)
0xe45: Push((int) 1)
0xe46: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe47: Pop(3)
0xe48: GOTO 0xe78

0xe49: Push((int) 2)
0xe4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe4c: PushEmpty(int, string)
0xe4d: Stack[-1] = "hook"
0xe4e: Call2 0xecf

0xe4f: Pop(1)
0xe50: Push((int) 0)
0xe51: Push((int) 1)
0xe52: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe53: Pop(3)
0xe54: GOTO 0xe78

0xe55: Push((int) 4)
0xe56: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe57: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe58: PushEmpty(int, string)
0xe59: Stack[-1] = "syringe"
0xe5a: Call2 0xecf

0xe5b: Pop(1)
0xe5c: Push((int) 0)
0xe5d: Push((int) 1)
0xe5e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe5f: Pop(3)
0xe60: GOTO 0xe78

0xe61: Push((int) 5)
0xe62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe63: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe64: PushEmpty(int, string)
0xe65: Stack[-1] = "watch"
0xe66: Call2 0xecf

0xe67: Pop(1)
0xe68: Push((int) 0)
0xe69: Push((int) 1)
0xe6a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe6b: Pop(3)
0xe6c: GOTO 0xe78

0xe6d: Push((int) 6)
0xe6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe70: PushEmpty(int, string)
0xe71: Stack[-1] = "razor"
0xe72: Call2 0xecf

0xe73: Pop(1)
0xe74: Push((int) 0)
0xe75: Push((int) 1)
0xe76: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe77: Pop(3)
0xe78: GOTO 0xece

0xe79: PushEmpty(int, int)
0xe7a: Stack[-2] = (int) 0
0xe7b: Push((int) 50)
0xe7c: PushEmpty(int)
0xe7d: Call2 0xc71

0xe7e: Pop(0)
0xe7f: Push((int) 50)
0xe80: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe81: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe82: Call2 0xdd8

0xe83: Pop(2)
0xe84: Push((int) 7)
0xe85: @ irand(Stack[-3], Stack[-1])
0xe86: Pop(1)
0xe87: Push((int) 0)
0xe88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe89: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe8a: PushEmpty(int, string)
0xe8b: Stack[-1] = "beads"
0xe8c: Call2 0xecf

0xe8d: Pop(1)
0xe8e: Push((int) 0)
0xe8f: Push((int) 1)
0xe90: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe91: Pop(3)
0xe92: GOTO 0xece

0xe93: Push((int) 1)
0xe94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe95: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe96: PushEmpty(int, string)
0xe97: Stack[-1] = "bracelet"
0xe98: Call2 0xecf

0xe99: Pop(1)
0xe9a: Push((int) 0)
0xe9b: Push((int) 1)
0xe9c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe9d: Pop(3)
0xe9e: GOTO 0xece

0xe9f: Push((int) 2)
0xea0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea1: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea2: PushEmpty(int, string)
0xea3: Stack[-1] = "ear_ring"
0xea4: Call2 0xecf

0xea5: Pop(1)
0xea6: Push((int) 0)
0xea7: Push((int) 1)
0xea8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea9: Pop(3)
0xeaa: GOTO 0xece

0xeab: Push((int) 3)
0xeac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xead: IF (Stack[-1] == 0) GOTO 0xeb7; Pop(1)

0xeae: PushEmpty(int, string)
0xeaf: Stack[-1] = "gold_ring"
0xeb0: Call2 0xecf

0xeb1: Pop(1)
0xeb2: Push((int) 0)
0xeb3: Push((int) 1)
0xeb4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeb5: Pop(3)
0xeb6: GOTO 0xece

0xeb7: Push((int) 4)
0xeb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb9: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xeba: PushEmpty(int, string)
0xebb: Stack[-1] = "silver_ring"
0xebc: Call2 0xecf

0xebd: Pop(1)
0xebe: Push((int) 0)
0xebf: Push((int) 1)
0xec0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec1: Pop(3)
0xec2: GOTO 0xece

0xec3: Push((int) 5)
0xec4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec5: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xec6: PushEmpty(int, string)
0xec7: Stack[-1] = "flower"
0xec8: Call2 0xecf

0xec9: Pop(1)
0xeca: Push((int) 0)
0xecb: Push((int) 1)
0xecc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xecd: Pop(3)
0xece: Return(); Pop(4)

0xecf: PushEmpty(int, int)
0xed0: @ GetInvItemByName(Stack[-1], Stack[-3])
0xed1: Pop(0)
0xed2: Stack[-4] = Stack[-1]
0xed3: Return(); Pop(2)

0xed4: PushEmpty()
0xed5: PushEmpty(object)
0xed6: Stack[-1] = Stack[-2]
0xed7: Push(-1, 0); TaskCall(2)
0xed8: Call2 0x498

0xed9: Pop(-1, 0); TaskReturn
0xeda: Pop(1)
0xedb: Return(); Pop(0)

0xedc: PushEmpty(float, float)
0xedd: Push("health")
0xede: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xedf: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xee0: Push("health")
0xee1: @ GetProperty(Stack[-1], Stack[-2])
0xee2: Pop(1)
0xee3: Push((int) 0)
0xee4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xee6: @ SignalDeath(Stack[-4])
0xee7: Pop(0)
0xee8: Return(); Pop(2)

0xee9: PushEmpty()
0xeea: PushEmpty(object)
0xeeb: Stack[-1] = Stack[-2]
0xeec: Call2 0xed4

0xeed: Pop(1)
0xeee: Return(); Pop(0)

0xeef: PushEmpty()
0xef0: PushEmpty(object, int, float)
0xef1: Stack[-3] = Stack[-7]
0xef2: Stack[-2] = Stack[-6]
0xef3: Stack[-1] = Stack[-5]
0xef4: Call2 0xb19

0xef5: Pop(3)
0xef6: Return(); Pop(0)

0xef7: PushEmpty()
0xef8: PushEmpty(object, int, float, cvector, cvector)
0xef9: Stack[-5] = Stack[-11]
0xefa: Stack[-4] = Stack[-10]
0xefb: Stack[-3] = Stack[-9]
0xefc: Stack[-2] = Stack[-7]
0xefd: Stack[-1] = Stack[-6]
0xefe: Call2 0xb5d

0xeff: Pop(5)
0xf00: Return(); Pop(0)

0xf01: PushEmpty()
0xf02: Push("unholster")
0xf03: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf04: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xf05: PushEmpty(bool, object)
0xf06: Stack[-1] = Stack[-4]
0xf07: Call2 0x101d

0xf08: Stack[-5] = Stack[-2]
0xf09: Pop(2)
0xf0a: Return(); Pop(0)

0xf0b: GOTO 0xf1f

0xf0c: Push("player_shot")
0xf0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0e: IF (Stack[-1] == 0) GOTO 0xf16; Pop(1)

0xf0f: PushEmpty(bool, object)
0xf10: Stack[-1] = Stack[-4]
0xf11: Call2 0x102a

0xf12: Stack[-5] = Stack[-2]
0xf13: Pop(2)
0xf14: Return(); Pop(0)

0xf15: GOTO 0xf1f

0xf16: Push("battle")
0xf17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf18: IF (Stack[-1] == 0) GOTO 0xf1f; Pop(1)

0xf19: PushEmpty(bool, object)
0xf1a: Stack[-1] = Stack[-4]
0xf1b: Call2 0x1041

0xf1c: Stack[-5] = Stack[-2]
0xf1d: Pop(2)
0xf1e: Return(); Pop(0)

0xf1f: Stack[-3] = (bool) 0
0xf20: Return(); Pop(0)

0xf21: PushEmpty()
0xf22: Push("unholster")
0xf23: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf24: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf25: PushEmpty(object)
0xf26: Stack[-1] = Stack[-3]
0xf27: Call2 0x1022

0xf28: Pop(1)
0xf29: GOTO 0xf39

0xf2a: Push("player_shot")
0xf2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf2d: PushEmpty(object)
0xf2e: Stack[-1] = Stack[-3]
0xf2f: Call2 0x1039

0xf30: Pop(1)
0xf31: GOTO 0xf39

0xf32: Push("battle")
0xf33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf35: PushEmpty(object)
0xf36: Stack[-1] = Stack[-3]
0xf37: Call2 0x1048

0xf38: Pop(1)
0xf39: Return(); Pop(0)

0xf3a: PushEmpty(bool, bool)
0xf3b: PushEmpty(bool)
0xf3c: Stack[-1] = (bool) 0
0xf3d: PushEmpty(bool, object)
0xf3e: Stack[-1] = Stack[-6]
0xf3f: Call2 0x101d

0xf40: Pop(1)
0xf41: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf42: PushEmpty(bool, object)
0xf43: Stack[-1] = Stack[-6]
0xf44: Call2 0xa9b

0xf45: Pop(1)
0xf46: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf47: Stack[-1] = (bool) 1
0xf48: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf49: @@ IsWeaponHolstered(Stack[-1])
0xf4a: Pop(0)
0xf4b: Pop(0); Push((bool) Stack[-1] == 0)
0xf4c: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4d: Stack[-4] = (bool) 1
0xf4e: Return(); Pop(2)

0xf4f: Stack[-4] = (bool) 0
0xf50: Return(); Pop(2)

0xf51: PushEmpty()
0xf52: PushEmpty(object)
0xf53: Stack[-1] = Stack[-2]
0xf54: Call2 0x1022

0xf55: Pop(1)
0xf56: Return(); Pop(0)

0xf57: PushEmpty()
0xf58: PushEmpty(bool, object)
0xf59: Stack[-1] = Stack[-3]
0xf5a: Call2 0xa9b

0xf5b: Pop(1)
0xf5c: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf5d: PushEmpty(object)
0xf5e: Call2 0xc2a

0xf5f: Pop(0)
0xf60: Push((float)-0.05)
0xf61: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xf62: Pop(2)
0xf63: Return(); Pop(0)

0xf64: PushEmpty(object, object)
0xf65: Push("heal")
0xf66: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf67: IF (Stack[-1] == 0) GOTO 0xf72; Pop(1)

0xf68: Push("player")
0xf69: @ FindActor(Stack[-2], Stack[-1])
0xf6a: Pop(1)
0xf6b: PushEmpty(bool, object)
0xf6c: Stack[-1] = Stack[-3]
0xf6d: Call2 0x104e

0xf6e: Stack[-6] = Stack[-2]
0xf6f: Pop(2)
0xf70: Return(); Pop(2)

0xf71: Stack[-1] = 0
0xf72: Stack[-4] = (bool) 0
0xf73: Return(); Pop(2)

0xf74: PushEmpty(object, object)
0xf75: Push("heal")
0xf76: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf77: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf78: Push("player")
0xf79: @ FindActor(Stack[-2], Stack[-1])
0xf7a: Pop(1)
0xf7b: PushEmpty(object)
0xf7c: Stack[-1] = Stack[-2]
0xf7d: Call2 0x1051

0xf7e: Pop(1)
0xf7f: Stack[-1] = 0
0xf80: Return(); Pop(2)

0xf81: PushEmpty()
0xf82: PushEmpty(bool)
0xf83: Call2 0x114e

0xf84: Pop(0)
0xf85: IF (Stack[-1] == 0) GOTO 0xf88; Pop(1)

0xf86: Stack[-2] = (int) 2
0xf87: GOTO 0xf89

0xf88: Stack[-2] = (int) 0
0xf89: Return(); Pop(0)

0xf8a: PushEmpty()
0xf8b: PushEmpty(object)
0xf8c: Stack[-1] = Stack[-2]
0xf8d: Push(-1, 1); TaskCall(4)
0xf8e: Call2 0x657

0xf8f: Pop(-1, 1); TaskReturn
0xf90: Pop(1)
0xf91: Return(); Pop(0)

0xf92: PushEmpty()
0xf93: PushEmpty(bool, object)
0xf94: Stack[-1] = Stack[-3]
0xf95: Call2 0xad5

0xf96: Pop(1)
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: Stack[-2] = (int) 2
0xf99: GOTO 0xf9b

0xf9a: Stack[-2] = (int) 0
0xf9b: Return(); Pop(0)

0xf9c: PushEmpty()
0xf9d: PushEmpty(object)
0xf9e: Stack[-1] = Stack[-2]
0xf9f: Push(-1, 3); TaskCall(5)
0xfa0: Call2 0x76a

0xfa1: Pop(-1, 3); TaskReturn
0xfa2: Pop(1)
0xfa3: Return(); Pop(0)

0xfa4: PushEmpty()
0xfa5: PushEmpty(bool, object)
0xfa6: Stack[-1] = Stack[-4]
0xfa7: Call2 0xad5

0xfa8: Pop(1)
0xfa9: IF (Stack[-1] == 0) GOTO 0xfac; Pop(1)

0xfaa: Stack[-3] = (int) 2
0xfab: GOTO 0xfad

0xfac: Stack[-3] = (int) 0
0xfad: Return(); Pop(0)

0xfae: PushEmpty()
0xfaf: PushEmpty(object)
0xfb0: Stack[-1] = Stack[-2]
0xfb1: Push(-1, 3); TaskCall(6)
0xfb2: Call2 0x866

0xfb3: Pop(-1, 3); TaskReturn
0xfb4: Pop(1)
0xfb5: Return(); Pop(0)

0xfb6: PushEmpty(string, bool, string, bool)
0xfb7: PushEmpty(bool, object, string)
0xfb8: Stack[-2] = Stack[-9]
0xfb9: Stack[-1] = "class"
0xfba: Call2 0xaa0

0xfbb: Pop(2)
0xfbc: Pop(1); Push((bool) Stack[-1] == 0)
0xfbd: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbe: Stack[-8] = (bool) 0
0xfbf: Return(); Pop(4)

0xfc0: Push("class")
0xfc1: @@ GetProperty(Stack[-1], Stack[-3])
0xfc2: Pop(1)
0xfc3: Push("rat")
0xfc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc5: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc6: Stack[-8] = (bool) 0
0xfc7: Return(); Pop(4)

0xfc8: GOTO 0xfd4

0xfc9: Push("rat_big")
0xfca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcb: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfcc: Stack[-8] = (bool) 0
0xfcd: Return(); Pop(4)

0xfce: GOTO 0xfd4

0xfcf: Push("dog")
0xfd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd2: Stack[-8] = (bool) 0
0xfd3: Return(); Pop(4)

0xfd4: @ CanSee(Stack[-1], Stack[-7])
0xfd5: Pop(0)
0xfd6: PushEmpty(bool)
0xfd7: Stack[-1] = (bool) 1
0xfd8: Push(Stack[-2])
0xfd9: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfda: PushEmpty(float, object)
0xfdb: Stack[-1] = Stack[-10]
0xfdc: Call2 0xa93

0xfdd: Pop(1)
0xfde: Pop(0); Push(Stack[-7] * Stack[-7]);
0xfdf: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xfe0: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfe1: Stack[-1] = (bool) 0
0xfe2: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfe3: Stack[-8] = (bool) 1
0xfe4: Return(); Pop(4)

0xfe5: @ CanSee(Stack[-1], Stack[-6])
0xfe6: Pop(0)
0xfe7: PushEmpty(bool)
0xfe8: Stack[-1] = (bool) 1
0xfe9: Push(Stack[-2])
0xfea: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xfeb: PushEmpty(float, object)
0xfec: Stack[-1] = Stack[-9]
0xfed: Call2 0xa93

0xfee: Pop(1)
0xfef: Pop(0); Push(Stack[-7] * Stack[-7]);
0xff0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xff1: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xff2: Stack[-1] = (bool) 0
0xff3: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xff4: Stack[-8] = (bool) 1
0xff5: Return(); Pop(4)

0xff6: Stack[-8] = (bool) 0
0xff7: Return(); Pop(4)

0xff8: PushEmpty()
0xff9: Stack[-2] = (int) 2
0xffa: Return(); Pop(0)

0xffb: PushEmpty()
0xffc: PushEmpty(object)
0xffd: Stack[-1] = Stack[-2]
0xffe: Call2 0x111e

0xfff: Pop(1)
0x1000: Return(); Pop(0)

0x1001: Return(); Pop(0)

0x1002: PushEmpty(bool, bool)
0x1003: Push("Received steal")
0x1004: @ Trace(Stack[-1])
0x1005: Pop(1)
0x1006: @ CanSee(Stack[-1], Stack[-3])
0x1007: Pop(0)
0x1008: Push(Stack[-1])
0x1009: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100a: PushEmpty(int, object)
0x100b: Stack[-1] = Stack[-5]
0x100c: Call2 0xf92

0x100d: Stack[-6] = Stack[-2]
0x100e: Pop(2)
0x100f: Return(); Pop(2)

0x1010: Stack[-4] = (int) 0
0x1011: Return(); Pop(2)

0x1012: PushEmpty()
0x1013: PushEmpty(object)
0x1014: Stack[-1] = Stack[-2]
0x1015: Call2 0xf9c

0x1016: Pop(1)
0x1017: Return(); Pop(0)

0x1018: PushEmpty()
0x1019: Stack[-3] = (int) 0
0x101a: Return(); Pop(0)

0x101b: PushEmpty()
0x101c: Return(); Pop(0)

0x101d: PushEmpty(bool, bool)
0x101e: @ CanSee(Stack[-1], Stack[-3])
0x101f: Pop(0)
0x1020: Stack[-4] = Stack[-1]
0x1021: Return(); Pop(2)

0x1022: PushEmpty()
0x1023: PushEmpty(object)
0x1024: Stack[-1] = Stack[-2]
0x1025: Push(-1, 3); TaskCall(7)
0x1026: Call2 0x928

0x1027: Pop(-1, 3); TaskReturn
0x1028: Pop(1)
0x1029: Return(); Pop(0)

0x102a: PushEmpty(bool, bool)
0x102b: @ CanSee(Stack[-1], Stack[-3])
0x102c: Pop(0)
0x102d: Stack[-4] = (bool) 1
0x102e: Push(Stack[-1])
0x102f: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1030: PushEmpty(float, object)
0x1031: Stack[-1] = Stack[-5]
0x1032: Call2 0xa93

0x1033: Pop(1)
0x1034: Push((int) 4000000)
0x1035: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1036: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1037: Stack[-4] = (bool) 0
0x1038: Return(); Pop(2)

0x1039: PushEmpty()
0x103a: PushEmpty(object)
0x103b: Stack[-1] = Stack[-2]
0x103c: Push(-1, 3); TaskCall(8)
0x103d: Call2 0x9ea

0x103e: Pop(-1, 3); TaskReturn
0x103f: Pop(1)
0x1040: Return(); Pop(0)

0x1041: PushEmpty()
0x1042: PushEmpty(bool, object)
0x1043: Stack[-1] = Stack[-3]
0x1044: Call2 0x102a

0x1045: Stack[-4] = Stack[-2]
0x1046: Pop(2)
0x1047: Return(); Pop(0)

0x1048: PushEmpty()
0x1049: PushEmpty(object)
0x104a: Stack[-1] = Stack[-2]
0x104b: Call2 0x1039

0x104c: Pop(1)
0x104d: Return(); Pop(0)

0x104e: PushEmpty()
0x104f: Stack[-2] = (bool) 0
0x1050: Return(); Pop(0)

0x1051: PushEmpty()
0x1052: Return(); Pop(0)

0x1053: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x1054: PushEmpty(object)
0x1055: Call2 0xc3a

0x1056: Stack[-27] = Stack[-1]
0x1057: Pop(1)
0x1058: @ CreateIntVector(Stack[-25])
0x1059: Pop(0)
0x105a: @ CreateIntVector(Stack[-24])
0x105b: Pop(0)
0x105c: @ CreateIntVector(Stack[-23])
0x105d: Pop(0)
0x105e: @@ GetSubContainerCount(Stack[-22])
0x105f: Pop(0)
0x1060: Stack[-21] = (int) 0
0x1061: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x1062: IF (Stack[-1] == 0) GOTO 0x10a9; Pop(1)

0x1063: @@ GetItemCount(Stack[-20], Stack[-21])
0x1064: Pop(0)
0x1065: Stack[-19] = (int) 0
0x1066: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x1067: IF (Stack[-1] == 0) GOTO 0x10a6; Pop(1)

0x1068: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x1069: Pop(0)
0x106a: @@ GetItemID(Stack[-17])
0x106b: Pop(0)
0x106c: Push("HasDurability")
0x106d: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x106e: Pop(1)
0x106f: Push(Stack[-16])
0x1070: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x1071: Push("durability")
0x1072: @@ HasProperty(Stack[-17], Stack[-1])
0x1073: Pop(1)
0x1074: Push(Stack[-16])
0x1075: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x1076: Push("durability")
0x1077: @@ GetProperty(Stack[-16], Stack[-1])
0x1078: Pop(1)
0x1079: PushEmpty(bool)
0x107a: Stack[-1] = (bool) 0
0x107b: Push((int) 100)
0x107c: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x107d: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x107e: PushEmpty(bool, object)
0x107f: Stack[-1] = Stack[-21]
0x1080: Call2 0x10e6

0x1081: Pop(1)
0x1082: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1083: Stack[-1] = (bool) 1
0x1084: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x1085: @@ add(Stack[-18])
0x1086: Pop(0)
0x1087: @@ add(Stack[-21])
0x1088: Pop(0)
0x1089: @@ add(Stack[-19])
0x108a: Pop(0)
0x108b: PushEmpty(int, object, int)
0x108c: Stack[-2] = Stack[-21]
0x108d: Stack[-1] = (int) 0
0x108e: Call2 0xd8b

0x108f: Stack[-17] = Stack[-3]
0x1090: Pop(3)
0x1091: Push((float)1.0)
0x1092: Push((float)2.0)
0x1093: Pop(1); Push(Stack[-1] * Stack[-17]);
0x1094: Push((float)100.0)
0x1095: Pop(2); Push(Stack[-2] / Stack[-1]);
0x1096: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1097: Pop(1); Push(Stack[-15] * Stack[-1]);
0x1098: Push((int) 100)
0x1099: Pop(1); Push(Stack[-1] - Stack[-17]);
0x109a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109b: Push((int) 300)
0x109c: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x109d: Pop(0); Push((bool) Stack[-13] == 0)
0x109e: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x109f: Stack[-13] = (int) 1
0x10a0: @@ add(Stack[-13])
0x10a1: Pop(0)
0x10a2: Stack[-18] = 0
0x10a3: Push((int) 1)
0x10a4: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x10a5: GOTO 0x1066

0x10a6: Push((int) 1)
0x10a7: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x10a8: GOTO 0x1061

0x10a9: @ CreateIntVector(Stack[-12])
0x10aa: Pop(0)
0x10ab: Push("repair.xml")
0x10ac: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x10ad: Pop(1)
0x10ae: @@ size(Stack[-11])
0x10af: Pop(0)
0x10b0: Pop(0); Push((bool) Stack[-11] == 0)
0x10b1: IF (Stack[-1] == 0) GOTO 0x10b3; Pop(1)

0x10b2: Return(); Pop(52)

0x10b3: Stack[-10] = (int) 0
0x10b4: Stack[-9] = (int) 0
0x10b5: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x10b6: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x10b7: @@ get(Stack[-8], Stack[-9])
0x10b8: Pop(0)
0x10b9: @@ get(Stack[-7], Stack[-8])
0x10ba: Pop(0)
0x10bb: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x10bc: Push((int) 1)
0x10bd: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x10be: GOTO 0x10b5

0x10bf: Push("money")
0x10c0: @@ GetProperty(Stack[-1], Stack[-7])
0x10c1: Pop(1)
0x10c2: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x10c3: Push((int) 0)
0x10c4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x10c5: IF (Stack[-1] == 0) GOTO 0x10c7; Pop(1)

0x10c6: Return(); Pop(52)

0x10c7: Push("money")
0x10c8: @@ SetProperty(Stack[-1], Stack[-7])
0x10c9: Pop(1)
0x10ca: Stack[-5] = (int) 0
0x10cb: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x10cc: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10cd: @@ get(Stack[-4], Stack[-5])
0x10ce: Pop(0)
0x10cf: @@ get(Stack[-3], Stack[-4])
0x10d0: Pop(0)
0x10d1: @@ get(Stack[-2], Stack[-4])
0x10d2: Pop(0)
0x10d3: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x10d4: Pop(0)
0x10d5: Push("durability")
0x10d6: Push((int) 100)
0x10d7: @@ SetProperty(Stack[-2], Stack[-1])
0x10d8: Pop(2)
0x10d9: Push((int) 1)
0x10da: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x10db: Pop(1)
0x10dc: Stack[-1] = 0
0x10dd: Push((int) 1)
0x10de: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10df: GOTO 0x10cb

0x10e0: Return(); Pop(52)

0x10e1: Stack[-12] = 0
0x10e2: Stack[-23] = 0
0x10e3: Stack[-24] = 0
0x10e4: Stack[-25] = 0
0x10e5: Stack[-26] = 0
0x10e6: PushEmpty(int, bool, int, int, bool, int)
0x10e7: @@ GetItemID(Stack[-3])
0x10e8: Pop(0)
0x10e9: Push("Category")
0x10ea: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x10eb: Pop(1)
0x10ec: Pop(0); Push((bool) Stack[-2] == 0)
0x10ed: IF (Stack[-1] == 0) GOTO 0x10f0; Pop(1)

0x10ee: Stack[-8] = (bool) 0
0x10ef: Return(); Pop(6)

0x10f0: Push("Category")
0x10f1: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x10f2: Pop(1)
0x10f3: Push((int) 1)
0x10f4: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x10f5: Return(); Pop(6)

0x10f6: PushEmpty()
0x10f7: PushEmpty(int, object)
0x10f8: Stack[-1] = Stack[-3]
0x10f9: Push(-2, 1); TaskCall(0)
0x10fa: Call2 0x0

0x10fb: Pop(-2, 1); TaskReturn
0x10fc: Pop(1)
0x10fd: Push((int) 100)
0x10fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ff: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1100: PushEmpty(object)
0x1101: Stack[-1] = Stack[-2]
0x1102: Call2 0x1053

0x1103: Pop(1)
0x1104: Return(); Pop(0)

0x1105: PushEmpty(string, string)
0x1106: Stack[-1] = "idle"
0x1107: Push(Stack[-3])
0x1108: IF (Stack[-1] == 0) GOTO 0x110a; Pop(1)

0x1109: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x110a: Stack[-4] = Stack[-1]
0x110b: Return(); Pop(2)

0x110c: Stack[-1] = (int) 515567
0x110d: Return(); Pop(0)

0x110e: Stack[-1] = (int) 503352
0x110f: Return(); Pop(0)

0x1110: Stack[-1] = "ui/NPC_Citizen3.png"
0x1111: Return(); Pop(0)

0x1112: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1113: Return(); Pop(0)

0x1114: Stack[-1] = (bool) 0
0x1115: Return(); Pop(0)

0x1116: Push(GlobalVars[0])
0x1117: Stack[-1] = (bool) 0
0x1118: GlobalVars[0] = Stack[-1]; Pop(1)
0x1119: PushEmpty(bool)
0x111a: Stack[-1] = (bool) 0
0x111b: Call2 0xe20

0x111c: Pop(1)
0x111d: Return(); Pop(0)

0x111e: PushEmpty(bool, bool)
0x111f: Push(GlobalVars[0])
0x1120: IF (Stack[-1] == 0) GOTO 0x112b; Pop(1)

0x1121: @ IsOverrideActive(Stack[-1])
0x1122: Pop(0)
0x1123: Pop(0); Push((bool) Stack[-1] == 0)
0x1124: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1125: PushEmpty(object)
0x1126: Stack[-1] = Stack[-4]
0x1127: Call2 0xdcb

0x1128: Pop(1)
0x1129: Return(); Pop(2)

0x112a: GOTO 0x112f

0x112b: PushEmpty(object)
0x112c: Stack[-1] = Stack[-4]
0x112d: Call2 0x10f6

0x112e: Pop(1)
0x112f: Return(); Pop(2)

0x1130: PushEmpty(int, bool, int, int, bool, int)
0x1131: Stack[-3] = (int) 0
0x1132: Push("all")
0x1133: PushEmpty(string, int)
0x1134: Stack[-1] = Stack[-6]
0x1135: Call2 0x1105

0x1136: Pop(1)
0x1137: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x1138: Pop(2)
0x1139: Pop(0); Push((bool) Stack[-2] == 0)
0x113a: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x113b: GOTO 0x113f

0x113c: Push((int) 1)
0x113d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x113e: GOTO 0x1132

0x113f: @ irand(Stack[-1], Stack[-3])
0x1140: Pop(0)
0x1141: Push("all")
0x1142: PushEmpty(string, int)
0x1143: Stack[-1] = Stack[-4]
0x1144: Call2 0x1105

0x1145: Pop(1)
0x1146: @ PlayAnimation(Stack[-2], Stack[-1])
0x1147: Pop(2)
0x1148: @ WaitForAnimEnd()
0x1149: Pop(0)
0x114a: Return(); Pop(6)

0x114b: @ StopAnimation()
0x114c: Pop(0)
0x114d: Return(); Pop(0)

0x114e: Stack[-1] = (bool) 1
0x114f: Return(); Pop(0)

0x1150: PushEmpty()
0x1151: PushEmpty(bool, object, object, float)
0x1152: Stack[-3] = Stack[-7]
0x1153: Stack[-2] = Stack[-6]
0x1154: Stack[-1] = (float) 500.0
0x1155: Call2 0xfb6

0x1156: Pop(3)
0x1157: IF (Stack[-1] == 0) GOTO 0x115e; Pop(1)

0x1158: Push("ToDie")
0x1159: Push((bool) 1)
0x115a: @ SetProperty(Stack[-2], Stack[-1])
0x115b: Pop(2)
0x115c: Stack[-4] = (bool) 1
0x115d: Return(); Pop(0)

0x115e: Stack[-4] = (bool) 0
0x115f: Return(); Pop(0)

0x1160: PushEmpty()
0x1161: PushEmpty(bool, object)
0x1162: Stack[-1] = Stack[-3]
0x1163: Call2 0xa9b

0x1164: Pop(1)
0x1165: IF (Stack[-1] == 0) GOTO 0x1171; Pop(1)

0x1166: PushEmpty(object)
0x1167: Call2 0xc2a

0x1168: Pop(0)
0x1169: Push((float)-0.1)
0x116a: Push((bool) 1)
0x116b: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116c: Pop(3)
0x116d: PushEmpty(bool)
0x116e: Stack[-1] = (bool) 0
0x116f: Call2 0xe20

0x1170: Pop(1)
0x1171: PushEmpty()
0x1172: Call2 0xe08

0x1173: Pop(0)
0x1174: Push(GlobalVars[0])
0x1175: Stack[-1] = (bool) 1
0x1176: GlobalVars[0] = Stack[-1]; Pop(1)
0x1177: Push((int) 50)
0x1178: Push((int) 40)
0x1179: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x117a: Pop(2)
0x117b: Return(); Pop(0)

