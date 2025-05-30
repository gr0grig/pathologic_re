GlobalVarCount = 2
	G_VAR_0 bool 
	G_VAR_1 bool 

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
	GetProperty
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
	money
	Money
	reputation
	SetReturnValue
	branch
	GenerateMoney: iMin > iMax
	SetItemName
	Organ
	GetItemID
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
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
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
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x81e
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x161 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x791 Vars = (object)
		EVENT_6 Op = 0x79f Vars = ()
		EVENT_22 Op = 0x818 Vars = (object, int, float, float)
		EVENT_16 Op = 0x81a Vars = (object, string)
		EVENT_41 Op = 0x81c Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x836 Vars = (object)
		EVENT_17 Op = 0x84a Vars = (object)
		EVENT_30 Op = 0x862 Vars = (object, object, bool)
		EVENT_40 Op = 0x87e Vars = (object)
		EVENT_42 Op = 0x892 Vars = (object, string)
		EVENT_26 Op = 0x8b7 Vars = (string)
		EVENT_1 Op = 0x8c5 Vars = (object)
		EVENT_3 Op = 0x8d8 Vars = (object)
		EVENT_7 Op = 0x8de Vars = (int)
		EVENT_6 Op = 0x8ea Vars = ()
		EVENT_41 Op = 0x901 Vars = (object)
		EVENT_10 Op = 0x972 Vars = (object)
		EVENT_28 Op = 0x976 Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x98f Vars = (object)
		EVENT_17 Op = 0x9a3 Vars = (object)
		EVENT_30 Op = 0x9bb Vars = (object, object, bool)
		EVENT_40 Op = 0x9d7 Vars = (object)
		EVENT_42 Op = 0x9eb Vars = (object, string)
		EVENT_26 Op = 0xa10 Vars = (string)
		EVENT_6 Op = 0xa1e Vars = ()
		EVENT_1 Op = 0xa25 Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0xac1 Vars = (object)
		EVENT_17 Op = 0xad5 Vars = (object)
		EVENT_30 Op = 0xaed Vars = (object, object, bool)
		EVENT_40 Op = 0xb09 Vars = (object)
		EVENT_42 Op = 0xb1d Vars = (object, string)
		EVENT_26 Op = 0xb42 Vars = (string)
		EVENT_41 Op = 0xb5b Vars = (object)
		EVENT_7 Op = 0xb64 Vars = (int)
		EVENT_6 Op = 0xb87 Vars = ()
		EVENT_1 Op = 0xb8e Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xbb8 Vars = ()
		EVENT_7 Op = 0xc26 Vars = (int)
		EVENT_41 Op = 0xc61 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xce1 Vars = (int)
		EVENT_41 Op = 0xd1c Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xd35 Vars = ()
		EVENT_7 Op = 0xda3 Vars = (int)
		EVENT_41 Op = 0xdde Vars = (object)

Events:
EVENT_16 Op = 0x12d9 Vars = (object, string)
EVENT_41 Op = 0x12e6 Vars = (object)
EVENT_22 Op = 0x12ec Vars = (object, int, float, float)
EVENT_43 Op = 0x12f4 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xf08

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1449

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1447

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x144b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x144d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11b1

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
0x41: Call2 0xf4c

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
0x4f: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x108e

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x14b

0x58: Pop(1)
0x59: Push((int) 543151)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 1
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x10d6

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: PushEmpty(bool, object)
0x66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67: Call2 0x10f4

0x68: Pop(1)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 0
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: Push((int) 543153)
0x6d: Push((int) 45610)
0x6e: Push((int) 45608)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: PushEmpty(bool)
0x72: Stack[-1] = (bool) 1
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 1
0x75: PushEmpty(bool)
0x76: Stack[-1] = (bool) 1
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 1
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x10fe

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x1108

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: Stack[-1] = (bool) 0
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x1112

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 0
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x111c

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[-1] = (bool) 0
0x92: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call2 0x1126

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 543169)
0x9b: Push((int) 45610)
0x9c: Push((int) 45624)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x10d6

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: Push((int) 543152)
0xa5: Push((int) -1)
0xa6: Push((int) 45607)
0xa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8: Pop(3)
0xa9: PushEmpty(bool)
0xaa: Stack[-1] = (bool) 1
0xab: PushEmpty(bool)
0xac: Stack[-1] = (bool) 1
0xad: PushEmpty(bool, object)
0xae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Call2 0x10f4

0xb0: Pop(1)
0xb1: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x10fe

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-1] = (bool) 0
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x1108

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-1] = (bool) 0
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: Push((int) 543168)
0xc1: Push((int) -1)
0xc2: Push((int) 45623)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 1
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 1
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x1112

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x111c

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 0
0xd4: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x1126

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Stack[-1] = (bool) 0
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: Push((int) 543167)
0xdd: Push((int) -1)
0xde: Push((int) 45622)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 543154)
0xe2: Push((int) -1)
0xe3: Push((int) 45609)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: GOTO 0x12d

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0x14b

0xea: Pop(1)
0xeb: Push((int) 537052)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 537053)
0xf1: Push((int) 38893)
0xf2: Push((int) 38892)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0x10e0

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Push((int) 537062)
0xfb: Push((int) 38902)
0xfc: Push((int) 38901)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: PushEmpty(bool)
0x100: Stack[-1] = (bool) 0
0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0x1076

0x104: Pop(1)
0x105: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call2 0x10ea

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Stack[-1] = (bool) 1
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: Push((int) 537065)
0x10e: Push((int) 38905)
0x10f: Push((int) 38904)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 537237)
0x113: Push((int) -1)
0x114: Push((int) 39080)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: PushEmpty(bool)
0x118: Stack[-1] = (bool) 1
0x119: PushEmpty(bool, object)
0x11a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Call2 0x1082

0x11c: Pop(1)
0x11d: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0x1076

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Stack[-1] = (bool) 0
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: Push((int) 537238)
0x126: Push((int) -1)
0x127: Push((int) 39081)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: GOTO 0x12d

0x12b: Return(); Pop(0)

0x12c: GOTO 0x4e

0x12d: PushEmpty(bool)
0x12e: Call2 0x144f

0x12f: Pop(0)
0x130: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x131: @ lshWaitForAnimEnd()
0x132: Pop(0)
0x133: Push( Stack[3 + Tasks[-1].StackPointer] )
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: GOTO 0x13b

0x136: PushEmpty(string)
0x137: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x138: Call2 0xf5d

0x139: Pop(1)
0x13a: GOTO 0x131

0x13b: GOTO 0x14a

0x13c: Push("all")
0x13d: Push("idle")
0x13e: @ PlayAnimation(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: @ WaitForAnimEnd()
0x141: Pop(0)
0x142: Push( Stack[3 + Tasks[-1].StackPointer] )
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: GOTO 0x14a

0x145: Push("all")
0x146: Push("idle")
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: GOTO 0x140

0x14a: Return(); Pop(0)

0x14b: PushEmpty()
0x14c: PushEmpty(bool)
0x14d: Call2 0x144f

0x14e: Pop(0)
0x14f: Pop(1); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Return(); Pop(0)

0x152: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Return(); Pop(0)

0x155: PushEmpty(string, bool)
0x156: Stack[-2] = Stack[-3]
0x157: Push("")
0x158: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-1] = (bool) 0
0x15b: GOTO 0x15d

0x15c: Stack[-1] = (bool) 1
0x15d: Call2 0xf6d

0x15e: Pop(2)
0x15f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Push((int) 1)
0x163: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x164: PushEmpty()
0x165: Call2 0xf87

0x166: Pop(0)
0x167: Push((int) 45611)
0x168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(object, object)
0x16b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16d: Call2 0x1058

0x16e: Pop(2)
0x16f: Push((int) 45612)
0x170: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: PushEmpty(object, object)
0x173: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x174: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x175: Call2 0x105d

0x176: Pop(2)
0x177: Push((int) 45613)
0x178: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: PushEmpty(object, object)
0x17b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17d: Call2 0x1062

0x17e: Pop(2)
0x17f: Push((int) 45614)
0x180: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object, object)
0x183: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x184: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x185: Call2 0x1067

0x186: Pop(2)
0x187: Push((int) 45615)
0x188: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: PushEmpty(object, object)
0x18b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18d: Call2 0x106c

0x18e: Pop(2)
0x18f: Push((int) 45616)
0x190: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty(object, object)
0x193: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x194: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x195: Call2 0x1071

0x196: Pop(2)
0x197: Push((int) 38894)
0x198: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(object, object)
0x19b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19d: Call2 0x1058

0x19e: Pop(2)
0x19f: Push((int) 38895)
0x1a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: PushEmpty(object, object)
0x1a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a5: Call2 0x105d

0x1a6: Pop(2)
0x1a7: Push((int) 38896)
0x1a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(object, object)
0x1ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ad: Call2 0x1062

0x1ae: Pop(2)
0x1af: Push((int) 38897)
0x1b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0x1067

0x1b6: Pop(2)
0x1b7: Push((int) 38898)
0x1b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(object, object)
0x1bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bd: Call2 0x106c

0x1be: Pop(2)
0x1bf: Push((int) 38899)
0x1c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty(object, object)
0x1c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c5: Call2 0x1071

0x1c6: Pop(2)
0x1c7: Push((int) 45606)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call2 0x108e

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0x14b

0x1d2: Pop(1)
0x1d3: Push((int) 543151)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 1
0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Call2 0x10d6

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1df: PushEmpty(bool, object)
0x1e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Call2 0x10f4

0x1e2: Pop(1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Stack[-1] = (bool) 0
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: Push((int) 543153)
0x1e7: Push((int) 45610)
0x1e8: Push((int) 45608)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 1
0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 1
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 1
0x1f1: PushEmpty(bool)
0x1f2: Stack[-1] = (bool) 1
0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0x10fe

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0x1108

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 0
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0x1112

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 0
0x205: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call2 0x111c

0x209: Pop(1)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = (bool) 0
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0x1126

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 0
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push((int) 543169)
0x215: Push((int) 45610)
0x216: Push((int) 45624)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call2 0x10d6

0x21c: Pop(1)
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: Push((int) 543152)
0x21f: Push((int) -1)
0x220: Push((int) 45607)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 1
0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 1
0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0x10f4

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Call2 0x10fe

0x22f: Pop(1)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = (bool) 0
0x232: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x235: Call2 0x1108

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Stack[-1] = (bool) 0
0x239: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23a: Push((int) 543168)
0x23b: Push((int) -1)
0x23c: Push((int) 45623)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: PushEmpty(bool)
0x240: Stack[-1] = (bool) 1
0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 1
0x243: PushEmpty(bool, object)
0x244: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x245: Call2 0x1112

0x246: Pop(1)
0x247: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0x111c

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[-1] = (bool) 0
0x24e: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24f: PushEmpty(bool, object)
0x250: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x251: Call2 0x1126

0x252: Pop(1)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 0
0x255: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x256: Push((int) 543167)
0x257: Push((int) -1)
0x258: Push((int) 45622)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 543154)
0x25c: Push((int) -1)
0x25d: Push((int) 45609)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral"
0x263: Call2 0x14b

0x264: Pop(1)
0x265: Push((int) 537052)
0x266: @@ SetMessage(Stack[-1])
0x267: Pop(1)
0x268: @@ ClearReplies()
0x269: Pop(0)
0x26a: Push((int) 537053)
0x26b: Push((int) 38893)
0x26c: Push((int) 38892)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x10e0

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 537062)
0x275: Push((int) 38902)
0x276: Push((int) 38901)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: PushEmpty(bool)
0x27a: Stack[-1] = (bool) 0
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call2 0x1076

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x282: Call2 0x10ea

0x283: Pop(1)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: Stack[-1] = (bool) 1
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: Push((int) 537065)
0x288: Push((int) 38905)
0x289: Push((int) 38904)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Push((int) 537237)
0x28d: Push((int) -1)
0x28e: Push((int) 39080)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 1
0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x295: Call2 0x1082

0x296: Pop(1)
0x297: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Call2 0x1076

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: Stack[-1] = (bool) 0
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: Push((int) 537238)
0x2a0: Push((int) -1)
0x2a1: Push((int) 39081)
0x2a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(3)
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 39070)
0x2a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a8: Push((int) 39072)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call2 0x14b

0x2ae: Pop(1)
0x2af: Push((int) 537229)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 537230)
0x2b5: Push((int) 39074)
0x2b6: Push((int) 39073)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Push((int) 537234)
0x2ba: Push((int) -1)
0x2bb: Push((int) 39077)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: Push((int) 39074)
0x2c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c2: PushEmpty(string)
0x2c3: Stack[-1] = "Neutral"
0x2c4: Call2 0x14b

0x2c5: Pop(1)
0x2c6: Push((int) 537231)
0x2c7: @@ SetMessage(Stack[-1])
0x2c8: Pop(1)
0x2c9: @@ ClearReplies()
0x2ca: Pop(0)
0x2cb: Push((int) 537232)
0x2cc: Push((int) -1)
0x2cd: Push((int) 39075)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Push((int) 537233)
0x2d1: Push((int) -1)
0x2d2: Push((int) 39076)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 39063)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d9: Push((int) 39065)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral"
0x2de: Call2 0x14b

0x2df: Pop(1)
0x2e0: Push((int) 537222)
0x2e1: @@ SetMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ ClearReplies()
0x2e4: Pop(0)
0x2e5: Push((int) 537223)
0x2e6: Push((int) -1)
0x2e7: Push((int) 39066)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Push((int) 537224)
0x2eb: Push((int) -1)
0x2ec: Push((int) 39067)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 39053)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f3: Push((int) 39055)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x14b

0x2f9: Pop(1)
0x2fa: Push((int) 537212)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 537213)
0x300: Push((int) 39057)
0x301: Push((int) 39056)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: PushEmpty(bool, object)
0x305: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x306: Call2 0x1076

0x307: Pop(1)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: Push((int) 537217)
0x30a: Push((int) -1)
0x30b: Push((int) 39060)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: Push((int) 39057)
0x310: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x312: PushEmpty(string)
0x313: Stack[-1] = "Neutral"
0x314: Call2 0x14b

0x315: Pop(1)
0x316: Push((int) 537214)
0x317: @@ SetMessage(Stack[-1])
0x318: Pop(1)
0x319: @@ ClearReplies()
0x31a: Pop(0)
0x31b: Push((int) 537215)
0x31c: Push((int) -1)
0x31d: Push((int) 39058)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Push((int) 537216)
0x321: Push((int) -1)
0x322: Push((int) 39059)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 39043)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x329: Push((int) 39045)
0x32a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "Neutral"
0x32e: Call2 0x14b

0x32f: Pop(1)
0x330: Push((int) 537202)
0x331: @@ SetMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ ClearReplies()
0x334: Pop(0)
0x335: Push((int) 537203)
0x336: Push((int) 39047)
0x337: Push((int) 39046)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Push((int) 537207)
0x33b: Push((int) -1)
0x33c: Push((int) 39050)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 39047)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call2 0x14b

0x346: Pop(1)
0x347: Push((int) 537204)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 537205)
0x34d: Push((int) -1)
0x34e: Push((int) 39048)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Push((int) 537206)
0x352: Push((int) -1)
0x353: Push((int) 39049)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Push((int) 39031)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x35a: Push((int) 39037)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral"
0x35f: Call2 0x14b

0x360: Pop(1)
0x361: Push((int) 537194)
0x362: @@ SetMessage(Stack[-1])
0x363: Pop(1)
0x364: @@ ClearReplies()
0x365: Pop(0)
0x366: Push((int) 537195)
0x367: Push((int) 39039)
0x368: Push((int) 39038)
0x369: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: Push((int) 537198)
0x36c: Push((int) -1)
0x36d: Push((int) 39041)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 39039)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral"
0x376: Call2 0x14b

0x377: Pop(1)
0x378: Push((int) 537196)
0x379: @@ SetMessage(Stack[-1])
0x37a: Pop(1)
0x37b: @@ ClearReplies()
0x37c: Pop(0)
0x37d: Push((int) 537197)
0x37e: Push((int) -1)
0x37f: Push((int) 39040)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 39033)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral"
0x388: Call2 0x14b

0x389: Pop(1)
0x38a: Push((int) 537190)
0x38b: @@ SetMessage(Stack[-1])
0x38c: Pop(1)
0x38d: @@ ClearReplies()
0x38e: Pop(0)
0x38f: Push((int) 537191)
0x390: Push((int) -1)
0x391: Push((int) 39034)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Push((int) 537192)
0x395: Push((int) -1)
0x396: Push((int) 39035)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 39019)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39d: Push((int) 39021)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "Neutral"
0x3a2: Call2 0x14b

0x3a3: Pop(1)
0x3a4: Push((int) 537178)
0x3a5: @@ SetMessage(Stack[-1])
0x3a6: Pop(1)
0x3a7: @@ ClearReplies()
0x3a8: Pop(0)
0x3a9: Push((int) 537179)
0x3aa: Push((int) 39023)
0x3ab: Push((int) 39022)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Push((int) 537185)
0x3af: Push((int) -1)
0x3b0: Push((int) 39028)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 39023)
0x3b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3b7: PushEmpty(string)
0x3b8: Stack[-1] = "Neutral"
0x3b9: Call2 0x14b

0x3ba: Pop(1)
0x3bb: Push((int) 537180)
0x3bc: @@ SetMessage(Stack[-1])
0x3bd: Pop(1)
0x3be: @@ ClearReplies()
0x3bf: Pop(0)
0x3c0: Push((int) 537181)
0x3c1: Push((int) 39025)
0x3c2: Push((int) 39024)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: Push((int) 537184)
0x3c6: Push((int) -1)
0x3c7: Push((int) 39027)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 39025)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral"
0x3d0: Call2 0x14b

0x3d1: Pop(1)
0x3d2: Push((int) 537182)
0x3d3: @@ SetMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ ClearReplies()
0x3d6: Pop(0)
0x3d7: Push((int) 537183)
0x3d8: Push((int) -1)
0x3d9: Push((int) 39026)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Return(); Pop(0)

0x3dd: Push((int) 38999)
0x3de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3e0: Push((int) 39012)
0x3e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3e3: PushEmpty(string)
0x3e4: Stack[-1] = "Neutral"
0x3e5: Call2 0x14b

0x3e6: Pop(1)
0x3e7: Push((int) 537171)
0x3e8: @@ SetMessage(Stack[-1])
0x3e9: Pop(1)
0x3ea: @@ ClearReplies()
0x3eb: Pop(0)
0x3ec: Push((int) 537172)
0x3ed: Push((int) 39001)
0x3ee: Push((int) 39013)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: Push((int) 537173)
0x3f2: Push((int) 39001)
0x3f3: Push((int) 39015)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Return(); Pop(0)

0x3f7: Push((int) 39001)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Neutral"
0x3fc: Call2 0x14b

0x3fd: Pop(1)
0x3fe: Push((int) 537160)
0x3ff: @@ SetMessage(Stack[-1])
0x400: Pop(1)
0x401: @@ ClearReplies()
0x402: Pop(0)
0x403: Push((int) 537161)
0x404: Push((int) 39003)
0x405: Push((int) 39002)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: PushEmpty(bool, object)
0x409: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Call2 0x1076

0x40b: Pop(1)
0x40c: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40d: Push((int) 537165)
0x40e: Push((int) 39007)
0x40f: Push((int) 39006)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Return(); Pop(0)

0x413: Push((int) 39007)
0x414: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x416: PushEmpty(string)
0x417: Stack[-1] = "Neutral"
0x418: Call2 0x14b

0x419: Pop(1)
0x41a: Push((int) 537166)
0x41b: @@ SetMessage(Stack[-1])
0x41c: Pop(1)
0x41d: @@ ClearReplies()
0x41e: Pop(0)
0x41f: Push((int) 537167)
0x420: Push((int) 39009)
0x421: Push((int) 39008)
0x422: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x423: Pop(3)
0x424: Return(); Pop(0)

0x425: Push((int) 39009)
0x426: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x428: PushEmpty(string)
0x429: Stack[-1] = "Neutral"
0x42a: Call2 0x14b

0x42b: Pop(1)
0x42c: Push((int) 537168)
0x42d: @@ SetMessage(Stack[-1])
0x42e: Pop(1)
0x42f: @@ ClearReplies()
0x430: Pop(0)
0x431: Push((int) 537169)
0x432: Push((int) -1)
0x433: Push((int) 39010)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: Return(); Pop(0)

0x437: Push((int) 39003)
0x438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x14b

0x43d: Pop(1)
0x43e: Push((int) 537162)
0x43f: @@ SetMessage(Stack[-1])
0x440: Pop(1)
0x441: @@ ClearReplies()
0x442: Pop(0)
0x443: Push((int) 537163)
0x444: Push((int) -1)
0x445: Push((int) 39004)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44a: Call2 0x1076

0x44b: Pop(1)
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: Push((int) 537164)
0x44e: Push((int) -1)
0x44f: Push((int) 39005)
0x450: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x451: Pop(3)
0x452: Return(); Pop(0)

0x453: Push((int) 38982)
0x454: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x456: Push((int) 38990)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Neutral"
0x45b: Call2 0x14b

0x45c: Pop(1)
0x45d: Push((int) 537149)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 537150)
0x463: Push((int) 38992)
0x464: Push((int) 38991)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Return(); Pop(0)

0x468: Push((int) 38992)
0x469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral"
0x46d: Call2 0x14b

0x46e: Pop(1)
0x46f: Push((int) 537151)
0x470: @@ SetMessage(Stack[-1])
0x471: Pop(1)
0x472: @@ ClearReplies()
0x473: Pop(0)
0x474: Push((int) 537152)
0x475: Push((int) 38994)
0x476: Push((int) 38993)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Return(); Pop(0)

0x47a: Push((int) 38994)
0x47b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x47d: PushEmpty(string)
0x47e: Stack[-1] = "Neutral"
0x47f: Call2 0x14b

0x480: Pop(1)
0x481: Push((int) 537153)
0x482: @@ SetMessage(Stack[-1])
0x483: Pop(1)
0x484: @@ ClearReplies()
0x485: Pop(0)
0x486: PushEmpty(bool, object)
0x487: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x488: Call2 0x1076

0x489: Pop(1)
0x48a: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48b: Push((int) 537154)
0x48c: Push((int) -1)
0x48d: Push((int) 38995)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: Push((int) 537155)
0x491: Push((int) -1)
0x492: Push((int) 38996)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Return(); Pop(0)

0x496: Push((int) 38984)
0x497: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x499: PushEmpty(string)
0x49a: Stack[-1] = "Neutral"
0x49b: Call2 0x14b

0x49c: Pop(1)
0x49d: Push((int) 537143)
0x49e: @@ SetMessage(Stack[-1])
0x49f: Pop(1)
0x4a0: @@ ClearReplies()
0x4a1: Pop(0)
0x4a2: Push((int) 537144)
0x4a3: Push((int) 38986)
0x4a4: Push((int) 38985)
0x4a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(3)
0x4a7: Return(); Pop(0)

0x4a8: Push((int) 38986)
0x4a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = "Neutral"
0x4ad: Call2 0x14b

0x4ae: Pop(1)
0x4af: Push((int) 537145)
0x4b0: @@ SetMessage(Stack[-1])
0x4b1: Pop(1)
0x4b2: @@ ClearReplies()
0x4b3: Pop(0)
0x4b4: Push((int) 537146)
0x4b5: Push((int) -1)
0x4b6: Push((int) 38987)
0x4b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b8: Pop(3)
0x4b9: Push((int) 537147)
0x4ba: Push((int) -1)
0x4bb: Push((int) 38988)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Return(); Pop(0)

0x4bf: Push((int) 38966)
0x4c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c2: Push((int) 38972)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral"
0x4c7: Call2 0x14b

0x4c8: Pop(1)
0x4c9: Push((int) 537131)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 537132)
0x4cf: Push((int) 38974)
0x4d0: Push((int) 38973)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 537136)
0x4d4: Push((int) 38978)
0x4d5: Push((int) 38977)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 38978)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Neutral"
0x4de: Call2 0x14b

0x4df: Pop(1)
0x4e0: Push((int) 537137)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 537138)
0x4e6: Push((int) -1)
0x4e7: Push((int) 38979)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Return(); Pop(0)

0x4eb: Push((int) 38974)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Neutral"
0x4f0: Call2 0x14b

0x4f1: Pop(1)
0x4f2: Push((int) 537133)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 537134)
0x4f8: Push((int) -1)
0x4f9: Push((int) 38975)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 537135)
0x4fd: Push((int) -1)
0x4fe: Push((int) 38976)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 38968)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Neutral"
0x507: Call2 0x14b

0x508: Pop(1)
0x509: Push((int) 537127)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 537128)
0x50f: Push((int) -1)
0x510: Push((int) 38969)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Push((int) 537129)
0x514: Push((int) -1)
0x515: Push((int) 38970)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 38945)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51c: Push((int) 38947)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Neutral"
0x521: Call2 0x14b

0x522: Pop(1)
0x523: Push((int) 537107)
0x524: @@ SetMessage(Stack[-1])
0x525: Pop(1)
0x526: @@ ClearReplies()
0x527: Pop(0)
0x528: Push((int) 537108)
0x529: Push((int) 38949)
0x52a: Push((int) 38948)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: PushEmpty(bool, object)
0x52e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52f: Call2 0x1076

0x530: Pop(1)
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: Push((int) 537116)
0x533: Push((int) 38958)
0x534: Push((int) 38957)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 38958)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x14b

0x53e: Pop(1)
0x53f: Push((int) 537117)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 537118)
0x545: Push((int) 38960)
0x546: Push((int) 38959)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 537122)
0x54a: Push((int) -1)
0x54b: Push((int) 38963)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 38960)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x14b

0x555: Pop(1)
0x556: Push((int) 537119)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 537120)
0x55c: Push((int) -1)
0x55d: Push((int) 38961)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 537121)
0x561: Push((int) -1)
0x562: Push((int) 38962)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 38949)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x14b

0x56c: Pop(1)
0x56d: Push((int) 537109)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 537110)
0x573: Push((int) 38951)
0x574: Push((int) 38950)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Push((int) 537115)
0x578: Push((int) 38951)
0x579: Push((int) 38955)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 38951)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Neutral"
0x582: Call2 0x14b

0x583: Pop(1)
0x584: Push((int) 537111)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: PushEmpty(bool, object)
0x58a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58b: Call2 0x1076

0x58c: Pop(1)
0x58d: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58e: Push((int) 537112)
0x58f: Push((int) -1)
0x590: Push((int) 38952)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Push((int) 537113)
0x594: Push((int) -1)
0x595: Push((int) 38953)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: Push((int) 537114)
0x599: Push((int) -1)
0x59a: Push((int) 38954)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: Return(); Pop(0)

0x59e: Push((int) 38929)
0x59f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a1: Push((int) 38940)
0x5a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5a4: PushEmpty(string)
0x5a5: Stack[-1] = "Neutral"
0x5a6: Call2 0x14b

0x5a7: Pop(1)
0x5a8: Push((int) 537101)
0x5a9: @@ SetMessage(Stack[-1])
0x5aa: Pop(1)
0x5ab: @@ ClearReplies()
0x5ac: Pop(0)
0x5ad: Push((int) 537102)
0x5ae: Push((int) 38933)
0x5af: Push((int) 38941)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: Return(); Pop(0)

0x5b3: Push((int) 38931)
0x5b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5b6: PushEmpty(string)
0x5b7: Stack[-1] = "Neutral"
0x5b8: Call2 0x14b

0x5b9: Pop(1)
0x5ba: Push((int) 537092)
0x5bb: @@ SetMessage(Stack[-1])
0x5bc: Pop(1)
0x5bd: @@ ClearReplies()
0x5be: Pop(0)
0x5bf: Push((int) 537093)
0x5c0: Push((int) 38933)
0x5c1: Push((int) 38932)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Return(); Pop(0)

0x5c5: Push((int) 38933)
0x5c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "Neutral"
0x5ca: Call2 0x14b

0x5cb: Pop(1)
0x5cc: Push((int) 537094)
0x5cd: @@ SetMessage(Stack[-1])
0x5ce: Pop(1)
0x5cf: @@ ClearReplies()
0x5d0: Pop(0)
0x5d1: Push((int) 537095)
0x5d2: Push((int) 38935)
0x5d3: Push((int) 38934)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: Push((int) 537099)
0x5d7: Push((int) -1)
0x5d8: Push((int) 38938)
0x5d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: Return(); Pop(0)

0x5dc: Push((int) 38935)
0x5dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5df: PushEmpty(string)
0x5e0: Stack[-1] = "Neutral"
0x5e1: Call2 0x14b

0x5e2: Pop(1)
0x5e3: Push((int) 537096)
0x5e4: @@ SetMessage(Stack[-1])
0x5e5: Pop(1)
0x5e6: @@ ClearReplies()
0x5e7: Pop(0)
0x5e8: Push((int) 537097)
0x5e9: Push((int) -1)
0x5ea: Push((int) 38936)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Push((int) 537098)
0x5ee: Push((int) -1)
0x5ef: Push((int) 38937)
0x5f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f1: Pop(3)
0x5f2: Return(); Pop(0)

0x5f3: Push((int) 38905)
0x5f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = "Neutral"
0x5f8: Call2 0x14b

0x5f9: Pop(1)
0x5fa: Push((int) 537066)
0x5fb: @@ SetMessage(Stack[-1])
0x5fc: Pop(1)
0x5fd: @@ ClearReplies()
0x5fe: Pop(0)
0x5ff: Push((int) 537067)
0x600: Push((int) 38907)
0x601: Push((int) 38906)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Push((int) 537085)
0x605: Push((int) 38925)
0x606: Push((int) 38924)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Return(); Pop(0)

0x60a: Push((int) 38925)
0x60b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x60d: PushEmpty(string)
0x60e: Stack[-1] = "Neutral"
0x60f: Call2 0x14b

0x610: Pop(1)
0x611: Push((int) 537086)
0x612: @@ SetMessage(Stack[-1])
0x613: Pop(1)
0x614: @@ ClearReplies()
0x615: Pop(0)
0x616: Push((int) 537087)
0x617: Push((int) -1)
0x618: Push((int) 38926)
0x619: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61a: Pop(3)
0x61b: Push((int) 537088)
0x61c: Push((int) -1)
0x61d: Push((int) 38927)
0x61e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61f: Pop(3)
0x620: Return(); Pop(0)

0x621: Push((int) 38907)
0x622: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x624: PushEmpty(string)
0x625: Stack[-1] = "Neutral"
0x626: Call2 0x14b

0x627: Pop(1)
0x628: Push((int) 537068)
0x629: @@ SetMessage(Stack[-1])
0x62a: Pop(1)
0x62b: @@ ClearReplies()
0x62c: Pop(0)
0x62d: Push((int) 537069)
0x62e: Push((int) 38909)
0x62f: Push((int) 38908)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Push((int) 537080)
0x633: Push((int) 38920)
0x634: Push((int) 38919)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Return(); Pop(0)

0x638: Push((int) 38920)
0x639: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = "Neutral"
0x63d: Call2 0x14b

0x63e: Pop(1)
0x63f: Push((int) 537081)
0x640: @@ SetMessage(Stack[-1])
0x641: Pop(1)
0x642: @@ ClearReplies()
0x643: Pop(0)
0x644: Push((int) 537082)
0x645: Push((int) 38922)
0x646: Push((int) 38921)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 38922)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Neutral"
0x64f: Call2 0x14b

0x650: Pop(1)
0x651: Push((int) 537083)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 537084)
0x657: Push((int) -1)
0x658: Push((int) 38923)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Push((int) 38909)
0x65d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x65f: PushEmpty(string)
0x660: Stack[-1] = "Neutral"
0x661: Call2 0x14b

0x662: Pop(1)
0x663: Push((int) 537070)
0x664: @@ SetMessage(Stack[-1])
0x665: Pop(1)
0x666: @@ ClearReplies()
0x667: Pop(0)
0x668: Push((int) 537071)
0x669: Push((int) 38911)
0x66a: Push((int) 38910)
0x66b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66c: Pop(3)
0x66d: Push((int) 537077)
0x66e: Push((int) 38917)
0x66f: Push((int) 38916)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 38917)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Neutral"
0x678: Call2 0x14b

0x679: Pop(1)
0x67a: Push((int) 537078)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 537079)
0x680: Push((int) -1)
0x681: Push((int) 38918)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Return(); Pop(0)

0x685: Push((int) 38911)
0x686: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x688: PushEmpty(string)
0x689: Stack[-1] = "Neutral"
0x68a: Call2 0x14b

0x68b: Pop(1)
0x68c: Push((int) 537072)
0x68d: @@ SetMessage(Stack[-1])
0x68e: Pop(1)
0x68f: @@ ClearReplies()
0x690: Pop(0)
0x691: Push((int) 537073)
0x692: Push((int) 38913)
0x693: Push((int) 38912)
0x694: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x695: Pop(3)
0x696: Push((int) 537076)
0x697: Push((int) -1)
0x698: Push((int) 38915)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Return(); Pop(0)

0x69c: Push((int) 38913)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x69f: PushEmpty(string)
0x6a0: Stack[-1] = "Neutral"
0x6a1: Call2 0x14b

0x6a2: Pop(1)
0x6a3: Push((int) 537074)
0x6a4: @@ SetMessage(Stack[-1])
0x6a5: Pop(1)
0x6a6: @@ ClearReplies()
0x6a7: Pop(0)
0x6a8: Push((int) 537075)
0x6a9: Push((int) -1)
0x6aa: Push((int) 38914)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Return(); Pop(0)

0x6ae: Push((int) 38902)
0x6af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6b1: PushEmpty(string)
0x6b2: Stack[-1] = "Neutral"
0x6b3: Call2 0x14b

0x6b4: Pop(1)
0x6b5: Push((int) 537063)
0x6b6: @@ SetMessage(Stack[-1])
0x6b7: Pop(1)
0x6b8: @@ ClearReplies()
0x6b9: Pop(0)
0x6ba: Push((int) 537064)
0x6bb: Push((int) -1)
0x6bc: Push((int) 38903)
0x6bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6be: Pop(3)
0x6bf: Return(); Pop(0)

0x6c0: Push((int) 38893)
0x6c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c2: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x6c3: PushEmpty(string)
0x6c4: Stack[-1] = "Neutral"
0x6c5: Call2 0x14b

0x6c6: Pop(1)
0x6c7: Push((int) 537054)
0x6c8: @@ SetMessage(Stack[-1])
0x6c9: Pop(1)
0x6ca: @@ ClearReplies()
0x6cb: Pop(0)
0x6cc: PushEmpty(bool, object)
0x6cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ce: Call2 0x109a

0x6cf: Pop(1)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d1: Push((int) 537055)
0x6d2: Push((int) -1)
0x6d3: Push((int) 38894)
0x6d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(3)
0x6d6: PushEmpty(bool, object)
0x6d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d8: Call2 0x10a4

0x6d9: Pop(1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6db: Push((int) 537056)
0x6dc: Push((int) -1)
0x6dd: Push((int) 38895)
0x6de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: PushEmpty(bool, object)
0x6e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e2: Call2 0x10ae

0x6e3: Pop(1)
0x6e4: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e5: Push((int) 537057)
0x6e6: Push((int) -1)
0x6e7: Push((int) 38896)
0x6e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e9: Pop(3)
0x6ea: PushEmpty(bool, object)
0x6eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ec: Call2 0x10b8

0x6ed: Pop(1)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6ef: Push((int) 537058)
0x6f0: Push((int) -1)
0x6f1: Push((int) 38897)
0x6f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(3)
0x6f4: PushEmpty(bool, object)
0x6f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f6: Call2 0x10c2

0x6f7: Pop(1)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f9: Push((int) 537059)
0x6fa: Push((int) -1)
0x6fb: Push((int) 38898)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: PushEmpty(bool, object)
0x6ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x700: Call2 0x10cc

0x701: Pop(1)
0x702: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x703: Push((int) 537060)
0x704: Push((int) -1)
0x705: Push((int) 38899)
0x706: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: Push((int) 537061)
0x709: Push((int) -1)
0x70a: Push((int) 38900)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Return(); Pop(0)

0x70e: Push((int) 45610)
0x70f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x711: PushEmpty(string)
0x712: Stack[-1] = "Neutral"
0x713: Call2 0x14b

0x714: Pop(1)
0x715: Push((int) 543155)
0x716: @@ SetMessage(Stack[-1])
0x717: Pop(1)
0x718: @@ ClearReplies()
0x719: Pop(0)
0x71a: PushEmpty(bool, object)
0x71b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71c: Call2 0x109a

0x71d: Pop(1)
0x71e: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x71f: Push((int) 543156)
0x720: Push((int) -1)
0x721: Push((int) 45611)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: PushEmpty(bool, object)
0x725: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x726: Call2 0x10a4

0x727: Pop(1)
0x728: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x729: Push((int) 543157)
0x72a: Push((int) -1)
0x72b: Push((int) 45612)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: PushEmpty(bool, object)
0x72f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x730: Call2 0x10ae

0x731: Pop(1)
0x732: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x733: Push((int) 543158)
0x734: Push((int) -1)
0x735: Push((int) 45613)
0x736: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(3)
0x738: PushEmpty(bool, object)
0x739: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Call2 0x10b8

0x73b: Pop(1)
0x73c: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73d: Push((int) 543159)
0x73e: Push((int) -1)
0x73f: Push((int) 45614)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: PushEmpty(bool, object)
0x743: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x744: Call2 0x10c2

0x745: Pop(1)
0x746: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x747: Push((int) 543160)
0x748: Push((int) -1)
0x749: Push((int) 45615)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Call2 0x10cc

0x74f: Pop(1)
0x750: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x751: Push((int) 543161)
0x752: Push((int) -1)
0x753: Push((int) 45616)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: PushEmpty(bool, object)
0x757: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x758: Call2 0x10d6

0x759: Pop(1)
0x75a: Pop(1); Push((bool) Stack[-1] == 0)
0x75b: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75c: Push((int) 543162)
0x75d: Push((int) -1)
0x75e: Push((int) 45617)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: PushEmpty(bool, object)
0x762: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x763: Call2 0x10d6

0x764: Pop(1)
0x765: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x766: Push((int) 543170)
0x767: Push((int) -1)
0x768: Push((int) 45625)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Return(); Pop(0)

0x76c: Push((int) 45633)
0x76d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76f: Push((int) 45628)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x772: Push((int) 45619)
0x773: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x775: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x776: PushEmpty(bool)
0x777: Call2 0x144f

0x778: Pop(0)
0x779: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77a: @ lshStopAnimation()
0x77b: Pop(0)
0x77c: GOTO 0x77f

0x77d: @ StopAnimation()
0x77e: Pop(0)
0x77f: Return(); Pop(0)

0x780: GOTO 0x162

0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: EventDisable(0)
0x784: PushEmpty(object)
0x785: Stack[-1] = Stack[-2]
0x786: Call2 0x7a3

0x787: Pop(1)
0x788: PushEmpty(object)
0x789: Stack[-1] = Stack[-2]
0x78a: Call2 0x14d6

0x78b: Pop(1)
0x78c: EventEnable(0)
0x78d: @ Hold()
0x78e: Pop(0)
0x78f: GOTO 0x78d

0x790: Return(); Pop(0)

0x791: PushEmpty(int, int)
0x792: PushEmpty(int, object)
0x793: Stack[-1] = Stack[-5]
0x794: Call2 0x1417

0x795: Stack[-3] = Stack[-2]
0x796: Pop(2)
0x797: Push((int) 0)
0x798: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79a: PushEmpty(object)
0x79b: Stack[-1] = Stack[-4]
0x79c: Call2 0x141a

0x79d: Pop(1)
0x79e: Return(); Pop(2)

0x79f: PushEmpty()
0x7a0: Call2 0x1420

0x7a1: Pop(0)
0x7a2: Return(); Pop(0)

0x7a3: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x7a4: Pop(0); Push((bool) Stack[-21] == 0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "fdie"
0x7a8: Call2 0x7fe

0x7a9: Pop(1)
0x7aa: GOTO 0x7fd

0x7ab: @@ GetPosition(Stack[-10])
0x7ac: Pop(0)
0x7ad: @ GetPosition(Stack[-9])
0x7ae: Pop(0)
0x7af: @ GetDirection(Stack[-8])
0x7b0: Pop(0)
0x7b1: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x7b2: Push(CvectorIndex(Stack[-7], 0))
0x7b3: Push(CvectorIndex(Stack[-9], 0))
0x7b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b5: Push(CvectorIndex(Stack[-8], 2))
0x7b6: Push(CvectorIndex(Stack[-10], 2))
0x7b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b9: Push((int) 0)
0x7ba: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bc: Stack[-6] = "fdie"
0x7bd: GOTO 0x7bf

0x7be: Stack[-6] = "bdie"
0x7bf: @ RemoveRTEnvelope()
0x7c0: Pop(0)
0x7c1: @ SetDeathState()
0x7c2: Pop(0)
0x7c3: @ Stop()
0x7c4: Pop(0)
0x7c5: @ StopAsync()
0x7c6: Pop(0)
0x7c7: Stack[-5] = Stack[-21]
0x7c8: Push("GetScriptProperty")
0x7c9: Push((int) 2)
0x7ca: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7cc: Push("Owner")
0x7cd: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x7ce: Pop(1)
0x7cf: Push(Stack[-4])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d1: Push("Owner")
0x7d2: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x7d3: Pop(1)
0x7d4: Pop(0); Push((bool) Stack[-5] == 0)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d6: Stack[-5] = Stack[-21]
0x7d7: Push("@GetEyesHeight")
0x7d8: Push((int) 1)
0x7d9: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x7da: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7db: @@ GetEyesHeight(Stack[-2])
0x7dc: Pop(0)
0x7dd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7de: Push(CvectorIndex(Stack[-1], 1))
0x7df: Stack[-1] = Stack[-3]
0x7e0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7e1: Push("head")
0x7e2: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x7e3: Pop(1)
0x7e4: Stack[-3] = (bool) 1
0x7e5: GOTO 0x7e7

0x7e6: Stack[-3] = (bool) 0
0x7e7: PushEmpty(string)
0x7e8: Stack[-1] = Stack[-7]
0x7e9: Call2 0xf8e

0x7ea: Pop(1)
0x7eb: Push("all")
0x7ec: @ PlayAnimation(Stack[-1], Stack[-7])
0x7ed: Pop(1)
0x7ee: @ WaitForAnimEnd()
0x7ef: Pop(0)
0x7f0: Push(Stack[-3])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f2: @ StopAsync()
0x7f3: Pop(0)
0x7f4: Push("head")
0x7f5: @ UnlookAsync(Stack[-1])
0x7f6: Pop(1)
0x7f7: Push("all")
0x7f8: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x7f9: Pop(1)
0x7fa: @ RemoveEnvelope()
0x7fb: Pop(0)
0x7fc: Stack[-5] = 0
0x7fd: Return(); Pop(20)

0x7fe: PushEmpty()
0x7ff: @ RemoveRTEnvelope()
0x800: Pop(0)
0x801: @ SetDeathState()
0x802: Pop(0)
0x803: @ Stop()
0x804: Pop(0)
0x805: @ StopAsync()
0x806: Pop(0)
0x807: @ StopSecondaryAnimation()
0x808: Pop(0)
0x809: PushEmpty(string)
0x80a: Stack[-1] = Stack[-2]
0x80b: Call2 0xf8e

0x80c: Pop(1)
0x80d: Push("all")
0x80e: @ PlayAnimation(Stack[-1], Stack[-2])
0x80f: Pop(1)
0x810: @ WaitForAnimEnd()
0x811: Pop(0)
0x812: Push("all")
0x813: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x814: Pop(1)
0x815: @ RemoveEnvelope()
0x816: Pop(0)
0x817: Return(); Pop(0)

0x818: PushEmpty()
0x819: Return(); Pop(0)

0x81a: PushEmpty()
0x81b: Return(); Pop(0)

0x81c: PushEmpty()
0x81d: Return(); Pop(0)

0x81e: Push((bool) 1)
0x81f: @ SensePlayerOnly(Stack[-1])
0x820: Pop(1)
0x821: PushEmpty()
0x822: Call2 0x1451

0x823: Pop(0)
0x824: PushEmpty()
0x825: Call2 0x82d

0x826: Pop(0)
0x827: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x828: PushEmpty()
0x829: Call2 0x932

0x82a: Pop(0)
0x82b: GOTO 0x827

0x82c: Return(); Pop(0)

0x82d: PushEmpty(bool)
0x82e: Call2 0xf03

0x82f: Pop(0)
0x830: Pop(1); Push((bool) Stack[-1] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x832: PushEmpty()
0x833: Call2 0x1420

0x834: Pop(0)
0x835: Return(); Pop(0)

0x836: PushEmpty(int, int)
0x837: PushEmpty(int, object)
0x838: Stack[-1] = Stack[-5]
0x839: Call2 0x1417

0x83a: Stack[-3] = Stack[-2]
0x83b: Pop(2)
0x83c: Push((int) 0)
0x83d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x83f: Push((int) 1)
0x840: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x842: PushEmpty()
0x843: Call2 0x8f1

0x844: Pop(0)
0x845: PushEmpty(object)
0x846: Stack[-1] = Stack[-4]
0x847: Call2 0x141a

0x848: Pop(1)
0x849: Return(); Pop(2)

0x84a: PushEmpty(int, int)
0x84b: PushEmpty(object)
0x84c: Stack[-1] = Stack[-4]
0x84d: Call2 0x1354

0x84e: Pop(1)
0x84f: PushEmpty(int, object)
0x850: Stack[-1] = Stack[-5]
0x851: Call2 0x13a7

0x852: Stack[-3] = Stack[-2]
0x853: Pop(2)
0x854: Push((int) 0)
0x855: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x857: Push((int) 1)
0x858: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x859: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85a: PushEmpty()
0x85b: Call2 0x8f1

0x85c: Pop(0)
0x85d: PushEmpty(object)
0x85e: Stack[-1] = Stack[-4]
0x85f: Call2 0x13b1

0x860: Pop(1)
0x861: Return(); Pop(2)

0x862: PushEmpty(int, int)
0x863: PushEmpty(bool, object, object, bool)
0x864: Stack[-3] = Stack[-9]
0x865: Stack[-2] = Stack[-8]
0x866: Stack[-1] = Stack[-7]
0x867: Call2 0x14cd

0x868: Pop(3)
0x869: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x86a: PushEmpty(int, object, bool)
0x86b: Stack[-2] = Stack[-8]
0x86c: Stack[-1] = Stack[-6]
0x86d: Call2 0x13b9

0x86e: Stack[-4] = Stack[-3]
0x86f: Pop(3)
0x870: Push((int) 0)
0x871: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x873: Push((int) 1)
0x874: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x875: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x876: PushEmpty()
0x877: Call2 0x8f1

0x878: Pop(0)
0x879: PushEmpty(object)
0x87a: Stack[-1] = Stack[-6]
0x87b: Call2 0x13c3

0x87c: Pop(1)
0x87d: Return(); Pop(2)

0x87e: PushEmpty(int, int)
0x87f: PushEmpty(int, object)
0x880: Stack[-1] = Stack[-5]
0x881: Call2 0x140d

0x882: Stack[-3] = Stack[-2]
0x883: Pop(2)
0x884: Push((int) 0)
0x885: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x887: Push((int) 1)
0x888: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x88a: PushEmpty()
0x88b: Call2 0x8f1

0x88c: Pop(0)
0x88d: PushEmpty(object)
0x88e: Stack[-1] = Stack[-4]
0x88f: Call2 0x1410

0x890: Pop(1)
0x891: Return(); Pop(2)

0x892: PushEmpty(int, int)
0x893: PushEmpty(bool, object, string)
0x894: Stack[-2] = Stack[-7]
0x895: Stack[-1] = Stack[-6]
0x896: Call2 0x12fe

0x897: Pop(2)
0x898: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x899: PushEmpty()
0x89a: Call2 0x8f1

0x89b: Pop(0)
0x89c: PushEmpty(object, string)
0x89d: Stack[-2] = Stack[-6]
0x89e: Stack[-1] = Stack[-5]
0x89f: Call2 0x131e

0x8a0: Pop(2)
0x8a1: GOTO 0x8b6

0x8a2: PushEmpty(int, string, object)
0x8a3: Stack[-2] = Stack[-6]
0x8a4: Stack[-1] = Stack[-7]
0x8a5: Call2 0x1412

0x8a6: Stack[-4] = Stack[-3]
0x8a7: Pop(3)
0x8a8: Push((int) 0)
0x8a9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8ab: Push((int) 1)
0x8ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ae: PushEmpty()
0x8af: Call2 0x8f1

0x8b0: Pop(0)
0x8b1: PushEmpty(string, object)
0x8b2: Stack[-2] = Stack[-5]
0x8b3: Stack[-1] = Stack[-6]
0x8b4: Call2 0x1415

0x8b5: Pop(2)
0x8b6: Return(); Pop(2)

0x8b7: PushEmpty()
0x8b8: PushEmpty(bool, string)
0x8b9: Stack[-1] = Stack[-3]
0x8ba: Call2 0x1361

0x8bb: Pop(1)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8bd: PushEmpty()
0x8be: Call2 0x8f1

0x8bf: Pop(0)
0x8c0: PushEmpty(string)
0x8c1: Stack[-1] = Stack[-2]
0x8c2: Call2 0x1371

0x8c3: Pop(1)
0x8c4: Return(); Pop(0)

0x8c5: PushEmpty()
0x8c6: PushEmpty(bool, object)
0x8c7: Stack[-1] = Stack[-3]
0x8c8: Call2 0x1337

0x8c9: Pop(1)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8cb: PushEmpty()
0x8cc: Call2 0x8f1

0x8cd: Pop(0)
0x8ce: PushEmpty(object)
0x8cf: Stack[-1] = Stack[-2]
0x8d0: Call2 0x134e

0x8d1: Pop(1)
0x8d2: GOTO 0x8d7

0x8d3: PushEmpty(object)
0x8d4: Stack[-1] = Stack[-2]
0x8d5: Call2 0x90a

0x8d6: Pop(1)
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: PushEmpty(object)
0x8da: Stack[-1] = Stack[-2]
0x8db: Call2 0x90a

0x8dc: Pop(1)
0x8dd: Return(); Pop(0)

0x8de: PushEmpty()
0x8df: Push((int) 110)
0x8e0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Return(); Pop(0)

0x8e3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8e4: Push((int) 110)
0x8e5: @ KillTimer(Stack[-1])
0x8e6: Pop(1)
0x8e7: @ ResetAAS()
0x8e8: Pop(0)
0x8e9: Return(); Pop(0)

0x8ea: PushEmpty()
0x8eb: Call2 0x8f1

0x8ec: Pop(0)
0x8ed: PushEmpty()
0x8ee: Call2 0x1420

0x8ef: Pop(0)
0x8f0: Return(); Pop(0)

0x8f1: Push((int) 110)
0x8f2: @ KillTimer(Stack[-1])
0x8f3: Pop(1)
0x8f4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8f5: PushEmpty()
0x8f6: Call2 0x979

0x8f7: Pop(0)
0x8f8: Return(); Pop(0)

0x8f9: Push((int) 110)
0x8fa: @ KillTimer(Stack[-1])
0x8fb: Pop(1)
0x8fc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8fd: PushEmpty()
0x8fe: Call2 0x980

0x8ff: Pop(0)
0x900: Return(); Pop(0)

0x901: PushEmpty()
0x902: PushEmpty()
0x903: Call2 0x8f1

0x904: Pop(0)
0x905: PushEmpty(object)
0x906: Stack[-1] = Stack[-2]
0x907: Call2 0x12e6

0x908: Pop(1)
0x909: Return(); Pop(0)

0x90a: PushEmpty(bool, int, bool, int)
0x90b: PushEmpty(bool, object)
0x90c: Stack[-1] = Stack[-7]
0x90d: Call2 0xe62

0x90e: Pop(1)
0x90f: Pop(1); Push((bool) Stack[-1] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x911: Return(); Pop(4)

0x912: Push( Stack[2 + Tasks[-1].StackPointer] )
0x913: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x914: Return(); Pop(4)

0x915: @ IsPlayerActor(Stack[-5], Stack[-2])
0x916: Pop(0)
0x917: Pop(0); Push((bool) Stack[-2] == 0)
0x918: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x919: Return(); Pop(4)

0x91a: PushEmpty(int, object)
0x91b: Stack[-1] = Stack[-7]
0x91c: Call2 0x1396

0x91d: Stack[-3] = Stack[-2]
0x91e: Pop(2)
0x91f: Push((int) 0)
0x920: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x922: Push((int) 1)
0x923: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x925: PushEmpty()
0x926: Call2 0x8f9

0x927: Pop(0)
0x928: PushEmpty(object)
0x929: Stack[-1] = Stack[-6]
0x92a: Call2 0x139f

0x92b: Pop(1)
0x92c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x92d: Push((int) 110)
0x92e: Push((float)10.0)
0x92f: @ SetTimer(Stack[-2], Stack[-1])
0x930: Pop(2)
0x931: Return(); Pop(4)

0x932: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x933: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x934: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x935: Push((float)0.5)
0x936: @ rand(Stack[-7], Stack[-1])
0x937: Pop(1)
0x938: @ Sleep(Stack[-6])
0x939: Pop(0)
0x93a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x93c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x93d: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x93e: @ GetPosition(Stack[-4])
0x93f: Pop(0)
0x940: PushEmpty(float)
0x941: Call2 0x96d

0x942: Pop(0)
0x943: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x944: Pop(1)
0x945: Push(Stack[-3])
0x946: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x947: GOTO 0x94c

0x948: Push((int) 1)
0x949: @ Sleep(Stack[-1])
0x94a: Pop(1)
0x94b: GOTO 0x93e

0x94c: GOTO 0x94e

0x94d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x94e: PushEmpty(object, cvector)
0x94f: Stack[-1] = Stack[-7]
0x950: Call2 0x989

0x951: Stack[-4] = Stack[-2]
0x952: Pop(2)
0x953: Pop(0); Push(( Stack[-2] != 0 )
0x954: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x955: @ RotatePath(Stack[-2], Stack[-1])
0x956: Pop(0)
0x957: Push(Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x959: PushEmpty(bool)
0x95a: Call2 0x987

0x95b: Pop(0)
0x95c: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x95d: Pop(1)
0x95e: Stack[-2] = 0
0x95f: Push(Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x961: PushEmpty()
0x962: Push(-0, 0); TaskCall(4)
0x963: Call2 0xa33

0x964: Pop(-0, 0); TaskReturn
0x965: Pop(0)
0x966: GOTO 0x96a

0x967: Push((int) 1)
0x968: @ Sleep(Stack[-1])
0x969: Pop(1)
0x96a: Stack[-2] = 0
0x96b: GOTO 0x93a

0x96c: Return(); Pop(12)

0x96d: PushEmpty(float, float)
0x96e: @ GetCameraFarDistance(Stack[-1])
0x96f: Pop(0)
0x970: Stack[-3] = Stack[-1]
0x971: Return(); Pop(2)

0x972: PushEmpty()
0x973: @ RequestClearPath(Stack[-1])
0x974: Pop(0)
0x975: Return(); Pop(0)

0x976: @ Stop()
0x977: Pop(0)
0x978: Return(); Pop(0)

0x979: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x97a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x97b: @ Stop()
0x97c: Pop(0)
0x97d: @ StopGroup0()
0x97e: Pop(0)
0x97f: Return(); Pop(0)

0x980: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x981: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x982: @ Stop()
0x983: Pop(0)
0x984: @ StopGroup0()
0x985: Pop(0)
0x986: Return(); Pop(0)

0x987: Stack[-1] = (bool) 0
0x988: Return(); Pop(0)

0x989: PushEmpty(object, object)
0x98a: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x98b: Pop(0)
0x98c: Stack[-4] = Stack[-1]
0x98d: Return(); Pop(2)

0x98e: Stack[-1] = 0
0x98f: PushEmpty(int, int)
0x990: PushEmpty(int, object)
0x991: Stack[-1] = Stack[-5]
0x992: Call2 0x1417

0x993: Stack[-3] = Stack[-2]
0x994: Pop(2)
0x995: Push((int) 0)
0x996: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x998: Push((int) 1)
0x999: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x99a: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99b: PushEmpty()
0x99c: Call2 0xa84

0x99d: Pop(0)
0x99e: PushEmpty(object)
0x99f: Stack[-1] = Stack[-4]
0x9a0: Call2 0x141a

0x9a1: Pop(1)
0x9a2: Return(); Pop(2)

0x9a3: PushEmpty(int, int)
0x9a4: PushEmpty(object)
0x9a5: Stack[-1] = Stack[-4]
0x9a6: Call2 0x1354

0x9a7: Pop(1)
0x9a8: PushEmpty(int, object)
0x9a9: Stack[-1] = Stack[-5]
0x9aa: Call2 0x13a7

0x9ab: Stack[-3] = Stack[-2]
0x9ac: Pop(2)
0x9ad: Push((int) 0)
0x9ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b0: Push((int) 1)
0x9b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9b2: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9b3: PushEmpty()
0x9b4: Call2 0xa84

0x9b5: Pop(0)
0x9b6: PushEmpty(object)
0x9b7: Stack[-1] = Stack[-4]
0x9b8: Call2 0x13b1

0x9b9: Pop(1)
0x9ba: Return(); Pop(2)

0x9bb: PushEmpty(int, int)
0x9bc: PushEmpty(bool, object, object, bool)
0x9bd: Stack[-3] = Stack[-9]
0x9be: Stack[-2] = Stack[-8]
0x9bf: Stack[-1] = Stack[-7]
0x9c0: Call2 0x14cd

0x9c1: Pop(3)
0x9c2: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9c3: PushEmpty(int, object, bool)
0x9c4: Stack[-2] = Stack[-8]
0x9c5: Stack[-1] = Stack[-6]
0x9c6: Call2 0x13b9

0x9c7: Stack[-4] = Stack[-3]
0x9c8: Pop(3)
0x9c9: Push((int) 0)
0x9ca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9cc: Push((int) 1)
0x9cd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9cf: PushEmpty()
0x9d0: Call2 0xa84

0x9d1: Pop(0)
0x9d2: PushEmpty(object)
0x9d3: Stack[-1] = Stack[-6]
0x9d4: Call2 0x13c3

0x9d5: Pop(1)
0x9d6: Return(); Pop(2)

0x9d7: PushEmpty(int, int)
0x9d8: PushEmpty(int, object)
0x9d9: Stack[-1] = Stack[-5]
0x9da: Call2 0x140d

0x9db: Stack[-3] = Stack[-2]
0x9dc: Pop(2)
0x9dd: Push((int) 0)
0x9de: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e0: Push((int) 1)
0x9e1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9e3: PushEmpty()
0x9e4: Call2 0xa84

0x9e5: Pop(0)
0x9e6: PushEmpty(object)
0x9e7: Stack[-1] = Stack[-4]
0x9e8: Call2 0x1410

0x9e9: Pop(1)
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty(int, int)
0x9ec: PushEmpty(bool, object, string)
0x9ed: Stack[-2] = Stack[-7]
0x9ee: Stack[-1] = Stack[-6]
0x9ef: Call2 0x12fe

0x9f0: Pop(2)
0x9f1: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f2: PushEmpty()
0x9f3: Call2 0xa84

0x9f4: Pop(0)
0x9f5: PushEmpty(object, string)
0x9f6: Stack[-2] = Stack[-6]
0x9f7: Stack[-1] = Stack[-5]
0x9f8: Call2 0x131e

0x9f9: Pop(2)
0x9fa: GOTO 0xa0f

0x9fb: PushEmpty(int, string, object)
0x9fc: Stack[-2] = Stack[-6]
0x9fd: Stack[-1] = Stack[-7]
0x9fe: Call2 0x1412

0x9ff: Stack[-4] = Stack[-3]
0xa00: Pop(3)
0xa01: Push((int) 0)
0xa02: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa04: Push((int) 1)
0xa05: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa06: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa07: PushEmpty()
0xa08: Call2 0xa84

0xa09: Pop(0)
0xa0a: PushEmpty(string, object)
0xa0b: Stack[-2] = Stack[-5]
0xa0c: Stack[-1] = Stack[-6]
0xa0d: Call2 0x1415

0xa0e: Pop(2)
0xa0f: Return(); Pop(2)

0xa10: PushEmpty()
0xa11: PushEmpty(bool, string)
0xa12: Stack[-1] = Stack[-3]
0xa13: Call2 0x1361

0xa14: Pop(1)
0xa15: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa16: PushEmpty()
0xa17: Call2 0xa84

0xa18: Pop(0)
0xa19: PushEmpty(string)
0xa1a: Stack[-1] = Stack[-2]
0xa1b: Call2 0x1371

0xa1c: Pop(1)
0xa1d: Return(); Pop(0)

0xa1e: PushEmpty()
0xa1f: Call2 0xa84

0xa20: Pop(0)
0xa21: PushEmpty()
0xa22: Call2 0x1420

0xa23: Pop(0)
0xa24: Return(); Pop(0)

0xa25: PushEmpty()
0xa26: PushEmpty(bool, object)
0xa27: Stack[-1] = Stack[-3]
0xa28: Call2 0x1337

0xa29: Pop(1)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa2b: PushEmpty()
0xa2c: Call2 0xa84

0xa2d: Pop(0)
0xa2e: PushEmpty(object)
0xa2f: Stack[-1] = Stack[-2]
0xa30: Call2 0x134e

0xa31: Pop(1)
0xa32: Return(); Pop(0)

0xa33: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa34: @ WaitForAnimEnd()
0xa35: Pop(0)
0xa36: PushEmpty(bool)
0xa37: Call2 0xf03

0xa38: Pop(0)
0xa39: Pop(1); Push((bool) Stack[-1] == 0)
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3b: Return(); Pop(14)

0xa3c: PushEmpty(int)
0xa3d: Call2 0x1385

0xa3e: Stack[-8] = Stack[-1]
0xa3f: Pop(1)
0xa40: Stack[-6] = (int) 0
0xa41: PushEmpty(bool)
0xa42: Stack[-1] = (bool) 0
0xa43: Push((int) 5)
0xa44: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa46: PushEmpty(bool)
0xa47: Call2 0xf03

0xa48: Pop(0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: Stack[-1] = (bool) 1
0xa4b: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa4c: Push((int) 3)
0xa4d: @ irand(Stack[-6], Stack[-1])
0xa4e: Pop(1)
0xa4f: Push((int) 0)
0xa50: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa52: Push(Stack[-7])
0xa53: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa54: @ irand(Stack[-4], Stack[-7])
0xa55: Pop(0)
0xa56: Push("all")
0xa57: PushEmpty(string, int)
0xa58: Stack[-1] = Stack[-7]
0xa59: Call2 0x137e

0xa5a: Pop(1)
0xa5b: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5c: Pop(2)
0xa5d: @ WaitForAnimEnd(Stack[-3])
0xa5e: Pop(0)
0xa5f: Pop(0); Push((bool) Stack[-3] == 0)
0xa60: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa61: GOTO 0xa7f

0xa62: GOTO 0xa74

0xa63: Push((int) 1)
0xa64: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa65: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa66: Push((int) 4)
0xa67: @ rand(Stack[-3], Stack[-1])
0xa68: Pop(1)
0xa69: Push((int) 1)
0xa6a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa6b: @ Sleep(Stack[-1], Stack[-2])
0xa6c: Pop(1)
0xa6d: Pop(0); Push((bool) Stack[-1] == 0)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6f: GOTO 0xa7f

0xa70: GOTO 0xa74

0xa71: Push(Stack[-6])
0xa72: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa73: GOTO 0xa7f

0xa74: PushEmpty(bool)
0xa75: Call2 0xa82

0xa76: Pop(0)
0xa77: Pop(1); Push((bool) Stack[-1] == 0)
0xa78: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa79: GOTO 0xa7f

0xa7a: @ ResetAAS()
0xa7b: Pop(0)
0xa7c: Push((int) 1)
0xa7d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa7e: GOTO 0xa41

0xa7f: @ ResetAAS()
0xa80: Pop(0)
0xa81: Return(); Pop(14)

0xa82: Stack[-1] = (bool) 1
0xa83: Return(); Pop(0)

0xa84: @ StopAnimation()
0xa85: Pop(0)
0xa86: @ StopGroup0()
0xa87: Pop(0)
0xa88: Return(); Pop(0)

0xa89: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa8a: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xa8b: PushEmpty()
0xa8c: Call2 0xabc

0xa8d: Pop(0)
0xa8e: @ GetDirection(Stack[-3])
0xa8f: Pop(0)
0xa90: PushEmpty(cvector, object)
0xa91: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa92: Call2 0xdfc

0xa93: Stack[-4] = Stack[-2]
0xa94: Pop(2)
0xa95: PushEmpty(float, cvector, cvector)
0xa96: Stack[-2] = Stack[-6]
0xa97: Stack[-1] = Stack[-5]
0xa98: Call2 0xfed

0xa99: Pop(2)
0xa9a: Push((int) 0)
0xa9b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xa9d: PushEmpty(object)
0xa9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9f: Call2 0xef8

0xaa0: Pop(1)
0xaa1: Stack[-1] = (bool) 1
0xaa2: GOTO 0xaa6

0xaa3: Push((float)1.5)
0xaa4: @ Sleep(Stack[-1], Stack[-2])
0xaa5: Pop(1)
0xaa6: Push(Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xaa8: PushEmpty(object)
0xaa9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaaa: Call2 0xef8

0xaab: Pop(1)
0xaac: Push((int) 111)
0xaad: Push((float)0.5)
0xaae: @ SetTimer(Stack[-2], Stack[-1])
0xaaf: Pop(2)
0xab0: Push((float)5.0)
0xab1: @ Sleep(Stack[-1])
0xab2: Pop(1)
0xab3: Push((int) 111)
0xab4: @ KillTimer(Stack[-1])
0xab5: Pop(1)
0xab6: @ StopAsync()
0xab7: Pop(0)
0xab8: Push("head")
0xab9: @ UnlookAsync(Stack[-1])
0xaba: Pop(1)
0xabb: Return(); Pop(6)

0xabc: PushEmpty(object)
0xabd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabe: Call2 0xf7c

0xabf: Pop(1)
0xac0: Return(); Pop(0)

0xac1: PushEmpty(int, int)
0xac2: PushEmpty(int, object)
0xac3: Stack[-1] = Stack[-5]
0xac4: Call2 0x1417

0xac5: Stack[-3] = Stack[-2]
0xac6: Pop(2)
0xac7: Push((int) 0)
0xac8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xac9: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xaca: Push((int) 1)
0xacb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xacd: PushEmpty()
0xace: Call2 0xb50

0xacf: Pop(0)
0xad0: PushEmpty(object)
0xad1: Stack[-1] = Stack[-4]
0xad2: Call2 0x141a

0xad3: Pop(1)
0xad4: Return(); Pop(2)

0xad5: PushEmpty(int, int)
0xad6: PushEmpty(object)
0xad7: Stack[-1] = Stack[-4]
0xad8: Call2 0x1354

0xad9: Pop(1)
0xada: PushEmpty(int, object)
0xadb: Stack[-1] = Stack[-5]
0xadc: Call2 0x13a7

0xadd: Stack[-3] = Stack[-2]
0xade: Pop(2)
0xadf: Push((int) 0)
0xae0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xae1: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xae2: Push((int) 1)
0xae3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae5: PushEmpty()
0xae6: Call2 0xb50

0xae7: Pop(0)
0xae8: PushEmpty(object)
0xae9: Stack[-1] = Stack[-4]
0xaea: Call2 0x13b1

0xaeb: Pop(1)
0xaec: Return(); Pop(2)

0xaed: PushEmpty(int, int)
0xaee: PushEmpty(bool, object, object, bool)
0xaef: Stack[-3] = Stack[-9]
0xaf0: Stack[-2] = Stack[-8]
0xaf1: Stack[-1] = Stack[-7]
0xaf2: Call2 0x14cd

0xaf3: Pop(3)
0xaf4: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xaf5: PushEmpty(int, object, bool)
0xaf6: Stack[-2] = Stack[-8]
0xaf7: Stack[-1] = Stack[-6]
0xaf8: Call2 0x13b9

0xaf9: Stack[-4] = Stack[-3]
0xafa: Pop(3)
0xafb: Push((int) 0)
0xafc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xafd: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xafe: Push((int) 1)
0xaff: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xb01: PushEmpty()
0xb02: Call2 0xb50

0xb03: Pop(0)
0xb04: PushEmpty(object)
0xb05: Stack[-1] = Stack[-6]
0xb06: Call2 0x13c3

0xb07: Pop(1)
0xb08: Return(); Pop(2)

0xb09: PushEmpty(int, int)
0xb0a: PushEmpty(int, object)
0xb0b: Stack[-1] = Stack[-5]
0xb0c: Call2 0x140d

0xb0d: Stack[-3] = Stack[-2]
0xb0e: Pop(2)
0xb0f: Push((int) 0)
0xb10: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb11: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb12: Push((int) 1)
0xb13: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb14: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb15: PushEmpty()
0xb16: Call2 0xb50

0xb17: Pop(0)
0xb18: PushEmpty(object)
0xb19: Stack[-1] = Stack[-4]
0xb1a: Call2 0x1410

0xb1b: Pop(1)
0xb1c: Return(); Pop(2)

0xb1d: PushEmpty(int, int)
0xb1e: PushEmpty(bool, object, string)
0xb1f: Stack[-2] = Stack[-7]
0xb20: Stack[-1] = Stack[-6]
0xb21: Call2 0x12fe

0xb22: Pop(2)
0xb23: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb24: PushEmpty()
0xb25: Call2 0xb50

0xb26: Pop(0)
0xb27: PushEmpty(object, string)
0xb28: Stack[-2] = Stack[-6]
0xb29: Stack[-1] = Stack[-5]
0xb2a: Call2 0x131e

0xb2b: Pop(2)
0xb2c: GOTO 0xb41

0xb2d: PushEmpty(int, string, object)
0xb2e: Stack[-2] = Stack[-6]
0xb2f: Stack[-1] = Stack[-7]
0xb30: Call2 0x1412

0xb31: Stack[-4] = Stack[-3]
0xb32: Pop(3)
0xb33: Push((int) 0)
0xb34: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xb36: Push((int) 1)
0xb37: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb38: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb39: PushEmpty()
0xb3a: Call2 0xb50

0xb3b: Pop(0)
0xb3c: PushEmpty(string, object)
0xb3d: Stack[-2] = Stack[-5]
0xb3e: Stack[-1] = Stack[-6]
0xb3f: Call2 0x1415

0xb40: Pop(2)
0xb41: Return(); Pop(2)

0xb42: PushEmpty()
0xb43: PushEmpty(bool, string)
0xb44: Stack[-1] = Stack[-3]
0xb45: Call2 0x1361

0xb46: Pop(1)
0xb47: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb48: PushEmpty()
0xb49: Call2 0xb50

0xb4a: Pop(0)
0xb4b: PushEmpty(string)
0xb4c: Stack[-1] = Stack[-2]
0xb4d: Call2 0x1371

0xb4e: Pop(1)
0xb4f: Return(); Pop(0)

0xb50: @ StopGroup0()
0xb51: Pop(0)
0xb52: @ StopAsync()
0xb53: Pop(0)
0xb54: Push("head")
0xb55: @ UnlookAsync(Stack[-1])
0xb56: Pop(1)
0xb57: Push((int) 111)
0xb58: @ KillTimer(Stack[-1])
0xb59: Pop(1)
0xb5a: Return(); Pop(0)

0xb5b: PushEmpty()
0xb5c: PushEmpty()
0xb5d: Call2 0xb50

0xb5e: Pop(0)
0xb5f: PushEmpty(object)
0xb60: Stack[-1] = Stack[-2]
0xb61: Call2 0x12e6

0xb62: Pop(1)
0xb63: Return(); Pop(0)

0xb64: PushEmpty(cvector, cvector, cvector, cvector)
0xb65: Push((int) 111)
0xb66: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb68: Return(); Pop(4)

0xb69: PushEmpty(bool, object)
0xb6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6b: Call2 0xe62

0xb6c: Pop(1)
0xb6d: Pop(1); Push((bool) Stack[-1] == 0)
0xb6e: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb6f: PushEmpty()
0xb70: Call2 0xb50

0xb71: Pop(0)
0xb72: Return(); Pop(4)

0xb73: @ GetDirection(Stack[-2])
0xb74: Pop(0)
0xb75: PushEmpty(cvector, object)
0xb76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb77: Call2 0xdfc

0xb78: Stack[-3] = Stack[-2]
0xb79: Pop(2)
0xb7a: PushEmpty(float, cvector, cvector)
0xb7b: Stack[-2] = Stack[-5]
0xb7c: Stack[-1] = Stack[-4]
0xb7d: Call2 0xfed

0xb7e: Pop(2)
0xb7f: Push((float)0.5)
0xb80: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xb81: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb82: PushEmpty(object)
0xb83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb84: Call2 0xef8

0xb85: Pop(1)
0xb86: Return(); Pop(4)

0xb87: PushEmpty()
0xb88: Call2 0xb50

0xb89: Pop(0)
0xb8a: PushEmpty()
0xb8b: Call2 0x1420

0xb8c: Pop(0)
0xb8d: Return(); Pop(0)

0xb8e: PushEmpty()
0xb8f: PushEmpty(bool, object)
0xb90: Stack[-1] = Stack[-3]
0xb91: Call2 0x1337

0xb92: Pop(1)
0xb93: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb94: PushEmpty()
0xb95: Call2 0xb50

0xb96: Pop(0)
0xb97: PushEmpty(object)
0xb98: Stack[-1] = Stack[-2]
0xb99: Call2 0x134e

0xb9a: Pop(1)
0xb9b: Return(); Pop(0)

0xb9c: PushEmpty()
0xb9d: @ Face(Stack[-1])
0xb9e: Pop(0)
0xb9f: Push("all")
0xba0: Push("attack_on")
0xba1: @ PlayAnimation(Stack[-2], Stack[-1])
0xba2: Pop(2)
0xba3: @ WaitForAnimEnd()
0xba4: Pop(0)
0xba5: Push("all")
0xba6: Push("attack_stay")
0xba7: @ PlayAnimation(Stack[-2], Stack[-1])
0xba8: Pop(2)
0xba9: @ WaitForAnimEnd()
0xbaa: Pop(0)
0xbab: Push("all")
0xbac: Push("attack_off")
0xbad: @ PlayAnimation(Stack[-2], Stack[-1])
0xbae: Pop(2)
0xbaf: @ WaitForAnimEnd()
0xbb0: Pop(0)
0xbb1: @ StopAsync()
0xbb2: Pop(0)
0xbb3: PushEmpty(object)
0xbb4: Stack[-1] = Stack[-2]
0xbb5: Call2 0xbdd

0xbb6: Pop(1)
0xbb7: Return(); Pop(0)

0xbb8: PushEmpty()
0xbb9: Call2 0xc5a

0xbba: Pop(0)
0xbbb: PushEmpty()
0xbbc: Call2 0x1420

0xbbd: Pop(0)
0xbbe: Return(); Pop(0)

0xbbf: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xbc0: @ GetPosition(Stack[-6])
0xbc1: Pop(0)
0xbc2: @@ GetPosition(Stack[-5])
0xbc3: Pop(0)
0xbc4: @ GetDirection(Stack[-4])
0xbc5: Pop(0)
0xbc6: PushEmpty(cvector, cvector)
0xbc7: PushEmpty(cvector, cvector)
0xbc8: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xbc9: Call2 0xfbd

0xbca: Pop(1)
0xbcb: Push((float)0.75)
0xbcc: Pop(1); Push(Stack[-8] * Stack[-1]);
0xbcd: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xbce: Call2 0xfbd

0xbcf: Stack[-5] = Stack[-2]
0xbd0: Pop(2)
0xbd1: Push((int) 32)
0xbd2: Push((float)7000.0)
0xbd3: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xbd4: Pop(2)
0xbd5: Push((int) 100)
0xbd6: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xbd7: Push((int) 0)
0xbd8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbd9: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbda: Stack[-1] = (int) 0
0xbdb: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xbdc: Return(); Pop(12)

0xbdd: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xbde: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xbdf: PushEmpty(cvector, float)
0xbe0: Stack[-1] = (float) 1.74533
0xbe1: Call2 0xbbf

0xbe2: Stack[-7] = Stack[-2]
0xbe3: Pop(2)
0xbe4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbe5: Push((float)2500.0)
0xbe6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xbe7: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbe8: PushEmpty(cvector, float)
0xbe9: Stack[-1] = (float) 2.61799
0xbea: Call2 0xbbf

0xbeb: Stack[-7] = Stack[-2]
0xbec: Pop(2)
0xbed: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbee: Push((float)2500.0)
0xbef: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbf1: Push("Can't retreat, distance: ")
0xbf2: Pop(0); Push(Sqrt(Stack[-5]))
0xbf3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf4: @ Trace(Stack[-1])
0xbf5: Pop(1)
0xbf6: Push((float)0.5)
0xbf7: @ Sleep(Stack[-1])
0xbf8: Pop(1)
0xbf9: Return(); Pop(10)

0xbfa: Push(CvectorIndex(Stack[-5], 0))
0xbfb: Push(CvectorIndex(Stack[-6], 2))
0xbfc: @ Rotate(Stack[-2], Stack[-1])
0xbfd: Pop(2)
0xbfe: PushEmpty(cvector)
0xbff: Call2 0xdf7

0xc00: Pop(0)
0xc01: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xc02: Push((int) 120)
0xc03: Push((float)0.5)
0xc04: @ SetTimer(Stack[-2], Stack[-1])
0xc05: Pop(2)
0xc06: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc07: Push((int) 1)
0xc08: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xc09: Pop(1)
0xc0a: Push(Stack[-3])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc0c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0e: GOTO 0xc25

0xc0f: GOTO 0xc23

0xc10: PushEmpty(cvector, float)
0xc11: Stack[-1] = (float) 2.61799
0xc12: Call2 0xbbf

0xc13: Stack[-4] = Stack[-2]
0xc14: Pop(2)
0xc15: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc16: Push((float)2500.0)
0xc17: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc18: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc19: PushEmpty(cvector)
0xc1a: Call2 0xdf7

0xc1b: Pop(0)
0xc1c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc1d: Push((int) 120)
0xc1e: Push((float)0.5)
0xc1f: @ SetTimer(Stack[-2], Stack[-1])
0xc20: Pop(2)
0xc21: GOTO 0xc23

0xc22: GOTO 0xc25

0xc23: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc24: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc25: Return(); Pop(10)

0xc26: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xc27: Push((int) 120)
0xc28: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xc29: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc2a: Return(); Pop(8)

0xc2b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc2d: @ Stop()
0xc2e: Pop(0)
0xc2f: Push((int) 1)
0xc30: @ KillTimer(Stack[-1])
0xc31: Pop(1)
0xc32: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc33: GOTO 0xc59

0xc34: @ GetDirection(Stack[-4])
0xc35: Pop(0)
0xc36: Push((float)7000.0)
0xc37: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xc38: Pop(1)
0xc39: PushEmpty(cvector, float)
0xc3a: Stack[-1] = (float) 1.74533
0xc3b: Call2 0xbbf

0xc3c: Stack[-4] = Stack[-2]
0xc3d: Pop(2)
0xc3e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc3f: PushEmpty(bool)
0xc40: Stack[-1] = (bool) 0
0xc41: Push((float)2500.0)
0xc42: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc44: PushEmpty(bool)
0xc45: Stack[-1] = (bool) 1
0xc46: Pop(0); Push(Stack[-5] * Stack[-5]);
0xc47: Push((float)2.25)
0xc48: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc49: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4b: PushEmpty(bool)
0xc4c: Call2 0xc6a

0xc4d: Pop(0)
0xc4e: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4f: Stack[-1] = (bool) 0
0xc50: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc51: Stack[-1] = (bool) 1
0xc52: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc53: @ Stop()
0xc54: Pop(0)
0xc55: PushEmpty(cvector)
0xc56: Call2 0xdf7

0xc57: Pop(0)
0xc58: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc59: Return(); Pop(8)

0xc5a: @ Stop()
0xc5b: Pop(0)
0xc5c: Push((int) 120)
0xc5d: @ KillTimer(Stack[-1])
0xc5e: Pop(1)
0xc5f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc60: Return(); Pop(0)

0xc61: PushEmpty()
0xc62: PushEmpty()
0xc63: Call2 0xc5a

0xc64: Pop(0)
0xc65: PushEmpty(object)
0xc66: Stack[-1] = Stack[-2]
0xc67: Call2 0x12e6

0xc68: Pop(1)
0xc69: Return(); Pop(0)

0xc6a: PushEmpty(cvector, cvector, cvector, cvector)
0xc6b: @ GetDirection(Stack[-2])
0xc6c: Pop(0)
0xc6d: PushEmpty(cvector, object)
0xc6e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6f: Call2 0xdfc

0xc70: Stack[-3] = Stack[-2]
0xc71: Pop(2)
0xc72: PushEmpty(float, cvector, cvector)
0xc73: Stack[-2] = Stack[-5]
0xc74: Stack[-1] = Stack[-4]
0xc75: Call2 0xfd2

0xc76: Pop(2)
0xc77: Push((float)-0.34202)
0xc78: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xc79: Return(); Pop(4)

0xc7a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc7b: @ GetPosition(Stack[-6])
0xc7c: Pop(0)
0xc7d: @@ GetPosition(Stack[-5])
0xc7e: Pop(0)
0xc7f: @ GetDirection(Stack[-4])
0xc80: Pop(0)
0xc81: PushEmpty(cvector, cvector)
0xc82: PushEmpty(cvector, cvector)
0xc83: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xc84: Call2 0xfbd

0xc85: Pop(1)
0xc86: Push((float)0.75)
0xc87: Pop(1); Push(Stack[-8] * Stack[-1]);
0xc88: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc89: Call2 0xfbd

0xc8a: Stack[-5] = Stack[-2]
0xc8b: Pop(2)
0xc8c: Push((int) 32)
0xc8d: Push((float)7000.0)
0xc8e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xc8f: Pop(2)
0xc90: Push((int) 100)
0xc91: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xc92: Push((int) 0)
0xc93: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc94: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc95: Stack[-1] = (int) 0
0xc96: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xc97: Return(); Pop(12)

0xc98: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xc99: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xc9a: PushEmpty(cvector, float)
0xc9b: Stack[-1] = (float) 1.74533
0xc9c: Call2 0xc7a

0xc9d: Stack[-7] = Stack[-2]
0xc9e: Pop(2)
0xc9f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xca0: Push((float)2500.0)
0xca1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xca2: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xca3: PushEmpty(cvector, float)
0xca4: Stack[-1] = (float) 2.61799
0xca5: Call2 0xc7a

0xca6: Stack[-7] = Stack[-2]
0xca7: Pop(2)
0xca8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xca9: Push((float)2500.0)
0xcaa: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcac: Push("Can't retreat, distance: ")
0xcad: Pop(0); Push(Sqrt(Stack[-5]))
0xcae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcaf: @ Trace(Stack[-1])
0xcb0: Pop(1)
0xcb1: Push((float)0.5)
0xcb2: @ Sleep(Stack[-1])
0xcb3: Pop(1)
0xcb4: Return(); Pop(10)

0xcb5: Push(CvectorIndex(Stack[-5], 0))
0xcb6: Push(CvectorIndex(Stack[-6], 2))
0xcb7: @ Rotate(Stack[-2], Stack[-1])
0xcb8: Pop(2)
0xcb9: PushEmpty(cvector)
0xcba: Call2 0xdf7

0xcbb: Pop(0)
0xcbc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xcbd: Push((int) 120)
0xcbe: Push((float)0.5)
0xcbf: @ SetTimer(Stack[-2], Stack[-1])
0xcc0: Pop(2)
0xcc1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xcc2: Push((int) 1)
0xcc3: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xcc4: Pop(1)
0xcc5: Push(Stack[-3])
0xcc6: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcc7: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xcc8: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc9: GOTO 0xce0

0xcca: GOTO 0xcde

0xccb: PushEmpty(cvector, float)
0xccc: Stack[-1] = (float) 2.61799
0xccd: Call2 0xc7a

0xcce: Stack[-4] = Stack[-2]
0xccf: Pop(2)
0xcd0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xcd1: Push((float)2500.0)
0xcd2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcd3: IF (Stack[-1] == 0) GOTO 0xcdd; Pop(1)

0xcd4: PushEmpty(cvector)
0xcd5: Call2 0xdf7

0xcd6: Pop(0)
0xcd7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xcd8: Push((int) 120)
0xcd9: Push((float)0.5)
0xcda: @ SetTimer(Stack[-2], Stack[-1])
0xcdb: Pop(2)
0xcdc: GOTO 0xcde

0xcdd: GOTO 0xce0

0xcde: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xcdf: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xce0: Return(); Pop(10)

0xce1: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xce2: Push((int) 120)
0xce3: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xce6; Pop(1)

0xce5: Return(); Pop(8)

0xce6: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xce7: IF (Stack[-1] == 0) GOTO 0xcef; Pop(1)

0xce8: @ Stop()
0xce9: Pop(0)
0xcea: Push((int) 1)
0xceb: @ KillTimer(Stack[-1])
0xcec: Pop(1)
0xced: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcee: GOTO 0xd14

0xcef: @ GetDirection(Stack[-4])
0xcf0: Pop(0)
0xcf1: Push((float)7000.0)
0xcf2: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xcf3: Pop(1)
0xcf4: PushEmpty(cvector, float)
0xcf5: Stack[-1] = (float) 1.74533
0xcf6: Call2 0xc7a

0xcf7: Stack[-4] = Stack[-2]
0xcf8: Pop(2)
0xcf9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xcfa: PushEmpty(bool)
0xcfb: Stack[-1] = (bool) 0
0xcfc: Push((float)2500.0)
0xcfd: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xcff: PushEmpty(bool)
0xd00: Stack[-1] = (bool) 1
0xd01: Pop(0); Push(Stack[-5] * Stack[-5]);
0xd02: Push((float)2.25)
0xd03: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd04: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd0b; Pop(1)

0xd06: PushEmpty(bool)
0xd07: Call2 0xd25

0xd08: Pop(0)
0xd09: IF (Stack[-1] == 0) GOTO 0xd0b; Pop(1)

0xd0a: Stack[-1] = (bool) 0
0xd0b: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0c: Stack[-1] = (bool) 1
0xd0d: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd0e: @ Stop()
0xd0f: Pop(0)
0xd10: PushEmpty(cvector)
0xd11: Call2 0xdf7

0xd12: Pop(0)
0xd13: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd14: Return(); Pop(8)

0xd15: @ Stop()
0xd16: Pop(0)
0xd17: Push((int) 120)
0xd18: @ KillTimer(Stack[-1])
0xd19: Pop(1)
0xd1a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd1b: Return(); Pop(0)

0xd1c: PushEmpty()
0xd1d: PushEmpty()
0xd1e: Call2 0xd15

0xd1f: Pop(0)
0xd20: PushEmpty(object)
0xd21: Stack[-1] = Stack[-2]
0xd22: Call2 0x12e6

0xd23: Pop(1)
0xd24: Return(); Pop(0)

0xd25: PushEmpty(cvector, cvector, cvector, cvector)
0xd26: @ GetDirection(Stack[-2])
0xd27: Pop(0)
0xd28: PushEmpty(cvector, object)
0xd29: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2a: Call2 0xdfc

0xd2b: Stack[-3] = Stack[-2]
0xd2c: Pop(2)
0xd2d: PushEmpty(float, cvector, cvector)
0xd2e: Stack[-2] = Stack[-5]
0xd2f: Stack[-1] = Stack[-4]
0xd30: Call2 0xfd2

0xd31: Pop(2)
0xd32: Push((float)-0.34202)
0xd33: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xd34: Return(); Pop(4)

0xd35: PushEmpty()
0xd36: Call2 0xdd7

0xd37: Pop(0)
0xd38: PushEmpty()
0xd39: Call2 0x1420

0xd3a: Pop(0)
0xd3b: Return(); Pop(0)

0xd3c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xd3d: @ GetPosition(Stack[-6])
0xd3e: Pop(0)
0xd3f: @@ GetPosition(Stack[-5])
0xd40: Pop(0)
0xd41: @ GetDirection(Stack[-4])
0xd42: Pop(0)
0xd43: PushEmpty(cvector, cvector)
0xd44: PushEmpty(cvector, cvector)
0xd45: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xd46: Call2 0xfbd

0xd47: Pop(1)
0xd48: Push((float)0.75)
0xd49: Pop(1); Push(Stack[-8] * Stack[-1]);
0xd4a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd4b: Call2 0xfbd

0xd4c: Stack[-5] = Stack[-2]
0xd4d: Pop(2)
0xd4e: Push((int) 32)
0xd4f: Push((float)7000.0)
0xd50: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xd51: Pop(2)
0xd52: Push((int) 100)
0xd53: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xd54: Push((int) 0)
0xd55: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd56: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd57: Stack[-1] = (int) 0
0xd58: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xd59: Return(); Pop(12)

0xd5a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xd5b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xd5c: PushEmpty(cvector, float)
0xd5d: Stack[-1] = (float) 1.74533
0xd5e: Call2 0xd3c

0xd5f: Stack[-7] = Stack[-2]
0xd60: Pop(2)
0xd61: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd62: Push((float)2500.0)
0xd63: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd65: PushEmpty(cvector, float)
0xd66: Stack[-1] = (float) 2.61799
0xd67: Call2 0xd3c

0xd68: Stack[-7] = Stack[-2]
0xd69: Pop(2)
0xd6a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd6b: Push((float)2500.0)
0xd6c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd6d: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd6e: Push("Can't retreat, distance: ")
0xd6f: Pop(0); Push(Sqrt(Stack[-5]))
0xd70: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd71: @ Trace(Stack[-1])
0xd72: Pop(1)
0xd73: Push((float)0.5)
0xd74: @ Sleep(Stack[-1])
0xd75: Pop(1)
0xd76: Return(); Pop(10)

0xd77: Push(CvectorIndex(Stack[-5], 0))
0xd78: Push(CvectorIndex(Stack[-6], 2))
0xd79: @ Rotate(Stack[-2], Stack[-1])
0xd7a: Pop(2)
0xd7b: PushEmpty(cvector)
0xd7c: Call2 0xdf7

0xd7d: Pop(0)
0xd7e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd7f: Push((int) 120)
0xd80: Push((float)0.5)
0xd81: @ SetTimer(Stack[-2], Stack[-1])
0xd82: Pop(2)
0xd83: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd84: Push((int) 1)
0xd85: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xd86: Pop(1)
0xd87: Push(Stack[-3])
0xd88: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd89: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd8a: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd8b: GOTO 0xda2

0xd8c: GOTO 0xda0

0xd8d: PushEmpty(cvector, float)
0xd8e: Stack[-1] = (float) 2.61799
0xd8f: Call2 0xd3c

0xd90: Stack[-4] = Stack[-2]
0xd91: Pop(2)
0xd92: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd93: Push((float)2500.0)
0xd94: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd95: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd96: PushEmpty(cvector)
0xd97: Call2 0xdf7

0xd98: Pop(0)
0xd99: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd9a: Push((int) 120)
0xd9b: Push((float)0.5)
0xd9c: @ SetTimer(Stack[-2], Stack[-1])
0xd9d: Pop(2)
0xd9e: GOTO 0xda0

0xd9f: GOTO 0xda2

0xda0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xda1: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xda2: Return(); Pop(10)

0xda3: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xda4: Push((int) 120)
0xda5: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xda6: IF (Stack[-1] == 0) GOTO 0xda8; Pop(1)

0xda7: Return(); Pop(8)

0xda8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xda9: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdaa: @ Stop()
0xdab: Pop(0)
0xdac: Push((int) 1)
0xdad: @ KillTimer(Stack[-1])
0xdae: Pop(1)
0xdaf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xdb0: GOTO 0xdd6

0xdb1: @ GetDirection(Stack[-4])
0xdb2: Pop(0)
0xdb3: Push((float)7000.0)
0xdb4: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xdb5: Pop(1)
0xdb6: PushEmpty(cvector, float)
0xdb7: Stack[-1] = (float) 1.74533
0xdb8: Call2 0xd3c

0xdb9: Stack[-4] = Stack[-2]
0xdba: Pop(2)
0xdbb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdbc: PushEmpty(bool)
0xdbd: Stack[-1] = (bool) 0
0xdbe: Push((float)2500.0)
0xdbf: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xdc0: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdc1: PushEmpty(bool)
0xdc2: Stack[-1] = (bool) 1
0xdc3: Pop(0); Push(Stack[-5] * Stack[-5]);
0xdc4: Push((float)2.25)
0xdc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdc6: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xdc7: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdc8: PushEmpty(bool)
0xdc9: Call2 0xde7

0xdca: Pop(0)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdcc: Stack[-1] = (bool) 0
0xdcd: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdce: Stack[-1] = (bool) 1
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd0: @ Stop()
0xdd1: Pop(0)
0xdd2: PushEmpty(cvector)
0xdd3: Call2 0xdf7

0xdd4: Pop(0)
0xdd5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xdd6: Return(); Pop(8)

0xdd7: @ Stop()
0xdd8: Pop(0)
0xdd9: Push((int) 120)
0xdda: @ KillTimer(Stack[-1])
0xddb: Pop(1)
0xddc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xddd: Return(); Pop(0)

0xdde: PushEmpty()
0xddf: PushEmpty()
0xde0: Call2 0xdd7

0xde1: Pop(0)
0xde2: PushEmpty(object)
0xde3: Stack[-1] = Stack[-2]
0xde4: Call2 0x12e6

0xde5: Pop(1)
0xde6: Return(); Pop(0)

0xde7: PushEmpty(cvector, cvector, cvector, cvector)
0xde8: @ GetDirection(Stack[-2])
0xde9: Pop(0)
0xdea: PushEmpty(cvector, object)
0xdeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdec: Call2 0xdfc

0xded: Stack[-3] = Stack[-2]
0xdee: Pop(2)
0xdef: PushEmpty(float, cvector, cvector)
0xdf0: Stack[-2] = Stack[-5]
0xdf1: Stack[-1] = Stack[-4]
0xdf2: Call2 0xfd2

0xdf3: Pop(2)
0xdf4: Push((float)-0.34202)
0xdf5: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xdf6: Return(); Pop(4)

0xdf7: PushEmpty(cvector, cvector)
0xdf8: @ GetPosition(Stack[-1])
0xdf9: Pop(0)
0xdfa: Stack[-3] = Stack[-1]
0xdfb: Return(); Pop(2)

0xdfc: PushEmpty(cvector, cvector, cvector, cvector)
0xdfd: @ GetPosition(Stack[-2])
0xdfe: Pop(0)
0xdff: @@ GetPosition(Stack[-1])
0xe00: Pop(0)
0xe01: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xe02: Return(); Pop(4)

0xe03: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe04: @ GetPosition(Stack[-3])
0xe05: Pop(0)
0xe06: @@ GetPosition(Stack[-2])
0xe07: Pop(0)
0xe08: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xe09: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xe0a: Return(); Pop(6)

0xe0b: PushEmpty(bool, bool)
0xe0c: @ IsPlayerActor(Stack[-3], Stack[-1])
0xe0d: Pop(0)
0xe0e: Stack[-4] = Stack[-1]
0xe0f: Return(); Pop(2)

0xe10: PushEmpty(bool, bool)
0xe11: Push("HasProperty")
0xe12: Push((int) 2)
0xe13: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xe14: Pop(1); Push((bool) Stack[-1] == 0)
0xe15: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe16: Stack[-5] = (bool) 0
0xe17: Return(); Pop(2)

0xe18: @@ HasProperty(Stack[-3], Stack[-1])
0xe19: Pop(0)
0xe1a: Stack[-5] = Stack[-1]
0xe1b: Return(); Pop(2)

0xe1c: PushEmpty(float, float)
0xe1d: PushEmpty(bool, object, string)
0xe1e: Stack[-2] = Stack[-10]
0xe1f: Stack[-1] = Stack[-9]
0xe20: Call2 0xe10

0xe21: Pop(2)
0xe22: Pop(1); Push((bool) Stack[-1] == 0)
0xe23: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe24: Stack[-8] = (bool) 0
0xe25: Return(); Pop(2)

0xe26: @@ GetProperty(Stack[-6], Stack[-1])
0xe27: Pop(0)
0xe28: PushEmpty(float, float, float, float)
0xe29: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xe2a: Stack[-2] = Stack[-8]
0xe2b: Stack[-1] = Stack[-7]
0xe2c: Call2 0xfc7

0xe2d: Pop(3)
0xe2e: @@ SetProperty(Stack[-7], Stack[-1])
0xe2f: Pop(1)
0xe30: Stack[-8] = (bool) 1
0xe31: Return(); Pop(2)

0xe32: PushEmpty(int, int)
0xe33: @@ GetProperty(Stack[-4], Stack[-1])
0xe34: Pop(0)
0xe35: Pop(0); Push(Stack[-1] + Stack[-3]);
0xe36: @@ SetProperty(Stack[-5], Stack[-1])
0xe37: Pop(1)
0xe38: Return(); Pop(2)

0xe39: PushEmpty(bool, bool)
0xe3a: @@ IsDead(Stack[-1])
0xe3b: Pop(0)
0xe3c: Stack[-4] = Stack[-1]
0xe3d: Return(); Pop(2)

0xe3e: PushEmpty(object, object, object, object)
0xe3f: Pop(0); Push((bool) Stack[-5] == 0)
0xe40: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe41: Stack[-6] = (bool) 0
0xe42: Return(); Pop(4)

0xe43: PushEmpty(bool)
0xe44: Stack[-1] = (bool) 0
0xe45: Push("IsDead")
0xe46: Push((int) 1)
0xe47: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xe48: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe49: PushEmpty(bool, object)
0xe4a: Stack[-1] = Stack[-8]
0xe4b: Call2 0xe39

0xe4c: Pop(1)
0xe4d: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4e: Stack[-1] = (bool) 1
0xe4f: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe50: Stack[-6] = (bool) 0
0xe51: Return(); Pop(4)

0xe52: @ GetScene(Stack[-2])
0xe53: Pop(0)
0xe54: Pop(0); Push((bool) Stack[-2] == 0)
0xe55: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe56: Stack[-6] = (bool) 0
0xe57: Return(); Pop(4)

0xe58: @@ GetScene(Stack[-1])
0xe59: Pop(0)
0xe5a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5c: Stack[-6] = (bool) 0
0xe5d: Return(); Pop(4)

0xe5e: Stack[-6] = (bool) 1
0xe5f: Return(); Pop(4)

0xe60: Stack[-1] = 0
0xe61: Stack[-2] = 0
0xe62: PushEmpty(int, int)
0xe63: PushEmpty(bool, object)
0xe64: Stack[-1] = Stack[-5]
0xe65: Call2 0xe3e

0xe66: Pop(1)
0xe67: Pop(1); Push((bool) Stack[-1] == 0)
0xe68: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe69: Stack[-4] = (bool) 0
0xe6a: Return(); Pop(2)

0xe6b: PushEmpty(bool, object, string)
0xe6c: Stack[-2] = Stack[-6]
0xe6d: Stack[-1] = "noaccess"
0xe6e: Call2 0xe10

0xe6f: Pop(2)
0xe70: Pop(1); Push((bool) Stack[-1] == 0)
0xe71: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe72: Stack[-4] = (bool) 1
0xe73: Return(); Pop(2)

0xe74: Push("noaccess")
0xe75: @@ GetProperty(Stack[-1], Stack[-2])
0xe76: Pop(1)
0xe77: Push((int) 0)
0xe78: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe79: Return(); Pop(2)

0xe7a: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe7b: Pop(0); Push((bool) Stack[-15] == 0)
0xe7c: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe7d: Return(); Pop(14)

0xe7e: @ IsDead(Stack[-7])
0xe7f: Pop(0)
0xe80: Push(Stack[-7])
0xe81: IF (Stack[-1] == 0) GOTO 0xe83; Pop(1)

0xe82: Return(); Pop(14)

0xe83: @ GetSecondaryAnimationType(Stack[-6])
0xe84: Pop(0)
0xe85: Push((int) 0)
0xe86: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe87: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe88: Return(); Pop(14)

0xe89: @@ GetPosition(Stack[-5])
0xe8a: Pop(0)
0xe8b: @ GetPosition(Stack[-4])
0xe8c: Pop(0)
0xe8d: @ GetDirection(Stack[-3])
0xe8e: Pop(0)
0xe8f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe90: Push(CvectorIndex(Stack[-2], 0))
0xe91: Push(CvectorIndex(Stack[-4], 0))
0xe92: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe93: Push(CvectorIndex(Stack[-3], 2))
0xe94: Push(CvectorIndex(Stack[-5], 2))
0xe95: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe96: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe97: Push((int) 0)
0xe98: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe99: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe9a: Stack[-1] = "fhit"
0xe9b: GOTO 0xe9d

0xe9c: Stack[-1] = "bhit"
0xe9d: Push("hit_react")
0xe9e: Push("1")
0xe9f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xea0: Push("2")
0xea1: Pop(1); Push(Stack[-4] + Stack[-1]);
0xea2: Push((int) -10)
0xea3: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea4: Pop(4)
0xea5: Return(); Pop(14)

0xea6: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xea7: PushEmpty(bool)
0xea8: Stack[-1] = (bool) 0
0xea9: PushEmpty(bool)
0xeaa: Stack[-1] = (bool) 0
0xeab: Push(Stack[-23])
0xeac: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xead: Push((int) 4)
0xeae: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeb0: Stack[-1] = (bool) 1
0xeb1: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb2: Push((int) 5)
0xeb3: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb5: Stack[-1] = (bool) 1
0xeb6: IF (Stack[-1] == 0) GOTO 0xee5; Pop(1)

0xeb7: PushEmpty(cvector, cvector)
0xeb8: PushEmpty(cvector, object)
0xeb9: Stack[-1] = Stack[-25]
0xeba: Call2 0xdfc

0xebb: Stack[-3] = Stack[-2]
0xebc: Pop(2)
0xebd: Call2 0xfbd

0xebe: Stack[-11] = Stack[-2]
0xebf: Pop(2)
0xec0: @ CreateVectorVector(Stack[-8])
0xec1: Pop(0)
0xec2: Stack[-7] = (int) 1
0xec3: Push("hit")
0xec4: Pop(1); Push(Stack[-1] + Stack[-8]);
0xec5: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xec6: Pop(1)
0xec7: Pop(0); Push((bool) Stack[-6] == 0)
0xec8: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xec9: GOTO 0xed3

0xeca: Pop(0); Push(Stack[-4] | Stack[-9]);
0xecb: Push((float)0.70711)
0xecc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xecd: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xece: @@ add(Stack[-5])
0xecf: Pop(0)
0xed0: Push((int) 1)
0xed1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xed2: GOTO 0xec3

0xed3: @@ size(Stack[-3])
0xed4: Pop(0)
0xed5: Push(Stack[-3])
0xed6: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xed7: @ irand(Stack[-2], Stack[-3])
0xed8: Pop(0)
0xed9: @@ get(Stack[-1], Stack[-2])
0xeda: Pop(0)
0xedb: PushEmpty(object, int, float, cvector, cvector)
0xedc: Stack[-5] = Stack[-26]
0xedd: Stack[-4] = Stack[-25]
0xede: Stack[-3] = Stack[-24]
0xedf: Stack[-2] = Stack[-6]
0xee0: Stack[-1] = -Stack[-14]; Pop(0);
0xee1: Call2 0xeea

0xee2: Pop(5)
0xee3: Return(); Pop(18)

0xee4: Stack[-8] = 0
0xee5: PushEmpty(object)
0xee6: Stack[-1] = Stack[-22]
0xee7: Call2 0xe7a

0xee8: Pop(1)
0xee9: Return(); Pop(18)

0xeea: PushEmpty(object, object, object, object)
0xeeb: @ GetScene(Stack[-2])
0xeec: Pop(0)
0xeed: Push("scripted")
0xeee: Push("blood_dir.xml")
0xeef: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xef0: Pop(2)
0xef1: PushEmpty(object)
0xef2: Stack[-1] = Stack[-10]
0xef3: Call2 0xe7a

0xef4: Pop(1)
0xef5: Return(); Pop(4)

0xef6: Stack[-1] = 0
0xef7: Stack[-2] = 0
0xef8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xef9: @@ GetPosition(Stack[-3])
0xefa: Pop(0)
0xefb: @ GetPosition(Stack[-2])
0xefc: Pop(0)
0xefd: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xefe: Push(CvectorIndex(Stack[-1], 0))
0xeff: Push(CvectorIndex(Stack[-2], 2))
0xf00: @ RotateAsync(Stack[-2], Stack[-1])
0xf01: Pop(2)
0xf02: Return(); Pop(6)

0xf03: PushEmpty(bool, bool)
0xf04: @ IsLoaded(Stack[-1])
0xf05: Pop(0)
0xf06: Stack[-3] = Stack[-1]
0xf07: Return(); Pop(2)

0xf08: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf09: @@ GetPosition(Stack[-8])
0xf0a: Pop(0)
0xf0b: @@ GetEyesHeight(Stack[-9])
0xf0c: Pop(0)
0xf0d: Push(CvectorIndex(Stack[-8], 1))
0xf0e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf0f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf10: @ GetPosition(Stack[-7])
0xf11: Pop(0)
0xf12: @ GetEyesHeight(Stack[-9])
0xf13: Pop(0)
0xf14: Push(CvectorIndex(Stack[-7], 1))
0xf15: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf16: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf17: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf18: Push(CvectorIndex(Stack[-6], 1))
0xf19: Stack[-1] = (int) 0
0xf1a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf1b: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf1c: Pop(1); Push(Sqrt(Stack[-1]))
0xf1d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf1e: Stack[-5] = -Stack[-6]; Pop(0);
0xf1f: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf20: PushEmpty(cvector, cvector)
0xf21: Push(CVector(0.0, 1.0, 0.0))
0xf22: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf23: Call2 0xfbd

0xf24: Pop(1)
0xf25: Push((int) 25)
0xf26: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf27: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf28: Push(CVector(0.0, 10.0, 0.0))
0xf29: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xf2a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xf2b: @ IsOverrideActive(Stack[-2])
0xf2c: Pop(0)
0xf2d: Push(Stack[-2])
0xf2e: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf2f: Stack[-21] = (bool) 0
0xf30: Return(); Pop(18)

0xf31: @ StopWorld()
0xf32: Pop(0)
0xf33: @ CameraTransit(Stack[-3], Stack[-5])
0xf34: Pop(0)
0xf35: Push(CvectorIndex(Stack[-4], 0))
0xf36: Push(CvectorIndex(Stack[-5], 2))
0xf37: @ Rotate(Stack[-2], Stack[-1])
0xf38: Pop(2)
0xf39: PushEmpty(bool)
0xf3a: Call2 0x144f

0xf3b: Pop(0)
0xf3c: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf3d: GOTO 0xf46

0xf3e: Push("head")
0xf3f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf40: Pop(1)
0xf41: Push(Stack[-1])
0xf42: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf43: Push("head")
0xf44: @ LookAsyncCamera(Stack[-1])
0xf45: Pop(1)
0xf46: @ CameraWaitForPlayFinish()
0xf47: Pop(0)
0xf48: @ ResumeWorld()
0xf49: Pop(0)
0xf4a: Stack[-21] = (bool) 1
0xf4b: Return(); Pop(18)

0xf4c: PushEmpty(bool, bool)
0xf4d: @ CameraSwitchToNormal()
0xf4e: Pop(0)
0xf4f: PushEmpty(bool)
0xf50: Call2 0x144f

0xf51: Pop(0)
0xf52: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf53: GOTO 0xf5c

0xf54: Push("head")
0xf55: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf56: Pop(1)
0xf57: Push(Stack[-1])
0xf58: IF (Stack[-1] == 0) GOTO 0xf5c; Pop(1)

0xf59: Push("head")
0xf5a: @ UnlookAsync(Stack[-1])
0xf5b: Pop(1)
0xf5c: Return(); Pop(2)

0xf5d: PushEmpty(bool, float, float, bool, float, float)
0xf5e: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf5f: Pop(0)
0xf60: Push(Stack[-3])
0xf61: IF (Stack[-1] == 0) GOTO 0xf68; Pop(1)

0xf62: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf63: Pop(0)
0xf64: Push((bool) 0)
0xf65: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf66: Pop(1)
0xf67: GOTO 0xf6c

0xf68: Push("Can't find lsh animation : ")
0xf69: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf6a: @ Trace(Stack[-1])
0xf6b: Pop(1)
0xf6c: Return(); Pop(6)

0xf6d: PushEmpty(bool, float, float, bool, float, float)
0xf6e: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf6f: Pop(0)
0xf70: Push(Stack[-3])
0xf71: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf72: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf73: Pop(0)
0xf74: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf75: Pop(0)
0xf76: GOTO 0xf7b

0xf77: Push("Can't find lsh animation : ")
0xf78: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf79: @ Trace(Stack[-1])
0xf7a: Pop(1)
0xf7b: Return(); Pop(6)

0xf7c: PushEmpty(float, cvector, float, cvector)
0xf7d: @@ GetEyesHeight(Stack[-2])
0xf7e: Pop(0)
0xf7f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xf80: Push(CvectorIndex(Stack[-1], 1))
0xf81: Stack[-1] = Stack[-3]
0xf82: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf83: Push("head")
0xf84: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xf85: Pop(1)
0xf86: Return(); Pop(4)

0xf87: PushEmpty(bool)
0xf88: Call2 0x144f

0xf89: Pop(0)
0xf8a: IF (Stack[-1] == 0) GOTO 0xf8d; Pop(1)

0xf8b: @ lshStopSpeech()
0xf8c: Pop(0)
0xf8d: Return(); Pop(0)

0xf8e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xf8f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xf90: Pop(0)
0xf91: Pop(0); Push((bool) Stack[-8] == 0)
0xf92: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xf93: Stack[-7] = (int) 0
0xf94: Push((int) 1)
0xf95: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf96: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf97: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf98: Pop(1)
0xf99: Pop(0); Push((bool) Stack[-6] == 0)
0xf9a: IF (Stack[-1] == 0) GOTO 0xf9c; Pop(1)

0xf9b: GOTO 0xf9f

0xf9c: Push((int) 1)
0xf9d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf9e: GOTO 0xf94

0xf9f: Pop(0); Push((bool) Stack[-7] == 0)
0xfa0: IF (Stack[-1] == 0) GOTO 0xfa2; Pop(1)

0xfa1: Return(); Pop(16)

0xfa2: @ irand(Stack[-5], Stack[-7])
0xfa3: Pop(0)
0xfa4: Push((int) 1)
0xfa5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xfa6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xfa7: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xfa8: Pop(0)
0xfa9: Push(Stack[-4])
0xfaa: IF (Stack[-1] == 0) GOTO 0xfb6; Pop(1)

0xfab: @ GetEyesHeight(Stack[-3])
0xfac: Pop(0)
0xfad: @ GetDirection(Stack[-2])
0xfae: Pop(0)
0xfaf: Push((int) 50)
0xfb0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xfb1: Push(CvectorIndex(Stack[-1], 1))
0xfb2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xfb3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xfb4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xfb5: Pop(0)
0xfb6: Return(); Pop(16)

0xfb7: PushEmpty(object, object)
0xfb8: @ self(Stack[-1])
0xfb9: Pop(0)
0xfba: Stack[-3] = Stack[-1]
0xfbb: Return(); Pop(2)

0xfbc: Stack[-1] = 0
0xfbd: PushEmpty(float, float)
0xfbe: Pop(0); Push(Stack[-3] | Stack[-3]);
0xfbf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xfc0: Push((float)0.0)
0xfc1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xfc2: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfc3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xfc4: Return(); Pop(2)

0xfc5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xfc6: Return(); Pop(2)

0xfc7: PushEmpty()
0xfc8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xfc9: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfca: Stack[-4] = Stack[-2]
0xfcb: Return(); Pop(0)

0xfcc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xfcd: IF (Stack[-1] == 0) GOTO 0xfd0; Pop(1)

0xfce: Stack[-4] = Stack[-1]
0xfcf: Return(); Pop(0)

0xfd0: Stack[-4] = Stack[-3]
0xfd1: Return(); Pop(0)

0xfd2: PushEmpty()
0xfd3: Pop(0); Push(Stack[-2] | Stack[-1]);
0xfd4: Pop(0); Push(Stack[-3] | Stack[-3]);
0xfd5: Pop(0); Push(Stack[-3] | Stack[-3]);
0xfd6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfd7: Pop(1); Push(Sqrt(Stack[-1]))
0xfd8: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xfd9: Return(); Pop(0)

0xfda: PushEmpty()
0xfdb: Push(CvectorIndex(Stack[-2], 0))
0xfdc: Push(CvectorIndex(Stack[-2], 0))
0xfdd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfde: Push(CvectorIndex(Stack[-3], 2))
0xfdf: Push(CvectorIndex(Stack[-3], 2))
0xfe0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfe1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfe2: Return(); Pop(0)

0xfe3: PushEmpty()
0xfe4: Push(CvectorIndex(Stack[-1], 0))
0xfe5: Push(CvectorIndex(Stack[-2], 0))
0xfe6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfe7: Push(CvectorIndex(Stack[-2], 2))
0xfe8: Push(CvectorIndex(Stack[-3], 2))
0xfe9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfeb: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xfec: Return(); Pop(0)

0xfed: PushEmpty()
0xfee: PushEmpty(float, cvector, cvector)
0xfef: Stack[-2] = Stack[-5]
0xff0: Stack[-1] = Stack[-4]
0xff1: Call2 0xfda

0xff2: Pop(2)
0xff3: PushEmpty(float, cvector)
0xff4: Stack[-1] = Stack[-5]
0xff5: Call2 0xfe3

0xff6: Pop(1)
0xff7: PushEmpty(float, cvector)
0xff8: Stack[-1] = Stack[-5]
0xff9: Call2 0xfe3

0xffa: Pop(1)
0xffb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xffc: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xffd: Return(); Pop(0)

0xffe: PushEmpty(int, int)
0xfff: @ GetVariable(Stack[-3], Stack[-1])
0x1000: Pop(0)
0x1001: Stack[-4] = Stack[-1]
0x1002: Return(); Pop(2)

0x1003: PushEmpty(object, object)
0x1004: @ CreateIntVector(Stack[-1])
0x1005: Pop(0)
0x1006: @@ add(Stack[-4])
0x1007: Pop(0)
0x1008: @@ add(Stack[-3])
0x1009: Pop(0)
0x100a: Push((int) 3)
0x100b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x100c: Pop(1)
0x100d: Return(); Pop(2)

0x100e: Stack[-1] = 0
0x100f: PushEmpty(int, int)
0x1010: PushEmpty(object, string, int)
0x1011: Stack[-3] = Stack[-7]
0x1012: Stack[-2] = "money"
0x1013: Stack[-1] = Stack[-6]
0x1014: Call2 0xe32

0x1015: Pop(3)
0x1016: Push((int) 0)
0x1017: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1018: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x1019: Push("Money")
0x101a: @ GetInvItemByName(Stack[-2], Stack[-1])
0x101b: Pop(1)
0x101c: PushEmpty(int, int)
0x101d: Stack[-2] = Stack[-3]
0x101e: Stack[-1] = Stack[-5]
0x101f: Call2 0x1003

0x1020: Pop(2)
0x1021: Return(); Pop(2)

0x1022: PushEmpty()
0x1023: Pop(0); Push((bool) Stack[-2] == 0)
0x1024: IF (Stack[-1] == 0) GOTO 0x1027; Pop(1)

0x1025: Stack[-3] = (bool) 0
0x1026: Return(); Pop(0)

0x1027: Push((int) 0)
0x1028: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1029: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102a: Push((int) 8)
0x102b: @ SendWorldWndMessage(Stack[-1])
0x102c: Pop(1)
0x102d: GOTO 0x1037

0x102e: Push((int) 0)
0x102f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1030: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x1031: Push((int) 9)
0x1032: @ SendWorldWndMessage(Stack[-1])
0x1033: Pop(1)
0x1034: GOTO 0x1037

0x1035: Stack[-3] = (bool) 0
0x1036: Return(); Pop(0)

0x1037: PushEmpty(float)
0x1038: Stack[-1] = Stack[-2]
0x1039: Call2 0x1045

0x103a: Pop(1)
0x103b: PushEmpty(bool, object, string, float, float, float)
0x103c: Stack[-5] = Stack[-8]
0x103d: Stack[-4] = "reputation"
0x103e: Stack[-3] = Stack[-7]
0x103f: Stack[-2] = (int) 0
0x1040: Stack[-1] = (int) 1
0x1041: Call2 0xe1c

0x1042: Pop(6)
0x1043: Stack[-3] = (bool) 1
0x1044: Return(); Pop(0)

0x1045: PushEmpty(object, object)
0x1046: @ CreateFloatVector(Stack[-1])
0x1047: Pop(0)
0x1048: @@ add(Stack[-3])
0x1049: Pop(0)
0x104a: Push((int) 16)
0x104b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x104c: Pop(1)
0x104d: Return(); Pop(2)

0x104e: Stack[-1] = 0
0x104f: PushEmpty(float, float)
0x1050: @ GetGameTime(Stack[-1])
0x1051: Pop(0)
0x1052: Push((int) 1)
0x1053: PushEmpty(int)
0x1054: Push((int) 24)
0x1055: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1056: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1057: Return(); Pop(2)

0x1058: PushEmpty()
0x1059: Push((int) 100)
0x105a: @@ SetReturnValue(Stack[-1])
0x105b: Pop(1)
0x105c: Return(); Pop(0)

0x105d: PushEmpty()
0x105e: Push((int) 500)
0x105f: @@ SetReturnValue(Stack[-1])
0x1060: Pop(1)
0x1061: Return(); Pop(0)

0x1062: PushEmpty()
0x1063: Push((int) 1000)
0x1064: @@ SetReturnValue(Stack[-1])
0x1065: Pop(1)
0x1066: Return(); Pop(0)

0x1067: PushEmpty()
0x1068: Push((int) 2000)
0x1069: @@ SetReturnValue(Stack[-1])
0x106a: Pop(1)
0x106b: Return(); Pop(0)

0x106c: PushEmpty()
0x106d: Push((int) 3000)
0x106e: @@ SetReturnValue(Stack[-1])
0x106f: Pop(1)
0x1070: Return(); Pop(0)

0x1071: PushEmpty()
0x1072: Push((int) 4000)
0x1073: @@ SetReturnValue(Stack[-1])
0x1074: Pop(1)
0x1075: Return(); Pop(0)

0x1076: PushEmpty()
0x1077: PushEmpty(int, string)
0x1078: Stack[-1] = "branch"
0x1079: Call2 0xffe

0x107a: Pop(1)
0x107b: Push((int) 0)
0x107c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x107d: IF (Stack[-1] == 0) GOTO 0x1080; Pop(1)

0x107e: Stack[-2] = (bool) 1
0x107f: Return(); Pop(0)

0x1080: Stack[-2] = (bool) 0
0x1081: Return(); Pop(0)

0x1082: PushEmpty()
0x1083: PushEmpty(int, string)
0x1084: Stack[-1] = "branch"
0x1085: Call2 0xffe

0x1086: Pop(1)
0x1087: Push((int) 1)
0x1088: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1089: IF (Stack[-1] == 0) GOTO 0x108c; Pop(1)

0x108a: Stack[-2] = (bool) 1
0x108b: Return(); Pop(0)

0x108c: Stack[-2] = (bool) 0
0x108d: Return(); Pop(0)

0x108e: PushEmpty()
0x108f: PushEmpty(int, string)
0x1090: Stack[-1] = "branch"
0x1091: Call2 0xffe

0x1092: Pop(1)
0x1093: Push((int) 2)
0x1094: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1095: IF (Stack[-1] == 0) GOTO 0x1098; Pop(1)

0x1096: Stack[-2] = (bool) 1
0x1097: Return(); Pop(0)

0x1098: Stack[-2] = (bool) 0
0x1099: Return(); Pop(0)

0x109a: PushEmpty()
0x109b: PushEmpty(bool, object)
0x109c: Stack[-1] = Stack[-3]
0x109d: Call2 0x1130

0x109e: Pop(1)
0x109f: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x10a0: Stack[-2] = (bool) 1
0x10a1: Return(); Pop(0)

0x10a2: Stack[-2] = (bool) 0
0x10a3: Return(); Pop(0)

0x10a4: PushEmpty()
0x10a5: PushEmpty(bool, object)
0x10a6: Stack[-1] = Stack[-3]
0x10a7: Call2 0x113b

0x10a8: Pop(1)
0x10a9: IF (Stack[-1] == 0) GOTO 0x10ac; Pop(1)

0x10aa: Stack[-2] = (bool) 1
0x10ab: Return(); Pop(0)

0x10ac: Stack[-2] = (bool) 0
0x10ad: Return(); Pop(0)

0x10ae: PushEmpty()
0x10af: PushEmpty(bool, object)
0x10b0: Stack[-1] = Stack[-3]
0x10b1: Call2 0x1146

0x10b2: Pop(1)
0x10b3: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b4: Stack[-2] = (bool) 1
0x10b5: Return(); Pop(0)

0x10b6: Stack[-2] = (bool) 0
0x10b7: Return(); Pop(0)

0x10b8: PushEmpty()
0x10b9: PushEmpty(bool, object)
0x10ba: Stack[-1] = Stack[-3]
0x10bb: Call2 0x1151

0x10bc: Pop(1)
0x10bd: IF (Stack[-1] == 0) GOTO 0x10c0; Pop(1)

0x10be: Stack[-2] = (bool) 1
0x10bf: Return(); Pop(0)

0x10c0: Stack[-2] = (bool) 0
0x10c1: Return(); Pop(0)

0x10c2: PushEmpty()
0x10c3: PushEmpty(bool, object)
0x10c4: Stack[-1] = Stack[-3]
0x10c5: Call2 0x115c

0x10c6: Pop(1)
0x10c7: IF (Stack[-1] == 0) GOTO 0x10ca; Pop(1)

0x10c8: Stack[-2] = (bool) 1
0x10c9: Return(); Pop(0)

0x10ca: Stack[-2] = (bool) 0
0x10cb: Return(); Pop(0)

0x10cc: PushEmpty()
0x10cd: PushEmpty(bool, object)
0x10ce: Stack[-1] = Stack[-3]
0x10cf: Call2 0x1167

0x10d0: Pop(1)
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10d2: Stack[-2] = (bool) 1
0x10d3: Return(); Pop(0)

0x10d4: Stack[-2] = (bool) 0
0x10d5: Return(); Pop(0)

0x10d6: PushEmpty()
0x10d7: PushEmpty(bool, object)
0x10d8: Stack[-1] = Stack[-3]
0x10d9: Call2 0x1172

0x10da: Pop(1)
0x10db: IF (Stack[-1] == 0) GOTO 0x10de; Pop(1)

0x10dc: Stack[-2] = (bool) 1
0x10dd: Return(); Pop(0)

0x10de: Stack[-2] = (bool) 0
0x10df: Return(); Pop(0)

0x10e0: PushEmpty()
0x10e1: PushEmpty(bool, object)
0x10e2: Stack[-1] = Stack[-3]
0x10e3: Call2 0x1179

0x10e4: Pop(1)
0x10e5: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10e6: Stack[-2] = (bool) 1
0x10e7: Return(); Pop(0)

0x10e8: Stack[-2] = (bool) 0
0x10e9: Return(); Pop(0)

0x10ea: PushEmpty()
0x10eb: PushEmpty(bool, object)
0x10ec: Stack[-1] = Stack[-3]
0x10ed: Call2 0x1180

0x10ee: Pop(1)
0x10ef: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10f0: Stack[-2] = (bool) 1
0x10f1: Return(); Pop(0)

0x10f2: Stack[-2] = (bool) 0
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty()
0x10f5: PushEmpty(bool, object)
0x10f6: Stack[-1] = Stack[-3]
0x10f7: Call2 0x1187

0x10f8: Pop(1)
0x10f9: IF (Stack[-1] == 0) GOTO 0x10fc; Pop(1)

0x10fa: Stack[-2] = (bool) 1
0x10fb: Return(); Pop(0)

0x10fc: Stack[-2] = (bool) 0
0x10fd: Return(); Pop(0)

0x10fe: PushEmpty()
0x10ff: PushEmpty(bool, object)
0x1100: Stack[-1] = Stack[-3]
0x1101: Call2 0x118e

0x1102: Pop(1)
0x1103: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x1104: Stack[-2] = (bool) 1
0x1105: Return(); Pop(0)

0x1106: Stack[-2] = (bool) 0
0x1107: Return(); Pop(0)

0x1108: PushEmpty()
0x1109: PushEmpty(bool, object)
0x110a: Stack[-1] = Stack[-3]
0x110b: Call2 0x1195

0x110c: Pop(1)
0x110d: IF (Stack[-1] == 0) GOTO 0x1110; Pop(1)

0x110e: Stack[-2] = (bool) 1
0x110f: Return(); Pop(0)

0x1110: Stack[-2] = (bool) 0
0x1111: Return(); Pop(0)

0x1112: PushEmpty()
0x1113: PushEmpty(bool, object)
0x1114: Stack[-1] = Stack[-3]
0x1115: Call2 0x119c

0x1116: Pop(1)
0x1117: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1118: Stack[-2] = (bool) 1
0x1119: Return(); Pop(0)

0x111a: Stack[-2] = (bool) 0
0x111b: Return(); Pop(0)

0x111c: PushEmpty()
0x111d: PushEmpty(bool, object)
0x111e: Stack[-1] = Stack[-3]
0x111f: Call2 0x11a3

0x1120: Pop(1)
0x1121: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x1122: Stack[-2] = (bool) 1
0x1123: Return(); Pop(0)

0x1124: Stack[-2] = (bool) 0
0x1125: Return(); Pop(0)

0x1126: PushEmpty()
0x1127: PushEmpty(bool, object)
0x1128: Stack[-1] = Stack[-3]
0x1129: Call2 0x11aa

0x112a: Pop(1)
0x112b: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112c: Stack[-2] = (bool) 1
0x112d: Return(); Pop(0)

0x112e: Stack[-2] = (bool) 0
0x112f: Return(); Pop(0)

0x1130: PushEmpty(float, float)
0x1131: Push("money")
0x1132: @@ GetProperty(Stack[-1], Stack[-2])
0x1133: Pop(1)
0x1134: Push((int) 100)
0x1135: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1136: IF (Stack[-1] == 0) GOTO 0x1139; Pop(1)

0x1137: Stack[-4] = (bool) 1
0x1138: Return(); Pop(2)

0x1139: Stack[-4] = (bool) 0
0x113a: Return(); Pop(2)

0x113b: PushEmpty(float, float)
0x113c: Push("money")
0x113d: @@ GetProperty(Stack[-1], Stack[-2])
0x113e: Pop(1)
0x113f: Push((int) 500)
0x1140: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1141: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x1142: Stack[-4] = (bool) 1
0x1143: Return(); Pop(2)

0x1144: Stack[-4] = (bool) 0
0x1145: Return(); Pop(2)

0x1146: PushEmpty(float, float)
0x1147: Push("money")
0x1148: @@ GetProperty(Stack[-1], Stack[-2])
0x1149: Pop(1)
0x114a: Push((int) 1000)
0x114b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x114c: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x114d: Stack[-4] = (bool) 1
0x114e: Return(); Pop(2)

0x114f: Stack[-4] = (bool) 0
0x1150: Return(); Pop(2)

0x1151: PushEmpty(float, float)
0x1152: Push("money")
0x1153: @@ GetProperty(Stack[-1], Stack[-2])
0x1154: Pop(1)
0x1155: Push((int) 2000)
0x1156: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1157: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x1158: Stack[-4] = (bool) 1
0x1159: Return(); Pop(2)

0x115a: Stack[-4] = (bool) 0
0x115b: Return(); Pop(2)

0x115c: PushEmpty(float, float)
0x115d: Push("money")
0x115e: @@ GetProperty(Stack[-1], Stack[-2])
0x115f: Pop(1)
0x1160: Push((int) 3000)
0x1161: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1162: IF (Stack[-1] == 0) GOTO 0x1165; Pop(1)

0x1163: Stack[-4] = (bool) 1
0x1164: Return(); Pop(2)

0x1165: Stack[-4] = (bool) 0
0x1166: Return(); Pop(2)

0x1167: PushEmpty(float, float)
0x1168: Push("money")
0x1169: @@ GetProperty(Stack[-1], Stack[-2])
0x116a: Pop(1)
0x116b: Push((int) 4000)
0x116c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x116d: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116e: Stack[-4] = (bool) 1
0x116f: Return(); Pop(2)

0x1170: Stack[-4] = (bool) 0
0x1171: Return(); Pop(2)

0x1172: PushEmpty()
0x1173: PushEmpty(int)
0x1174: Call2 0x104f

0x1175: Pop(0)
0x1176: Push((int) 6)
0x1177: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1178: Return(); Pop(0)

0x1179: PushEmpty()
0x117a: PushEmpty(int)
0x117b: Call2 0x104f

0x117c: Pop(0)
0x117d: Push((int) 1)
0x117e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x117f: Return(); Pop(0)

0x1180: PushEmpty()
0x1181: PushEmpty(int)
0x1182: Call2 0x104f

0x1183: Pop(0)
0x1184: Push((int) 3)
0x1185: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1186: Return(); Pop(0)

0x1187: PushEmpty()
0x1188: PushEmpty(int)
0x1189: Call2 0x104f

0x118a: Pop(0)
0x118b: Push((int) 7)
0x118c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x118d: Return(); Pop(0)

0x118e: PushEmpty()
0x118f: PushEmpty(int)
0x1190: Call2 0x104f

0x1191: Pop(0)
0x1192: Push((int) 8)
0x1193: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1194: Return(); Pop(0)

0x1195: PushEmpty()
0x1196: PushEmpty(int)
0x1197: Call2 0x104f

0x1198: Pop(0)
0x1199: Push((int) 9)
0x119a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x119b: Return(); Pop(0)

0x119c: PushEmpty()
0x119d: PushEmpty(int)
0x119e: Call2 0x104f

0x119f: Pop(0)
0x11a0: Push((int) 10)
0x11a1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x11a2: Return(); Pop(0)

0x11a3: PushEmpty()
0x11a4: PushEmpty(int)
0x11a5: Call2 0x104f

0x11a6: Pop(0)
0x11a7: Push((int) 11)
0x11a8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x11a9: Return(); Pop(0)

0x11aa: PushEmpty()
0x11ab: PushEmpty(int)
0x11ac: Call2 0x104f

0x11ad: Pop(0)
0x11ae: Push((int) 12)
0x11af: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x11b0: Return(); Pop(0)

0x11b1: PushEmpty(int, int)
0x11b2: Push("branch")
0x11b3: @ GetVariable(Stack[-1], Stack[-2])
0x11b4: Pop(1)
0x11b5: Push((int) 0)
0x11b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b7: IF (Stack[-1] == 0) GOTO 0x11bb; Pop(1)

0x11b8: Stack[-3] = (int) 1
0x11b9: Return(); Pop(2)

0x11ba: GOTO 0x11c0

0x11bb: Push((int) 1)
0x11bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11bd: IF (Stack[-1] == 0) GOTO 0x11c0; Pop(1)

0x11be: Stack[-3] = (int) 2
0x11bf: Return(); Pop(2)

0x11c0: Stack[-3] = (int) 3
0x11c1: Return(); Pop(2)

0x11c2: PushEmpty(int, int)
0x11c3: Push("branch")
0x11c4: @ GetVariable(Stack[-1], Stack[-2])
0x11c5: Pop(1)
0x11c6: Stack[-3] = Stack[-1]
0x11c7: Return(); Pop(2)

0x11c8: PushEmpty()
0x11c9: PushEmpty(int)
0x11ca: Call2 0x11c2

0x11cb: Pop(0)
0x11cc: Push((int) 1)
0x11cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11ce: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11cf: @ WorkWithCorpse(Stack[-1])
0x11d0: Pop(0)
0x11d1: GOTO 0x11d4

0x11d2: @ Barter(Stack[-1])
0x11d3: Pop(0)
0x11d4: Return(); Pop(0)

0x11d5: PushEmpty(int, bool, int, bool)
0x11d6: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x11d7: IF (Stack[-1] == 0) GOTO 0x11dc; Pop(1)

0x11d8: Push("GenerateMoney: iMin > iMax")
0x11d9: @ Trace(Stack[-1])
0x11da: Pop(1)
0x11db: Return(); Pop(4)

0x11dc: Stack[-2] = (int) 0
0x11dd: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x11de: IF (Stack[-1] == 0) GOTO 0x11e3; Pop(1)

0x11df: Pop(0); Push(Stack[-5] - Stack[-6]);
0x11e0: @ irand(Stack[-3], Stack[-1])
0x11e1: Pop(1)
0x11e2: GOTO 0x11e7

0x11e3: Push((int) 0)
0x11e4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11e7; Pop(1)

0x11e6: Return(); Pop(4)

0x11e7: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x11e8: Push((int) 0)
0x11e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ea: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11eb: Return(); Pop(4)

0x11ec: PushEmpty(int, string)
0x11ed: Stack[-1] = "Money"
0x11ee: Call2 0x12cc

0x11ef: Pop(1)
0x11f0: Push((int) 0)
0x11f1: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x11f2: Pop(2)
0x11f3: Return(); Pop(4)

0x11f4: PushEmpty(object, int, bool, object, int, bool)
0x11f5: @ CreateInvItem(Stack[-3])
0x11f6: Pop(0)
0x11f7: @@ SetItemName(Stack[-7])
0x11f8: Pop(0)
0x11f9: Push("Organ")
0x11fa: Push((int) 1)
0x11fb: @@ SetProperty(Stack[-2], Stack[-1])
0x11fc: Pop(2)
0x11fd: @@ GetItemID(Stack[-2])
0x11fe: Pop(0)
0x11ff: Push((int) 0)
0x1200: Push((int) 1)
0x1201: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1202: Pop(2)
0x1203: Return(); Pop(6)

0x1204: Stack[-3] = 0
0x1205: PushEmpty(int)
0x1206: Call2 0x11c2

0x1207: Pop(0)
0x1208: Push((int) 1)
0x1209: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x120a: IF (Stack[-1] == 0) GOTO 0x120c; Pop(1)

0x120b: Return(); Pop(0)

0x120c: PushEmpty(string)
0x120d: Stack[-1] = "liver"
0x120e: Call2 0x11f4

0x120f: Pop(1)
0x1210: PushEmpty(string)
0x1211: Stack[-1] = "kidney"
0x1212: Call2 0x11f4

0x1213: Pop(1)
0x1214: PushEmpty(string)
0x1215: Stack[-1] = "heart"
0x1216: Call2 0x11f4

0x1217: Pop(1)
0x1218: PushEmpty(string)
0x1219: Stack[-1] = "blood"
0x121a: Call2 0x11f4

0x121b: Pop(1)
0x121c: Return(); Pop(0)

0x121d: PushEmpty(int, bool, int, bool)
0x121e: Push(Stack[-5])
0x121f: IF (Stack[-1] == 0) GOTO 0x1276; Pop(1)

0x1220: PushEmpty(int, int)
0x1221: Stack[-2] = (int) 0
0x1222: Push((int) 100)
0x1223: PushEmpty(int)
0x1224: Call2 0x104f

0x1225: Pop(0)
0x1226: Push((int) 100)
0x1227: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1228: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1229: Call2 0x11d5

0x122a: Pop(2)
0x122b: Push((int) 8)
0x122c: @ irand(Stack[-3], Stack[-1])
0x122d: Pop(1)
0x122e: Push((int) 0)
0x122f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1230: IF (Stack[-1] == 0) GOTO 0x123a; Pop(1)

0x1231: PushEmpty(int, string)
0x1232: Stack[-1] = "lemon"
0x1233: Call2 0x12cc

0x1234: Pop(1)
0x1235: Push((int) 0)
0x1236: Push((int) 1)
0x1237: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1238: Pop(3)
0x1239: GOTO 0x1275

0x123a: Push((int) 1)
0x123b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123c: IF (Stack[-1] == 0) GOTO 0x1246; Pop(1)

0x123d: PushEmpty(int, string)
0x123e: Stack[-1] = "rusk"
0x123f: Call2 0x12cc

0x1240: Pop(1)
0x1241: Push((int) 0)
0x1242: Push((int) 1)
0x1243: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1244: Pop(3)
0x1245: GOTO 0x1275

0x1246: Push((int) 2)
0x1247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1248: IF (Stack[-1] == 0) GOTO 0x1252; Pop(1)

0x1249: PushEmpty(int, string)
0x124a: Stack[-1] = "hook"
0x124b: Call2 0x12cc

0x124c: Pop(1)
0x124d: Push((int) 0)
0x124e: Push((int) 1)
0x124f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1250: Pop(3)
0x1251: GOTO 0x1275

0x1252: Push((int) 4)
0x1253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1254: IF (Stack[-1] == 0) GOTO 0x125e; Pop(1)

0x1255: PushEmpty(int, string)
0x1256: Stack[-1] = "syringe"
0x1257: Call2 0x12cc

0x1258: Pop(1)
0x1259: Push((int) 0)
0x125a: Push((int) 1)
0x125b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x125c: Pop(3)
0x125d: GOTO 0x1275

0x125e: Push((int) 5)
0x125f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1260: IF (Stack[-1] == 0) GOTO 0x126a; Pop(1)

0x1261: PushEmpty(int, string)
0x1262: Stack[-1] = "watch"
0x1263: Call2 0x12cc

0x1264: Pop(1)
0x1265: Push((int) 0)
0x1266: Push((int) 1)
0x1267: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1268: Pop(3)
0x1269: GOTO 0x1275

0x126a: Push((int) 6)
0x126b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126c: IF (Stack[-1] == 0) GOTO 0x1275; Pop(1)

0x126d: PushEmpty(int, string)
0x126e: Stack[-1] = "razor"
0x126f: Call2 0x12cc

0x1270: Pop(1)
0x1271: Push((int) 0)
0x1272: Push((int) 1)
0x1273: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1274: Pop(3)
0x1275: GOTO 0x12cb

0x1276: PushEmpty(int, int)
0x1277: Stack[-2] = (int) 0
0x1278: Push((int) 50)
0x1279: PushEmpty(int)
0x127a: Call2 0x104f

0x127b: Pop(0)
0x127c: Push((int) 50)
0x127d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x127e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x127f: Call2 0x11d5

0x1280: Pop(2)
0x1281: Push((int) 7)
0x1282: @ irand(Stack[-3], Stack[-1])
0x1283: Pop(1)
0x1284: Push((int) 0)
0x1285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1286: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x1287: PushEmpty(int, string)
0x1288: Stack[-1] = "beads"
0x1289: Call2 0x12cc

0x128a: Pop(1)
0x128b: Push((int) 0)
0x128c: Push((int) 1)
0x128d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x128e: Pop(3)
0x128f: GOTO 0x12cb

0x1290: Push((int) 1)
0x1291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1292: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x1293: PushEmpty(int, string)
0x1294: Stack[-1] = "bracelet"
0x1295: Call2 0x12cc

0x1296: Pop(1)
0x1297: Push((int) 0)
0x1298: Push((int) 1)
0x1299: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x129a: Pop(3)
0x129b: GOTO 0x12cb

0x129c: Push((int) 2)
0x129d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129e: IF (Stack[-1] == 0) GOTO 0x12a8; Pop(1)

0x129f: PushEmpty(int, string)
0x12a0: Stack[-1] = "ear_ring"
0x12a1: Call2 0x12cc

0x12a2: Pop(1)
0x12a3: Push((int) 0)
0x12a4: Push((int) 1)
0x12a5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12a6: Pop(3)
0x12a7: GOTO 0x12cb

0x12a8: Push((int) 3)
0x12a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12aa: IF (Stack[-1] == 0) GOTO 0x12b4; Pop(1)

0x12ab: PushEmpty(int, string)
0x12ac: Stack[-1] = "gold_ring"
0x12ad: Call2 0x12cc

0x12ae: Pop(1)
0x12af: Push((int) 0)
0x12b0: Push((int) 1)
0x12b1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12b2: Pop(3)
0x12b3: GOTO 0x12cb

0x12b4: Push((int) 4)
0x12b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b6: IF (Stack[-1] == 0) GOTO 0x12c0; Pop(1)

0x12b7: PushEmpty(int, string)
0x12b8: Stack[-1] = "silver_ring"
0x12b9: Call2 0x12cc

0x12ba: Pop(1)
0x12bb: Push((int) 0)
0x12bc: Push((int) 1)
0x12bd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12be: Pop(3)
0x12bf: GOTO 0x12cb

0x12c0: Push((int) 5)
0x12c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c2: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12c3: PushEmpty(int, string)
0x12c4: Stack[-1] = "flower"
0x12c5: Call2 0x12cc

0x12c6: Pop(1)
0x12c7: Push((int) 0)
0x12c8: Push((int) 1)
0x12c9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12ca: Pop(3)
0x12cb: Return(); Pop(4)

0x12cc: PushEmpty(int, int)
0x12cd: @ GetInvItemByName(Stack[-1], Stack[-3])
0x12ce: Pop(0)
0x12cf: Stack[-4] = Stack[-1]
0x12d0: Return(); Pop(2)

0x12d1: PushEmpty()
0x12d2: PushEmpty(object)
0x12d3: Stack[-1] = Stack[-2]
0x12d4: Push(-1, 0); TaskCall(2)
0x12d5: Call2 0x782

0x12d6: Pop(-1, 0); TaskReturn
0x12d7: Pop(1)
0x12d8: Return(); Pop(0)

0x12d9: PushEmpty(float, float)
0x12da: Push("health")
0x12db: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12dc: IF (Stack[-1] == 0) GOTO 0x12e5; Pop(1)

0x12dd: Push("health")
0x12de: @ GetProperty(Stack[-1], Stack[-2])
0x12df: Pop(1)
0x12e0: Push((int) 0)
0x12e1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e5; Pop(1)

0x12e3: @ SignalDeath(Stack[-4])
0x12e4: Pop(0)
0x12e5: Return(); Pop(2)

0x12e6: PushEmpty()
0x12e7: PushEmpty(object)
0x12e8: Stack[-1] = Stack[-2]
0x12e9: Call2 0x12d1

0x12ea: Pop(1)
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty()
0x12ed: PushEmpty(object, int, float)
0x12ee: Stack[-3] = Stack[-7]
0x12ef: Stack[-2] = Stack[-6]
0x12f0: Stack[-1] = Stack[-5]
0x12f1: Call2 0xea6

0x12f2: Pop(3)
0x12f3: Return(); Pop(0)

0x12f4: PushEmpty()
0x12f5: PushEmpty(object, int, float, cvector, cvector)
0x12f6: Stack[-5] = Stack[-11]
0x12f7: Stack[-4] = Stack[-10]
0x12f8: Stack[-3] = Stack[-9]
0x12f9: Stack[-2] = Stack[-7]
0x12fa: Stack[-1] = Stack[-6]
0x12fb: Call2 0xeea

0x12fc: Pop(5)
0x12fd: Return(); Pop(0)

0x12fe: PushEmpty()
0x12ff: Push("unholster")
0x1300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1301: IF (Stack[-1] == 0) GOTO 0x1309; Pop(1)

0x1302: PushEmpty(bool, object)
0x1303: Stack[-1] = Stack[-4]
0x1304: Call2 0x1421

0x1305: Stack[-5] = Stack[-2]
0x1306: Pop(2)
0x1307: Return(); Pop(0)

0x1308: GOTO 0x131c

0x1309: Push("player_shot")
0x130a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130b: IF (Stack[-1] == 0) GOTO 0x1313; Pop(1)

0x130c: PushEmpty(bool, object)
0x130d: Stack[-1] = Stack[-4]
0x130e: Call2 0x1426

0x130f: Stack[-5] = Stack[-2]
0x1310: Pop(2)
0x1311: Return(); Pop(0)

0x1312: GOTO 0x131c

0x1313: Push("battle")
0x1314: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1315: IF (Stack[-1] == 0) GOTO 0x131c; Pop(1)

0x1316: PushEmpty(bool, object)
0x1317: Stack[-1] = Stack[-4]
0x1318: Call2 0x143d

0x1319: Stack[-5] = Stack[-2]
0x131a: Pop(2)
0x131b: Return(); Pop(0)

0x131c: Stack[-3] = (bool) 0
0x131d: Return(); Pop(0)

0x131e: PushEmpty()
0x131f: Push("unholster")
0x1320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1321: IF (Stack[-1] == 0) GOTO 0x1327; Pop(1)

0x1322: PushEmpty(object)
0x1323: Stack[-1] = Stack[-3]
0x1324: Call2 0x1424

0x1325: Pop(1)
0x1326: GOTO 0x1336

0x1327: Push("player_shot")
0x1328: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1329: IF (Stack[-1] == 0) GOTO 0x132f; Pop(1)

0x132a: PushEmpty(object)
0x132b: Stack[-1] = Stack[-3]
0x132c: Call2 0x1435

0x132d: Pop(1)
0x132e: GOTO 0x1336

0x132f: Push("battle")
0x1330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1331: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x1332: PushEmpty(object)
0x1333: Stack[-1] = Stack[-3]
0x1334: Call2 0x1440

0x1335: Pop(1)
0x1336: Return(); Pop(0)

0x1337: PushEmpty(bool, bool)
0x1338: PushEmpty(bool)
0x1339: Stack[-1] = (bool) 0
0x133a: PushEmpty(bool, object)
0x133b: Stack[-1] = Stack[-6]
0x133c: Call2 0x1421

0x133d: Pop(1)
0x133e: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x133f: PushEmpty(bool, object)
0x1340: Stack[-1] = Stack[-6]
0x1341: Call2 0xe0b

0x1342: Pop(1)
0x1343: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x1344: Stack[-1] = (bool) 1
0x1345: IF (Stack[-1] == 0) GOTO 0x134c; Pop(1)

0x1346: @@ IsWeaponHolstered(Stack[-1])
0x1347: Pop(0)
0x1348: Pop(0); Push((bool) Stack[-1] == 0)
0x1349: IF (Stack[-1] == 0) GOTO 0x134c; Pop(1)

0x134a: Stack[-4] = (bool) 1
0x134b: Return(); Pop(2)

0x134c: Stack[-4] = (bool) 0
0x134d: Return(); Pop(2)

0x134e: PushEmpty()
0x134f: PushEmpty(object)
0x1350: Stack[-1] = Stack[-2]
0x1351: Call2 0x1424

0x1352: Pop(1)
0x1353: Return(); Pop(0)

0x1354: PushEmpty()
0x1355: PushEmpty(bool, object)
0x1356: Stack[-1] = Stack[-3]
0x1357: Call2 0xe0b

0x1358: Pop(1)
0x1359: IF (Stack[-1] == 0) GOTO 0x1360; Pop(1)

0x135a: PushEmpty(object)
0x135b: Call2 0xfb7

0x135c: Pop(0)
0x135d: Push((float)-0.02)
0x135e: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x135f: Pop(2)
0x1360: Return(); Pop(0)

0x1361: PushEmpty(object, object)
0x1362: Push("heal")
0x1363: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1364: IF (Stack[-1] == 0) GOTO 0x136f; Pop(1)

0x1365: Push("player")
0x1366: @ FindActor(Stack[-2], Stack[-1])
0x1367: Pop(1)
0x1368: PushEmpty(bool, object)
0x1369: Stack[-1] = Stack[-3]
0x136a: Call2 0x1442

0x136b: Stack[-6] = Stack[-2]
0x136c: Pop(2)
0x136d: Return(); Pop(2)

0x136e: Stack[-1] = 0
0x136f: Stack[-4] = (bool) 0
0x1370: Return(); Pop(2)

0x1371: PushEmpty(object, object)
0x1372: Push("heal")
0x1373: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1374: IF (Stack[-1] == 0) GOTO 0x137d; Pop(1)

0x1375: Push("player")
0x1376: @ FindActor(Stack[-2], Stack[-1])
0x1377: Pop(1)
0x1378: PushEmpty(object)
0x1379: Stack[-1] = Stack[-2]
0x137a: Call2 0x1445

0x137b: Pop(1)
0x137c: Stack[-1] = 0
0x137d: Return(); Pop(2)

0x137e: PushEmpty(string, string)
0x137f: Stack[-1] = "idle"
0x1380: Push(Stack[-3])
0x1381: IF (Stack[-1] == 0) GOTO 0x1383; Pop(1)

0x1382: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1383: Stack[-4] = Stack[-1]
0x1384: Return(); Pop(2)

0x1385: PushEmpty(int, bool, int, bool)
0x1386: Stack[-2] = (int) 0
0x1387: Push("all")
0x1388: PushEmpty(string, int)
0x1389: Stack[-1] = Stack[-5]
0x138a: Call2 0x137e

0x138b: Pop(1)
0x138c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x138d: Pop(2)
0x138e: Pop(0); Push((bool) Stack[-1] == 0)
0x138f: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x1390: GOTO 0x1394

0x1391: Push((int) 1)
0x1392: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1393: GOTO 0x1387

0x1394: Stack[-5] = Stack[-2]
0x1395: Return(); Pop(4)

0x1396: PushEmpty()
0x1397: PushEmpty(bool)
0x1398: Call2 0x14cb

0x1399: Pop(0)
0x139a: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x139b: Stack[-2] = (int) 2
0x139c: GOTO 0x139e

0x139d: Stack[-2] = (int) 0
0x139e: Return(); Pop(0)

0x139f: PushEmpty()
0x13a0: PushEmpty(object)
0x13a1: Stack[-1] = Stack[-2]
0x13a2: Push(-1, 1); TaskCall(5)
0x13a3: Call2 0xa89

0x13a4: Pop(-1, 1); TaskReturn
0x13a5: Pop(1)
0x13a6: Return(); Pop(0)

0x13a7: PushEmpty()
0x13a8: PushEmpty(bool, object)
0x13a9: Stack[-1] = Stack[-3]
0x13aa: Call2 0xe62

0x13ab: Pop(1)
0x13ac: IF (Stack[-1] == 0) GOTO 0x13af; Pop(1)

0x13ad: Stack[-2] = (int) 2
0x13ae: GOTO 0x13b0

0x13af: Stack[-2] = (int) 0
0x13b0: Return(); Pop(0)

0x13b1: PushEmpty()
0x13b2: PushEmpty(object)
0x13b3: Stack[-1] = Stack[-2]
0x13b4: Push(-1, 3); TaskCall(6)
0x13b5: Call2 0xb9c

0x13b6: Pop(-1, 3); TaskReturn
0x13b7: Pop(1)
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty()
0x13ba: PushEmpty(bool, object)
0x13bb: Stack[-1] = Stack[-4]
0x13bc: Call2 0xe62

0x13bd: Pop(1)
0x13be: IF (Stack[-1] == 0) GOTO 0x13c1; Pop(1)

0x13bf: Stack[-3] = (int) 2
0x13c0: GOTO 0x13c2

0x13c1: Stack[-3] = (int) 0
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: PushEmpty(object)
0x13c5: Stack[-1] = Stack[-2]
0x13c6: Push(-1, 3); TaskCall(7)
0x13c7: Call2 0xc98

0x13c8: Pop(-1, 3); TaskReturn
0x13c9: Pop(1)
0x13ca: Return(); Pop(0)

0x13cb: PushEmpty(string, bool, string, bool)
0x13cc: PushEmpty(bool, object, string)
0x13cd: Stack[-2] = Stack[-9]
0x13ce: Stack[-1] = "class"
0x13cf: Call2 0xe10

0x13d0: Pop(2)
0x13d1: Pop(1); Push((bool) Stack[-1] == 0)
0x13d2: IF (Stack[-1] == 0) GOTO 0x13d5; Pop(1)

0x13d3: Stack[-8] = (bool) 0
0x13d4: Return(); Pop(4)

0x13d5: Push("class")
0x13d6: @@ GetProperty(Stack[-1], Stack[-3])
0x13d7: Pop(1)
0x13d8: Push("rat")
0x13d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13da: IF (Stack[-1] == 0) GOTO 0x13de; Pop(1)

0x13db: Stack[-8] = (bool) 0
0x13dc: Return(); Pop(4)

0x13dd: GOTO 0x13e9

0x13de: Push("rat_big")
0x13df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e0: IF (Stack[-1] == 0) GOTO 0x13e4; Pop(1)

0x13e1: Stack[-8] = (bool) 0
0x13e2: Return(); Pop(4)

0x13e3: GOTO 0x13e9

0x13e4: Push("dog")
0x13e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e6: IF (Stack[-1] == 0) GOTO 0x13e9; Pop(1)

0x13e7: Stack[-8] = (bool) 0
0x13e8: Return(); Pop(4)

0x13e9: @ CanSee(Stack[-1], Stack[-7])
0x13ea: Pop(0)
0x13eb: PushEmpty(bool)
0x13ec: Stack[-1] = (bool) 1
0x13ed: Push(Stack[-2])
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f7; Pop(1)

0x13ef: PushEmpty(float, object)
0x13f0: Stack[-1] = Stack[-10]
0x13f1: Call2 0xe03

0x13f2: Pop(1)
0x13f3: Pop(0); Push(Stack[-7] * Stack[-7]);
0x13f4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x13f5: IF (Stack[-1] == 0) GOTO 0x13f7; Pop(1)

0x13f6: Stack[-1] = (bool) 0
0x13f7: IF (Stack[-1] == 0) GOTO 0x13fa; Pop(1)

0x13f8: Stack[-8] = (bool) 1
0x13f9: Return(); Pop(4)

0x13fa: @ CanSee(Stack[-1], Stack[-6])
0x13fb: Pop(0)
0x13fc: PushEmpty(bool)
0x13fd: Stack[-1] = (bool) 1
0x13fe: Push(Stack[-2])
0x13ff: IF (Stack[-1] == 0) GOTO 0x1408; Pop(1)

0x1400: PushEmpty(float, object)
0x1401: Stack[-1] = Stack[-9]
0x1402: Call2 0xe03

0x1403: Pop(1)
0x1404: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1405: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1406: IF (Stack[-1] == 0) GOTO 0x1408; Pop(1)

0x1407: Stack[-1] = (bool) 0
0x1408: IF (Stack[-1] == 0) GOTO 0x140b; Pop(1)

0x1409: Stack[-8] = (bool) 1
0x140a: Return(); Pop(4)

0x140b: Stack[-8] = (bool) 0
0x140c: Return(); Pop(4)

0x140d: PushEmpty()
0x140e: Stack[-2] = (int) 0
0x140f: Return(); Pop(0)

0x1410: PushEmpty()
0x1411: Return(); Pop(0)

0x1412: PushEmpty()
0x1413: Stack[-3] = (int) 0
0x1414: Return(); Pop(0)

0x1415: PushEmpty()
0x1416: Return(); Pop(0)

0x1417: PushEmpty()
0x1418: Stack[-2] = (int) 2
0x1419: Return(); Pop(0)

0x141a: PushEmpty()
0x141b: PushEmpty(object)
0x141c: Stack[-1] = Stack[-2]
0x141d: Call2 0x1455

0x141e: Pop(1)
0x141f: Return(); Pop(0)

0x1420: Return(); Pop(0)

0x1421: PushEmpty()
0x1422: Stack[-2] = (bool) 0
0x1423: Return(); Pop(0)

0x1424: PushEmpty()
0x1425: Return(); Pop(0)

0x1426: PushEmpty(bool, bool)
0x1427: @ CanSee(Stack[-1], Stack[-3])
0x1428: Pop(0)
0x1429: Stack[-4] = (bool) 1
0x142a: Push(Stack[-1])
0x142b: IF (Stack[-1] == 0) GOTO 0x1434; Pop(1)

0x142c: PushEmpty(float, object)
0x142d: Stack[-1] = Stack[-5]
0x142e: Call2 0xe03

0x142f: Pop(1)
0x1430: Push((int) 4000000)
0x1431: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1432: IF (Stack[-1] == 0) GOTO 0x1434; Pop(1)

0x1433: Stack[-4] = (bool) 0
0x1434: Return(); Pop(2)

0x1435: PushEmpty()
0x1436: PushEmpty(object)
0x1437: Stack[-1] = Stack[-2]
0x1438: Push(-1, 3); TaskCall(8)
0x1439: Call2 0xd5a

0x143a: Pop(-1, 3); TaskReturn
0x143b: Pop(1)
0x143c: Return(); Pop(0)

0x143d: PushEmpty()
0x143e: Stack[-2] = (bool) 0
0x143f: Return(); Pop(0)

0x1440: PushEmpty()
0x1441: Return(); Pop(0)

0x1442: PushEmpty()
0x1443: Stack[-2] = (bool) 0
0x1444: Return(); Pop(0)

0x1445: PushEmpty()
0x1446: Return(); Pop(0)

0x1447: Stack[-1] = (int) 515563
0x1448: Return(); Pop(0)

0x1449: Stack[-1] = (int) 503348
0x144a: Return(); Pop(0)

0x144b: Stack[-1] = "ui/NPC_Citizen3.png"
0x144c: Return(); Pop(0)

0x144d: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x144e: Return(); Pop(0)

0x144f: Stack[-1] = (bool) 0
0x1450: Return(); Pop(0)

0x1451: Push(GlobalVars[0])
0x1452: Stack[-1] = (bool) 0
0x1453: GlobalVars[0] = Stack[-1]; Pop(1)
0x1454: Return(); Pop(0)

0x1455: PushEmpty(bool, int, float, int, bool, int, float, int)
0x1456: Push(GlobalVars[0])
0x1457: IF (Stack[-1] == 0) GOTO 0x1462; Pop(1)

0x1458: @ IsOverrideActive(Stack[-4])
0x1459: Pop(0)
0x145a: Pop(0); Push((bool) Stack[-4] == 0)
0x145b: IF (Stack[-1] == 0) GOTO 0x1460; Pop(1)

0x145c: PushEmpty(object)
0x145d: Stack[-1] = Stack[-10]
0x145e: Call2 0x11c8

0x145f: Pop(1)
0x1460: Return(); Pop(8)

0x1461: GOTO 0x14ca

0x1462: Push(GlobalVars[1])
0x1463: IF (Stack[-1] == 0) GOTO 0x1465; Pop(1)

0x1464: Return(); Pop(8)

0x1465: PushEmpty(int, object)
0x1466: Stack[-1] = Stack[-11]
0x1467: Push(-2, 1); TaskCall(0)
0x1468: Call2 0x0

0x1469: Pop(-2, 1); TaskReturn
0x146a: Stack[-5] = Stack[-2]
0x146b: Pop(2)
0x146c: Push((int) -1)
0x146d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x146e: IF (Stack[-1] == 0) GOTO 0x1470; Pop(1)

0x146f: Return(); Pop(8)

0x1470: Push(GlobalVars[1])
0x1471: Stack[-1] = (bool) 1
0x1472: GlobalVars[1] = Stack[-1]; Pop(1)
0x1473: Push((float)10000.0)
0x1474: Stack[-3] = Stack[-4] / Stack[-1]; Pop(1);
0x1475: PushEmpty(int)
0x1476: Call2 0x104f

0x1477: Stack[-2] = Stack[-1]
0x1478: Pop(1)
0x1479: Push((int) 1)
0x147a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147b: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x147c: Push((float)3.33333)
0x147d: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x147e: GOTO 0x14c0

0x147f: Push((int) 2)
0x1480: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1481: IF (Stack[-1] == 0) GOTO 0x1485; Pop(1)

0x1482: Push((float)0.33333)
0x1483: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1484: GOTO 0x14c0

0x1485: Push((int) 3)
0x1486: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1487: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1488: Push((float)0.66667)
0x1489: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x148a: GOTO 0x14c0

0x148b: Push((int) 4)
0x148c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148d: IF (Stack[-1] == 0) GOTO 0x1491; Pop(1)

0x148e: Push((float)1.25)
0x148f: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1490: GOTO 0x14c0

0x1491: Push((int) 5)
0x1492: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1493: IF (Stack[-1] == 0) GOTO 0x1497; Pop(1)

0x1494: Push((float)0.83333)
0x1495: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1496: GOTO 0x14c0

0x1497: Push((int) 6)
0x1498: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1499: IF (Stack[-1] == 0) GOTO 0x149d; Pop(1)

0x149a: Push((float)0.5)
0x149b: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x149c: GOTO 0x14c0

0x149d: Push((int) 7)
0x149e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x149f: IF (Stack[-1] == 0) GOTO 0x14a3; Pop(1)

0x14a0: Push((float)1.0)
0x14a1: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14a2: GOTO 0x14c0

0x14a3: Push((int) 8)
0x14a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a5: IF (Stack[-1] == 0) GOTO 0x14a9; Pop(1)

0x14a6: Push((float)0.83333)
0x14a7: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14a8: GOTO 0x14c0

0x14a9: Push((int) 9)
0x14aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14ab: IF (Stack[-1] == 0) GOTO 0x14af; Pop(1)

0x14ac: Push((float)0.33333)
0x14ad: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14ae: GOTO 0x14c0

0x14af: Push((int) 10)
0x14b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b1: IF (Stack[-1] == 0) GOTO 0x14b5; Pop(1)

0x14b2: Push((float)0.37037)
0x14b3: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14b4: GOTO 0x14c0

0x14b5: Push((int) 11)
0x14b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b7: IF (Stack[-1] == 0) GOTO 0x14bb; Pop(1)

0x14b8: Push((float)0.41667)
0x14b9: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14ba: GOTO 0x14c0

0x14bb: Push((int) 12)
0x14bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14bd: IF (Stack[-1] == 0) GOTO 0x14c0; Pop(1)

0x14be: Push((float)0.5)
0x14bf: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x14c0: PushEmpty(bool, object, float)
0x14c1: Stack[-2] = Stack[-12]
0x14c2: Stack[-1] = Stack[-5]
0x14c3: Call2 0x1022

0x14c4: Pop(3)
0x14c5: PushEmpty(object, int)
0x14c6: Stack[-2] = Stack[-11]
0x14c7: Stack[-1] = -Stack[-5]; Pop(0);
0x14c8: Call2 0x100f

0x14c9: Pop(2)
0x14ca: Return(); Pop(8)

0x14cb: Stack[-1] = (bool) 0
0x14cc: Return(); Pop(0)

0x14cd: PushEmpty()
0x14ce: PushEmpty(bool, object, object, float)
0x14cf: Stack[-3] = Stack[-7]
0x14d0: Stack[-2] = Stack[-6]
0x14d1: Stack[-1] = (float) 700.0
0x14d2: Call2 0x13cb

0x14d3: Stack[-8] = Stack[-4]
0x14d4: Pop(4)
0x14d5: Return(); Pop(0)

0x14d6: PushEmpty()
0x14d7: PushEmpty(bool, object)
0x14d8: Stack[-1] = Stack[-3]
0x14d9: Call2 0xe0b

0x14da: Pop(1)
0x14db: IF (Stack[-1] == 0) GOTO 0x14e7; Pop(1)

0x14dc: PushEmpty(object)
0x14dd: Call2 0xfb7

0x14de: Pop(0)
0x14df: Push((float)-0.03)
0x14e0: Push((bool) 1)
0x14e1: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14e2: Pop(3)
0x14e3: PushEmpty(bool)
0x14e4: Stack[-1] = (bool) 1
0x14e5: Call2 0x121d

0x14e6: Pop(1)
0x14e7: PushEmpty()
0x14e8: Call2 0x1205

0x14e9: Pop(0)
0x14ea: Push(GlobalVars[0])
0x14eb: Stack[-1] = (bool) 1
0x14ec: GlobalVars[0] = Stack[-1]; Pop(1)
0x14ed: Push((int) 50)
0x14ee: Push((int) 40)
0x14ef: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14f0: Pop(2)
0x14f1: Return(); Pop(0)

