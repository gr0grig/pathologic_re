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

RunOp = 0xb13
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x23e Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0xa86 Vars = (object)
		EVENT_6 Op = 0xa94 Vars = ()
		EVENT_22 Op = 0xb0d Vars = (object, int, float, float)
		EVENT_16 Op = 0xb0f Vars = (object, string)
		EVENT_41 Op = 0xb11 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xb2b Vars = (object)
		EVENT_17 Op = 0xb3f Vars = (object)
		EVENT_30 Op = 0xb57 Vars = (object, object, bool)
		EVENT_40 Op = 0xb73 Vars = (object)
		EVENT_42 Op = 0xb87 Vars = (object, string)
		EVENT_26 Op = 0xbac Vars = (string)
		EVENT_1 Op = 0xbba Vars = (object)
		EVENT_3 Op = 0xbcd Vars = (object)
		EVENT_7 Op = 0xbd3 Vars = (int)
		EVENT_6 Op = 0xbdf Vars = ()
		EVENT_41 Op = 0xbf6 Vars = (object)
		EVENT_10 Op = 0xc67 Vars = (object)
		EVENT_28 Op = 0xc6b Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0xc84 Vars = (object)
		EVENT_17 Op = 0xc98 Vars = (object)
		EVENT_30 Op = 0xcb0 Vars = (object, object, bool)
		EVENT_40 Op = 0xccc Vars = (object)
		EVENT_42 Op = 0xce0 Vars = (object, string)
		EVENT_26 Op = 0xd05 Vars = (string)
		EVENT_6 Op = 0xd13 Vars = ()
		EVENT_1 Op = 0xd1a Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0xdb6 Vars = (object)
		EVENT_17 Op = 0xdca Vars = (object)
		EVENT_30 Op = 0xde2 Vars = (object, object, bool)
		EVENT_40 Op = 0xdfe Vars = (object)
		EVENT_42 Op = 0xe12 Vars = (object, string)
		EVENT_26 Op = 0xe37 Vars = (string)
		EVENT_41 Op = 0xe50 Vars = (object)
		EVENT_7 Op = 0xe59 Vars = (int)
		EVENT_6 Op = 0xe7c Vars = ()
		EVENT_1 Op = 0xe83 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xead Vars = ()
		EVENT_7 Op = 0xf1b Vars = (int)
		EVENT_41 Op = 0xf56 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xfd6 Vars = (int)
		EVENT_41 Op = 0x1011 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x102a Vars = ()
		EVENT_7 Op = 0x1098 Vars = (int)
		EVENT_41 Op = 0x10d3 Vars = (object)

Events:
EVENT_16 Op = 0x1614 Vars = (object, string)
EVENT_41 Op = 0x1621 Vars = (object)
EVENT_22 Op = 0x1627 Vars = (object, int, float, float)
EVENT_43 Op = 0x162f Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x11fd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1784

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1782

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1786

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1788

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x14ec

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
0x41: Call2 0x1242

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
0x4f: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x1385

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x228

0x58: Pop(1)
0x59: Push((int) 543151)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x13cd

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 543163)
0x64: Push((int) 45619)
0x65: Push((int) 45618)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: PushEmpty(bool)
0x69: Stack[-1] = (bool) 1
0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 1
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x1413

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call2 0x141d

0x74: Pop(1)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-1] = (bool) 0
0x77: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call2 0x1427

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Stack[-1] = (bool) 0
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 543171)
0x80: Push((int) 45628)
0x81: Push((int) 45627)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 1
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 1
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x1431

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x143b

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 0
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x1445

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 0
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 543176)
0x9c: Push((int) 45633)
0x9d: Push((int) 45632)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: PushEmpty(bool)
0xa1: Stack[-1] = (bool) 1
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x13cd

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa7: PushEmpty(bool, object)
0xa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9: Call2 0x1413

0xaa: Pop(1)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: Push((int) 543153)
0xaf: Push((int) 45610)
0xb0: Push((int) 45608)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: PushEmpty(bool)
0xb4: Stack[-1] = (bool) 1
0xb5: PushEmpty(bool)
0xb6: Stack[-1] = (bool) 1
0xb7: PushEmpty(bool)
0xb8: Stack[-1] = (bool) 1
0xb9: PushEmpty(bool)
0xba: Stack[-1] = (bool) 1
0xbb: PushEmpty(bool, object)
0xbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Call2 0x141d

0xbe: Pop(1)
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x1427

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x1431

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Stack[-1] = (bool) 0
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x143b

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 0
0xd4: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x1445

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Stack[-1] = (bool) 0
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: Push((int) 543169)
0xdd: Push((int) 45610)
0xde: Push((int) 45624)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: PushEmpty(bool, object)
0xe2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Call2 0x13cd

0xe4: Pop(1)
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: Push((int) 543152)
0xe7: Push((int) -1)
0xe8: Push((int) 45607)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: PushEmpty(bool)
0xec: Stack[-1] = (bool) 1
0xed: PushEmpty(bool)
0xee: Stack[-1] = (bool) 1
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x1413

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x141d

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Stack[-1] = (bool) 0
0xfa: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfb: PushEmpty(bool, object)
0xfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Call2 0x1427

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 0
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 543168)
0x103: Push((int) -1)
0x104: Push((int) 45623)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: PushEmpty(bool)
0x108: Stack[-1] = (bool) 1
0x109: PushEmpty(bool)
0x10a: Stack[-1] = (bool) 1
0x10b: PushEmpty(bool, object)
0x10c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Call2 0x1431

0x10e: Pop(1)
0x10f: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0x143b

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Stack[-1] = (bool) 0
0x116: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0x1445

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 0
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: Push((int) 543167)
0x11f: Push((int) -1)
0x120: Push((int) 45622)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 543154)
0x124: Push((int) -1)
0x125: Push((int) 45609)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: GOTO 0x20a

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call2 0x228

0x12c: Pop(1)
0x12d: Push((int) 537052)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 537053)
0x133: Push((int) 38893)
0x134: Push((int) 38892)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x13d7

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: Push((int) 537062)
0x13d: Push((int) 38902)
0x13e: Push((int) 38901)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: PushEmpty(bool)
0x142: Stack[-1] = (bool) 0
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x136d

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Call2 0x13eb

0x14b: Pop(1)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: Stack[-1] = (bool) 1
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push((int) 537065)
0x150: Push((int) 38905)
0x151: Push((int) 38904)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x136d

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x13e1

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push((int) 537089)
0x163: Push((int) 38929)
0x164: Push((int) 38928)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x13e1

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: Push((int) 537104)
0x16d: Push((int) 38945)
0x16e: Push((int) 38944)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x136d

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0x13eb

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: Push((int) 537124)
0x180: Push((int) 38966)
0x181: Push((int) 38965)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x13f5

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: Push((int) 537140)
0x18a: Push((int) 38982)
0x18b: Push((int) 38981)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: PushEmpty(bool, object)
0x18f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x190: Call2 0x13ff

0x191: Pop(1)
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: Push((int) 537157)
0x194: Push((int) 38999)
0x195: Push((int) 38998)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: PushEmpty(bool)
0x199: Stack[-1] = (bool) 0
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x136d

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x1409

0x1a2: Pop(1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Stack[-1] = (bool) 1
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: Push((int) 537175)
0x1a7: Push((int) 39019)
0x1a8: Push((int) 39018)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Call2 0x136d

0x1b0: Pop(1)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0x1413

0x1b5: Pop(1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Stack[-1] = (bool) 1
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 537187)
0x1ba: Push((int) 39031)
0x1bb: Push((int) 39030)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Call2 0x136d

0x1c3: Pop(1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x141d

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 1
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 537199)
0x1cd: Push((int) 39043)
0x1ce: Push((int) 39042)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool, object)
0x1d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Call2 0x1427

0x1d4: Pop(1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: Push((int) 537209)
0x1d7: Push((int) 39053)
0x1d8: Push((int) 39052)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: PushEmpty(bool, object)
0x1dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Call2 0x1431

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push((int) 537219)
0x1e1: Push((int) 39063)
0x1e2: Push((int) 39062)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0x143b

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: Push((int) 537226)
0x1eb: Push((int) 39070)
0x1ec: Push((int) 39069)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Push((int) 537237)
0x1f0: Push((int) -1)
0x1f1: Push((int) 39080)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 1
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0x1379

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call2 0x136d

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 0
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: Push((int) 537238)
0x203: Push((int) -1)
0x204: Push((int) 39081)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: GOTO 0x20a

0x208: Return(); Pop(0)

0x209: GOTO 0x4e

0x20a: PushEmpty(bool)
0x20b: Call2 0x178a

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20e: @ lshWaitForAnimEnd()
0x20f: Pop(0)
0x210: Push( Stack[3 + Tasks[-1].StackPointer] )
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: GOTO 0x218

0x213: PushEmpty(string)
0x214: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x215: Call2 0x1254

0x216: Pop(1)
0x217: GOTO 0x20e

0x218: GOTO 0x227

0x219: Push("all")
0x21a: Push("idle")
0x21b: @ PlayAnimation(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: @ WaitForAnimEnd()
0x21e: Pop(0)
0x21f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x227

0x222: Push("all")
0x223: Push("idle")
0x224: @ PlayAnimation(Stack[-2], Stack[-1])
0x225: Pop(2)
0x226: GOTO 0x21d

0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: PushEmpty(bool)
0x22a: Call2 0x178a

0x22b: Pop(0)
0x22c: Pop(1); Push((bool) Stack[-1] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Return(); Pop(0)

0x22f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Return(); Pop(0)

0x232: PushEmpty(string, bool)
0x233: Stack[-2] = Stack[-3]
0x234: Push("")
0x235: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-1] = (bool) 0
0x238: GOTO 0x23a

0x239: Stack[-1] = (bool) 1
0x23a: Call2 0x1264

0x23b: Pop(2)
0x23c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: Push((int) 1)
0x240: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0x241: PushEmpty()
0x242: Call2 0x127e

0x243: Pop(0)
0x244: Push((int) 45611)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(object, object)
0x248: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x249: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24a: Call2 0x134f

0x24b: Pop(2)
0x24c: Push((int) 45612)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x1354

0x253: Pop(2)
0x254: Push((int) 45613)
0x255: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty(object, object)
0x258: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x259: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25a: Call2 0x1359

0x25b: Pop(2)
0x25c: Push((int) 45614)
0x25d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: PushEmpty(object, object)
0x260: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x261: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x262: Call2 0x135e

0x263: Pop(2)
0x264: Push((int) 45615)
0x265: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object, object)
0x268: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x269: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26a: Call2 0x1363

0x26b: Pop(2)
0x26c: Push((int) 45616)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0x1368

0x273: Pop(2)
0x274: Push((int) 38894)
0x275: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call2 0x134f

0x27b: Pop(2)
0x27c: Push((int) 38895)
0x27d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object, object)
0x280: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x281: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x282: Call2 0x1354

0x283: Pop(2)
0x284: Push((int) 38896)
0x285: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object, object)
0x288: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x289: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28a: Call2 0x1359

0x28b: Pop(2)
0x28c: Push((int) 38897)
0x28d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: PushEmpty(object, object)
0x290: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x291: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x292: Call2 0x135e

0x293: Pop(2)
0x294: Push((int) 38898)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x297: PushEmpty(object, object)
0x298: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0x1363

0x29b: Pop(2)
0x29c: Push((int) 38899)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: PushEmpty(object, object)
0x2a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a2: Call2 0x1368

0x2a3: Pop(2)
0x2a4: Push((int) 45606)
0x2a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a9: Call2 0x1385

0x2aa: Pop(1)
0x2ab: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call2 0x228

0x2af: Pop(1)
0x2b0: Push((int) 543151)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: PushEmpty(bool, object)
0x2b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b7: Call2 0x13cd

0x2b8: Pop(1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ba: Push((int) 543163)
0x2bb: Push((int) 45619)
0x2bc: Push((int) 45618)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 1
0x2c1: PushEmpty(bool)
0x2c2: Stack[-1] = (bool) 1
0x2c3: PushEmpty(bool, object)
0x2c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Call2 0x1413

0x2c6: Pop(1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Call2 0x141d

0x2cb: Pop(1)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (bool) 0
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Call2 0x1427

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[-1] = (bool) 0
0x2d5: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d6: Push((int) 543171)
0x2d7: Push((int) 45628)
0x2d8: Push((int) 45627)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: PushEmpty(bool)
0x2dc: Stack[-1] = (bool) 1
0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 1
0x2df: PushEmpty(bool, object)
0x2e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Call2 0x1431

0x2e2: Pop(1)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e4: PushEmpty(bool, object)
0x2e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Call2 0x143b

0x2e7: Pop(1)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: Stack[-1] = (bool) 0
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Call2 0x1445

0x2ee: Pop(1)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: Stack[-1] = (bool) 0
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f2: Push((int) 543176)
0x2f3: Push((int) 45633)
0x2f4: Push((int) 45632)
0x2f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(3)
0x2f7: PushEmpty(bool)
0x2f8: Stack[-1] = (bool) 1
0x2f9: PushEmpty(bool, object)
0x2fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Call2 0x13cd

0x2fc: Pop(1)
0x2fd: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call2 0x1413

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x303: Stack[-1] = (bool) 0
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: Push((int) 543153)
0x306: Push((int) 45610)
0x307: Push((int) 45608)
0x308: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x309: Pop(3)
0x30a: PushEmpty(bool)
0x30b: Stack[-1] = (bool) 1
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 1
0x30e: PushEmpty(bool)
0x30f: Stack[-1] = (bool) 1
0x310: PushEmpty(bool)
0x311: Stack[-1] = (bool) 1
0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x314: Call2 0x141d

0x315: Pop(1)
0x316: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x317: PushEmpty(bool, object)
0x318: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x319: Call2 0x1427

0x31a: Pop(1)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Stack[-1] = (bool) 0
0x31d: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31e: PushEmpty(bool, object)
0x31f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x320: Call2 0x1431

0x321: Pop(1)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Stack[-1] = (bool) 0
0x324: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x325: PushEmpty(bool, object)
0x326: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x327: Call2 0x143b

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Stack[-1] = (bool) 0
0x32b: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call2 0x1445

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: Stack[-1] = (bool) 0
0x332: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x333: Push((int) 543169)
0x334: Push((int) 45610)
0x335: Push((int) 45624)
0x336: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(3)
0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33a: Call2 0x13cd

0x33b: Pop(1)
0x33c: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33d: Push((int) 543152)
0x33e: Push((int) -1)
0x33f: Push((int) 45607)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: PushEmpty(bool)
0x343: Stack[-1] = (bool) 1
0x344: PushEmpty(bool)
0x345: Stack[-1] = (bool) 1
0x346: PushEmpty(bool, object)
0x347: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x348: Call2 0x1413

0x349: Pop(1)
0x34a: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call2 0x141d

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Stack[-1] = (bool) 0
0x351: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x352: PushEmpty(bool, object)
0x353: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x354: Call2 0x1427

0x355: Pop(1)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Stack[-1] = (bool) 0
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: Push((int) 543168)
0x35a: Push((int) -1)
0x35b: Push((int) 45623)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: PushEmpty(bool)
0x35f: Stack[-1] = (bool) 1
0x360: PushEmpty(bool)
0x361: Stack[-1] = (bool) 1
0x362: PushEmpty(bool, object)
0x363: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x364: Call2 0x1431

0x365: Pop(1)
0x366: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x369: Call2 0x143b

0x36a: Pop(1)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: Stack[-1] = (bool) 0
0x36d: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36e: PushEmpty(bool, object)
0x36f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x370: Call2 0x1445

0x371: Pop(1)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Stack[-1] = (bool) 0
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: Push((int) 543167)
0x376: Push((int) -1)
0x377: Push((int) 45622)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 543154)
0x37b: Push((int) -1)
0x37c: Push((int) 45609)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: PushEmpty(string)
0x381: Stack[-1] = "Neutral"
0x382: Call2 0x228

0x383: Pop(1)
0x384: Push((int) 537052)
0x385: @@ SetMessage(Stack[-1])
0x386: Pop(1)
0x387: @@ ClearReplies()
0x388: Pop(0)
0x389: Push((int) 537053)
0x38a: Push((int) 38893)
0x38b: Push((int) 38892)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: PushEmpty(bool, object)
0x38f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x390: Call2 0x13d7

0x391: Pop(1)
0x392: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x393: Push((int) 537062)
0x394: Push((int) 38902)
0x395: Push((int) 38901)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: PushEmpty(bool)
0x399: Stack[-1] = (bool) 0
0x39a: PushEmpty(bool, object)
0x39b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Call2 0x136d

0x39d: Pop(1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a1: Call2 0x13eb

0x3a2: Pop(1)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Stack[-1] = (bool) 1
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a6: Push((int) 537065)
0x3a7: Push((int) 38905)
0x3a8: Push((int) 38904)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: PushEmpty(bool)
0x3ac: Stack[-1] = (bool) 0
0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3af: Call2 0x136d

0x3b0: Pop(1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Call2 0x13e1

0x3b5: Pop(1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: Stack[-1] = (bool) 1
0x3b8: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b9: Push((int) 537089)
0x3ba: Push((int) 38929)
0x3bb: Push((int) 38928)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: PushEmpty(bool, object)
0x3bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c0: Call2 0x13e1

0x3c1: Pop(1)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c3: Push((int) 537104)
0x3c4: Push((int) 38945)
0x3c5: Push((int) 38944)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: PushEmpty(bool)
0x3c9: Stack[-1] = (bool) 0
0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x136d

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: PushEmpty(bool, object)
0x3d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d1: Call2 0x13eb

0x3d2: Pop(1)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 1
0x3d5: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d6: Push((int) 537124)
0x3d7: Push((int) 38966)
0x3d8: Push((int) 38965)
0x3d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Call2 0x13f5

0x3de: Pop(1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e0: Push((int) 537140)
0x3e1: Push((int) 38982)
0x3e2: Push((int) 38981)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: PushEmpty(bool, object)
0x3e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e7: Call2 0x13ff

0x3e8: Pop(1)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ea: Push((int) 537157)
0x3eb: Push((int) 38999)
0x3ec: Push((int) 38998)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: PushEmpty(bool)
0x3f0: Stack[-1] = (bool) 0
0x3f1: PushEmpty(bool, object)
0x3f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Call2 0x136d

0x3f4: Pop(1)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f6: PushEmpty(bool, object)
0x3f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f8: Call2 0x1409

0x3f9: Pop(1)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: Stack[-1] = (bool) 1
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: Push((int) 537175)
0x3fe: Push((int) 39019)
0x3ff: Push((int) 39018)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: PushEmpty(bool)
0x403: Stack[-1] = (bool) 0
0x404: PushEmpty(bool, object)
0x405: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x406: Call2 0x136d

0x407: Pop(1)
0x408: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40b: Call2 0x1413

0x40c: Pop(1)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Stack[-1] = (bool) 1
0x40f: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x410: Push((int) 537187)
0x411: Push((int) 39031)
0x412: Push((int) 39030)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: PushEmpty(bool)
0x416: Stack[-1] = (bool) 0
0x417: PushEmpty(bool, object)
0x418: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x419: Call2 0x136d

0x41a: Pop(1)
0x41b: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41e: Call2 0x141d

0x41f: Pop(1)
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Stack[-1] = (bool) 1
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: Push((int) 537199)
0x424: Push((int) 39043)
0x425: Push((int) 39042)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call2 0x1427

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: Push((int) 537209)
0x42e: Push((int) 39053)
0x42f: Push((int) 39052)
0x430: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(3)
0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x434: Call2 0x1431

0x435: Pop(1)
0x436: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x437: Push((int) 537219)
0x438: Push((int) 39063)
0x439: Push((int) 39062)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: PushEmpty(bool, object)
0x43d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43e: Call2 0x143b

0x43f: Pop(1)
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: Push((int) 537226)
0x442: Push((int) 39070)
0x443: Push((int) 39069)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Push((int) 537237)
0x447: Push((int) -1)
0x448: Push((int) 39080)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: PushEmpty(bool)
0x44c: Stack[-1] = (bool) 1
0x44d: PushEmpty(bool, object)
0x44e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44f: Call2 0x1379

0x450: Pop(1)
0x451: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call2 0x136d

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = (bool) 0
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push((int) 537238)
0x45a: Push((int) -1)
0x45b: Push((int) 39081)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 39070)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Neutral"
0x464: Call2 0x228

0x465: Pop(1)
0x466: Push((int) 537227)
0x467: @@ SetMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ ClearReplies()
0x46a: Pop(0)
0x46b: Push((int) 537228)
0x46c: Push((int) 39072)
0x46d: Push((int) 39071)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Push((int) 537235)
0x471: Push((int) -1)
0x472: Push((int) 39078)
0x473: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: Push((int) 537236)
0x476: Push((int) -1)
0x477: Push((int) 39079)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Return(); Pop(0)

0x47b: Push((int) 39072)
0x47c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x47e: PushEmpty(string)
0x47f: Stack[-1] = "Neutral"
0x480: Call2 0x228

0x481: Pop(1)
0x482: Push((int) 537229)
0x483: @@ SetMessage(Stack[-1])
0x484: Pop(1)
0x485: @@ ClearReplies()
0x486: Pop(0)
0x487: Push((int) 537230)
0x488: Push((int) 39074)
0x489: Push((int) 39073)
0x48a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48b: Pop(3)
0x48c: Push((int) 537234)
0x48d: Push((int) -1)
0x48e: Push((int) 39077)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: Push((int) 39074)
0x493: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x495: PushEmpty(string)
0x496: Stack[-1] = "Neutral"
0x497: Call2 0x228

0x498: Pop(1)
0x499: Push((int) 537231)
0x49a: @@ SetMessage(Stack[-1])
0x49b: Pop(1)
0x49c: @@ ClearReplies()
0x49d: Pop(0)
0x49e: Push((int) 537232)
0x49f: Push((int) -1)
0x4a0: Push((int) 39075)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: Push((int) 537233)
0x4a4: Push((int) -1)
0x4a5: Push((int) 39076)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 39063)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call2 0x228

0x4af: Pop(1)
0x4b0: Push((int) 537220)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 537221)
0x4b6: Push((int) 39065)
0x4b7: Push((int) 39064)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Push((int) 537225)
0x4bb: Push((int) -1)
0x4bc: Push((int) 39068)
0x4bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: Push((int) 39065)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral"
0x4c5: Call2 0x228

0x4c6: Pop(1)
0x4c7: Push((int) 537222)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: Push((int) 537223)
0x4cd: Push((int) -1)
0x4ce: Push((int) 39066)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Push((int) 537224)
0x4d2: Push((int) -1)
0x4d3: Push((int) 39067)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Push((int) 39053)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Neutral"
0x4dc: Call2 0x228

0x4dd: Pop(1)
0x4de: Push((int) 537210)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: Push((int) 537211)
0x4e4: Push((int) 39055)
0x4e5: Push((int) 39054)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Push((int) 537218)
0x4e9: Push((int) -1)
0x4ea: Push((int) 39061)
0x4eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ec: Pop(3)
0x4ed: Return(); Pop(0)

0x4ee: Push((int) 39055)
0x4ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "Neutral"
0x4f3: Call2 0x228

0x4f4: Pop(1)
0x4f5: Push((int) 537212)
0x4f6: @@ SetMessage(Stack[-1])
0x4f7: Pop(1)
0x4f8: @@ ClearReplies()
0x4f9: Pop(0)
0x4fa: Push((int) 537213)
0x4fb: Push((int) 39057)
0x4fc: Push((int) 39056)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call2 0x136d

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x504: Push((int) 537217)
0x505: Push((int) -1)
0x506: Push((int) 39060)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: Return(); Pop(0)

0x50a: Push((int) 39057)
0x50b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x50d: PushEmpty(string)
0x50e: Stack[-1] = "Neutral"
0x50f: Call2 0x228

0x510: Pop(1)
0x511: Push((int) 537214)
0x512: @@ SetMessage(Stack[-1])
0x513: Pop(1)
0x514: @@ ClearReplies()
0x515: Pop(0)
0x516: Push((int) 537215)
0x517: Push((int) -1)
0x518: Push((int) 39058)
0x519: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51a: Pop(3)
0x51b: Push((int) 537216)
0x51c: Push((int) -1)
0x51d: Push((int) 39059)
0x51e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(3)
0x520: Return(); Pop(0)

0x521: Push((int) 39043)
0x522: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x524: PushEmpty(string)
0x525: Stack[-1] = "Neutral"
0x526: Call2 0x228

0x527: Pop(1)
0x528: Push((int) 537200)
0x529: @@ SetMessage(Stack[-1])
0x52a: Pop(1)
0x52b: @@ ClearReplies()
0x52c: Pop(0)
0x52d: Push((int) 537201)
0x52e: Push((int) 39045)
0x52f: Push((int) 39044)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Push((int) 537208)
0x533: Push((int) -1)
0x534: Push((int) 39051)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 39045)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x228

0x53e: Pop(1)
0x53f: Push((int) 537202)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 537203)
0x545: Push((int) 39047)
0x546: Push((int) 39046)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 537207)
0x54a: Push((int) -1)
0x54b: Push((int) 39050)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 39047)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x228

0x555: Pop(1)
0x556: Push((int) 537204)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 537205)
0x55c: Push((int) -1)
0x55d: Push((int) 39048)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 537206)
0x561: Push((int) -1)
0x562: Push((int) 39049)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 39031)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x228

0x56c: Pop(1)
0x56d: Push((int) 537188)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 537189)
0x573: Push((int) 39033)
0x574: Push((int) 39032)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Push((int) 537193)
0x578: Push((int) 39037)
0x579: Push((int) 39036)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 39037)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Neutral"
0x582: Call2 0x228

0x583: Pop(1)
0x584: Push((int) 537194)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 537195)
0x58a: Push((int) 39039)
0x58b: Push((int) 39038)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 537198)
0x58f: Push((int) -1)
0x590: Push((int) 39041)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 39039)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Neutral"
0x599: Call2 0x228

0x59a: Pop(1)
0x59b: Push((int) 537196)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 537197)
0x5a1: Push((int) -1)
0x5a2: Push((int) 39040)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 39033)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Neutral"
0x5ab: Call2 0x228

0x5ac: Pop(1)
0x5ad: Push((int) 537190)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 537191)
0x5b3: Push((int) -1)
0x5b4: Push((int) 39034)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Push((int) 537192)
0x5b8: Push((int) -1)
0x5b9: Push((int) 39035)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: Push((int) 39019)
0x5be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5c0: PushEmpty(string)
0x5c1: Stack[-1] = "Neutral"
0x5c2: Call2 0x228

0x5c3: Pop(1)
0x5c4: Push((int) 537176)
0x5c5: @@ SetMessage(Stack[-1])
0x5c6: Pop(1)
0x5c7: @@ ClearReplies()
0x5c8: Pop(0)
0x5c9: Push((int) 537177)
0x5ca: Push((int) 39021)
0x5cb: Push((int) 39020)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Push((int) 537186)
0x5cf: Push((int) -1)
0x5d0: Push((int) 39029)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Return(); Pop(0)

0x5d4: Push((int) 39021)
0x5d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5d7: PushEmpty(string)
0x5d8: Stack[-1] = "Neutral"
0x5d9: Call2 0x228

0x5da: Pop(1)
0x5db: Push((int) 537178)
0x5dc: @@ SetMessage(Stack[-1])
0x5dd: Pop(1)
0x5de: @@ ClearReplies()
0x5df: Pop(0)
0x5e0: Push((int) 537179)
0x5e1: Push((int) 39023)
0x5e2: Push((int) 39022)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Push((int) 537185)
0x5e6: Push((int) -1)
0x5e7: Push((int) 39028)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Return(); Pop(0)

0x5eb: Push((int) 39023)
0x5ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = "Neutral"
0x5f0: Call2 0x228

0x5f1: Pop(1)
0x5f2: Push((int) 537180)
0x5f3: @@ SetMessage(Stack[-1])
0x5f4: Pop(1)
0x5f5: @@ ClearReplies()
0x5f6: Pop(0)
0x5f7: Push((int) 537181)
0x5f8: Push((int) 39025)
0x5f9: Push((int) 39024)
0x5fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(3)
0x5fc: Push((int) 537184)
0x5fd: Push((int) -1)
0x5fe: Push((int) 39027)
0x5ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: Return(); Pop(0)

0x602: Push((int) 39025)
0x603: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x605: PushEmpty(string)
0x606: Stack[-1] = "Neutral"
0x607: Call2 0x228

0x608: Pop(1)
0x609: Push((int) 537182)
0x60a: @@ SetMessage(Stack[-1])
0x60b: Pop(1)
0x60c: @@ ClearReplies()
0x60d: Pop(0)
0x60e: Push((int) 537183)
0x60f: Push((int) -1)
0x610: Push((int) 39026)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Return(); Pop(0)

0x614: Push((int) 38999)
0x615: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x617: PushEmpty(string)
0x618: Stack[-1] = "Neutral"
0x619: Call2 0x228

0x61a: Pop(1)
0x61b: Push((int) 537158)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: Push((int) 537159)
0x621: Push((int) 39001)
0x622: Push((int) 39000)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: PushEmpty(bool, object)
0x626: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x627: Call2 0x136d

0x628: Pop(1)
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: Push((int) 537170)
0x62b: Push((int) 39012)
0x62c: Push((int) 39011)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 537174)
0x630: Push((int) -1)
0x631: Push((int) 39017)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Return(); Pop(0)

0x635: Push((int) 39012)
0x636: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x638: PushEmpty(string)
0x639: Stack[-1] = "Neutral"
0x63a: Call2 0x228

0x63b: Pop(1)
0x63c: Push((int) 537171)
0x63d: @@ SetMessage(Stack[-1])
0x63e: Pop(1)
0x63f: @@ ClearReplies()
0x640: Pop(0)
0x641: Push((int) 537172)
0x642: Push((int) 39001)
0x643: Push((int) 39013)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: Push((int) 537173)
0x647: Push((int) 39001)
0x648: Push((int) 39015)
0x649: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64a: Pop(3)
0x64b: Return(); Pop(0)

0x64c: Push((int) 39001)
0x64d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x64f: PushEmpty(string)
0x650: Stack[-1] = "Neutral"
0x651: Call2 0x228

0x652: Pop(1)
0x653: Push((int) 537160)
0x654: @@ SetMessage(Stack[-1])
0x655: Pop(1)
0x656: @@ ClearReplies()
0x657: Pop(0)
0x658: Push((int) 537161)
0x659: Push((int) 39003)
0x65a: Push((int) 39002)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: PushEmpty(bool, object)
0x65e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65f: Call2 0x136d

0x660: Pop(1)
0x661: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x662: Push((int) 537165)
0x663: Push((int) 39007)
0x664: Push((int) 39006)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 39007)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Neutral"
0x66d: Call2 0x228

0x66e: Pop(1)
0x66f: Push((int) 537166)
0x670: @@ SetMessage(Stack[-1])
0x671: Pop(1)
0x672: @@ ClearReplies()
0x673: Pop(0)
0x674: Push((int) 537167)
0x675: Push((int) 39009)
0x676: Push((int) 39008)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Return(); Pop(0)

0x67a: Push((int) 39009)
0x67b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x67d: PushEmpty(string)
0x67e: Stack[-1] = "Neutral"
0x67f: Call2 0x228

0x680: Pop(1)
0x681: Push((int) 537168)
0x682: @@ SetMessage(Stack[-1])
0x683: Pop(1)
0x684: @@ ClearReplies()
0x685: Pop(0)
0x686: Push((int) 537169)
0x687: Push((int) -1)
0x688: Push((int) 39010)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Return(); Pop(0)

0x68c: Push((int) 39003)
0x68d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x68f: PushEmpty(string)
0x690: Stack[-1] = "Neutral"
0x691: Call2 0x228

0x692: Pop(1)
0x693: Push((int) 537162)
0x694: @@ SetMessage(Stack[-1])
0x695: Pop(1)
0x696: @@ ClearReplies()
0x697: Pop(0)
0x698: Push((int) 537163)
0x699: Push((int) -1)
0x69a: Push((int) 39004)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: PushEmpty(bool, object)
0x69e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69f: Call2 0x136d

0x6a0: Pop(1)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a2: Push((int) 537164)
0x6a3: Push((int) -1)
0x6a4: Push((int) 39005)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 38982)
0x6a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral"
0x6ad: Call2 0x228

0x6ae: Pop(1)
0x6af: Push((int) 537141)
0x6b0: @@ SetMessage(Stack[-1])
0x6b1: Pop(1)
0x6b2: @@ ClearReplies()
0x6b3: Pop(0)
0x6b4: PushEmpty(bool, object)
0x6b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b6: Call2 0x136d

0x6b7: Pop(1)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b9: Push((int) 537142)
0x6ba: Push((int) 38984)
0x6bb: Push((int) 38983)
0x6bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bd: Pop(3)
0x6be: Push((int) 537148)
0x6bf: Push((int) 38990)
0x6c0: Push((int) 38989)
0x6c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c2: Pop(3)
0x6c3: Push((int) 537156)
0x6c4: Push((int) -1)
0x6c5: Push((int) 38997)
0x6c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: Return(); Pop(0)

0x6c9: Push((int) 38990)
0x6ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = "Neutral"
0x6ce: Call2 0x228

0x6cf: Pop(1)
0x6d0: Push((int) 537149)
0x6d1: @@ SetMessage(Stack[-1])
0x6d2: Pop(1)
0x6d3: @@ ClearReplies()
0x6d4: Pop(0)
0x6d5: Push((int) 537150)
0x6d6: Push((int) 38992)
0x6d7: Push((int) 38991)
0x6d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d9: Pop(3)
0x6da: Return(); Pop(0)

0x6db: Push((int) 38992)
0x6dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6de: PushEmpty(string)
0x6df: Stack[-1] = "Neutral"
0x6e0: Call2 0x228

0x6e1: Pop(1)
0x6e2: Push((int) 537151)
0x6e3: @@ SetMessage(Stack[-1])
0x6e4: Pop(1)
0x6e5: @@ ClearReplies()
0x6e6: Pop(0)
0x6e7: Push((int) 537152)
0x6e8: Push((int) 38994)
0x6e9: Push((int) 38993)
0x6ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: Return(); Pop(0)

0x6ed: Push((int) 38994)
0x6ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x6f0: PushEmpty(string)
0x6f1: Stack[-1] = "Neutral"
0x6f2: Call2 0x228

0x6f3: Pop(1)
0x6f4: Push((int) 537153)
0x6f5: @@ SetMessage(Stack[-1])
0x6f6: Pop(1)
0x6f7: @@ ClearReplies()
0x6f8: Pop(0)
0x6f9: PushEmpty(bool, object)
0x6fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fb: Call2 0x136d

0x6fc: Pop(1)
0x6fd: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6fe: Push((int) 537154)
0x6ff: Push((int) -1)
0x700: Push((int) 38995)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Push((int) 537155)
0x704: Push((int) -1)
0x705: Push((int) 38996)
0x706: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: Return(); Pop(0)

0x709: Push((int) 38984)
0x70a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x70c: PushEmpty(string)
0x70d: Stack[-1] = "Neutral"
0x70e: Call2 0x228

0x70f: Pop(1)
0x710: Push((int) 537143)
0x711: @@ SetMessage(Stack[-1])
0x712: Pop(1)
0x713: @@ ClearReplies()
0x714: Pop(0)
0x715: Push((int) 537144)
0x716: Push((int) 38986)
0x717: Push((int) 38985)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: Push((int) 38986)
0x71c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x71e: PushEmpty(string)
0x71f: Stack[-1] = "Neutral"
0x720: Call2 0x228

0x721: Pop(1)
0x722: Push((int) 537145)
0x723: @@ SetMessage(Stack[-1])
0x724: Pop(1)
0x725: @@ ClearReplies()
0x726: Pop(0)
0x727: Push((int) 537146)
0x728: Push((int) -1)
0x729: Push((int) 38987)
0x72a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72b: Pop(3)
0x72c: Push((int) 537147)
0x72d: Push((int) -1)
0x72e: Push((int) 38988)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Return(); Pop(0)

0x732: Push((int) 38966)
0x733: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x735: PushEmpty(string)
0x736: Stack[-1] = "Neutral"
0x737: Call2 0x228

0x738: Pop(1)
0x739: Push((int) 537125)
0x73a: @@ SetMessage(Stack[-1])
0x73b: Pop(1)
0x73c: @@ ClearReplies()
0x73d: Pop(0)
0x73e: Push((int) 537126)
0x73f: Push((int) 38968)
0x740: Push((int) 38967)
0x741: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: Push((int) 537130)
0x744: Push((int) 38972)
0x745: Push((int) 38971)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: Push((int) 537139)
0x749: Push((int) -1)
0x74a: Push((int) 38980)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 38972)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral"
0x753: Call2 0x228

0x754: Pop(1)
0x755: Push((int) 537131)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 537132)
0x75b: Push((int) 38974)
0x75c: Push((int) 38973)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 537136)
0x760: Push((int) 38978)
0x761: Push((int) 38977)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 38978)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral"
0x76a: Call2 0x228

0x76b: Pop(1)
0x76c: Push((int) 537137)
0x76d: @@ SetMessage(Stack[-1])
0x76e: Pop(1)
0x76f: @@ ClearReplies()
0x770: Pop(0)
0x771: Push((int) 537138)
0x772: Push((int) -1)
0x773: Push((int) 38979)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: Push((int) 38974)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x77a: PushEmpty(string)
0x77b: Stack[-1] = "Neutral"
0x77c: Call2 0x228

0x77d: Pop(1)
0x77e: Push((int) 537133)
0x77f: @@ SetMessage(Stack[-1])
0x780: Pop(1)
0x781: @@ ClearReplies()
0x782: Pop(0)
0x783: Push((int) 537134)
0x784: Push((int) -1)
0x785: Push((int) 38975)
0x786: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: Push((int) 537135)
0x789: Push((int) -1)
0x78a: Push((int) 38976)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Return(); Pop(0)

0x78e: Push((int) 38968)
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x791: PushEmpty(string)
0x792: Stack[-1] = "Neutral"
0x793: Call2 0x228

0x794: Pop(1)
0x795: Push((int) 537127)
0x796: @@ SetMessage(Stack[-1])
0x797: Pop(1)
0x798: @@ ClearReplies()
0x799: Pop(0)
0x79a: Push((int) 537128)
0x79b: Push((int) -1)
0x79c: Push((int) 38969)
0x79d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: Push((int) 537129)
0x7a0: Push((int) -1)
0x7a1: Push((int) 38970)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 38945)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Neutral"
0x7aa: Call2 0x228

0x7ab: Pop(1)
0x7ac: Push((int) 537105)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 537106)
0x7b2: Push((int) 38947)
0x7b3: Push((int) 38946)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Push((int) 537123)
0x7b7: Push((int) -1)
0x7b8: Push((int) 38964)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Return(); Pop(0)

0x7bc: Push((int) 38947)
0x7bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7bf: PushEmpty(string)
0x7c0: Stack[-1] = "Neutral"
0x7c1: Call2 0x228

0x7c2: Pop(1)
0x7c3: Push((int) 537107)
0x7c4: @@ SetMessage(Stack[-1])
0x7c5: Pop(1)
0x7c6: @@ ClearReplies()
0x7c7: Pop(0)
0x7c8: Push((int) 537108)
0x7c9: Push((int) 38949)
0x7ca: Push((int) 38948)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: PushEmpty(bool, object)
0x7ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cf: Call2 0x136d

0x7d0: Pop(1)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d2: Push((int) 537116)
0x7d3: Push((int) 38958)
0x7d4: Push((int) 38957)
0x7d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d6: Pop(3)
0x7d7: Return(); Pop(0)

0x7d8: Push((int) 38958)
0x7d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7db: PushEmpty(string)
0x7dc: Stack[-1] = "Neutral"
0x7dd: Call2 0x228

0x7de: Pop(1)
0x7df: Push((int) 537117)
0x7e0: @@ SetMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: @@ ClearReplies()
0x7e3: Pop(0)
0x7e4: Push((int) 537118)
0x7e5: Push((int) 38960)
0x7e6: Push((int) 38959)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: Push((int) 537122)
0x7ea: Push((int) -1)
0x7eb: Push((int) 38963)
0x7ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ed: Pop(3)
0x7ee: Return(); Pop(0)

0x7ef: Push((int) 38960)
0x7f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = "Neutral"
0x7f4: Call2 0x228

0x7f5: Pop(1)
0x7f6: Push((int) 537119)
0x7f7: @@ SetMessage(Stack[-1])
0x7f8: Pop(1)
0x7f9: @@ ClearReplies()
0x7fa: Pop(0)
0x7fb: Push((int) 537120)
0x7fc: Push((int) -1)
0x7fd: Push((int) 38961)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Push((int) 537121)
0x801: Push((int) -1)
0x802: Push((int) 38962)
0x803: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x804: Pop(3)
0x805: Return(); Pop(0)

0x806: Push((int) 38949)
0x807: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x809: PushEmpty(string)
0x80a: Stack[-1] = "Neutral"
0x80b: Call2 0x228

0x80c: Pop(1)
0x80d: Push((int) 537109)
0x80e: @@ SetMessage(Stack[-1])
0x80f: Pop(1)
0x810: @@ ClearReplies()
0x811: Pop(0)
0x812: Push((int) 537110)
0x813: Push((int) 38951)
0x814: Push((int) 38950)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: Push((int) 537115)
0x818: Push((int) 38951)
0x819: Push((int) 38955)
0x81a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81b: Pop(3)
0x81c: Return(); Pop(0)

0x81d: Push((int) 38951)
0x81e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81f: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x820: PushEmpty(string)
0x821: Stack[-1] = "Neutral"
0x822: Call2 0x228

0x823: Pop(1)
0x824: Push((int) 537111)
0x825: @@ SetMessage(Stack[-1])
0x826: Pop(1)
0x827: @@ ClearReplies()
0x828: Pop(0)
0x829: PushEmpty(bool, object)
0x82a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82b: Call2 0x136d

0x82c: Pop(1)
0x82d: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82e: Push((int) 537112)
0x82f: Push((int) -1)
0x830: Push((int) 38952)
0x831: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x832: Pop(3)
0x833: Push((int) 537113)
0x834: Push((int) -1)
0x835: Push((int) 38953)
0x836: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x837: Pop(3)
0x838: Push((int) 537114)
0x839: Push((int) -1)
0x83a: Push((int) 38954)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Return(); Pop(0)

0x83e: Push((int) 38929)
0x83f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x840: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x841: PushEmpty(string)
0x842: Stack[-1] = "Neutral"
0x843: Call2 0x228

0x844: Pop(1)
0x845: Push((int) 537090)
0x846: @@ SetMessage(Stack[-1])
0x847: Pop(1)
0x848: @@ ClearReplies()
0x849: Pop(0)
0x84a: Push((int) 537091)
0x84b: Push((int) 38931)
0x84c: Push((int) 38930)
0x84d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84e: Pop(3)
0x84f: Push((int) 537100)
0x850: Push((int) 38940)
0x851: Push((int) 38939)
0x852: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(3)
0x854: Push((int) 537103)
0x855: Push((int) -1)
0x856: Push((int) 38943)
0x857: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(3)
0x859: Return(); Pop(0)

0x85a: Push((int) 38940)
0x85b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x85d: PushEmpty(string)
0x85e: Stack[-1] = "Neutral"
0x85f: Call2 0x228

0x860: Pop(1)
0x861: Push((int) 537101)
0x862: @@ SetMessage(Stack[-1])
0x863: Pop(1)
0x864: @@ ClearReplies()
0x865: Pop(0)
0x866: Push((int) 537102)
0x867: Push((int) 38933)
0x868: Push((int) 38941)
0x869: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(3)
0x86b: Return(); Pop(0)

0x86c: Push((int) 38931)
0x86d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x86f: PushEmpty(string)
0x870: Stack[-1] = "Neutral"
0x871: Call2 0x228

0x872: Pop(1)
0x873: Push((int) 537092)
0x874: @@ SetMessage(Stack[-1])
0x875: Pop(1)
0x876: @@ ClearReplies()
0x877: Pop(0)
0x878: Push((int) 537093)
0x879: Push((int) 38933)
0x87a: Push((int) 38932)
0x87b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87c: Pop(3)
0x87d: Return(); Pop(0)

0x87e: Push((int) 38933)
0x87f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x881: PushEmpty(string)
0x882: Stack[-1] = "Neutral"
0x883: Call2 0x228

0x884: Pop(1)
0x885: Push((int) 537094)
0x886: @@ SetMessage(Stack[-1])
0x887: Pop(1)
0x888: @@ ClearReplies()
0x889: Pop(0)
0x88a: Push((int) 537095)
0x88b: Push((int) 38935)
0x88c: Push((int) 38934)
0x88d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88e: Pop(3)
0x88f: Push((int) 537099)
0x890: Push((int) -1)
0x891: Push((int) 38938)
0x892: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x893: Pop(3)
0x894: Return(); Pop(0)

0x895: Push((int) 38935)
0x896: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x897: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x898: PushEmpty(string)
0x899: Stack[-1] = "Neutral"
0x89a: Call2 0x228

0x89b: Pop(1)
0x89c: Push((int) 537096)
0x89d: @@ SetMessage(Stack[-1])
0x89e: Pop(1)
0x89f: @@ ClearReplies()
0x8a0: Pop(0)
0x8a1: Push((int) 537097)
0x8a2: Push((int) -1)
0x8a3: Push((int) 38936)
0x8a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a5: Pop(3)
0x8a6: Push((int) 537098)
0x8a7: Push((int) -1)
0x8a8: Push((int) 38937)
0x8a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8aa: Pop(3)
0x8ab: Return(); Pop(0)

0x8ac: Push((int) 38905)
0x8ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = "Neutral"
0x8b1: Call2 0x228

0x8b2: Pop(1)
0x8b3: Push((int) 537066)
0x8b4: @@ SetMessage(Stack[-1])
0x8b5: Pop(1)
0x8b6: @@ ClearReplies()
0x8b7: Pop(0)
0x8b8: Push((int) 537067)
0x8b9: Push((int) 38907)
0x8ba: Push((int) 38906)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Push((int) 537085)
0x8be: Push((int) 38925)
0x8bf: Push((int) 38924)
0x8c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c1: Pop(3)
0x8c2: Return(); Pop(0)

0x8c3: Push((int) 38925)
0x8c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8c6: PushEmpty(string)
0x8c7: Stack[-1] = "Neutral"
0x8c8: Call2 0x228

0x8c9: Pop(1)
0x8ca: Push((int) 537086)
0x8cb: @@ SetMessage(Stack[-1])
0x8cc: Pop(1)
0x8cd: @@ ClearReplies()
0x8ce: Pop(0)
0x8cf: Push((int) 537087)
0x8d0: Push((int) -1)
0x8d1: Push((int) 38926)
0x8d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: Push((int) 537088)
0x8d5: Push((int) -1)
0x8d6: Push((int) 38927)
0x8d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(3)
0x8d9: Return(); Pop(0)

0x8da: Push((int) 38907)
0x8db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8dd: PushEmpty(string)
0x8de: Stack[-1] = "Neutral"
0x8df: Call2 0x228

0x8e0: Pop(1)
0x8e1: Push((int) 537068)
0x8e2: @@ SetMessage(Stack[-1])
0x8e3: Pop(1)
0x8e4: @@ ClearReplies()
0x8e5: Pop(0)
0x8e6: Push((int) 537069)
0x8e7: Push((int) 38909)
0x8e8: Push((int) 38908)
0x8e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ea: Pop(3)
0x8eb: Push((int) 537080)
0x8ec: Push((int) 38920)
0x8ed: Push((int) 38919)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: Return(); Pop(0)

0x8f1: Push((int) 38920)
0x8f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f3: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8f4: PushEmpty(string)
0x8f5: Stack[-1] = "Neutral"
0x8f6: Call2 0x228

0x8f7: Pop(1)
0x8f8: Push((int) 537081)
0x8f9: @@ SetMessage(Stack[-1])
0x8fa: Pop(1)
0x8fb: @@ ClearReplies()
0x8fc: Pop(0)
0x8fd: Push((int) 537082)
0x8fe: Push((int) 38922)
0x8ff: Push((int) 38921)
0x900: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x901: Pop(3)
0x902: Return(); Pop(0)

0x903: Push((int) 38922)
0x904: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x905: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x906: PushEmpty(string)
0x907: Stack[-1] = "Neutral"
0x908: Call2 0x228

0x909: Pop(1)
0x90a: Push((int) 537083)
0x90b: @@ SetMessage(Stack[-1])
0x90c: Pop(1)
0x90d: @@ ClearReplies()
0x90e: Pop(0)
0x90f: Push((int) 537084)
0x910: Push((int) -1)
0x911: Push((int) 38923)
0x912: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x913: Pop(3)
0x914: Return(); Pop(0)

0x915: Push((int) 38909)
0x916: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x918: PushEmpty(string)
0x919: Stack[-1] = "Neutral"
0x91a: Call2 0x228

0x91b: Pop(1)
0x91c: Push((int) 537070)
0x91d: @@ SetMessage(Stack[-1])
0x91e: Pop(1)
0x91f: @@ ClearReplies()
0x920: Pop(0)
0x921: Push((int) 537071)
0x922: Push((int) 38911)
0x923: Push((int) 38910)
0x924: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(3)
0x926: Push((int) 537077)
0x927: Push((int) 38917)
0x928: Push((int) 38916)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: Return(); Pop(0)

0x92c: Push((int) 38917)
0x92d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x92f: PushEmpty(string)
0x930: Stack[-1] = "Neutral"
0x931: Call2 0x228

0x932: Pop(1)
0x933: Push((int) 537078)
0x934: @@ SetMessage(Stack[-1])
0x935: Pop(1)
0x936: @@ ClearReplies()
0x937: Pop(0)
0x938: Push((int) 537079)
0x939: Push((int) -1)
0x93a: Push((int) 38918)
0x93b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93c: Pop(3)
0x93d: Return(); Pop(0)

0x93e: Push((int) 38911)
0x93f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x941: PushEmpty(string)
0x942: Stack[-1] = "Neutral"
0x943: Call2 0x228

0x944: Pop(1)
0x945: Push((int) 537072)
0x946: @@ SetMessage(Stack[-1])
0x947: Pop(1)
0x948: @@ ClearReplies()
0x949: Pop(0)
0x94a: Push((int) 537073)
0x94b: Push((int) 38913)
0x94c: Push((int) 38912)
0x94d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94e: Pop(3)
0x94f: Push((int) 537076)
0x950: Push((int) -1)
0x951: Push((int) 38915)
0x952: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x953: Pop(3)
0x954: Return(); Pop(0)

0x955: Push((int) 38913)
0x956: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x958: PushEmpty(string)
0x959: Stack[-1] = "Neutral"
0x95a: Call2 0x228

0x95b: Pop(1)
0x95c: Push((int) 537074)
0x95d: @@ SetMessage(Stack[-1])
0x95e: Pop(1)
0x95f: @@ ClearReplies()
0x960: Pop(0)
0x961: Push((int) 537075)
0x962: Push((int) -1)
0x963: Push((int) 38914)
0x964: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x965: Pop(3)
0x966: Return(); Pop(0)

0x967: Push((int) 38902)
0x968: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x969: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x96a: PushEmpty(string)
0x96b: Stack[-1] = "Neutral"
0x96c: Call2 0x228

0x96d: Pop(1)
0x96e: Push((int) 537063)
0x96f: @@ SetMessage(Stack[-1])
0x970: Pop(1)
0x971: @@ ClearReplies()
0x972: Pop(0)
0x973: Push((int) 537064)
0x974: Push((int) -1)
0x975: Push((int) 38903)
0x976: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x977: Pop(3)
0x978: Return(); Pop(0)

0x979: Push((int) 38893)
0x97a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97b: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x97c: PushEmpty(string)
0x97d: Stack[-1] = "Neutral"
0x97e: Call2 0x228

0x97f: Pop(1)
0x980: Push((int) 537054)
0x981: @@ SetMessage(Stack[-1])
0x982: Pop(1)
0x983: @@ ClearReplies()
0x984: Pop(0)
0x985: PushEmpty(bool, object)
0x986: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x987: Call2 0x1391

0x988: Pop(1)
0x989: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98a: Push((int) 537055)
0x98b: Push((int) -1)
0x98c: Push((int) 38894)
0x98d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98e: Pop(3)
0x98f: PushEmpty(bool, object)
0x990: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x991: Call2 0x139b

0x992: Pop(1)
0x993: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x994: Push((int) 537056)
0x995: Push((int) -1)
0x996: Push((int) 38895)
0x997: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(3)
0x999: PushEmpty(bool, object)
0x99a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99b: Call2 0x13a5

0x99c: Pop(1)
0x99d: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x99e: Push((int) 537057)
0x99f: Push((int) -1)
0x9a0: Push((int) 38896)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: PushEmpty(bool, object)
0x9a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a5: Call2 0x13af

0x9a6: Pop(1)
0x9a7: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a8: Push((int) 537058)
0x9a9: Push((int) -1)
0x9aa: Push((int) 38897)
0x9ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ac: Pop(3)
0x9ad: PushEmpty(bool, object)
0x9ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9af: Call2 0x13b9

0x9b0: Pop(1)
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b2: Push((int) 537059)
0x9b3: Push((int) -1)
0x9b4: Push((int) 38898)
0x9b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b6: Pop(3)
0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b9: Call2 0x13c3

0x9ba: Pop(1)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9bc: Push((int) 537060)
0x9bd: Push((int) -1)
0x9be: Push((int) 38899)
0x9bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c0: Pop(3)
0x9c1: Push((int) 537061)
0x9c2: Push((int) -1)
0x9c3: Push((int) 38900)
0x9c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c5: Pop(3)
0x9c6: Return(); Pop(0)

0x9c7: Push((int) 45610)
0x9c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0x9ca: PushEmpty(string)
0x9cb: Stack[-1] = "Neutral"
0x9cc: Call2 0x228

0x9cd: Pop(1)
0x9ce: Push((int) 543155)
0x9cf: @@ SetMessage(Stack[-1])
0x9d0: Pop(1)
0x9d1: @@ ClearReplies()
0x9d2: Pop(0)
0x9d3: PushEmpty(bool, object)
0x9d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d5: Call2 0x1391

0x9d6: Pop(1)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d8: Push((int) 543156)
0x9d9: Push((int) -1)
0x9da: Push((int) 45611)
0x9db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dc: Pop(3)
0x9dd: PushEmpty(bool, object)
0x9de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9df: Call2 0x139b

0x9e0: Pop(1)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e2: Push((int) 543157)
0x9e3: Push((int) -1)
0x9e4: Push((int) 45612)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: PushEmpty(bool, object)
0x9e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e9: Call2 0x13a5

0x9ea: Pop(1)
0x9eb: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ec: Push((int) 543158)
0x9ed: Push((int) -1)
0x9ee: Push((int) 45613)
0x9ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f0: Pop(3)
0x9f1: PushEmpty(bool, object)
0x9f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f3: Call2 0x13af

0x9f4: Pop(1)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f6: Push((int) 543159)
0x9f7: Push((int) -1)
0x9f8: Push((int) 45614)
0x9f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fa: Pop(3)
0x9fb: PushEmpty(bool, object)
0x9fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fd: Call2 0x13b9

0x9fe: Pop(1)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa00: Push((int) 543160)
0xa01: Push((int) -1)
0xa02: Push((int) 45615)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: PushEmpty(bool, object)
0xa06: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa07: Call2 0x13c3

0xa08: Pop(1)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0a: Push((int) 543161)
0xa0b: Push((int) -1)
0xa0c: Push((int) 45616)
0xa0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0e: Pop(3)
0xa0f: PushEmpty(bool, object)
0xa10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa11: Call2 0x13cd

0xa12: Pop(1)
0xa13: Pop(1); Push((bool) Stack[-1] == 0)
0xa14: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa15: Push((int) 543162)
0xa16: Push((int) -1)
0xa17: Push((int) 45617)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: PushEmpty(bool, object)
0xa1b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1c: Call2 0x13cd

0xa1d: Pop(1)
0xa1e: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1f: Push((int) 543170)
0xa20: Push((int) -1)
0xa21: Push((int) 45625)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: Return(); Pop(0)

0xa25: Push((int) 45633)
0xa26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa27: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa28: PushEmpty(string)
0xa29: Stack[-1] = "Neutral"
0xa2a: Call2 0x228

0xa2b: Pop(1)
0xa2c: Push((int) 543177)
0xa2d: @@ SetMessage(Stack[-1])
0xa2e: Pop(1)
0xa2f: @@ ClearReplies()
0xa30: Pop(0)
0xa31: Push((int) 543178)
0xa32: Push((int) -1)
0xa33: Push((int) 45634)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: Push((int) 543179)
0xa37: Push((int) -1)
0xa38: Push((int) 45635)
0xa39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3a: Pop(3)
0xa3b: Return(); Pop(0)

0xa3c: Push((int) 45628)
0xa3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa3f: PushEmpty(string)
0xa40: Stack[-1] = "Neutral"
0xa41: Call2 0x228

0xa42: Pop(1)
0xa43: Push((int) 543172)
0xa44: @@ SetMessage(Stack[-1])
0xa45: Pop(1)
0xa46: @@ ClearReplies()
0xa47: Pop(0)
0xa48: Push((int) 543173)
0xa49: Push((int) -1)
0xa4a: Push((int) 45629)
0xa4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4c: Pop(3)
0xa4d: Push((int) 543174)
0xa4e: Push((int) -1)
0xa4f: Push((int) 45630)
0xa50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa51: Pop(3)
0xa52: Return(); Pop(0)

0xa53: Push((int) 45619)
0xa54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa55: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa56: PushEmpty(string)
0xa57: Stack[-1] = "Neutral"
0xa58: Call2 0x228

0xa59: Pop(1)
0xa5a: Push((int) 543164)
0xa5b: @@ SetMessage(Stack[-1])
0xa5c: Pop(1)
0xa5d: @@ ClearReplies()
0xa5e: Pop(0)
0xa5f: Push((int) 543165)
0xa60: Push((int) -1)
0xa61: Push((int) 45620)
0xa62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa63: Pop(3)
0xa64: Push((int) 543166)
0xa65: Push((int) -1)
0xa66: Push((int) 45621)
0xa67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa68: Pop(3)
0xa69: Return(); Pop(0)

0xa6a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa6b: PushEmpty(bool)
0xa6c: Call2 0x178a

0xa6d: Pop(0)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa6f: @ lshStopAnimation()
0xa70: Pop(0)
0xa71: GOTO 0xa74

0xa72: @ StopAnimation()
0xa73: Pop(0)
0xa74: Return(); Pop(0)

0xa75: GOTO 0x23f

0xa76: Return(); Pop(0)

0xa77: PushEmpty()
0xa78: EventDisable(0)
0xa79: PushEmpty(object)
0xa7a: Stack[-1] = Stack[-2]
0xa7b: Call2 0xa98

0xa7c: Pop(1)
0xa7d: PushEmpty(object)
0xa7e: Stack[-1] = Stack[-2]
0xa7f: Call2 0x1811

0xa80: Pop(1)
0xa81: EventEnable(0)
0xa82: @ Hold()
0xa83: Pop(0)
0xa84: GOTO 0xa82

0xa85: Return(); Pop(0)

0xa86: PushEmpty(int, int)
0xa87: PushEmpty(int, object)
0xa88: Stack[-1] = Stack[-5]
0xa89: Call2 0x1752

0xa8a: Stack[-3] = Stack[-2]
0xa8b: Pop(2)
0xa8c: Push((int) 0)
0xa8d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa8f: PushEmpty(object)
0xa90: Stack[-1] = Stack[-4]
0xa91: Call2 0x1755

0xa92: Pop(1)
0xa93: Return(); Pop(2)

0xa94: PushEmpty()
0xa95: Call2 0x175b

0xa96: Pop(0)
0xa97: Return(); Pop(0)

0xa98: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa99: Pop(0); Push((bool) Stack[-21] == 0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9b: PushEmpty(string)
0xa9c: Stack[-1] = "fdie"
0xa9d: Call2 0xaf3

0xa9e: Pop(1)
0xa9f: GOTO 0xaf2

0xaa0: @@ GetPosition(Stack[-10])
0xaa1: Pop(0)
0xaa2: @ GetPosition(Stack[-9])
0xaa3: Pop(0)
0xaa4: @ GetDirection(Stack[-8])
0xaa5: Pop(0)
0xaa6: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xaa7: Push(CvectorIndex(Stack[-7], 0))
0xaa8: Push(CvectorIndex(Stack[-9], 0))
0xaa9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaaa: Push(CvectorIndex(Stack[-8], 2))
0xaab: Push(CvectorIndex(Stack[-10], 2))
0xaac: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaad: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaae: Push((int) 0)
0xaaf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xab0: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xab1: Stack[-6] = "fdie"
0xab2: GOTO 0xab4

0xab3: Stack[-6] = "bdie"
0xab4: @ RemoveRTEnvelope()
0xab5: Pop(0)
0xab6: @ SetDeathState()
0xab7: Pop(0)
0xab8: @ Stop()
0xab9: Pop(0)
0xaba: @ StopAsync()
0xabb: Pop(0)
0xabc: Stack[-5] = Stack[-21]
0xabd: Push("GetScriptProperty")
0xabe: Push((int) 2)
0xabf: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xac0: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac1: Push("Owner")
0xac2: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xac3: Pop(1)
0xac4: Push(Stack[-4])
0xac5: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac6: Push("Owner")
0xac7: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xac8: Pop(1)
0xac9: Pop(0); Push((bool) Stack[-5] == 0)
0xaca: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xacb: Stack[-5] = Stack[-21]
0xacc: Push("@GetEyesHeight")
0xacd: Push((int) 1)
0xace: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xacf: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xad0: @@ GetEyesHeight(Stack[-2])
0xad1: Pop(0)
0xad2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xad3: Push(CvectorIndex(Stack[-1], 1))
0xad4: Stack[-1] = Stack[-3]
0xad5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xad6: Push("head")
0xad7: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xad8: Pop(1)
0xad9: Stack[-3] = (bool) 1
0xada: GOTO 0xadc

0xadb: Stack[-3] = (bool) 0
0xadc: PushEmpty(string)
0xadd: Stack[-1] = Stack[-7]
0xade: Call2 0x1285

0xadf: Pop(1)
0xae0: Push("all")
0xae1: @ PlayAnimation(Stack[-1], Stack[-7])
0xae2: Pop(1)
0xae3: @ WaitForAnimEnd()
0xae4: Pop(0)
0xae5: Push(Stack[-3])
0xae6: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xae7: @ StopAsync()
0xae8: Pop(0)
0xae9: Push("head")
0xaea: @ UnlookAsync(Stack[-1])
0xaeb: Pop(1)
0xaec: Push("all")
0xaed: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xaee: Pop(1)
0xaef: @ RemoveEnvelope()
0xaf0: Pop(0)
0xaf1: Stack[-5] = 0
0xaf2: Return(); Pop(20)

0xaf3: PushEmpty()
0xaf4: @ RemoveRTEnvelope()
0xaf5: Pop(0)
0xaf6: @ SetDeathState()
0xaf7: Pop(0)
0xaf8: @ Stop()
0xaf9: Pop(0)
0xafa: @ StopAsync()
0xafb: Pop(0)
0xafc: @ StopSecondaryAnimation()
0xafd: Pop(0)
0xafe: PushEmpty(string)
0xaff: Stack[-1] = Stack[-2]
0xb00: Call2 0x1285

0xb01: Pop(1)
0xb02: Push("all")
0xb03: @ PlayAnimation(Stack[-1], Stack[-2])
0xb04: Pop(1)
0xb05: @ WaitForAnimEnd()
0xb06: Pop(0)
0xb07: Push("all")
0xb08: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb09: Pop(1)
0xb0a: @ RemoveEnvelope()
0xb0b: Pop(0)
0xb0c: Return(); Pop(0)

0xb0d: PushEmpty()
0xb0e: Return(); Pop(0)

0xb0f: PushEmpty()
0xb10: Return(); Pop(0)

0xb11: PushEmpty()
0xb12: Return(); Pop(0)

0xb13: Push((bool) 1)
0xb14: @ SensePlayerOnly(Stack[-1])
0xb15: Pop(1)
0xb16: PushEmpty()
0xb17: Call2 0x178c

0xb18: Pop(0)
0xb19: PushEmpty()
0xb1a: Call2 0xb22

0xb1b: Pop(0)
0xb1c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb1d: PushEmpty()
0xb1e: Call2 0xc27

0xb1f: Pop(0)
0xb20: GOTO 0xb1c

0xb21: Return(); Pop(0)

0xb22: PushEmpty(bool)
0xb23: Call2 0x11f8

0xb24: Pop(0)
0xb25: Pop(1); Push((bool) Stack[-1] == 0)
0xb26: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb27: PushEmpty()
0xb28: Call2 0x175b

0xb29: Pop(0)
0xb2a: Return(); Pop(0)

0xb2b: PushEmpty(int, int)
0xb2c: PushEmpty(int, object)
0xb2d: Stack[-1] = Stack[-5]
0xb2e: Call2 0x1752

0xb2f: Stack[-3] = Stack[-2]
0xb30: Pop(2)
0xb31: Push((int) 0)
0xb32: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb33: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb34: Push((int) 1)
0xb35: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb36: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb37: PushEmpty()
0xb38: Call2 0xbe6

0xb39: Pop(0)
0xb3a: PushEmpty(object)
0xb3b: Stack[-1] = Stack[-4]
0xb3c: Call2 0x1755

0xb3d: Pop(1)
0xb3e: Return(); Pop(2)

0xb3f: PushEmpty(int, int)
0xb40: PushEmpty(object)
0xb41: Stack[-1] = Stack[-4]
0xb42: Call2 0x168f

0xb43: Pop(1)
0xb44: PushEmpty(int, object)
0xb45: Stack[-1] = Stack[-5]
0xb46: Call2 0x16e2

0xb47: Stack[-3] = Stack[-2]
0xb48: Pop(2)
0xb49: Push((int) 0)
0xb4a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4b: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb4c: Push((int) 1)
0xb4d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb4f: PushEmpty()
0xb50: Call2 0xbe6

0xb51: Pop(0)
0xb52: PushEmpty(object)
0xb53: Stack[-1] = Stack[-4]
0xb54: Call2 0x16ec

0xb55: Pop(1)
0xb56: Return(); Pop(2)

0xb57: PushEmpty(int, int)
0xb58: PushEmpty(bool, object, object, bool)
0xb59: Stack[-3] = Stack[-9]
0xb5a: Stack[-2] = Stack[-8]
0xb5b: Stack[-1] = Stack[-7]
0xb5c: Call2 0x1808

0xb5d: Pop(3)
0xb5e: IF (Stack[-1] == 0) GOTO 0xb72; Pop(1)

0xb5f: PushEmpty(int, object, bool)
0xb60: Stack[-2] = Stack[-8]
0xb61: Stack[-1] = Stack[-6]
0xb62: Call2 0x16f4

0xb63: Stack[-4] = Stack[-3]
0xb64: Pop(3)
0xb65: Push((int) 0)
0xb66: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb72; Pop(1)

0xb68: Push((int) 1)
0xb69: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb6a: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6b: PushEmpty()
0xb6c: Call2 0xbe6

0xb6d: Pop(0)
0xb6e: PushEmpty(object)
0xb6f: Stack[-1] = Stack[-6]
0xb70: Call2 0x16fe

0xb71: Pop(1)
0xb72: Return(); Pop(2)

0xb73: PushEmpty(int, int)
0xb74: PushEmpty(int, object)
0xb75: Stack[-1] = Stack[-5]
0xb76: Call2 0x1748

0xb77: Stack[-3] = Stack[-2]
0xb78: Pop(2)
0xb79: Push((int) 0)
0xb7a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb7c: Push((int) 1)
0xb7d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7e: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb7f: PushEmpty()
0xb80: Call2 0xbe6

0xb81: Pop(0)
0xb82: PushEmpty(object)
0xb83: Stack[-1] = Stack[-4]
0xb84: Call2 0x174b

0xb85: Pop(1)
0xb86: Return(); Pop(2)

0xb87: PushEmpty(int, int)
0xb88: PushEmpty(bool, object, string)
0xb89: Stack[-2] = Stack[-7]
0xb8a: Stack[-1] = Stack[-6]
0xb8b: Call2 0x1639

0xb8c: Pop(2)
0xb8d: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb8e: PushEmpty()
0xb8f: Call2 0xbe6

0xb90: Pop(0)
0xb91: PushEmpty(object, string)
0xb92: Stack[-2] = Stack[-6]
0xb93: Stack[-1] = Stack[-5]
0xb94: Call2 0x1659

0xb95: Pop(2)
0xb96: GOTO 0xbab

0xb97: PushEmpty(int, string, object)
0xb98: Stack[-2] = Stack[-6]
0xb99: Stack[-1] = Stack[-7]
0xb9a: Call2 0x174d

0xb9b: Stack[-4] = Stack[-3]
0xb9c: Pop(3)
0xb9d: Push((int) 0)
0xb9e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb9f: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba0: Push((int) 1)
0xba1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xba3: PushEmpty()
0xba4: Call2 0xbe6

0xba5: Pop(0)
0xba6: PushEmpty(string, object)
0xba7: Stack[-2] = Stack[-5]
0xba8: Stack[-1] = Stack[-6]
0xba9: Call2 0x1750

0xbaa: Pop(2)
0xbab: Return(); Pop(2)

0xbac: PushEmpty()
0xbad: PushEmpty(bool, string)
0xbae: Stack[-1] = Stack[-3]
0xbaf: Call2 0x169c

0xbb0: Pop(1)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb2: PushEmpty()
0xbb3: Call2 0xbe6

0xbb4: Pop(0)
0xbb5: PushEmpty(string)
0xbb6: Stack[-1] = Stack[-2]
0xbb7: Call2 0x16ac

0xbb8: Pop(1)
0xbb9: Return(); Pop(0)

0xbba: PushEmpty()
0xbbb: PushEmpty(bool, object)
0xbbc: Stack[-1] = Stack[-3]
0xbbd: Call2 0x1672

0xbbe: Pop(1)
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc0: PushEmpty()
0xbc1: Call2 0xbe6

0xbc2: Pop(0)
0xbc3: PushEmpty(object)
0xbc4: Stack[-1] = Stack[-2]
0xbc5: Call2 0x1689

0xbc6: Pop(1)
0xbc7: GOTO 0xbcc

0xbc8: PushEmpty(object)
0xbc9: Stack[-1] = Stack[-2]
0xbca: Call2 0xbff

0xbcb: Pop(1)
0xbcc: Return(); Pop(0)

0xbcd: PushEmpty()
0xbce: PushEmpty(object)
0xbcf: Stack[-1] = Stack[-2]
0xbd0: Call2 0xbff

0xbd1: Pop(1)
0xbd2: Return(); Pop(0)

0xbd3: PushEmpty()
0xbd4: Push((int) 110)
0xbd5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: Return(); Pop(0)

0xbd8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbd9: Push((int) 110)
0xbda: @ KillTimer(Stack[-1])
0xbdb: Pop(1)
0xbdc: @ ResetAAS()
0xbdd: Pop(0)
0xbde: Return(); Pop(0)

0xbdf: PushEmpty()
0xbe0: Call2 0xbe6

0xbe1: Pop(0)
0xbe2: PushEmpty()
0xbe3: Call2 0x175b

0xbe4: Pop(0)
0xbe5: Return(); Pop(0)

0xbe6: Push((int) 110)
0xbe7: @ KillTimer(Stack[-1])
0xbe8: Pop(1)
0xbe9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbea: PushEmpty()
0xbeb: Call2 0xc6e

0xbec: Pop(0)
0xbed: Return(); Pop(0)

0xbee: Push((int) 110)
0xbef: @ KillTimer(Stack[-1])
0xbf0: Pop(1)
0xbf1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbf2: PushEmpty()
0xbf3: Call2 0xc75

0xbf4: Pop(0)
0xbf5: Return(); Pop(0)

0xbf6: PushEmpty()
0xbf7: PushEmpty()
0xbf8: Call2 0xbe6

0xbf9: Pop(0)
0xbfa: PushEmpty(object)
0xbfb: Stack[-1] = Stack[-2]
0xbfc: Call2 0x1621

0xbfd: Pop(1)
0xbfe: Return(); Pop(0)

0xbff: PushEmpty(bool, int, bool, int)
0xc00: PushEmpty(bool, object)
0xc01: Stack[-1] = Stack[-7]
0xc02: Call2 0x1157

0xc03: Pop(1)
0xc04: Pop(1); Push((bool) Stack[-1] == 0)
0xc05: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc06: Return(); Pop(4)

0xc07: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc08: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc09: Return(); Pop(4)

0xc0a: @ IsPlayerActor(Stack[-5], Stack[-2])
0xc0b: Pop(0)
0xc0c: Pop(0); Push((bool) Stack[-2] == 0)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0e: Return(); Pop(4)

0xc0f: PushEmpty(int, object)
0xc10: Stack[-1] = Stack[-7]
0xc11: Call2 0x16d1

0xc12: Stack[-3] = Stack[-2]
0xc13: Pop(2)
0xc14: Push((int) 0)
0xc15: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc17: Push((int) 1)
0xc18: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc19: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc1a: PushEmpty()
0xc1b: Call2 0xbee

0xc1c: Pop(0)
0xc1d: PushEmpty(object)
0xc1e: Stack[-1] = Stack[-6]
0xc1f: Call2 0x16da

0xc20: Pop(1)
0xc21: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc22: Push((int) 110)
0xc23: Push((float)10.0)
0xc24: @ SetTimer(Stack[-2], Stack[-1])
0xc25: Pop(2)
0xc26: Return(); Pop(4)

0xc27: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0xc28: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc29: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc2a: Push((float)0.5)
0xc2b: @ rand(Stack[-7], Stack[-1])
0xc2c: Pop(1)
0xc2d: @ Sleep(Stack[-6])
0xc2e: Pop(0)
0xc2f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc30: IF (Stack[-1] == 0) GOTO 0xc61; Pop(1)

0xc31: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xc32: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc33: @ GetPosition(Stack[-4])
0xc34: Pop(0)
0xc35: PushEmpty(float)
0xc36: Call2 0xc62

0xc37: Pop(0)
0xc38: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xc39: Pop(1)
0xc3a: Push(Stack[-3])
0xc3b: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc3c: GOTO 0xc41

0xc3d: Push((int) 1)
0xc3e: @ Sleep(Stack[-1])
0xc3f: Pop(1)
0xc40: GOTO 0xc33

0xc41: GOTO 0xc43

0xc42: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc43: PushEmpty(object, cvector)
0xc44: Stack[-1] = Stack[-7]
0xc45: Call2 0xc7e

0xc46: Stack[-4] = Stack[-2]
0xc47: Pop(2)
0xc48: Pop(0); Push(( Stack[-2] != 0 )
0xc49: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc4a: @ RotatePath(Stack[-2], Stack[-1])
0xc4b: Pop(0)
0xc4c: Push(Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc4e: PushEmpty(bool)
0xc4f: Call2 0xc7c

0xc50: Pop(0)
0xc51: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xc52: Pop(1)
0xc53: Stack[-2] = 0
0xc54: Push(Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc56: PushEmpty()
0xc57: Push(-0, 0); TaskCall(4)
0xc58: Call2 0xd28

0xc59: Pop(-0, 0); TaskReturn
0xc5a: Pop(0)
0xc5b: GOTO 0xc5f

0xc5c: Push((int) 1)
0xc5d: @ Sleep(Stack[-1])
0xc5e: Pop(1)
0xc5f: Stack[-2] = 0
0xc60: GOTO 0xc2f

0xc61: Return(); Pop(12)

0xc62: PushEmpty(float, float)
0xc63: @ GetCameraFarDistance(Stack[-1])
0xc64: Pop(0)
0xc65: Stack[-3] = Stack[-1]
0xc66: Return(); Pop(2)

0xc67: PushEmpty()
0xc68: @ RequestClearPath(Stack[-1])
0xc69: Pop(0)
0xc6a: Return(); Pop(0)

0xc6b: @ Stop()
0xc6c: Pop(0)
0xc6d: Return(); Pop(0)

0xc6e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc6f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc70: @ Stop()
0xc71: Pop(0)
0xc72: @ StopGroup0()
0xc73: Pop(0)
0xc74: Return(); Pop(0)

0xc75: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc76: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xc77: @ Stop()
0xc78: Pop(0)
0xc79: @ StopGroup0()
0xc7a: Pop(0)
0xc7b: Return(); Pop(0)

0xc7c: Stack[-1] = (bool) 0
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty(object, object)
0xc7f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xc80: Pop(0)
0xc81: Stack[-4] = Stack[-1]
0xc82: Return(); Pop(2)

0xc83: Stack[-1] = 0
0xc84: PushEmpty(int, int)
0xc85: PushEmpty(int, object)
0xc86: Stack[-1] = Stack[-5]
0xc87: Call2 0x1752

0xc88: Stack[-3] = Stack[-2]
0xc89: Pop(2)
0xc8a: Push((int) 0)
0xc8b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8c: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc8d: Push((int) 1)
0xc8e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8f: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc90: PushEmpty()
0xc91: Call2 0xd79

0xc92: Pop(0)
0xc93: PushEmpty(object)
0xc94: Stack[-1] = Stack[-4]
0xc95: Call2 0x1755

0xc96: Pop(1)
0xc97: Return(); Pop(2)

0xc98: PushEmpty(int, int)
0xc99: PushEmpty(object)
0xc9a: Stack[-1] = Stack[-4]
0xc9b: Call2 0x168f

0xc9c: Pop(1)
0xc9d: PushEmpty(int, object)
0xc9e: Stack[-1] = Stack[-5]
0xc9f: Call2 0x16e2

0xca0: Stack[-3] = Stack[-2]
0xca1: Pop(2)
0xca2: Push((int) 0)
0xca3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xca5: Push((int) 1)
0xca6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca7: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca8: PushEmpty()
0xca9: Call2 0xd79

0xcaa: Pop(0)
0xcab: PushEmpty(object)
0xcac: Stack[-1] = Stack[-4]
0xcad: Call2 0x16ec

0xcae: Pop(1)
0xcaf: Return(); Pop(2)

0xcb0: PushEmpty(int, int)
0xcb1: PushEmpty(bool, object, object, bool)
0xcb2: Stack[-3] = Stack[-9]
0xcb3: Stack[-2] = Stack[-8]
0xcb4: Stack[-1] = Stack[-7]
0xcb5: Call2 0x1808

0xcb6: Pop(3)
0xcb7: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcb8: PushEmpty(int, object, bool)
0xcb9: Stack[-2] = Stack[-8]
0xcba: Stack[-1] = Stack[-6]
0xcbb: Call2 0x16f4

0xcbc: Stack[-4] = Stack[-3]
0xcbd: Pop(3)
0xcbe: Push((int) 0)
0xcbf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcc0: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc1: Push((int) 1)
0xcc2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcc3: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc4: PushEmpty()
0xcc5: Call2 0xd79

0xcc6: Pop(0)
0xcc7: PushEmpty(object)
0xcc8: Stack[-1] = Stack[-6]
0xcc9: Call2 0x16fe

0xcca: Pop(1)
0xccb: Return(); Pop(2)

0xccc: PushEmpty(int, int)
0xccd: PushEmpty(int, object)
0xcce: Stack[-1] = Stack[-5]
0xccf: Call2 0x1748

0xcd0: Stack[-3] = Stack[-2]
0xcd1: Pop(2)
0xcd2: Push((int) 0)
0xcd3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd4: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcd5: Push((int) 1)
0xcd6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd7: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd8: PushEmpty()
0xcd9: Call2 0xd79

0xcda: Pop(0)
0xcdb: PushEmpty(object)
0xcdc: Stack[-1] = Stack[-4]
0xcdd: Call2 0x174b

0xcde: Pop(1)
0xcdf: Return(); Pop(2)

0xce0: PushEmpty(int, int)
0xce1: PushEmpty(bool, object, string)
0xce2: Stack[-2] = Stack[-7]
0xce3: Stack[-1] = Stack[-6]
0xce4: Call2 0x1639

0xce5: Pop(2)
0xce6: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xce7: PushEmpty()
0xce8: Call2 0xd79

0xce9: Pop(0)
0xcea: PushEmpty(object, string)
0xceb: Stack[-2] = Stack[-6]
0xcec: Stack[-1] = Stack[-5]
0xced: Call2 0x1659

0xcee: Pop(2)
0xcef: GOTO 0xd04

0xcf0: PushEmpty(int, string, object)
0xcf1: Stack[-2] = Stack[-6]
0xcf2: Stack[-1] = Stack[-7]
0xcf3: Call2 0x174d

0xcf4: Stack[-4] = Stack[-3]
0xcf5: Pop(3)
0xcf6: Push((int) 0)
0xcf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf8: IF (Stack[-1] == 0) GOTO 0xd04; Pop(1)

0xcf9: Push((int) 1)
0xcfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcfb: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcfc: PushEmpty()
0xcfd: Call2 0xd79

0xcfe: Pop(0)
0xcff: PushEmpty(string, object)
0xd00: Stack[-2] = Stack[-5]
0xd01: Stack[-1] = Stack[-6]
0xd02: Call2 0x1750

0xd03: Pop(2)
0xd04: Return(); Pop(2)

0xd05: PushEmpty()
0xd06: PushEmpty(bool, string)
0xd07: Stack[-1] = Stack[-3]
0xd08: Call2 0x169c

0xd09: Pop(1)
0xd0a: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd0b: PushEmpty()
0xd0c: Call2 0xd79

0xd0d: Pop(0)
0xd0e: PushEmpty(string)
0xd0f: Stack[-1] = Stack[-2]
0xd10: Call2 0x16ac

0xd11: Pop(1)
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: Call2 0xd79

0xd15: Pop(0)
0xd16: PushEmpty()
0xd17: Call2 0x175b

0xd18: Pop(0)
0xd19: Return(); Pop(0)

0xd1a: PushEmpty()
0xd1b: PushEmpty(bool, object)
0xd1c: Stack[-1] = Stack[-3]
0xd1d: Call2 0x1672

0xd1e: Pop(1)
0xd1f: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd20: PushEmpty()
0xd21: Call2 0xd79

0xd22: Pop(0)
0xd23: PushEmpty(object)
0xd24: Stack[-1] = Stack[-2]
0xd25: Call2 0x1689

0xd26: Pop(1)
0xd27: Return(); Pop(0)

0xd28: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xd29: @ WaitForAnimEnd()
0xd2a: Pop(0)
0xd2b: PushEmpty(bool)
0xd2c: Call2 0x11f8

0xd2d: Pop(0)
0xd2e: Pop(1); Push((bool) Stack[-1] == 0)
0xd2f: IF (Stack[-1] == 0) GOTO 0xd31; Pop(1)

0xd30: Return(); Pop(14)

0xd31: PushEmpty(int)
0xd32: Call2 0x16c0

0xd33: Stack[-8] = Stack[-1]
0xd34: Pop(1)
0xd35: Stack[-6] = (int) 0
0xd36: PushEmpty(bool)
0xd37: Stack[-1] = (bool) 0
0xd38: Push((int) 5)
0xd39: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xd3a: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3b: PushEmpty(bool)
0xd3c: Call2 0x11f8

0xd3d: Pop(0)
0xd3e: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3f: Stack[-1] = (bool) 1
0xd40: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd41: Push((int) 3)
0xd42: @ irand(Stack[-6], Stack[-1])
0xd43: Pop(1)
0xd44: Push((int) 0)
0xd45: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd47: Push(Stack[-7])
0xd48: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd49: @ irand(Stack[-4], Stack[-7])
0xd4a: Pop(0)
0xd4b: Push("all")
0xd4c: PushEmpty(string, int)
0xd4d: Stack[-1] = Stack[-7]
0xd4e: Call2 0x16b9

0xd4f: Pop(1)
0xd50: @ PlayAnimation(Stack[-2], Stack[-1])
0xd51: Pop(2)
0xd52: @ WaitForAnimEnd(Stack[-3])
0xd53: Pop(0)
0xd54: Pop(0); Push((bool) Stack[-3] == 0)
0xd55: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd56: GOTO 0xd74

0xd57: GOTO 0xd69

0xd58: Push((int) 1)
0xd59: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd5b: Push((int) 4)
0xd5c: @ rand(Stack[-3], Stack[-1])
0xd5d: Pop(1)
0xd5e: Push((int) 1)
0xd5f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd60: @ Sleep(Stack[-1], Stack[-2])
0xd61: Pop(1)
0xd62: Pop(0); Push((bool) Stack[-1] == 0)
0xd63: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd64: GOTO 0xd74

0xd65: GOTO 0xd69

0xd66: Push(Stack[-6])
0xd67: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd68: GOTO 0xd74

0xd69: PushEmpty(bool)
0xd6a: Call2 0xd77

0xd6b: Pop(0)
0xd6c: Pop(1); Push((bool) Stack[-1] == 0)
0xd6d: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd6e: GOTO 0xd74

0xd6f: @ ResetAAS()
0xd70: Pop(0)
0xd71: Push((int) 1)
0xd72: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xd73: GOTO 0xd36

0xd74: @ ResetAAS()
0xd75: Pop(0)
0xd76: Return(); Pop(14)

0xd77: Stack[-1] = (bool) 1
0xd78: Return(); Pop(0)

0xd79: @ StopAnimation()
0xd7a: Pop(0)
0xd7b: @ StopGroup0()
0xd7c: Pop(0)
0xd7d: Return(); Pop(0)

0xd7e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xd7f: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xd80: PushEmpty()
0xd81: Call2 0xdb1

0xd82: Pop(0)
0xd83: @ GetDirection(Stack[-3])
0xd84: Pop(0)
0xd85: PushEmpty(cvector, object)
0xd86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd87: Call2 0x10f1

0xd88: Stack[-4] = Stack[-2]
0xd89: Pop(2)
0xd8a: PushEmpty(float, cvector, cvector)
0xd8b: Stack[-2] = Stack[-6]
0xd8c: Stack[-1] = Stack[-5]
0xd8d: Call2 0x12e4

0xd8e: Pop(2)
0xd8f: Push((int) 0)
0xd90: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xd91: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd92: PushEmpty(object)
0xd93: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd94: Call2 0x11ed

0xd95: Pop(1)
0xd96: Stack[-1] = (bool) 1
0xd97: GOTO 0xd9b

0xd98: Push((float)1.5)
0xd99: @ Sleep(Stack[-1], Stack[-2])
0xd9a: Pop(1)
0xd9b: Push(Stack[-1])
0xd9c: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xd9d: PushEmpty(object)
0xd9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9f: Call2 0x11ed

0xda0: Pop(1)
0xda1: Push((int) 111)
0xda2: Push((float)0.5)
0xda3: @ SetTimer(Stack[-2], Stack[-1])
0xda4: Pop(2)
0xda5: Push((float)5.0)
0xda6: @ Sleep(Stack[-1])
0xda7: Pop(1)
0xda8: Push((int) 111)
0xda9: @ KillTimer(Stack[-1])
0xdaa: Pop(1)
0xdab: @ StopAsync()
0xdac: Pop(0)
0xdad: Push("head")
0xdae: @ UnlookAsync(Stack[-1])
0xdaf: Pop(1)
0xdb0: Return(); Pop(6)

0xdb1: PushEmpty(object)
0xdb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb3: Call2 0x1273

0xdb4: Pop(1)
0xdb5: Return(); Pop(0)

0xdb6: PushEmpty(int, int)
0xdb7: PushEmpty(int, object)
0xdb8: Stack[-1] = Stack[-5]
0xdb9: Call2 0x1752

0xdba: Stack[-3] = Stack[-2]
0xdbb: Pop(2)
0xdbc: Push((int) 0)
0xdbd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdbe: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdbf: Push((int) 1)
0xdc0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdc2: PushEmpty()
0xdc3: Call2 0xe45

0xdc4: Pop(0)
0xdc5: PushEmpty(object)
0xdc6: Stack[-1] = Stack[-4]
0xdc7: Call2 0x1755

0xdc8: Pop(1)
0xdc9: Return(); Pop(2)

0xdca: PushEmpty(int, int)
0xdcb: PushEmpty(object)
0xdcc: Stack[-1] = Stack[-4]
0xdcd: Call2 0x168f

0xdce: Pop(1)
0xdcf: PushEmpty(int, object)
0xdd0: Stack[-1] = Stack[-5]
0xdd1: Call2 0x16e2

0xdd2: Stack[-3] = Stack[-2]
0xdd3: Pop(2)
0xdd4: Push((int) 0)
0xdd5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdd6: IF (Stack[-1] == 0) GOTO 0xde1; Pop(1)

0xdd7: Push((int) 1)
0xdd8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdd9: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xdda: PushEmpty()
0xddb: Call2 0xe45

0xddc: Pop(0)
0xddd: PushEmpty(object)
0xdde: Stack[-1] = Stack[-4]
0xddf: Call2 0x16ec

0xde0: Pop(1)
0xde1: Return(); Pop(2)

0xde2: PushEmpty(int, int)
0xde3: PushEmpty(bool, object, object, bool)
0xde4: Stack[-3] = Stack[-9]
0xde5: Stack[-2] = Stack[-8]
0xde6: Stack[-1] = Stack[-7]
0xde7: Call2 0x1808

0xde8: Pop(3)
0xde9: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdea: PushEmpty(int, object, bool)
0xdeb: Stack[-2] = Stack[-8]
0xdec: Stack[-1] = Stack[-6]
0xded: Call2 0x16f4

0xdee: Stack[-4] = Stack[-3]
0xdef: Pop(3)
0xdf0: Push((int) 0)
0xdf1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdf3: Push((int) 1)
0xdf4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdf5: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xdf6: PushEmpty()
0xdf7: Call2 0xe45

0xdf8: Pop(0)
0xdf9: PushEmpty(object)
0xdfa: Stack[-1] = Stack[-6]
0xdfb: Call2 0x16fe

0xdfc: Pop(1)
0xdfd: Return(); Pop(2)

0xdfe: PushEmpty(int, int)
0xdff: PushEmpty(int, object)
0xe00: Stack[-1] = Stack[-5]
0xe01: Call2 0x1748

0xe02: Stack[-3] = Stack[-2]
0xe03: Pop(2)
0xe04: Push((int) 0)
0xe05: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe06: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe07: Push((int) 1)
0xe08: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe09: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0a: PushEmpty()
0xe0b: Call2 0xe45

0xe0c: Pop(0)
0xe0d: PushEmpty(object)
0xe0e: Stack[-1] = Stack[-4]
0xe0f: Call2 0x174b

0xe10: Pop(1)
0xe11: Return(); Pop(2)

0xe12: PushEmpty(int, int)
0xe13: PushEmpty(bool, object, string)
0xe14: Stack[-2] = Stack[-7]
0xe15: Stack[-1] = Stack[-6]
0xe16: Call2 0x1639

0xe17: Pop(2)
0xe18: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe19: PushEmpty()
0xe1a: Call2 0xe45

0xe1b: Pop(0)
0xe1c: PushEmpty(object, string)
0xe1d: Stack[-2] = Stack[-6]
0xe1e: Stack[-1] = Stack[-5]
0xe1f: Call2 0x1659

0xe20: Pop(2)
0xe21: GOTO 0xe36

0xe22: PushEmpty(int, string, object)
0xe23: Stack[-2] = Stack[-6]
0xe24: Stack[-1] = Stack[-7]
0xe25: Call2 0x174d

0xe26: Stack[-4] = Stack[-3]
0xe27: Pop(3)
0xe28: Push((int) 0)
0xe29: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe2b: Push((int) 1)
0xe2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe2d: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2e: PushEmpty()
0xe2f: Call2 0xe45

0xe30: Pop(0)
0xe31: PushEmpty(string, object)
0xe32: Stack[-2] = Stack[-5]
0xe33: Stack[-1] = Stack[-6]
0xe34: Call2 0x1750

0xe35: Pop(2)
0xe36: Return(); Pop(2)

0xe37: PushEmpty()
0xe38: PushEmpty(bool, string)
0xe39: Stack[-1] = Stack[-3]
0xe3a: Call2 0x169c

0xe3b: Pop(1)
0xe3c: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe3d: PushEmpty()
0xe3e: Call2 0xe45

0xe3f: Pop(0)
0xe40: PushEmpty(string)
0xe41: Stack[-1] = Stack[-2]
0xe42: Call2 0x16ac

0xe43: Pop(1)
0xe44: Return(); Pop(0)

0xe45: @ StopGroup0()
0xe46: Pop(0)
0xe47: @ StopAsync()
0xe48: Pop(0)
0xe49: Push("head")
0xe4a: @ UnlookAsync(Stack[-1])
0xe4b: Pop(1)
0xe4c: Push((int) 111)
0xe4d: @ KillTimer(Stack[-1])
0xe4e: Pop(1)
0xe4f: Return(); Pop(0)

0xe50: PushEmpty()
0xe51: PushEmpty()
0xe52: Call2 0xe45

0xe53: Pop(0)
0xe54: PushEmpty(object)
0xe55: Stack[-1] = Stack[-2]
0xe56: Call2 0x1621

0xe57: Pop(1)
0xe58: Return(); Pop(0)

0xe59: PushEmpty(cvector, cvector, cvector, cvector)
0xe5a: Push((int) 111)
0xe5b: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xe5c: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5d: Return(); Pop(4)

0xe5e: PushEmpty(bool, object)
0xe5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe60: Call2 0x1157

0xe61: Pop(1)
0xe62: Pop(1); Push((bool) Stack[-1] == 0)
0xe63: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe64: PushEmpty()
0xe65: Call2 0xe45

0xe66: Pop(0)
0xe67: Return(); Pop(4)

0xe68: @ GetDirection(Stack[-2])
0xe69: Pop(0)
0xe6a: PushEmpty(cvector, object)
0xe6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6c: Call2 0x10f1

0xe6d: Stack[-3] = Stack[-2]
0xe6e: Pop(2)
0xe6f: PushEmpty(float, cvector, cvector)
0xe70: Stack[-2] = Stack[-5]
0xe71: Stack[-1] = Stack[-4]
0xe72: Call2 0x12e4

0xe73: Pop(2)
0xe74: Push((float)0.5)
0xe75: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xe76: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe77: PushEmpty(object)
0xe78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe79: Call2 0x11ed

0xe7a: Pop(1)
0xe7b: Return(); Pop(4)

0xe7c: PushEmpty()
0xe7d: Call2 0xe45

0xe7e: Pop(0)
0xe7f: PushEmpty()
0xe80: Call2 0x175b

0xe81: Pop(0)
0xe82: Return(); Pop(0)

0xe83: PushEmpty()
0xe84: PushEmpty(bool, object)
0xe85: Stack[-1] = Stack[-3]
0xe86: Call2 0x1672

0xe87: Pop(1)
0xe88: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe89: PushEmpty()
0xe8a: Call2 0xe45

0xe8b: Pop(0)
0xe8c: PushEmpty(object)
0xe8d: Stack[-1] = Stack[-2]
0xe8e: Call2 0x1689

0xe8f: Pop(1)
0xe90: Return(); Pop(0)

0xe91: PushEmpty()
0xe92: @ Face(Stack[-1])
0xe93: Pop(0)
0xe94: Push("all")
0xe95: Push("attack_on")
0xe96: @ PlayAnimation(Stack[-2], Stack[-1])
0xe97: Pop(2)
0xe98: @ WaitForAnimEnd()
0xe99: Pop(0)
0xe9a: Push("all")
0xe9b: Push("attack_stay")
0xe9c: @ PlayAnimation(Stack[-2], Stack[-1])
0xe9d: Pop(2)
0xe9e: @ WaitForAnimEnd()
0xe9f: Pop(0)
0xea0: Push("all")
0xea1: Push("attack_off")
0xea2: @ PlayAnimation(Stack[-2], Stack[-1])
0xea3: Pop(2)
0xea4: @ WaitForAnimEnd()
0xea5: Pop(0)
0xea6: @ StopAsync()
0xea7: Pop(0)
0xea8: PushEmpty(object)
0xea9: Stack[-1] = Stack[-2]
0xeaa: Call2 0xed2

0xeab: Pop(1)
0xeac: Return(); Pop(0)

0xead: PushEmpty()
0xeae: Call2 0xf4f

0xeaf: Pop(0)
0xeb0: PushEmpty()
0xeb1: Call2 0x175b

0xeb2: Pop(0)
0xeb3: Return(); Pop(0)

0xeb4: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xeb5: @ GetPosition(Stack[-6])
0xeb6: Pop(0)
0xeb7: @@ GetPosition(Stack[-5])
0xeb8: Pop(0)
0xeb9: @ GetDirection(Stack[-4])
0xeba: Pop(0)
0xebb: PushEmpty(cvector, cvector)
0xebc: PushEmpty(cvector, cvector)
0xebd: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xebe: Call2 0x12b4

0xebf: Pop(1)
0xec0: Push((float)0.75)
0xec1: Pop(1); Push(Stack[-8] * Stack[-1]);
0xec2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xec3: Call2 0x12b4

0xec4: Stack[-5] = Stack[-2]
0xec5: Pop(2)
0xec6: Push((int) 32)
0xec7: Push((float)7000.0)
0xec8: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xec9: Pop(2)
0xeca: Push((int) 100)
0xecb: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xecc: Push((int) 0)
0xecd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xece: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xecf: Stack[-1] = (int) 0
0xed0: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xed1: Return(); Pop(12)

0xed2: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xed3: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xed4: PushEmpty(cvector, float)
0xed5: Stack[-1] = (float) 1.74533
0xed6: Call2 0xeb4

0xed7: Stack[-7] = Stack[-2]
0xed8: Pop(2)
0xed9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xeda: Push((float)2500.0)
0xedb: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xedc: IF (Stack[-1] == 0) GOTO 0xeef; Pop(1)

0xedd: PushEmpty(cvector, float)
0xede: Stack[-1] = (float) 2.61799
0xedf: Call2 0xeb4

0xee0: Stack[-7] = Stack[-2]
0xee1: Pop(2)
0xee2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xee3: Push((float)2500.0)
0xee4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xeef; Pop(1)

0xee6: Push("Can't retreat, distance: ")
0xee7: Pop(0); Push(Sqrt(Stack[-5]))
0xee8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xee9: @ Trace(Stack[-1])
0xeea: Pop(1)
0xeeb: Push((float)0.5)
0xeec: @ Sleep(Stack[-1])
0xeed: Pop(1)
0xeee: Return(); Pop(10)

0xeef: Push(CvectorIndex(Stack[-5], 0))
0xef0: Push(CvectorIndex(Stack[-6], 2))
0xef1: @ Rotate(Stack[-2], Stack[-1])
0xef2: Pop(2)
0xef3: PushEmpty(cvector)
0xef4: Call2 0x10ec

0xef5: Pop(0)
0xef6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xef7: Push((int) 120)
0xef8: Push((float)0.5)
0xef9: @ SetTimer(Stack[-2], Stack[-1])
0xefa: Pop(2)
0xefb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xefc: Push((int) 1)
0xefd: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xefe: Pop(1)
0xeff: Push(Stack[-3])
0xf00: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf01: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xf02: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xf03: GOTO 0xf1a

0xf04: GOTO 0xf18

0xf05: PushEmpty(cvector, float)
0xf06: Stack[-1] = (float) 2.61799
0xf07: Call2 0xeb4

0xf08: Stack[-4] = Stack[-2]
0xf09: Pop(2)
0xf0a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf0b: Push((float)2500.0)
0xf0c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xf0d: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf0e: PushEmpty(cvector)
0xf0f: Call2 0x10ec

0xf10: Pop(0)
0xf11: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xf12: Push((int) 120)
0xf13: Push((float)0.5)
0xf14: @ SetTimer(Stack[-2], Stack[-1])
0xf15: Pop(2)
0xf16: GOTO 0xf18

0xf17: GOTO 0xf1a

0xf18: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xf19: IF (Stack[-1] == 0) GOTO 0xefc; Pop(1)

0xf1a: Return(); Pop(10)

0xf1b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xf1c: Push((int) 120)
0xf1d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf20; Pop(1)

0xf1f: Return(); Pop(8)

0xf20: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xf21: IF (Stack[-1] == 0) GOTO 0xf29; Pop(1)

0xf22: @ Stop()
0xf23: Pop(0)
0xf24: Push((int) 1)
0xf25: @ KillTimer(Stack[-1])
0xf26: Pop(1)
0xf27: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xf28: GOTO 0xf4e

0xf29: @ GetDirection(Stack[-4])
0xf2a: Pop(0)
0xf2b: Push((float)7000.0)
0xf2c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xf2d: Pop(1)
0xf2e: PushEmpty(cvector, float)
0xf2f: Stack[-1] = (float) 1.74533
0xf30: Call2 0xeb4

0xf31: Stack[-4] = Stack[-2]
0xf32: Pop(2)
0xf33: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf34: PushEmpty(bool)
0xf35: Stack[-1] = (bool) 0
0xf36: Push((float)2500.0)
0xf37: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xf38: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf39: PushEmpty(bool)
0xf3a: Stack[-1] = (bool) 1
0xf3b: Pop(0); Push(Stack[-5] * Stack[-5]);
0xf3c: Push((float)2.25)
0xf3d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf3e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xf3f: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf40: PushEmpty(bool)
0xf41: Call2 0xf5f

0xf42: Pop(0)
0xf43: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf44: Stack[-1] = (bool) 0
0xf45: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf46: Stack[-1] = (bool) 1
0xf47: IF (Stack[-1] == 0) GOTO 0xf4e; Pop(1)

0xf48: @ Stop()
0xf49: Pop(0)
0xf4a: PushEmpty(cvector)
0xf4b: Call2 0x10ec

0xf4c: Pop(0)
0xf4d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xf4e: Return(); Pop(8)

0xf4f: @ Stop()
0xf50: Pop(0)
0xf51: Push((int) 120)
0xf52: @ KillTimer(Stack[-1])
0xf53: Pop(1)
0xf54: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xf55: Return(); Pop(0)

0xf56: PushEmpty()
0xf57: PushEmpty()
0xf58: Call2 0xf4f

0xf59: Pop(0)
0xf5a: PushEmpty(object)
0xf5b: Stack[-1] = Stack[-2]
0xf5c: Call2 0x1621

0xf5d: Pop(1)
0xf5e: Return(); Pop(0)

0xf5f: PushEmpty(cvector, cvector, cvector, cvector)
0xf60: @ GetDirection(Stack[-2])
0xf61: Pop(0)
0xf62: PushEmpty(cvector, object)
0xf63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf64: Call2 0x10f1

0xf65: Stack[-3] = Stack[-2]
0xf66: Pop(2)
0xf67: PushEmpty(float, cvector, cvector)
0xf68: Stack[-2] = Stack[-5]
0xf69: Stack[-1] = Stack[-4]
0xf6a: Call2 0x12c9

0xf6b: Pop(2)
0xf6c: Push((float)-0.34202)
0xf6d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xf6e: Return(); Pop(4)

0xf6f: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xf70: @ GetPosition(Stack[-6])
0xf71: Pop(0)
0xf72: @@ GetPosition(Stack[-5])
0xf73: Pop(0)
0xf74: @ GetDirection(Stack[-4])
0xf75: Pop(0)
0xf76: PushEmpty(cvector, cvector)
0xf77: PushEmpty(cvector, cvector)
0xf78: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xf79: Call2 0x12b4

0xf7a: Pop(1)
0xf7b: Push((float)0.75)
0xf7c: Pop(1); Push(Stack[-8] * Stack[-1]);
0xf7d: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xf7e: Call2 0x12b4

0xf7f: Stack[-5] = Stack[-2]
0xf80: Pop(2)
0xf81: Push((int) 32)
0xf82: Push((float)7000.0)
0xf83: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xf84: Pop(2)
0xf85: Push((int) 100)
0xf86: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xf87: Push((int) 0)
0xf88: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf89: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf8a: Stack[-1] = (int) 0
0xf8b: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xf8c: Return(); Pop(12)

0xf8d: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xf8e: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xf8f: PushEmpty(cvector, float)
0xf90: Stack[-1] = (float) 1.74533
0xf91: Call2 0xf6f

0xf92: Stack[-7] = Stack[-2]
0xf93: Pop(2)
0xf94: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf95: Push((float)2500.0)
0xf96: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xf98: PushEmpty(cvector, float)
0xf99: Stack[-1] = (float) 2.61799
0xf9a: Call2 0xf6f

0xf9b: Stack[-7] = Stack[-2]
0xf9c: Pop(2)
0xf9d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf9e: Push((float)2500.0)
0xf9f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xfa0: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xfa1: Push("Can't retreat, distance: ")
0xfa2: Pop(0); Push(Sqrt(Stack[-5]))
0xfa3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa4: @ Trace(Stack[-1])
0xfa5: Pop(1)
0xfa6: Push((float)0.5)
0xfa7: @ Sleep(Stack[-1])
0xfa8: Pop(1)
0xfa9: Return(); Pop(10)

0xfaa: Push(CvectorIndex(Stack[-5], 0))
0xfab: Push(CvectorIndex(Stack[-6], 2))
0xfac: @ Rotate(Stack[-2], Stack[-1])
0xfad: Pop(2)
0xfae: PushEmpty(cvector)
0xfaf: Call2 0x10ec

0xfb0: Pop(0)
0xfb1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xfb2: Push((int) 120)
0xfb3: Push((float)0.5)
0xfb4: @ SetTimer(Stack[-2], Stack[-1])
0xfb5: Pop(2)
0xfb6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xfb7: Push((int) 1)
0xfb8: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xfb9: Pop(1)
0xfba: Push(Stack[-3])
0xfbb: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfbc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xfbd: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbe: GOTO 0xfd5

0xfbf: GOTO 0xfd3

0xfc0: PushEmpty(cvector, float)
0xfc1: Stack[-1] = (float) 2.61799
0xfc2: Call2 0xf6f

0xfc3: Stack[-4] = Stack[-2]
0xfc4: Pop(2)
0xfc5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xfc6: Push((float)2500.0)
0xfc7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xfc8: IF (Stack[-1] == 0) GOTO 0xfd2; Pop(1)

0xfc9: PushEmpty(cvector)
0xfca: Call2 0x10ec

0xfcb: Pop(0)
0xfcc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xfcd: Push((int) 120)
0xfce: Push((float)0.5)
0xfcf: @ SetTimer(Stack[-2], Stack[-1])
0xfd0: Pop(2)
0xfd1: GOTO 0xfd3

0xfd2: GOTO 0xfd5

0xfd3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xfd4: IF (Stack[-1] == 0) GOTO 0xfb7; Pop(1)

0xfd5: Return(); Pop(10)

0xfd6: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xfd7: Push((int) 120)
0xfd8: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xfd9: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfda: Return(); Pop(8)

0xfdb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xfdc: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfdd: @ Stop()
0xfde: Pop(0)
0xfdf: Push((int) 1)
0xfe0: @ KillTimer(Stack[-1])
0xfe1: Pop(1)
0xfe2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xfe3: GOTO 0x1009

0xfe4: @ GetDirection(Stack[-4])
0xfe5: Pop(0)
0xfe6: Push((float)7000.0)
0xfe7: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xfe8: Pop(1)
0xfe9: PushEmpty(cvector, float)
0xfea: Stack[-1] = (float) 1.74533
0xfeb: Call2 0xf6f

0xfec: Stack[-4] = Stack[-2]
0xfed: Pop(2)
0xfee: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xfef: PushEmpty(bool)
0xff0: Stack[-1] = (bool) 0
0xff1: Push((float)2500.0)
0xff2: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xff3: IF (Stack[-1] == 0) GOTO 0x1002; Pop(1)

0xff4: PushEmpty(bool)
0xff5: Stack[-1] = (bool) 1
0xff6: Pop(0); Push(Stack[-5] * Stack[-5]);
0xff7: Push((float)2.25)
0xff8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xff9: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xffa: IF (Stack[-1] == 0) GOTO 0x1000; Pop(1)

0xffb: PushEmpty(bool)
0xffc: Call2 0x101a

0xffd: Pop(0)
0xffe: IF (Stack[-1] == 0) GOTO 0x1000; Pop(1)

0xfff: Stack[-1] = (bool) 0
0x1000: IF (Stack[-1] == 0) GOTO 0x1002; Pop(1)

0x1001: Stack[-1] = (bool) 1
0x1002: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0x1003: @ Stop()
0x1004: Pop(0)
0x1005: PushEmpty(cvector)
0x1006: Call2 0x10ec

0x1007: Pop(0)
0x1008: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x1009: Return(); Pop(8)

0x100a: @ Stop()
0x100b: Pop(0)
0x100c: Push((int) 120)
0x100d: @ KillTimer(Stack[-1])
0x100e: Pop(1)
0x100f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1010: Return(); Pop(0)

0x1011: PushEmpty()
0x1012: PushEmpty()
0x1013: Call2 0x100a

0x1014: Pop(0)
0x1015: PushEmpty(object)
0x1016: Stack[-1] = Stack[-2]
0x1017: Call2 0x1621

0x1018: Pop(1)
0x1019: Return(); Pop(0)

0x101a: PushEmpty(cvector, cvector, cvector, cvector)
0x101b: @ GetDirection(Stack[-2])
0x101c: Pop(0)
0x101d: PushEmpty(cvector, object)
0x101e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101f: Call2 0x10f1

0x1020: Stack[-3] = Stack[-2]
0x1021: Pop(2)
0x1022: PushEmpty(float, cvector, cvector)
0x1023: Stack[-2] = Stack[-5]
0x1024: Stack[-1] = Stack[-4]
0x1025: Call2 0x12c9

0x1026: Pop(2)
0x1027: Push((float)-0.34202)
0x1028: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x1029: Return(); Pop(4)

0x102a: PushEmpty()
0x102b: Call2 0x10cc

0x102c: Pop(0)
0x102d: PushEmpty()
0x102e: Call2 0x175b

0x102f: Pop(0)
0x1030: Return(); Pop(0)

0x1031: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1032: @ GetPosition(Stack[-6])
0x1033: Pop(0)
0x1034: @@ GetPosition(Stack[-5])
0x1035: Pop(0)
0x1036: @ GetDirection(Stack[-4])
0x1037: Pop(0)
0x1038: PushEmpty(cvector, cvector)
0x1039: PushEmpty(cvector, cvector)
0x103a: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x103b: Call2 0x12b4

0x103c: Pop(1)
0x103d: Push((float)0.75)
0x103e: Pop(1); Push(Stack[-8] * Stack[-1]);
0x103f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1040: Call2 0x12b4

0x1041: Stack[-5] = Stack[-2]
0x1042: Pop(2)
0x1043: Push((int) 32)
0x1044: Push((float)7000.0)
0x1045: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1046: Pop(2)
0x1047: Push((int) 100)
0x1048: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1049: Push((int) 0)
0x104a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x104b: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x104c: Stack[-1] = (int) 0
0x104d: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x104e: Return(); Pop(12)

0x104f: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1050: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x1051: PushEmpty(cvector, float)
0x1052: Stack[-1] = (float) 1.74533
0x1053: Call2 0x1031

0x1054: Stack[-7] = Stack[-2]
0x1055: Pop(2)
0x1056: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1057: Push((float)2500.0)
0x1058: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1059: IF (Stack[-1] == 0) GOTO 0x106c; Pop(1)

0x105a: PushEmpty(cvector, float)
0x105b: Stack[-1] = (float) 2.61799
0x105c: Call2 0x1031

0x105d: Stack[-7] = Stack[-2]
0x105e: Pop(2)
0x105f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1060: Push((float)2500.0)
0x1061: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1062: IF (Stack[-1] == 0) GOTO 0x106c; Pop(1)

0x1063: Push("Can't retreat, distance: ")
0x1064: Pop(0); Push(Sqrt(Stack[-5]))
0x1065: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1066: @ Trace(Stack[-1])
0x1067: Pop(1)
0x1068: Push((float)0.5)
0x1069: @ Sleep(Stack[-1])
0x106a: Pop(1)
0x106b: Return(); Pop(10)

0x106c: Push(CvectorIndex(Stack[-5], 0))
0x106d: Push(CvectorIndex(Stack[-6], 2))
0x106e: @ Rotate(Stack[-2], Stack[-1])
0x106f: Pop(2)
0x1070: PushEmpty(cvector)
0x1071: Call2 0x10ec

0x1072: Pop(0)
0x1073: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x1074: Push((int) 120)
0x1075: Push((float)0.5)
0x1076: @ SetTimer(Stack[-2], Stack[-1])
0x1077: Pop(2)
0x1078: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1079: Push((int) 1)
0x107a: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x107b: Pop(1)
0x107c: Push(Stack[-3])
0x107d: IF (Stack[-1] == 0) GOTO 0x1095; Pop(1)

0x107e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x107f: IF (Stack[-1] == 0) GOTO 0x1082; Pop(1)

0x1080: GOTO 0x1097

0x1081: GOTO 0x1095

0x1082: PushEmpty(cvector, float)
0x1083: Stack[-1] = (float) 2.61799
0x1084: Call2 0x1031

0x1085: Stack[-4] = Stack[-2]
0x1086: Pop(2)
0x1087: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1088: Push((float)2500.0)
0x1089: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x108a: IF (Stack[-1] == 0) GOTO 0x1094; Pop(1)

0x108b: PushEmpty(cvector)
0x108c: Call2 0x10ec

0x108d: Pop(0)
0x108e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x108f: Push((int) 120)
0x1090: Push((float)0.5)
0x1091: @ SetTimer(Stack[-2], Stack[-1])
0x1092: Pop(2)
0x1093: GOTO 0x1095

0x1094: GOTO 0x1097

0x1095: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1096: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1097: Return(); Pop(10)

0x1098: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x1099: Push((int) 120)
0x109a: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x109b: IF (Stack[-1] == 0) GOTO 0x109d; Pop(1)

0x109c: Return(); Pop(8)

0x109d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x109e: IF (Stack[-1] == 0) GOTO 0x10a6; Pop(1)

0x109f: @ Stop()
0x10a0: Pop(0)
0x10a1: Push((int) 1)
0x10a2: @ KillTimer(Stack[-1])
0x10a3: Pop(1)
0x10a4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x10a5: GOTO 0x10cb

0x10a6: @ GetDirection(Stack[-4])
0x10a7: Pop(0)
0x10a8: Push((float)7000.0)
0x10a9: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x10aa: Pop(1)
0x10ab: PushEmpty(cvector, float)
0x10ac: Stack[-1] = (float) 1.74533
0x10ad: Call2 0x1031

0x10ae: Stack[-4] = Stack[-2]
0x10af: Pop(2)
0x10b0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x10b1: PushEmpty(bool)
0x10b2: Stack[-1] = (bool) 0
0x10b3: Push((float)2500.0)
0x10b4: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x10b5: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10b6: PushEmpty(bool)
0x10b7: Stack[-1] = (bool) 1
0x10b8: Pop(0); Push(Stack[-5] * Stack[-5]);
0x10b9: Push((float)2.25)
0x10ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10bb: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x10bc: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10bd: PushEmpty(bool)
0x10be: Call2 0x10dc

0x10bf: Pop(0)
0x10c0: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c1: Stack[-1] = (bool) 0
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c3: Stack[-1] = (bool) 1
0x10c4: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10c5: @ Stop()
0x10c6: Pop(0)
0x10c7: PushEmpty(cvector)
0x10c8: Call2 0x10ec

0x10c9: Pop(0)
0x10ca: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x10cb: Return(); Pop(8)

0x10cc: @ Stop()
0x10cd: Pop(0)
0x10ce: Push((int) 120)
0x10cf: @ KillTimer(Stack[-1])
0x10d0: Pop(1)
0x10d1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x10d2: Return(); Pop(0)

0x10d3: PushEmpty()
0x10d4: PushEmpty()
0x10d5: Call2 0x10cc

0x10d6: Pop(0)
0x10d7: PushEmpty(object)
0x10d8: Stack[-1] = Stack[-2]
0x10d9: Call2 0x1621

0x10da: Pop(1)
0x10db: Return(); Pop(0)

0x10dc: PushEmpty(cvector, cvector, cvector, cvector)
0x10dd: @ GetDirection(Stack[-2])
0x10de: Pop(0)
0x10df: PushEmpty(cvector, object)
0x10e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e1: Call2 0x10f1

0x10e2: Stack[-3] = Stack[-2]
0x10e3: Pop(2)
0x10e4: PushEmpty(float, cvector, cvector)
0x10e5: Stack[-2] = Stack[-5]
0x10e6: Stack[-1] = Stack[-4]
0x10e7: Call2 0x12c9

0x10e8: Pop(2)
0x10e9: Push((float)-0.34202)
0x10ea: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x10eb: Return(); Pop(4)

0x10ec: PushEmpty(cvector, cvector)
0x10ed: @ GetPosition(Stack[-1])
0x10ee: Pop(0)
0x10ef: Stack[-3] = Stack[-1]
0x10f0: Return(); Pop(2)

0x10f1: PushEmpty(cvector, cvector, cvector, cvector)
0x10f2: @ GetPosition(Stack[-2])
0x10f3: Pop(0)
0x10f4: @@ GetPosition(Stack[-1])
0x10f5: Pop(0)
0x10f6: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x10f7: Return(); Pop(4)

0x10f8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10f9: @ GetPosition(Stack[-3])
0x10fa: Pop(0)
0x10fb: @@ GetPosition(Stack[-2])
0x10fc: Pop(0)
0x10fd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x10fe: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x10ff: Return(); Pop(6)

0x1100: PushEmpty(bool, bool)
0x1101: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1102: Pop(0)
0x1103: Stack[-4] = Stack[-1]
0x1104: Return(); Pop(2)

0x1105: PushEmpty(bool, bool)
0x1106: Push("HasProperty")
0x1107: Push((int) 2)
0x1108: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1109: Pop(1); Push((bool) Stack[-1] == 0)
0x110a: IF (Stack[-1] == 0) GOTO 0x110d; Pop(1)

0x110b: Stack[-5] = (bool) 0
0x110c: Return(); Pop(2)

0x110d: @@ HasProperty(Stack[-3], Stack[-1])
0x110e: Pop(0)
0x110f: Stack[-5] = Stack[-1]
0x1110: Return(); Pop(2)

0x1111: PushEmpty(float, float)
0x1112: PushEmpty(bool, object, string)
0x1113: Stack[-2] = Stack[-10]
0x1114: Stack[-1] = Stack[-9]
0x1115: Call2 0x1105

0x1116: Pop(2)
0x1117: Pop(1); Push((bool) Stack[-1] == 0)
0x1118: IF (Stack[-1] == 0) GOTO 0x111b; Pop(1)

0x1119: Stack[-8] = (bool) 0
0x111a: Return(); Pop(2)

0x111b: @@ GetProperty(Stack[-6], Stack[-1])
0x111c: Pop(0)
0x111d: PushEmpty(float, float, float, float)
0x111e: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x111f: Stack[-2] = Stack[-8]
0x1120: Stack[-1] = Stack[-7]
0x1121: Call2 0x12be

0x1122: Pop(3)
0x1123: @@ SetProperty(Stack[-7], Stack[-1])
0x1124: Pop(1)
0x1125: Stack[-8] = (bool) 1
0x1126: Return(); Pop(2)

0x1127: PushEmpty(int, int)
0x1128: @@ GetProperty(Stack[-4], Stack[-1])
0x1129: Pop(0)
0x112a: Pop(0); Push(Stack[-1] + Stack[-3]);
0x112b: @@ SetProperty(Stack[-5], Stack[-1])
0x112c: Pop(1)
0x112d: Return(); Pop(2)

0x112e: PushEmpty(bool, bool)
0x112f: @@ IsDead(Stack[-1])
0x1130: Pop(0)
0x1131: Stack[-4] = Stack[-1]
0x1132: Return(); Pop(2)

0x1133: PushEmpty(object, object, object, object)
0x1134: Pop(0); Push((bool) Stack[-5] == 0)
0x1135: IF (Stack[-1] == 0) GOTO 0x1138; Pop(1)

0x1136: Stack[-6] = (bool) 0
0x1137: Return(); Pop(4)

0x1138: PushEmpty(bool)
0x1139: Stack[-1] = (bool) 0
0x113a: Push("IsDead")
0x113b: Push((int) 1)
0x113c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x113d: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x113e: PushEmpty(bool, object)
0x113f: Stack[-1] = Stack[-8]
0x1140: Call2 0x112e

0x1141: Pop(1)
0x1142: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x1143: Stack[-1] = (bool) 1
0x1144: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1145: Stack[-6] = (bool) 0
0x1146: Return(); Pop(4)

0x1147: @ GetScene(Stack[-2])
0x1148: Pop(0)
0x1149: Pop(0); Push((bool) Stack[-2] == 0)
0x114a: IF (Stack[-1] == 0) GOTO 0x114d; Pop(1)

0x114b: Stack[-6] = (bool) 0
0x114c: Return(); Pop(4)

0x114d: @@ GetScene(Stack[-1])
0x114e: Pop(0)
0x114f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1150: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x1151: Stack[-6] = (bool) 0
0x1152: Return(); Pop(4)

0x1153: Stack[-6] = (bool) 1
0x1154: Return(); Pop(4)

0x1155: Stack[-1] = 0
0x1156: Stack[-2] = 0
0x1157: PushEmpty(int, int)
0x1158: PushEmpty(bool, object)
0x1159: Stack[-1] = Stack[-5]
0x115a: Call2 0x1133

0x115b: Pop(1)
0x115c: Pop(1); Push((bool) Stack[-1] == 0)
0x115d: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x115e: Stack[-4] = (bool) 0
0x115f: Return(); Pop(2)

0x1160: PushEmpty(bool, object, string)
0x1161: Stack[-2] = Stack[-6]
0x1162: Stack[-1] = "noaccess"
0x1163: Call2 0x1105

0x1164: Pop(2)
0x1165: Pop(1); Push((bool) Stack[-1] == 0)
0x1166: IF (Stack[-1] == 0) GOTO 0x1169; Pop(1)

0x1167: Stack[-4] = (bool) 1
0x1168: Return(); Pop(2)

0x1169: Push("noaccess")
0x116a: @@ GetProperty(Stack[-1], Stack[-2])
0x116b: Pop(1)
0x116c: Push((int) 0)
0x116d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x116e: Return(); Pop(2)

0x116f: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x1170: Pop(0); Push((bool) Stack[-15] == 0)
0x1171: IF (Stack[-1] == 0) GOTO 0x1173; Pop(1)

0x1172: Return(); Pop(14)

0x1173: @ IsDead(Stack[-7])
0x1174: Pop(0)
0x1175: Push(Stack[-7])
0x1176: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1177: Return(); Pop(14)

0x1178: @ GetSecondaryAnimationType(Stack[-6])
0x1179: Pop(0)
0x117a: Push((int) 0)
0x117b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x117c: IF (Stack[-1] == 0) GOTO 0x117e; Pop(1)

0x117d: Return(); Pop(14)

0x117e: @@ GetPosition(Stack[-5])
0x117f: Pop(0)
0x1180: @ GetPosition(Stack[-4])
0x1181: Pop(0)
0x1182: @ GetDirection(Stack[-3])
0x1183: Pop(0)
0x1184: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x1185: Push(CvectorIndex(Stack[-2], 0))
0x1186: Push(CvectorIndex(Stack[-4], 0))
0x1187: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1188: Push(CvectorIndex(Stack[-3], 2))
0x1189: Push(CvectorIndex(Stack[-5], 2))
0x118a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x118b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x118c: Push((int) 0)
0x118d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x118e: IF (Stack[-1] == 0) GOTO 0x1191; Pop(1)

0x118f: Stack[-1] = "fhit"
0x1190: GOTO 0x1192

0x1191: Stack[-1] = "bhit"
0x1192: Push("hit_react")
0x1193: Push("1")
0x1194: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1195: Push("2")
0x1196: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1197: Push((int) -10)
0x1198: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1199: Pop(4)
0x119a: Return(); Pop(14)

0x119b: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x119c: PushEmpty(bool)
0x119d: Stack[-1] = (bool) 0
0x119e: PushEmpty(bool)
0x119f: Stack[-1] = (bool) 0
0x11a0: Push(Stack[-23])
0x11a1: IF (Stack[-1] == 0) GOTO 0x11a6; Pop(1)

0x11a2: Push((int) 4)
0x11a3: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x11a4: IF (Stack[-1] == 0) GOTO 0x11a6; Pop(1)

0x11a5: Stack[-1] = (bool) 1
0x11a6: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a7: Push((int) 5)
0x11a8: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x11a9: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11aa: Stack[-1] = (bool) 1
0x11ab: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11ac: PushEmpty(cvector, cvector)
0x11ad: PushEmpty(cvector, object)
0x11ae: Stack[-1] = Stack[-25]
0x11af: Call2 0x10f1

0x11b0: Stack[-3] = Stack[-2]
0x11b1: Pop(2)
0x11b2: Call2 0x12b4

0x11b3: Stack[-11] = Stack[-2]
0x11b4: Pop(2)
0x11b5: @ CreateVectorVector(Stack[-8])
0x11b6: Pop(0)
0x11b7: Stack[-7] = (int) 1
0x11b8: Push("hit")
0x11b9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x11ba: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x11bb: Pop(1)
0x11bc: Pop(0); Push((bool) Stack[-6] == 0)
0x11bd: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11be: GOTO 0x11c8

0x11bf: Pop(0); Push(Stack[-4] | Stack[-9]);
0x11c0: Push((float)0.70711)
0x11c1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11c2: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11c3: @@ add(Stack[-5])
0x11c4: Pop(0)
0x11c5: Push((int) 1)
0x11c6: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x11c7: GOTO 0x11b8

0x11c8: @@ size(Stack[-3])
0x11c9: Pop(0)
0x11ca: Push(Stack[-3])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11d9; Pop(1)

0x11cc: @ irand(Stack[-2], Stack[-3])
0x11cd: Pop(0)
0x11ce: @@ get(Stack[-1], Stack[-2])
0x11cf: Pop(0)
0x11d0: PushEmpty(object, int, float, cvector, cvector)
0x11d1: Stack[-5] = Stack[-26]
0x11d2: Stack[-4] = Stack[-25]
0x11d3: Stack[-3] = Stack[-24]
0x11d4: Stack[-2] = Stack[-6]
0x11d5: Stack[-1] = -Stack[-14]; Pop(0);
0x11d6: Call2 0x11df

0x11d7: Pop(5)
0x11d8: Return(); Pop(18)

0x11d9: Stack[-8] = 0
0x11da: PushEmpty(object)
0x11db: Stack[-1] = Stack[-22]
0x11dc: Call2 0x116f

0x11dd: Pop(1)
0x11de: Return(); Pop(18)

0x11df: PushEmpty(object, object, object, object)
0x11e0: @ GetScene(Stack[-2])
0x11e1: Pop(0)
0x11e2: Push("scripted")
0x11e3: Push("blood_dir.xml")
0x11e4: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x11e5: Pop(2)
0x11e6: PushEmpty(object)
0x11e7: Stack[-1] = Stack[-10]
0x11e8: Call2 0x116f

0x11e9: Pop(1)
0x11ea: Return(); Pop(4)

0x11eb: Stack[-1] = 0
0x11ec: Stack[-2] = 0
0x11ed: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x11ee: @@ GetPosition(Stack[-3])
0x11ef: Pop(0)
0x11f0: @ GetPosition(Stack[-2])
0x11f1: Pop(0)
0x11f2: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x11f3: Push(CvectorIndex(Stack[-1], 0))
0x11f4: Push(CvectorIndex(Stack[-2], 2))
0x11f5: @ RotateAsync(Stack[-2], Stack[-1])
0x11f6: Pop(2)
0x11f7: Return(); Pop(6)

0x11f8: PushEmpty(bool, bool)
0x11f9: @ IsLoaded(Stack[-1])
0x11fa: Pop(0)
0x11fb: Stack[-3] = Stack[-1]
0x11fc: Return(); Pop(2)

0x11fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x11fe: @@ GetPosition(Stack[-8])
0x11ff: Pop(0)
0x1200: @@ GetEyesHeight(Stack[-9])
0x1201: Pop(0)
0x1202: Push(CvectorIndex(Stack[-8], 1))
0x1203: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1204: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1205: @ GetPosition(Stack[-7])
0x1206: Pop(0)
0x1207: @ GetEyesHeight(Stack[-9])
0x1208: Pop(0)
0x1209: Push(CvectorIndex(Stack[-7], 1))
0x120a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x120b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x120c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x120d: Push(CvectorIndex(Stack[-6], 1))
0x120e: Stack[-1] = (int) 0
0x120f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1210: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1211: Pop(1); Push(Sqrt(Stack[-1]))
0x1212: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1213: Stack[-5] = -Stack[-6]; Pop(0);
0x1214: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1215: PushEmpty(cvector, cvector)
0x1216: Push(CVector(0.0, 1.0, 0.0))
0x1217: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1218: Call2 0x12b4

0x1219: Pop(1)
0x121a: Push((int) 25)
0x121b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x121c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x121d: Push(CVector(0.0, 10.0, 0.0))
0x121e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x121f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1220: @ IsOverrideActive(Stack[-2])
0x1221: Pop(0)
0x1222: Push(Stack[-2])
0x1223: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1224: Stack[-21] = (bool) 0
0x1225: Return(); Pop(18)

0x1226: @ StopWorld()
0x1227: Pop(0)
0x1228: Push((bool) 1)
0x1229: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x122a: Pop(1)
0x122b: Push(CvectorIndex(Stack[-4], 0))
0x122c: Push(CvectorIndex(Stack[-5], 2))
0x122d: @ Rotate(Stack[-2], Stack[-1])
0x122e: Pop(2)
0x122f: PushEmpty(bool)
0x1230: Call2 0x178a

0x1231: Pop(0)
0x1232: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x1233: GOTO 0x123c

0x1234: Push("head")
0x1235: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1236: Pop(1)
0x1237: Push(Stack[-1])
0x1238: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x1239: Push("head")
0x123a: @ LookAsyncCamera(Stack[-1])
0x123b: Pop(1)
0x123c: @ CameraWaitForPlayFinish()
0x123d: Pop(0)
0x123e: @ ResumeWorld()
0x123f: Pop(0)
0x1240: Stack[-21] = (bool) 1
0x1241: Return(); Pop(18)

0x1242: PushEmpty(bool, bool)
0x1243: Push((bool) 1)
0x1244: @ CameraSwitchToNormal(Stack[-1])
0x1245: Pop(1)
0x1246: PushEmpty(bool)
0x1247: Call2 0x178a

0x1248: Pop(0)
0x1249: IF (Stack[-1] == 0) GOTO 0x124b; Pop(1)

0x124a: GOTO 0x1253

0x124b: Push("head")
0x124c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x124d: Pop(1)
0x124e: Push(Stack[-1])
0x124f: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x1250: Push("head")
0x1251: @ UnlookAsync(Stack[-1])
0x1252: Pop(1)
0x1253: Return(); Pop(2)

0x1254: PushEmpty(bool, float, float, bool, float, float)
0x1255: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1256: Pop(0)
0x1257: Push(Stack[-3])
0x1258: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x1259: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x125a: Pop(0)
0x125b: Push((bool) 0)
0x125c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x125d: Pop(1)
0x125e: GOTO 0x1263

0x125f: Push("Can't find lsh animation : ")
0x1260: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1261: @ Trace(Stack[-1])
0x1262: Pop(1)
0x1263: Return(); Pop(6)

0x1264: PushEmpty(bool, float, float, bool, float, float)
0x1265: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1266: Pop(0)
0x1267: Push(Stack[-3])
0x1268: IF (Stack[-1] == 0) GOTO 0x126e; Pop(1)

0x1269: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x126a: Pop(0)
0x126b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x126c: Pop(0)
0x126d: GOTO 0x1272

0x126e: Push("Can't find lsh animation : ")
0x126f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1270: @ Trace(Stack[-1])
0x1271: Pop(1)
0x1272: Return(); Pop(6)

0x1273: PushEmpty(float, cvector, float, cvector)
0x1274: @@ GetEyesHeight(Stack[-2])
0x1275: Pop(0)
0x1276: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1277: Push(CvectorIndex(Stack[-1], 1))
0x1278: Stack[-1] = Stack[-3]
0x1279: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x127a: Push("head")
0x127b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x127c: Pop(1)
0x127d: Return(); Pop(4)

0x127e: PushEmpty(bool)
0x127f: Call2 0x178a

0x1280: Pop(0)
0x1281: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x1282: @ lshStopSpeech()
0x1283: Pop(0)
0x1284: Return(); Pop(0)

0x1285: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x1286: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x1287: Pop(0)
0x1288: Pop(0); Push((bool) Stack[-8] == 0)
0x1289: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x128a: Stack[-7] = (int) 0
0x128b: Push((int) 1)
0x128c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x128d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x128e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x128f: Pop(1)
0x1290: Pop(0); Push((bool) Stack[-6] == 0)
0x1291: IF (Stack[-1] == 0) GOTO 0x1293; Pop(1)

0x1292: GOTO 0x1296

0x1293: Push((int) 1)
0x1294: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1295: GOTO 0x128b

0x1296: Pop(0); Push((bool) Stack[-7] == 0)
0x1297: IF (Stack[-1] == 0) GOTO 0x1299; Pop(1)

0x1298: Return(); Pop(16)

0x1299: @ irand(Stack[-5], Stack[-7])
0x129a: Pop(0)
0x129b: Push((int) 1)
0x129c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x129d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x129e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x129f: Pop(0)
0x12a0: Push(Stack[-4])
0x12a1: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12a2: @ GetEyesHeight(Stack[-3])
0x12a3: Pop(0)
0x12a4: @ GetDirection(Stack[-2])
0x12a5: Pop(0)
0x12a6: Push((int) 50)
0x12a7: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x12a8: Push(CvectorIndex(Stack[-1], 1))
0x12a9: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x12aa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x12ab: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x12ac: Pop(0)
0x12ad: Return(); Pop(16)

0x12ae: PushEmpty(object, object)
0x12af: @ self(Stack[-1])
0x12b0: Pop(0)
0x12b1: Stack[-3] = Stack[-1]
0x12b2: Return(); Pop(2)

0x12b3: Stack[-1] = 0
0x12b4: PushEmpty(float, float)
0x12b5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12b6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12b7: Push((float)0.0)
0x12b8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b9: IF (Stack[-1] == 0) GOTO 0x12bc; Pop(1)

0x12ba: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12bb: Return(); Pop(2)

0x12bc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12bd: Return(); Pop(2)

0x12be: PushEmpty()
0x12bf: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x12c0: IF (Stack[-1] == 0) GOTO 0x12c3; Pop(1)

0x12c1: Stack[-4] = Stack[-2]
0x12c2: Return(); Pop(0)

0x12c3: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c5: Stack[-4] = Stack[-1]
0x12c6: Return(); Pop(0)

0x12c7: Stack[-4] = Stack[-3]
0x12c8: Return(); Pop(0)

0x12c9: PushEmpty()
0x12ca: Pop(0); Push(Stack[-2] | Stack[-1]);
0x12cb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12cc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12ce: Pop(1); Push(Sqrt(Stack[-1]))
0x12cf: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12d0: Return(); Pop(0)

0x12d1: PushEmpty()
0x12d2: Push(CvectorIndex(Stack[-2], 0))
0x12d3: Push(CvectorIndex(Stack[-2], 0))
0x12d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d5: Push(CvectorIndex(Stack[-3], 2))
0x12d6: Push(CvectorIndex(Stack[-3], 2))
0x12d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12d9: Return(); Pop(0)

0x12da: PushEmpty()
0x12db: Push(CvectorIndex(Stack[-1], 0))
0x12dc: Push(CvectorIndex(Stack[-2], 0))
0x12dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12de: Push(CvectorIndex(Stack[-2], 2))
0x12df: Push(CvectorIndex(Stack[-3], 2))
0x12e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12e2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x12e3: Return(); Pop(0)

0x12e4: PushEmpty()
0x12e5: PushEmpty(float, cvector, cvector)
0x12e6: Stack[-2] = Stack[-5]
0x12e7: Stack[-1] = Stack[-4]
0x12e8: Call2 0x12d1

0x12e9: Pop(2)
0x12ea: PushEmpty(float, cvector)
0x12eb: Stack[-1] = Stack[-5]
0x12ec: Call2 0x12da

0x12ed: Pop(1)
0x12ee: PushEmpty(float, cvector)
0x12ef: Stack[-1] = Stack[-5]
0x12f0: Call2 0x12da

0x12f1: Pop(1)
0x12f2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12f3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12f4: Return(); Pop(0)

0x12f5: PushEmpty(int, int)
0x12f6: @ GetVariable(Stack[-3], Stack[-1])
0x12f7: Pop(0)
0x12f8: Stack[-4] = Stack[-1]
0x12f9: Return(); Pop(2)

0x12fa: PushEmpty(object, object)
0x12fb: @ CreateIntVector(Stack[-1])
0x12fc: Pop(0)
0x12fd: @@ add(Stack[-4])
0x12fe: Pop(0)
0x12ff: @@ add(Stack[-3])
0x1300: Pop(0)
0x1301: Push((int) 3)
0x1302: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1303: Pop(1)
0x1304: Return(); Pop(2)

0x1305: Stack[-1] = 0
0x1306: PushEmpty(int, int)
0x1307: PushEmpty(object, string, int)
0x1308: Stack[-3] = Stack[-7]
0x1309: Stack[-2] = "money"
0x130a: Stack[-1] = Stack[-6]
0x130b: Call2 0x1127

0x130c: Pop(3)
0x130d: Push((int) 0)
0x130e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x130f: IF (Stack[-1] == 0) GOTO 0x1318; Pop(1)

0x1310: Push("Money")
0x1311: @ GetInvItemByName(Stack[-2], Stack[-1])
0x1312: Pop(1)
0x1313: PushEmpty(int, int)
0x1314: Stack[-2] = Stack[-3]
0x1315: Stack[-1] = Stack[-5]
0x1316: Call2 0x12fa

0x1317: Pop(2)
0x1318: Return(); Pop(2)

0x1319: PushEmpty()
0x131a: Pop(0); Push((bool) Stack[-2] == 0)
0x131b: IF (Stack[-1] == 0) GOTO 0x131e; Pop(1)

0x131c: Stack[-3] = (bool) 0
0x131d: Return(); Pop(0)

0x131e: Push((int) 0)
0x131f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1320: IF (Stack[-1] == 0) GOTO 0x1325; Pop(1)

0x1321: Push((int) 8)
0x1322: @ SendWorldWndMessage(Stack[-1])
0x1323: Pop(1)
0x1324: GOTO 0x132e

0x1325: Push((int) 0)
0x1326: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1327: IF (Stack[-1] == 0) GOTO 0x132c; Pop(1)

0x1328: Push((int) 9)
0x1329: @ SendWorldWndMessage(Stack[-1])
0x132a: Pop(1)
0x132b: GOTO 0x132e

0x132c: Stack[-3] = (bool) 0
0x132d: Return(); Pop(0)

0x132e: PushEmpty(float)
0x132f: Stack[-1] = Stack[-2]
0x1330: Call2 0x133c

0x1331: Pop(1)
0x1332: PushEmpty(bool, object, string, float, float, float)
0x1333: Stack[-5] = Stack[-8]
0x1334: Stack[-4] = "reputation"
0x1335: Stack[-3] = Stack[-7]
0x1336: Stack[-2] = (int) 0
0x1337: Stack[-1] = (int) 1
0x1338: Call2 0x1111

0x1339: Pop(6)
0x133a: Stack[-3] = (bool) 1
0x133b: Return(); Pop(0)

0x133c: PushEmpty(object, object)
0x133d: @ CreateFloatVector(Stack[-1])
0x133e: Pop(0)
0x133f: @@ add(Stack[-3])
0x1340: Pop(0)
0x1341: Push((int) 16)
0x1342: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1343: Pop(1)
0x1344: Return(); Pop(2)

0x1345: Stack[-1] = 0
0x1346: PushEmpty(float, float)
0x1347: @ GetGameTime(Stack[-1])
0x1348: Pop(0)
0x1349: Push((int) 1)
0x134a: PushEmpty(int)
0x134b: Push((int) 24)
0x134c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x134d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x134e: Return(); Pop(2)

0x134f: PushEmpty()
0x1350: Push((int) 100)
0x1351: @@ SetReturnValue(Stack[-1])
0x1352: Pop(1)
0x1353: Return(); Pop(0)

0x1354: PushEmpty()
0x1355: Push((int) 500)
0x1356: @@ SetReturnValue(Stack[-1])
0x1357: Pop(1)
0x1358: Return(); Pop(0)

0x1359: PushEmpty()
0x135a: Push((int) 1000)
0x135b: @@ SetReturnValue(Stack[-1])
0x135c: Pop(1)
0x135d: Return(); Pop(0)

0x135e: PushEmpty()
0x135f: Push((int) 2000)
0x1360: @@ SetReturnValue(Stack[-1])
0x1361: Pop(1)
0x1362: Return(); Pop(0)

0x1363: PushEmpty()
0x1364: Push((int) 3000)
0x1365: @@ SetReturnValue(Stack[-1])
0x1366: Pop(1)
0x1367: Return(); Pop(0)

0x1368: PushEmpty()
0x1369: Push((int) 4000)
0x136a: @@ SetReturnValue(Stack[-1])
0x136b: Pop(1)
0x136c: Return(); Pop(0)

0x136d: PushEmpty()
0x136e: PushEmpty(int, string)
0x136f: Stack[-1] = "branch"
0x1370: Call2 0x12f5

0x1371: Pop(1)
0x1372: Push((int) 0)
0x1373: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1374: IF (Stack[-1] == 0) GOTO 0x1377; Pop(1)

0x1375: Stack[-2] = (bool) 1
0x1376: Return(); Pop(0)

0x1377: Stack[-2] = (bool) 0
0x1378: Return(); Pop(0)

0x1379: PushEmpty()
0x137a: PushEmpty(int, string)
0x137b: Stack[-1] = "branch"
0x137c: Call2 0x12f5

0x137d: Pop(1)
0x137e: Push((int) 1)
0x137f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1380: IF (Stack[-1] == 0) GOTO 0x1383; Pop(1)

0x1381: Stack[-2] = (bool) 1
0x1382: Return(); Pop(0)

0x1383: Stack[-2] = (bool) 0
0x1384: Return(); Pop(0)

0x1385: PushEmpty()
0x1386: PushEmpty(int, string)
0x1387: Stack[-1] = "branch"
0x1388: Call2 0x12f5

0x1389: Pop(1)
0x138a: Push((int) 2)
0x138b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138c: IF (Stack[-1] == 0) GOTO 0x138f; Pop(1)

0x138d: Stack[-2] = (bool) 1
0x138e: Return(); Pop(0)

0x138f: Stack[-2] = (bool) 0
0x1390: Return(); Pop(0)

0x1391: PushEmpty()
0x1392: PushEmpty(bool, object)
0x1393: Stack[-1] = Stack[-3]
0x1394: Call2 0x144f

0x1395: Pop(1)
0x1396: IF (Stack[-1] == 0) GOTO 0x1399; Pop(1)

0x1397: Stack[-2] = (bool) 1
0x1398: Return(); Pop(0)

0x1399: Stack[-2] = (bool) 0
0x139a: Return(); Pop(0)

0x139b: PushEmpty()
0x139c: PushEmpty(bool, object)
0x139d: Stack[-1] = Stack[-3]
0x139e: Call2 0x145a

0x139f: Pop(1)
0x13a0: IF (Stack[-1] == 0) GOTO 0x13a3; Pop(1)

0x13a1: Stack[-2] = (bool) 1
0x13a2: Return(); Pop(0)

0x13a3: Stack[-2] = (bool) 0
0x13a4: Return(); Pop(0)

0x13a5: PushEmpty()
0x13a6: PushEmpty(bool, object)
0x13a7: Stack[-1] = Stack[-3]
0x13a8: Call2 0x1465

0x13a9: Pop(1)
0x13aa: IF (Stack[-1] == 0) GOTO 0x13ad; Pop(1)

0x13ab: Stack[-2] = (bool) 1
0x13ac: Return(); Pop(0)

0x13ad: Stack[-2] = (bool) 0
0x13ae: Return(); Pop(0)

0x13af: PushEmpty()
0x13b0: PushEmpty(bool, object)
0x13b1: Stack[-1] = Stack[-3]
0x13b2: Call2 0x1470

0x13b3: Pop(1)
0x13b4: IF (Stack[-1] == 0) GOTO 0x13b7; Pop(1)

0x13b5: Stack[-2] = (bool) 1
0x13b6: Return(); Pop(0)

0x13b7: Stack[-2] = (bool) 0
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty()
0x13ba: PushEmpty(bool, object)
0x13bb: Stack[-1] = Stack[-3]
0x13bc: Call2 0x147b

0x13bd: Pop(1)
0x13be: IF (Stack[-1] == 0) GOTO 0x13c1; Pop(1)

0x13bf: Stack[-2] = (bool) 1
0x13c0: Return(); Pop(0)

0x13c1: Stack[-2] = (bool) 0
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: PushEmpty(bool, object)
0x13c5: Stack[-1] = Stack[-3]
0x13c6: Call2 0x1486

0x13c7: Pop(1)
0x13c8: IF (Stack[-1] == 0) GOTO 0x13cb; Pop(1)

0x13c9: Stack[-2] = (bool) 1
0x13ca: Return(); Pop(0)

0x13cb: Stack[-2] = (bool) 0
0x13cc: Return(); Pop(0)

0x13cd: PushEmpty()
0x13ce: PushEmpty(bool, object)
0x13cf: Stack[-1] = Stack[-3]
0x13d0: Call2 0x1491

0x13d1: Pop(1)
0x13d2: IF (Stack[-1] == 0) GOTO 0x13d5; Pop(1)

0x13d3: Stack[-2] = (bool) 1
0x13d4: Return(); Pop(0)

0x13d5: Stack[-2] = (bool) 0
0x13d6: Return(); Pop(0)

0x13d7: PushEmpty()
0x13d8: PushEmpty(bool, object)
0x13d9: Stack[-1] = Stack[-3]
0x13da: Call2 0x1498

0x13db: Pop(1)
0x13dc: IF (Stack[-1] == 0) GOTO 0x13df; Pop(1)

0x13dd: Stack[-2] = (bool) 1
0x13de: Return(); Pop(0)

0x13df: Stack[-2] = (bool) 0
0x13e0: Return(); Pop(0)

0x13e1: PushEmpty()
0x13e2: PushEmpty(bool, object)
0x13e3: Stack[-1] = Stack[-3]
0x13e4: Call2 0x149f

0x13e5: Pop(1)
0x13e6: IF (Stack[-1] == 0) GOTO 0x13e9; Pop(1)

0x13e7: Stack[-2] = (bool) 1
0x13e8: Return(); Pop(0)

0x13e9: Stack[-2] = (bool) 0
0x13ea: Return(); Pop(0)

0x13eb: PushEmpty()
0x13ec: PushEmpty(bool, object)
0x13ed: Stack[-1] = Stack[-3]
0x13ee: Call2 0x14a6

0x13ef: Pop(1)
0x13f0: IF (Stack[-1] == 0) GOTO 0x13f3; Pop(1)

0x13f1: Stack[-2] = (bool) 1
0x13f2: Return(); Pop(0)

0x13f3: Stack[-2] = (bool) 0
0x13f4: Return(); Pop(0)

0x13f5: PushEmpty()
0x13f6: PushEmpty(bool, object)
0x13f7: Stack[-1] = Stack[-3]
0x13f8: Call2 0x14ad

0x13f9: Pop(1)
0x13fa: IF (Stack[-1] == 0) GOTO 0x13fd; Pop(1)

0x13fb: Stack[-2] = (bool) 1
0x13fc: Return(); Pop(0)

0x13fd: Stack[-2] = (bool) 0
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty()
0x1400: PushEmpty(bool, object)
0x1401: Stack[-1] = Stack[-3]
0x1402: Call2 0x14b4

0x1403: Pop(1)
0x1404: IF (Stack[-1] == 0) GOTO 0x1407; Pop(1)

0x1405: Stack[-2] = (bool) 1
0x1406: Return(); Pop(0)

0x1407: Stack[-2] = (bool) 0
0x1408: Return(); Pop(0)

0x1409: PushEmpty()
0x140a: PushEmpty(bool, object)
0x140b: Stack[-1] = Stack[-3]
0x140c: Call2 0x14bb

0x140d: Pop(1)
0x140e: IF (Stack[-1] == 0) GOTO 0x1411; Pop(1)

0x140f: Stack[-2] = (bool) 1
0x1410: Return(); Pop(0)

0x1411: Stack[-2] = (bool) 0
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: PushEmpty(bool, object)
0x1415: Stack[-1] = Stack[-3]
0x1416: Call2 0x14c2

0x1417: Pop(1)
0x1418: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x1419: Stack[-2] = (bool) 1
0x141a: Return(); Pop(0)

0x141b: Stack[-2] = (bool) 0
0x141c: Return(); Pop(0)

0x141d: PushEmpty()
0x141e: PushEmpty(bool, object)
0x141f: Stack[-1] = Stack[-3]
0x1420: Call2 0x14c9

0x1421: Pop(1)
0x1422: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x1423: Stack[-2] = (bool) 1
0x1424: Return(); Pop(0)

0x1425: Stack[-2] = (bool) 0
0x1426: Return(); Pop(0)

0x1427: PushEmpty()
0x1428: PushEmpty(bool, object)
0x1429: Stack[-1] = Stack[-3]
0x142a: Call2 0x14d0

0x142b: Pop(1)
0x142c: IF (Stack[-1] == 0) GOTO 0x142f; Pop(1)

0x142d: Stack[-2] = (bool) 1
0x142e: Return(); Pop(0)

0x142f: Stack[-2] = (bool) 0
0x1430: Return(); Pop(0)

0x1431: PushEmpty()
0x1432: PushEmpty(bool, object)
0x1433: Stack[-1] = Stack[-3]
0x1434: Call2 0x14d7

0x1435: Pop(1)
0x1436: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x1437: Stack[-2] = (bool) 1
0x1438: Return(); Pop(0)

0x1439: Stack[-2] = (bool) 0
0x143a: Return(); Pop(0)

0x143b: PushEmpty()
0x143c: PushEmpty(bool, object)
0x143d: Stack[-1] = Stack[-3]
0x143e: Call2 0x14de

0x143f: Pop(1)
0x1440: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x1441: Stack[-2] = (bool) 1
0x1442: Return(); Pop(0)

0x1443: Stack[-2] = (bool) 0
0x1444: Return(); Pop(0)

0x1445: PushEmpty()
0x1446: PushEmpty(bool, object)
0x1447: Stack[-1] = Stack[-3]
0x1448: Call2 0x14e5

0x1449: Pop(1)
0x144a: IF (Stack[-1] == 0) GOTO 0x144d; Pop(1)

0x144b: Stack[-2] = (bool) 1
0x144c: Return(); Pop(0)

0x144d: Stack[-2] = (bool) 0
0x144e: Return(); Pop(0)

0x144f: PushEmpty(float, float)
0x1450: Push("money")
0x1451: @@ GetProperty(Stack[-1], Stack[-2])
0x1452: Pop(1)
0x1453: Push((int) 100)
0x1454: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1455: IF (Stack[-1] == 0) GOTO 0x1458; Pop(1)

0x1456: Stack[-4] = (bool) 1
0x1457: Return(); Pop(2)

0x1458: Stack[-4] = (bool) 0
0x1459: Return(); Pop(2)

0x145a: PushEmpty(float, float)
0x145b: Push("money")
0x145c: @@ GetProperty(Stack[-1], Stack[-2])
0x145d: Pop(1)
0x145e: Push((int) 500)
0x145f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1460: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x1461: Stack[-4] = (bool) 1
0x1462: Return(); Pop(2)

0x1463: Stack[-4] = (bool) 0
0x1464: Return(); Pop(2)

0x1465: PushEmpty(float, float)
0x1466: Push("money")
0x1467: @@ GetProperty(Stack[-1], Stack[-2])
0x1468: Pop(1)
0x1469: Push((int) 1000)
0x146a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x146b: IF (Stack[-1] == 0) GOTO 0x146e; Pop(1)

0x146c: Stack[-4] = (bool) 1
0x146d: Return(); Pop(2)

0x146e: Stack[-4] = (bool) 0
0x146f: Return(); Pop(2)

0x1470: PushEmpty(float, float)
0x1471: Push("money")
0x1472: @@ GetProperty(Stack[-1], Stack[-2])
0x1473: Pop(1)
0x1474: Push((int) 2000)
0x1475: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1476: IF (Stack[-1] == 0) GOTO 0x1479; Pop(1)

0x1477: Stack[-4] = (bool) 1
0x1478: Return(); Pop(2)

0x1479: Stack[-4] = (bool) 0
0x147a: Return(); Pop(2)

0x147b: PushEmpty(float, float)
0x147c: Push("money")
0x147d: @@ GetProperty(Stack[-1], Stack[-2])
0x147e: Pop(1)
0x147f: Push((int) 3000)
0x1480: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1481: IF (Stack[-1] == 0) GOTO 0x1484; Pop(1)

0x1482: Stack[-4] = (bool) 1
0x1483: Return(); Pop(2)

0x1484: Stack[-4] = (bool) 0
0x1485: Return(); Pop(2)

0x1486: PushEmpty(float, float)
0x1487: Push("money")
0x1488: @@ GetProperty(Stack[-1], Stack[-2])
0x1489: Pop(1)
0x148a: Push((int) 4000)
0x148b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x148c: IF (Stack[-1] == 0) GOTO 0x148f; Pop(1)

0x148d: Stack[-4] = (bool) 1
0x148e: Return(); Pop(2)

0x148f: Stack[-4] = (bool) 0
0x1490: Return(); Pop(2)

0x1491: PushEmpty()
0x1492: PushEmpty(int)
0x1493: Call2 0x1346

0x1494: Pop(0)
0x1495: Push((int) 6)
0x1496: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1497: Return(); Pop(0)

0x1498: PushEmpty()
0x1499: PushEmpty(int)
0x149a: Call2 0x1346

0x149b: Pop(0)
0x149c: Push((int) 1)
0x149d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x149e: Return(); Pop(0)

0x149f: PushEmpty()
0x14a0: PushEmpty(int)
0x14a1: Call2 0x1346

0x14a2: Pop(0)
0x14a3: Push((int) 2)
0x14a4: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14a5: Return(); Pop(0)

0x14a6: PushEmpty()
0x14a7: PushEmpty(int)
0x14a8: Call2 0x1346

0x14a9: Pop(0)
0x14aa: Push((int) 3)
0x14ab: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14ac: Return(); Pop(0)

0x14ad: PushEmpty()
0x14ae: PushEmpty(int)
0x14af: Call2 0x1346

0x14b0: Pop(0)
0x14b1: Push((int) 4)
0x14b2: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14b3: Return(); Pop(0)

0x14b4: PushEmpty()
0x14b5: PushEmpty(int)
0x14b6: Call2 0x1346

0x14b7: Pop(0)
0x14b8: Push((int) 5)
0x14b9: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14ba: Return(); Pop(0)

0x14bb: PushEmpty()
0x14bc: PushEmpty(int)
0x14bd: Call2 0x1346

0x14be: Pop(0)
0x14bf: Push((int) 6)
0x14c0: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14c1: Return(); Pop(0)

0x14c2: PushEmpty()
0x14c3: PushEmpty(int)
0x14c4: Call2 0x1346

0x14c5: Pop(0)
0x14c6: Push((int) 7)
0x14c7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14c8: Return(); Pop(0)

0x14c9: PushEmpty()
0x14ca: PushEmpty(int)
0x14cb: Call2 0x1346

0x14cc: Pop(0)
0x14cd: Push((int) 8)
0x14ce: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14cf: Return(); Pop(0)

0x14d0: PushEmpty()
0x14d1: PushEmpty(int)
0x14d2: Call2 0x1346

0x14d3: Pop(0)
0x14d4: Push((int) 9)
0x14d5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14d6: Return(); Pop(0)

0x14d7: PushEmpty()
0x14d8: PushEmpty(int)
0x14d9: Call2 0x1346

0x14da: Pop(0)
0x14db: Push((int) 10)
0x14dc: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14dd: Return(); Pop(0)

0x14de: PushEmpty()
0x14df: PushEmpty(int)
0x14e0: Call2 0x1346

0x14e1: Pop(0)
0x14e2: Push((int) 11)
0x14e3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14e4: Return(); Pop(0)

0x14e5: PushEmpty()
0x14e6: PushEmpty(int)
0x14e7: Call2 0x1346

0x14e8: Pop(0)
0x14e9: Push((int) 12)
0x14ea: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x14eb: Return(); Pop(0)

0x14ec: PushEmpty(int, int)
0x14ed: Push("branch")
0x14ee: @ GetVariable(Stack[-1], Stack[-2])
0x14ef: Pop(1)
0x14f0: Push((int) 0)
0x14f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14f2: IF (Stack[-1] == 0) GOTO 0x14f6; Pop(1)

0x14f3: Stack[-3] = (int) 1
0x14f4: Return(); Pop(2)

0x14f5: GOTO 0x14fb

0x14f6: Push((int) 1)
0x14f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14f8: IF (Stack[-1] == 0) GOTO 0x14fb; Pop(1)

0x14f9: Stack[-3] = (int) 2
0x14fa: Return(); Pop(2)

0x14fb: Stack[-3] = (int) 3
0x14fc: Return(); Pop(2)

0x14fd: PushEmpty(int, int)
0x14fe: Push("branch")
0x14ff: @ GetVariable(Stack[-1], Stack[-2])
0x1500: Pop(1)
0x1501: Stack[-3] = Stack[-1]
0x1502: Return(); Pop(2)

0x1503: PushEmpty()
0x1504: PushEmpty(int)
0x1505: Call2 0x14fd

0x1506: Pop(0)
0x1507: Push((int) 1)
0x1508: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1509: IF (Stack[-1] == 0) GOTO 0x150d; Pop(1)

0x150a: @ WorkWithCorpse(Stack[-1])
0x150b: Pop(0)
0x150c: GOTO 0x150f

0x150d: @ Barter(Stack[-1])
0x150e: Pop(0)
0x150f: Return(); Pop(0)

0x1510: PushEmpty(int, bool, int, bool)
0x1511: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1512: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1513: Push("GenerateMoney: iMin > iMax")
0x1514: @ Trace(Stack[-1])
0x1515: Pop(1)
0x1516: Return(); Pop(4)

0x1517: Stack[-2] = (int) 0
0x1518: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1519: IF (Stack[-1] == 0) GOTO 0x151e; Pop(1)

0x151a: Pop(0); Push(Stack[-5] - Stack[-6]);
0x151b: @ irand(Stack[-3], Stack[-1])
0x151c: Pop(1)
0x151d: GOTO 0x1522

0x151e: Push((int) 0)
0x151f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1522; Pop(1)

0x1521: Return(); Pop(4)

0x1522: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x1523: Push((int) 0)
0x1524: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1525: IF (Stack[-1] == 0) GOTO 0x1527; Pop(1)

0x1526: Return(); Pop(4)

0x1527: PushEmpty(int, string)
0x1528: Stack[-1] = "Money"
0x1529: Call2 0x1607

0x152a: Pop(1)
0x152b: Push((int) 0)
0x152c: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x152d: Pop(2)
0x152e: Return(); Pop(4)

0x152f: PushEmpty(object, int, bool, object, int, bool)
0x1530: @ CreateInvItem(Stack[-3])
0x1531: Pop(0)
0x1532: @@ SetItemName(Stack[-7])
0x1533: Pop(0)
0x1534: Push("Organ")
0x1535: Push((int) 1)
0x1536: @@ SetProperty(Stack[-2], Stack[-1])
0x1537: Pop(2)
0x1538: @@ GetItemID(Stack[-2])
0x1539: Pop(0)
0x153a: Push((int) 0)
0x153b: Push((int) 1)
0x153c: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x153d: Pop(2)
0x153e: Return(); Pop(6)

0x153f: Stack[-3] = 0
0x1540: PushEmpty(int)
0x1541: Call2 0x14fd

0x1542: Pop(0)
0x1543: Push((int) 1)
0x1544: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1545: IF (Stack[-1] == 0) GOTO 0x1547; Pop(1)

0x1546: Return(); Pop(0)

0x1547: PushEmpty(string)
0x1548: Stack[-1] = "liver"
0x1549: Call2 0x152f

0x154a: Pop(1)
0x154b: PushEmpty(string)
0x154c: Stack[-1] = "kidney"
0x154d: Call2 0x152f

0x154e: Pop(1)
0x154f: PushEmpty(string)
0x1550: Stack[-1] = "heart"
0x1551: Call2 0x152f

0x1552: Pop(1)
0x1553: PushEmpty(string)
0x1554: Stack[-1] = "blood"
0x1555: Call2 0x152f

0x1556: Pop(1)
0x1557: Return(); Pop(0)

0x1558: PushEmpty(int, bool, int, bool)
0x1559: Push(Stack[-5])
0x155a: IF (Stack[-1] == 0) GOTO 0x15b1; Pop(1)

0x155b: PushEmpty(int, int)
0x155c: Stack[-2] = (int) 0
0x155d: Push((int) 100)
0x155e: PushEmpty(int)
0x155f: Call2 0x1346

0x1560: Pop(0)
0x1561: Push((int) 100)
0x1562: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1563: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1564: Call2 0x1510

0x1565: Pop(2)
0x1566: Push((int) 8)
0x1567: @ irand(Stack[-3], Stack[-1])
0x1568: Pop(1)
0x1569: Push((int) 0)
0x156a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156b: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x156c: PushEmpty(int, string)
0x156d: Stack[-1] = "lemon"
0x156e: Call2 0x1607

0x156f: Pop(1)
0x1570: Push((int) 0)
0x1571: Push((int) 1)
0x1572: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1573: Pop(3)
0x1574: GOTO 0x15b0

0x1575: Push((int) 1)
0x1576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1577: IF (Stack[-1] == 0) GOTO 0x1581; Pop(1)

0x1578: PushEmpty(int, string)
0x1579: Stack[-1] = "rusk"
0x157a: Call2 0x1607

0x157b: Pop(1)
0x157c: Push((int) 0)
0x157d: Push((int) 1)
0x157e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x157f: Pop(3)
0x1580: GOTO 0x15b0

0x1581: Push((int) 2)
0x1582: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1583: IF (Stack[-1] == 0) GOTO 0x158d; Pop(1)

0x1584: PushEmpty(int, string)
0x1585: Stack[-1] = "hook"
0x1586: Call2 0x1607

0x1587: Pop(1)
0x1588: Push((int) 0)
0x1589: Push((int) 1)
0x158a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158b: Pop(3)
0x158c: GOTO 0x15b0

0x158d: Push((int) 4)
0x158e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158f: IF (Stack[-1] == 0) GOTO 0x1599; Pop(1)

0x1590: PushEmpty(int, string)
0x1591: Stack[-1] = "syringe"
0x1592: Call2 0x1607

0x1593: Pop(1)
0x1594: Push((int) 0)
0x1595: Push((int) 1)
0x1596: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1597: Pop(3)
0x1598: GOTO 0x15b0

0x1599: Push((int) 5)
0x159a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159b: IF (Stack[-1] == 0) GOTO 0x15a5; Pop(1)

0x159c: PushEmpty(int, string)
0x159d: Stack[-1] = "watch"
0x159e: Call2 0x1607

0x159f: Pop(1)
0x15a0: Push((int) 0)
0x15a1: Push((int) 1)
0x15a2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a3: Pop(3)
0x15a4: GOTO 0x15b0

0x15a5: Push((int) 6)
0x15a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a7: IF (Stack[-1] == 0) GOTO 0x15b0; Pop(1)

0x15a8: PushEmpty(int, string)
0x15a9: Stack[-1] = "razor"
0x15aa: Call2 0x1607

0x15ab: Pop(1)
0x15ac: Push((int) 0)
0x15ad: Push((int) 1)
0x15ae: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15af: Pop(3)
0x15b0: GOTO 0x1606

0x15b1: PushEmpty(int, int)
0x15b2: Stack[-2] = (int) 0
0x15b3: Push((int) 50)
0x15b4: PushEmpty(int)
0x15b5: Call2 0x1346

0x15b6: Pop(0)
0x15b7: Push((int) 50)
0x15b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x15b9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x15ba: Call2 0x1510

0x15bb: Pop(2)
0x15bc: Push((int) 7)
0x15bd: @ irand(Stack[-3], Stack[-1])
0x15be: Pop(1)
0x15bf: Push((int) 0)
0x15c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c1: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c2: PushEmpty(int, string)
0x15c3: Stack[-1] = "beads"
0x15c4: Call2 0x1607

0x15c5: Pop(1)
0x15c6: Push((int) 0)
0x15c7: Push((int) 1)
0x15c8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15c9: Pop(3)
0x15ca: GOTO 0x1606

0x15cb: Push((int) 1)
0x15cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15cd: IF (Stack[-1] == 0) GOTO 0x15d7; Pop(1)

0x15ce: PushEmpty(int, string)
0x15cf: Stack[-1] = "bracelet"
0x15d0: Call2 0x1607

0x15d1: Pop(1)
0x15d2: Push((int) 0)
0x15d3: Push((int) 1)
0x15d4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15d5: Pop(3)
0x15d6: GOTO 0x1606

0x15d7: Push((int) 2)
0x15d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d9: IF (Stack[-1] == 0) GOTO 0x15e3; Pop(1)

0x15da: PushEmpty(int, string)
0x15db: Stack[-1] = "ear_ring"
0x15dc: Call2 0x1607

0x15dd: Pop(1)
0x15de: Push((int) 0)
0x15df: Push((int) 1)
0x15e0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15e1: Pop(3)
0x15e2: GOTO 0x1606

0x15e3: Push((int) 3)
0x15e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e5: IF (Stack[-1] == 0) GOTO 0x15ef; Pop(1)

0x15e6: PushEmpty(int, string)
0x15e7: Stack[-1] = "gold_ring"
0x15e8: Call2 0x1607

0x15e9: Pop(1)
0x15ea: Push((int) 0)
0x15eb: Push((int) 1)
0x15ec: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ed: Pop(3)
0x15ee: GOTO 0x1606

0x15ef: Push((int) 4)
0x15f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f1: IF (Stack[-1] == 0) GOTO 0x15fb; Pop(1)

0x15f2: PushEmpty(int, string)
0x15f3: Stack[-1] = "silver_ring"
0x15f4: Call2 0x1607

0x15f5: Pop(1)
0x15f6: Push((int) 0)
0x15f7: Push((int) 1)
0x15f8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15f9: Pop(3)
0x15fa: GOTO 0x1606

0x15fb: Push((int) 5)
0x15fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15fd: IF (Stack[-1] == 0) GOTO 0x1606; Pop(1)

0x15fe: PushEmpty(int, string)
0x15ff: Stack[-1] = "flower"
0x1600: Call2 0x1607

0x1601: Pop(1)
0x1602: Push((int) 0)
0x1603: Push((int) 1)
0x1604: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1605: Pop(3)
0x1606: Return(); Pop(4)

0x1607: PushEmpty(int, int)
0x1608: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1609: Pop(0)
0x160a: Stack[-4] = Stack[-1]
0x160b: Return(); Pop(2)

0x160c: PushEmpty()
0x160d: PushEmpty(object)
0x160e: Stack[-1] = Stack[-2]
0x160f: Push(-1, 0); TaskCall(2)
0x1610: Call2 0xa77

0x1611: Pop(-1, 0); TaskReturn
0x1612: Pop(1)
0x1613: Return(); Pop(0)

0x1614: PushEmpty(float, float)
0x1615: Push("health")
0x1616: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1617: IF (Stack[-1] == 0) GOTO 0x1620; Pop(1)

0x1618: Push("health")
0x1619: @ GetProperty(Stack[-1], Stack[-2])
0x161a: Pop(1)
0x161b: Push((int) 0)
0x161c: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x161d: IF (Stack[-1] == 0) GOTO 0x1620; Pop(1)

0x161e: @ SignalDeath(Stack[-4])
0x161f: Pop(0)
0x1620: Return(); Pop(2)

0x1621: PushEmpty()
0x1622: PushEmpty(object)
0x1623: Stack[-1] = Stack[-2]
0x1624: Call2 0x160c

0x1625: Pop(1)
0x1626: Return(); Pop(0)

0x1627: PushEmpty()
0x1628: PushEmpty(object, int, float)
0x1629: Stack[-3] = Stack[-7]
0x162a: Stack[-2] = Stack[-6]
0x162b: Stack[-1] = Stack[-5]
0x162c: Call2 0x119b

0x162d: Pop(3)
0x162e: Return(); Pop(0)

0x162f: PushEmpty()
0x1630: PushEmpty(object, int, float, cvector, cvector)
0x1631: Stack[-5] = Stack[-11]
0x1632: Stack[-4] = Stack[-10]
0x1633: Stack[-3] = Stack[-9]
0x1634: Stack[-2] = Stack[-7]
0x1635: Stack[-1] = Stack[-6]
0x1636: Call2 0x11df

0x1637: Pop(5)
0x1638: Return(); Pop(0)

0x1639: PushEmpty()
0x163a: Push("unholster")
0x163b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163c: IF (Stack[-1] == 0) GOTO 0x1644; Pop(1)

0x163d: PushEmpty(bool, object)
0x163e: Stack[-1] = Stack[-4]
0x163f: Call2 0x175c

0x1640: Stack[-5] = Stack[-2]
0x1641: Pop(2)
0x1642: Return(); Pop(0)

0x1643: GOTO 0x1657

0x1644: Push("player_shot")
0x1645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1646: IF (Stack[-1] == 0) GOTO 0x164e; Pop(1)

0x1647: PushEmpty(bool, object)
0x1648: Stack[-1] = Stack[-4]
0x1649: Call2 0x1761

0x164a: Stack[-5] = Stack[-2]
0x164b: Pop(2)
0x164c: Return(); Pop(0)

0x164d: GOTO 0x1657

0x164e: Push("battle")
0x164f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1650: IF (Stack[-1] == 0) GOTO 0x1657; Pop(1)

0x1651: PushEmpty(bool, object)
0x1652: Stack[-1] = Stack[-4]
0x1653: Call2 0x1778

0x1654: Stack[-5] = Stack[-2]
0x1655: Pop(2)
0x1656: Return(); Pop(0)

0x1657: Stack[-3] = (bool) 0
0x1658: Return(); Pop(0)

0x1659: PushEmpty()
0x165a: Push("unholster")
0x165b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x165c: IF (Stack[-1] == 0) GOTO 0x1662; Pop(1)

0x165d: PushEmpty(object)
0x165e: Stack[-1] = Stack[-3]
0x165f: Call2 0x175f

0x1660: Pop(1)
0x1661: GOTO 0x1671

0x1662: Push("player_shot")
0x1663: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1664: IF (Stack[-1] == 0) GOTO 0x166a; Pop(1)

0x1665: PushEmpty(object)
0x1666: Stack[-1] = Stack[-3]
0x1667: Call2 0x1770

0x1668: Pop(1)
0x1669: GOTO 0x1671

0x166a: Push("battle")
0x166b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x166c: IF (Stack[-1] == 0) GOTO 0x1671; Pop(1)

0x166d: PushEmpty(object)
0x166e: Stack[-1] = Stack[-3]
0x166f: Call2 0x177b

0x1670: Pop(1)
0x1671: Return(); Pop(0)

0x1672: PushEmpty(bool, bool)
0x1673: PushEmpty(bool)
0x1674: Stack[-1] = (bool) 0
0x1675: PushEmpty(bool, object)
0x1676: Stack[-1] = Stack[-6]
0x1677: Call2 0x175c

0x1678: Pop(1)
0x1679: IF (Stack[-1] == 0) GOTO 0x1680; Pop(1)

0x167a: PushEmpty(bool, object)
0x167b: Stack[-1] = Stack[-6]
0x167c: Call2 0x1100

0x167d: Pop(1)
0x167e: IF (Stack[-1] == 0) GOTO 0x1680; Pop(1)

0x167f: Stack[-1] = (bool) 1
0x1680: IF (Stack[-1] == 0) GOTO 0x1687; Pop(1)

0x1681: @@ IsWeaponHolstered(Stack[-1])
0x1682: Pop(0)
0x1683: Pop(0); Push((bool) Stack[-1] == 0)
0x1684: IF (Stack[-1] == 0) GOTO 0x1687; Pop(1)

0x1685: Stack[-4] = (bool) 1
0x1686: Return(); Pop(2)

0x1687: Stack[-4] = (bool) 0
0x1688: Return(); Pop(2)

0x1689: PushEmpty()
0x168a: PushEmpty(object)
0x168b: Stack[-1] = Stack[-2]
0x168c: Call2 0x175f

0x168d: Pop(1)
0x168e: Return(); Pop(0)

0x168f: PushEmpty()
0x1690: PushEmpty(bool, object)
0x1691: Stack[-1] = Stack[-3]
0x1692: Call2 0x1100

0x1693: Pop(1)
0x1694: IF (Stack[-1] == 0) GOTO 0x169b; Pop(1)

0x1695: PushEmpty(object)
0x1696: Call2 0x12ae

0x1697: Pop(0)
0x1698: Push((float)-0.02)
0x1699: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x169a: Pop(2)
0x169b: Return(); Pop(0)

0x169c: PushEmpty(object, object)
0x169d: Push("heal")
0x169e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x169f: IF (Stack[-1] == 0) GOTO 0x16aa; Pop(1)

0x16a0: Push("player")
0x16a1: @ FindActor(Stack[-2], Stack[-1])
0x16a2: Pop(1)
0x16a3: PushEmpty(bool, object)
0x16a4: Stack[-1] = Stack[-3]
0x16a5: Call2 0x177d

0x16a6: Stack[-6] = Stack[-2]
0x16a7: Pop(2)
0x16a8: Return(); Pop(2)

0x16a9: Stack[-1] = 0
0x16aa: Stack[-4] = (bool) 0
0x16ab: Return(); Pop(2)

0x16ac: PushEmpty(object, object)
0x16ad: Push("heal")
0x16ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16af: IF (Stack[-1] == 0) GOTO 0x16b8; Pop(1)

0x16b0: Push("player")
0x16b1: @ FindActor(Stack[-2], Stack[-1])
0x16b2: Pop(1)
0x16b3: PushEmpty(object)
0x16b4: Stack[-1] = Stack[-2]
0x16b5: Call2 0x1780

0x16b6: Pop(1)
0x16b7: Stack[-1] = 0
0x16b8: Return(); Pop(2)

0x16b9: PushEmpty(string, string)
0x16ba: Stack[-1] = "idle"
0x16bb: Push(Stack[-3])
0x16bc: IF (Stack[-1] == 0) GOTO 0x16be; Pop(1)

0x16bd: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x16be: Stack[-4] = Stack[-1]
0x16bf: Return(); Pop(2)

0x16c0: PushEmpty(int, bool, int, bool)
0x16c1: Stack[-2] = (int) 0
0x16c2: Push("all")
0x16c3: PushEmpty(string, int)
0x16c4: Stack[-1] = Stack[-5]
0x16c5: Call2 0x16b9

0x16c6: Pop(1)
0x16c7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x16c8: Pop(2)
0x16c9: Pop(0); Push((bool) Stack[-1] == 0)
0x16ca: IF (Stack[-1] == 0) GOTO 0x16cc; Pop(1)

0x16cb: GOTO 0x16cf

0x16cc: Push((int) 1)
0x16cd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16ce: GOTO 0x16c2

0x16cf: Stack[-5] = Stack[-2]
0x16d0: Return(); Pop(4)

0x16d1: PushEmpty()
0x16d2: PushEmpty(bool)
0x16d3: Call2 0x1806

0x16d4: Pop(0)
0x16d5: IF (Stack[-1] == 0) GOTO 0x16d8; Pop(1)

0x16d6: Stack[-2] = (int) 2
0x16d7: GOTO 0x16d9

0x16d8: Stack[-2] = (int) 0
0x16d9: Return(); Pop(0)

0x16da: PushEmpty()
0x16db: PushEmpty(object)
0x16dc: Stack[-1] = Stack[-2]
0x16dd: Push(-1, 1); TaskCall(5)
0x16de: Call2 0xd7e

0x16df: Pop(-1, 1); TaskReturn
0x16e0: Pop(1)
0x16e1: Return(); Pop(0)

0x16e2: PushEmpty()
0x16e3: PushEmpty(bool, object)
0x16e4: Stack[-1] = Stack[-3]
0x16e5: Call2 0x1157

0x16e6: Pop(1)
0x16e7: IF (Stack[-1] == 0) GOTO 0x16ea; Pop(1)

0x16e8: Stack[-2] = (int) 2
0x16e9: GOTO 0x16eb

0x16ea: Stack[-2] = (int) 0
0x16eb: Return(); Pop(0)

0x16ec: PushEmpty()
0x16ed: PushEmpty(object)
0x16ee: Stack[-1] = Stack[-2]
0x16ef: Push(-1, 3); TaskCall(6)
0x16f0: Call2 0xe91

0x16f1: Pop(-1, 3); TaskReturn
0x16f2: Pop(1)
0x16f3: Return(); Pop(0)

0x16f4: PushEmpty()
0x16f5: PushEmpty(bool, object)
0x16f6: Stack[-1] = Stack[-4]
0x16f7: Call2 0x1157

0x16f8: Pop(1)
0x16f9: IF (Stack[-1] == 0) GOTO 0x16fc; Pop(1)

0x16fa: Stack[-3] = (int) 2
0x16fb: GOTO 0x16fd

0x16fc: Stack[-3] = (int) 0
0x16fd: Return(); Pop(0)

0x16fe: PushEmpty()
0x16ff: PushEmpty(object)
0x1700: Stack[-1] = Stack[-2]
0x1701: Push(-1, 3); TaskCall(7)
0x1702: Call2 0xf8d

0x1703: Pop(-1, 3); TaskReturn
0x1704: Pop(1)
0x1705: Return(); Pop(0)

0x1706: PushEmpty(string, bool, string, bool)
0x1707: PushEmpty(bool, object, string)
0x1708: Stack[-2] = Stack[-9]
0x1709: Stack[-1] = "class"
0x170a: Call2 0x1105

0x170b: Pop(2)
0x170c: Pop(1); Push((bool) Stack[-1] == 0)
0x170d: IF (Stack[-1] == 0) GOTO 0x1710; Pop(1)

0x170e: Stack[-8] = (bool) 0
0x170f: Return(); Pop(4)

0x1710: Push("class")
0x1711: @@ GetProperty(Stack[-1], Stack[-3])
0x1712: Pop(1)
0x1713: Push("rat")
0x1714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1715: IF (Stack[-1] == 0) GOTO 0x1719; Pop(1)

0x1716: Stack[-8] = (bool) 0
0x1717: Return(); Pop(4)

0x1718: GOTO 0x1724

0x1719: Push("rat_big")
0x171a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171b: IF (Stack[-1] == 0) GOTO 0x171f; Pop(1)

0x171c: Stack[-8] = (bool) 0
0x171d: Return(); Pop(4)

0x171e: GOTO 0x1724

0x171f: Push("dog")
0x1720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1721: IF (Stack[-1] == 0) GOTO 0x1724; Pop(1)

0x1722: Stack[-8] = (bool) 0
0x1723: Return(); Pop(4)

0x1724: @ CanSee(Stack[-1], Stack[-7])
0x1725: Pop(0)
0x1726: PushEmpty(bool)
0x1727: Stack[-1] = (bool) 1
0x1728: Push(Stack[-2])
0x1729: IF (Stack[-1] == 0) GOTO 0x1732; Pop(1)

0x172a: PushEmpty(float, object)
0x172b: Stack[-1] = Stack[-10]
0x172c: Call2 0x10f8

0x172d: Pop(1)
0x172e: Pop(0); Push(Stack[-7] * Stack[-7]);
0x172f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1730: IF (Stack[-1] == 0) GOTO 0x1732; Pop(1)

0x1731: Stack[-1] = (bool) 0
0x1732: IF (Stack[-1] == 0) GOTO 0x1735; Pop(1)

0x1733: Stack[-8] = (bool) 1
0x1734: Return(); Pop(4)

0x1735: @ CanSee(Stack[-1], Stack[-6])
0x1736: Pop(0)
0x1737: PushEmpty(bool)
0x1738: Stack[-1] = (bool) 1
0x1739: Push(Stack[-2])
0x173a: IF (Stack[-1] == 0) GOTO 0x1743; Pop(1)

0x173b: PushEmpty(float, object)
0x173c: Stack[-1] = Stack[-9]
0x173d: Call2 0x10f8

0x173e: Pop(1)
0x173f: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1740: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1741: IF (Stack[-1] == 0) GOTO 0x1743; Pop(1)

0x1742: Stack[-1] = (bool) 0
0x1743: IF (Stack[-1] == 0) GOTO 0x1746; Pop(1)

0x1744: Stack[-8] = (bool) 1
0x1745: Return(); Pop(4)

0x1746: Stack[-8] = (bool) 0
0x1747: Return(); Pop(4)

0x1748: PushEmpty()
0x1749: Stack[-2] = (int) 0
0x174a: Return(); Pop(0)

0x174b: PushEmpty()
0x174c: Return(); Pop(0)

0x174d: PushEmpty()
0x174e: Stack[-3] = (int) 0
0x174f: Return(); Pop(0)

0x1750: PushEmpty()
0x1751: Return(); Pop(0)

0x1752: PushEmpty()
0x1753: Stack[-2] = (int) 2
0x1754: Return(); Pop(0)

0x1755: PushEmpty()
0x1756: PushEmpty(object)
0x1757: Stack[-1] = Stack[-2]
0x1758: Call2 0x1790

0x1759: Pop(1)
0x175a: Return(); Pop(0)

0x175b: Return(); Pop(0)

0x175c: PushEmpty()
0x175d: Stack[-2] = (bool) 0
0x175e: Return(); Pop(0)

0x175f: PushEmpty()
0x1760: Return(); Pop(0)

0x1761: PushEmpty(bool, bool)
0x1762: @ CanSee(Stack[-1], Stack[-3])
0x1763: Pop(0)
0x1764: Stack[-4] = (bool) 1
0x1765: Push(Stack[-1])
0x1766: IF (Stack[-1] == 0) GOTO 0x176f; Pop(1)

0x1767: PushEmpty(float, object)
0x1768: Stack[-1] = Stack[-5]
0x1769: Call2 0x10f8

0x176a: Pop(1)
0x176b: Push((int) 4000000)
0x176c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x176d: IF (Stack[-1] == 0) GOTO 0x176f; Pop(1)

0x176e: Stack[-4] = (bool) 0
0x176f: Return(); Pop(2)

0x1770: PushEmpty()
0x1771: PushEmpty(object)
0x1772: Stack[-1] = Stack[-2]
0x1773: Push(-1, 3); TaskCall(8)
0x1774: Call2 0x104f

0x1775: Pop(-1, 3); TaskReturn
0x1776: Pop(1)
0x1777: Return(); Pop(0)

0x1778: PushEmpty()
0x1779: Stack[-2] = (bool) 0
0x177a: Return(); Pop(0)

0x177b: PushEmpty()
0x177c: Return(); Pop(0)

0x177d: PushEmpty()
0x177e: Stack[-2] = (bool) 0
0x177f: Return(); Pop(0)

0x1780: PushEmpty()
0x1781: Return(); Pop(0)

0x1782: Stack[-1] = (int) 515563
0x1783: Return(); Pop(0)

0x1784: Stack[-1] = (int) 503348
0x1785: Return(); Pop(0)

0x1786: Stack[-1] = "ui/NPC_Citizen3.png"
0x1787: Return(); Pop(0)

0x1788: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1789: Return(); Pop(0)

0x178a: Stack[-1] = (bool) 0
0x178b: Return(); Pop(0)

0x178c: Push(GlobalVars[0])
0x178d: Stack[-1] = (bool) 0
0x178e: GlobalVars[0] = Stack[-1]; Pop(1)
0x178f: Return(); Pop(0)

0x1790: PushEmpty(bool, int, float, int, bool, int, float, int)
0x1791: Push(GlobalVars[0])
0x1792: IF (Stack[-1] == 0) GOTO 0x179d; Pop(1)

0x1793: @ IsOverrideActive(Stack[-4])
0x1794: Pop(0)
0x1795: Pop(0); Push((bool) Stack[-4] == 0)
0x1796: IF (Stack[-1] == 0) GOTO 0x179b; Pop(1)

0x1797: PushEmpty(object)
0x1798: Stack[-1] = Stack[-10]
0x1799: Call2 0x1503

0x179a: Pop(1)
0x179b: Return(); Pop(8)

0x179c: GOTO 0x1805

0x179d: Push(GlobalVars[1])
0x179e: IF (Stack[-1] == 0) GOTO 0x17a0; Pop(1)

0x179f: Return(); Pop(8)

0x17a0: PushEmpty(int, object)
0x17a1: Stack[-1] = Stack[-11]
0x17a2: Push(-2, 1); TaskCall(0)
0x17a3: Call2 0x0

0x17a4: Pop(-2, 1); TaskReturn
0x17a5: Stack[-5] = Stack[-2]
0x17a6: Pop(2)
0x17a7: Push((int) -1)
0x17a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17a9: IF (Stack[-1] == 0) GOTO 0x17ab; Pop(1)

0x17aa: Return(); Pop(8)

0x17ab: Push(GlobalVars[1])
0x17ac: Stack[-1] = (bool) 1
0x17ad: GlobalVars[1] = Stack[-1]; Pop(1)
0x17ae: Push((float)10000.0)
0x17af: Stack[-3] = Stack[-4] / Stack[-1]; Pop(1);
0x17b0: PushEmpty(int)
0x17b1: Call2 0x1346

0x17b2: Stack[-2] = Stack[-1]
0x17b3: Pop(1)
0x17b4: Push((int) 1)
0x17b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b6: IF (Stack[-1] == 0) GOTO 0x17ba; Pop(1)

0x17b7: Push((float)3.33333)
0x17b8: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17b9: GOTO 0x17fb

0x17ba: Push((int) 2)
0x17bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17bc: IF (Stack[-1] == 0) GOTO 0x17c0; Pop(1)

0x17bd: Push((float)0.33333)
0x17be: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17bf: GOTO 0x17fb

0x17c0: Push((int) 3)
0x17c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17c2: IF (Stack[-1] == 0) GOTO 0x17c6; Pop(1)

0x17c3: Push((float)0.66667)
0x17c4: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17c5: GOTO 0x17fb

0x17c6: Push((int) 4)
0x17c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17c8: IF (Stack[-1] == 0) GOTO 0x17cc; Pop(1)

0x17c9: Push((float)1.25)
0x17ca: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17cb: GOTO 0x17fb

0x17cc: Push((int) 5)
0x17cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17ce: IF (Stack[-1] == 0) GOTO 0x17d2; Pop(1)

0x17cf: Push((float)0.83333)
0x17d0: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17d1: GOTO 0x17fb

0x17d2: Push((int) 6)
0x17d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17d4: IF (Stack[-1] == 0) GOTO 0x17d8; Pop(1)

0x17d5: Push((float)0.5)
0x17d6: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17d7: GOTO 0x17fb

0x17d8: Push((int) 7)
0x17d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17da: IF (Stack[-1] == 0) GOTO 0x17de; Pop(1)

0x17db: Push((float)1.0)
0x17dc: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17dd: GOTO 0x17fb

0x17de: Push((int) 8)
0x17df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17e0: IF (Stack[-1] == 0) GOTO 0x17e4; Pop(1)

0x17e1: Push((float)0.83333)
0x17e2: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17e3: GOTO 0x17fb

0x17e4: Push((int) 9)
0x17e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17e6: IF (Stack[-1] == 0) GOTO 0x17ea; Pop(1)

0x17e7: Push((float)0.33333)
0x17e8: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17e9: GOTO 0x17fb

0x17ea: Push((int) 10)
0x17eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17ec: IF (Stack[-1] == 0) GOTO 0x17f0; Pop(1)

0x17ed: Push((float)0.37037)
0x17ee: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17ef: GOTO 0x17fb

0x17f0: Push((int) 11)
0x17f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17f2: IF (Stack[-1] == 0) GOTO 0x17f6; Pop(1)

0x17f3: Push((float)0.41667)
0x17f4: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17f5: GOTO 0x17fb

0x17f6: Push((int) 12)
0x17f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17f8: IF (Stack[-1] == 0) GOTO 0x17fb; Pop(1)

0x17f9: Push((float)0.5)
0x17fa: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x17fb: PushEmpty(bool, object, float)
0x17fc: Stack[-2] = Stack[-12]
0x17fd: Stack[-1] = Stack[-5]
0x17fe: Call2 0x1319

0x17ff: Pop(3)
0x1800: PushEmpty(object, int)
0x1801: Stack[-2] = Stack[-11]
0x1802: Stack[-1] = -Stack[-5]; Pop(0);
0x1803: Call2 0x1306

0x1804: Pop(2)
0x1805: Return(); Pop(8)

0x1806: Stack[-1] = (bool) 0
0x1807: Return(); Pop(0)

0x1808: PushEmpty()
0x1809: PushEmpty(bool, object, object, float)
0x180a: Stack[-3] = Stack[-7]
0x180b: Stack[-2] = Stack[-6]
0x180c: Stack[-1] = (float) 700.0
0x180d: Call2 0x1706

0x180e: Stack[-8] = Stack[-4]
0x180f: Pop(4)
0x1810: Return(); Pop(0)

0x1811: PushEmpty()
0x1812: PushEmpty(bool, object)
0x1813: Stack[-1] = Stack[-3]
0x1814: Call2 0x1100

0x1815: Pop(1)
0x1816: IF (Stack[-1] == 0) GOTO 0x1822; Pop(1)

0x1817: PushEmpty(object)
0x1818: Call2 0x12ae

0x1819: Pop(0)
0x181a: Push((float)-0.03)
0x181b: Push((bool) 1)
0x181c: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x181d: Pop(3)
0x181e: PushEmpty(bool)
0x181f: Stack[-1] = (bool) 1
0x1820: Call2 0x1558

0x1821: Pop(1)
0x1822: PushEmpty()
0x1823: Call2 0x1540

0x1824: Pop(0)
0x1825: Push(GlobalVars[0])
0x1826: Stack[-1] = (bool) 1
0x1827: GlobalVars[0] = Stack[-1]; Pop(1)
0x1828: Push((int) 50)
0x1829: Push((int) 40)
0x182a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x182b: Pop(2)
0x182c: Return(); Pop(0)

