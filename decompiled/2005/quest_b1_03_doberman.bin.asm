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
	GetPosition
	Can't retreat, distance: 
	RemoveStationaryActor
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
	walk
	run
	powder
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
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	reputation
	battle
	SetReturnValue
	b1q03_retreat
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	quest_b1_03
	doberman_dead

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
	Sleep (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	Stop (0 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	Speak (1 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	AddItem (4 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
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
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x180
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x188 Vars = (object)
		EVENT_17 Op = 0x1ad Vars = (object)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_17 Op = 0x21a Vars = (object)
		EVENT_7 Op = 0x28f Vars = (int)
		EVENT_41 Op = 0x2ca Vars = (object)
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 2
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x5c4 Vars = (int)
		EVENT_1 Op = 0x5df Vars = (object)
		EVENT_2 Op = 0x5ee Vars = (object)
		EVENT_10 Op = 0x674 Vars = (object)
		EVENT_41 Op = 0x67f Vars = (object)
	GTASK_6  Params = 1
		EVENT_0 Op = 0x6ad Vars = (object)
		EVENT_22 Op = 0x72c Vars = (object, int, float, float)
		EVENT_16 Op = 0x72e Vars = (object, string)
		EVENT_41 Op = 0x730 Vars = (object)

Events:
EVENT_22 Op = 0xa33 Vars = (object, int, float, float)
EVENT_43 Op = 0xa3b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa45 Vars = (object, string)
EVENT_41 Op = 0xa52 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x88b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa07

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa05

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa09

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa0b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x9e1

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
0x41: Call2 0x8cf

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
0x54: Push((int) 518092)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 519592)
0x5a: Push((int) 20773)
0x5b: Push((int) 20772)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 519588)
0x5f: Push((int) 20769)
0x60: Push((int) 20768)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0xa0d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x8e0

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
0x86: Call2 0xa0d

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
0x96: Call2 0x8f0

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x90a

0x9f: Pop(0)
0xa0: Push((int) 19225)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x9d8

0xa7: Pop(2)
0xa8: Push((int) 19226)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x9d3

0xaf: Pop(2)
0xb0: Push((int) 20788)
0xb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: PushEmpty(object, object)
0xb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6: Call2 0x9d8

0xb7: Pop(2)
0xb8: Push((int) 20778)
0xb9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x9d3

0xbf: Pop(2)
0xc0: Push((int) 19224)
0xc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc3: PushEmpty(string)
0xc4: Stack[-1] = "Neutral"
0xc5: Call2 0x84

0xc6: Pop(1)
0xc7: Push((int) 518092)
0xc8: @@ SetMessage(Stack[-1])
0xc9: Pop(1)
0xca: @@ ClearReplies()
0xcb: Pop(0)
0xcc: Push((int) 519592)
0xcd: Push((int) 20773)
0xce: Push((int) 20772)
0xcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(3)
0xd1: Push((int) 519588)
0xd2: Push((int) 20769)
0xd3: Push((int) 20768)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: Return(); Pop(0)

0xd7: Push((int) 20769)
0xd8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0x84

0xdd: Pop(1)
0xde: Push((int) 519589)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 519590)
0xe4: Push((int) 20771)
0xe5: Push((int) 20770)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 519596)
0xe9: Push((int) 20773)
0xea: Push((int) 20776)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: Push((int) 20771)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf1: PushEmpty(string)
0xf2: Stack[-1] = "Neutral"
0xf3: Call2 0x84

0xf4: Pop(1)
0xf5: Push((int) 519591)
0xf6: @@ SetMessage(Stack[-1])
0xf7: Pop(1)
0xf8: @@ ClearReplies()
0xf9: Pop(0)
0xfa: Push((int) 519597)
0xfb: Push((int) -1)
0xfc: Push((int) 20778)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 519598)
0x100: Push((int) 20773)
0x101: Push((int) 20779)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 20773)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call2 0x84

0x10b: Pop(1)
0x10c: Push((int) 519593)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 519594)
0x112: Push((int) 20775)
0x113: Push((int) 20774)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 20775)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call2 0x84

0x11d: Pop(1)
0x11e: Push((int) 519595)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 519599)
0x124: Push((int) 28362)
0x125: Push((int) 20781)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Push((int) 519600)
0x129: Push((int) 20786)
0x12a: Push((int) 20782)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 20786)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call2 0x84

0x134: Pop(1)
0x135: Push((int) 519603)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 519604)
0x13b: Push((int) 20784)
0x13c: Push((int) 20787)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Push((int) 519605)
0x140: Push((int) -1)
0x141: Push((int) 20788)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 28362)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0x84

0x14b: Pop(1)
0x14c: Push((int) 527067)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 527068)
0x152: Push((int) 20784)
0x153: Push((int) 28363)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 527069)
0x157: Push((int) 20784)
0x158: Push((int) 28364)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 20784)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x84

0x162: Pop(1)
0x163: Push((int) 519602)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 518093)
0x169: Push((int) -1)
0x16a: Push((int) 19225)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 518094)
0x16e: Push((int) -1)
0x16f: Push((int) 19226)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x174: PushEmpty(bool)
0x175: Call2 0xa0d

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x178: @ lshStopAnimation()
0x179: Pop(0)
0x17a: GOTO 0x17d

0x17b: @ StopAnimation()
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: GOTO 0x9b

0x17f: Return(); Pop(0)

0x180: Push((int) 3)
0x181: @ Sleep(Stack[-1])
0x182: Pop(1)
0x183: PushEmpty()
0x184: Call2 0x1bb

0x185: Pop(0)
0x186: GOTO 0x180

0x187: Return(); Pop(0)

0x188: PushEmpty(int, int)
0x189: PushEmpty()
0x18a: Call2 0x20c

0x18b: Pop(0)
0x18c: PushEmpty(int, object)
0x18d: Stack[-1] = Stack[-5]
0x18e: Push(-2, 1); TaskCall(0)
0x18f: Call2 0x0

0x190: Pop(-2, 1); TaskReturn
0x191: Stack[-3] = Stack[-2]
0x192: Pop(2)
0x193: Push((int) 0)
0x194: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x196: PushEmpty(bool, object, float)
0x197: Stack[-2] = Stack[-6]
0x198: Stack[-1] = (float) 0.05
0x199: Call2 0x964

0x19a: Pop(3)
0x19b: PushEmpty(object)
0x19c: Stack[-1] = Stack[-4]
0x19d: Push(-1, 3); TaskCall(3)
0x19e: Call2 0x211

0x19f: Pop(-1, 3); TaskReturn
0x1a0: Pop(1)
0x1a1: GOTO 0x1ac

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a5: PushEmpty(object, bool)
0x1a6: Stack[-2] = Stack[-5]
0x1a7: Stack[-1] = (bool) 1
0x1a8: Push(-2, 6); TaskCall(4)
0x1a9: Call2 0x2e3

0x1aa: Pop(-2, 6); TaskReturn
0x1ab: Pop(2)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty()
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[-3]
0x1b0: Call2 0xa58

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b3: PushEmpty()
0x1b4: Call2 0x20c

0x1b5: Pop(0)
0x1b6: PushEmpty(object)
0x1b7: Stack[-1] = Stack[-2]
0x1b8: Call2 0xa5f

0x1b9: Pop(1)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1bc: @ WaitForAnimEnd()
0x1bd: Pop(0)
0x1be: PushEmpty(bool)
0x1bf: Call2 0x886

0x1c0: Pop(0)
0x1c1: Pop(1); Push((bool) Stack[-1] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(14)

0x1c4: PushEmpty(int)
0x1c5: Call2 0x9c2

0x1c6: Stack[-8] = Stack[-1]
0x1c7: Pop(1)
0x1c8: Stack[-6] = (int) 0
0x1c9: PushEmpty(bool)
0x1ca: Stack[-1] = (bool) 0
0x1cb: Push((int) 5)
0x1cc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(bool)
0x1cf: Call2 0x886

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = (bool) 1
0x1d3: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1d4: Push((int) 3)
0x1d5: @ irand(Stack[-6], Stack[-1])
0x1d6: Pop(1)
0x1d7: Push((int) 0)
0x1d8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1da: Push(Stack[-7])
0x1db: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1dc: @ irand(Stack[-4], Stack[-7])
0x1dd: Pop(0)
0x1de: Push("all")
0x1df: PushEmpty(string, int)
0x1e0: Stack[-1] = Stack[-7]
0x1e1: Call2 0x9bb

0x1e2: Pop(1)
0x1e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: @ WaitForAnimEnd(Stack[-3])
0x1e6: Pop(0)
0x1e7: Pop(0); Push((bool) Stack[-3] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: GOTO 0x207

0x1ea: GOTO 0x1fc

0x1eb: Push((int) 1)
0x1ec: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ee: Push((int) 4)
0x1ef: @ rand(Stack[-3], Stack[-1])
0x1f0: Pop(1)
0x1f1: Push((int) 1)
0x1f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1f3: @ Sleep(Stack[-1], Stack[-2])
0x1f4: Pop(1)
0x1f5: Pop(0); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x207

0x1f8: GOTO 0x1fc

0x1f9: Push(Stack[-6])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: GOTO 0x207

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x20a

0x1fe: Pop(0)
0x1ff: Pop(1); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: GOTO 0x207

0x202: @ ResetAAS()
0x203: Pop(0)
0x204: Push((int) 1)
0x205: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x206: GOTO 0x1c9

0x207: @ ResetAAS()
0x208: Pop(0)
0x209: Return(); Pop(14)

0x20a: Stack[-1] = (bool) 1
0x20b: Return(); Pop(0)

0x20c: @ StopAnimation()
0x20d: Pop(0)
0x20e: @ StopGroup0()
0x20f: Pop(0)
0x210: Return(); Pop(0)

0x211: PushEmpty()
0x212: PushEmpty()
0x213: Call2 0xa0f

0x214: Pop(0)
0x215: PushEmpty(object)
0x216: Stack[-1] = Stack[-2]
0x217: Call2 0x246

0x218: Pop(1)
0x219: Return(); Pop(0)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, object)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0xa58

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x2c3

0x222: Pop(0)
0x223: PushEmpty(object)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0xa5f

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x229: @ GetPosition(Stack[-6])
0x22a: Pop(0)
0x22b: @@ GetPosition(Stack[-5])
0x22c: Pop(0)
0x22d: @ GetDirection(Stack[-4])
0x22e: Pop(0)
0x22f: PushEmpty(cvector, cvector)
0x230: PushEmpty(cvector, cvector)
0x231: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x232: Call2 0x940

0x233: Pop(1)
0x234: Push((float)0.75)
0x235: Pop(1); Push(Stack[-8] * Stack[-1]);
0x236: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x237: Call2 0x940

0x238: Stack[-5] = Stack[-2]
0x239: Pop(2)
0x23a: Push((int) 32)
0x23b: Push((float)7000.0)
0x23c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x23d: Pop(2)
0x23e: Push((int) 100)
0x23f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x240: Push((int) 0)
0x241: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (int) 0
0x244: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x245: Return(); Pop(12)

0x246: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x247: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x248: PushEmpty(cvector, float)
0x249: Stack[-1] = (float) 1.74533
0x24a: Call2 0x228

0x24b: Stack[-7] = Stack[-2]
0x24c: Pop(2)
0x24d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x24e: Push((float)2500.0)
0x24f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x251: PushEmpty(cvector, float)
0x252: Stack[-1] = (float) 2.61799
0x253: Call2 0x228

0x254: Stack[-7] = Stack[-2]
0x255: Pop(2)
0x256: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x257: Push((float)2500.0)
0x258: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25a: Push("Can't retreat, distance: ")
0x25b: Pop(0); Push(Sqrt(Stack[-5]))
0x25c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25d: @ Trace(Stack[-1])
0x25e: Pop(1)
0x25f: Push((float)0.5)
0x260: @ Sleep(Stack[-1])
0x261: Pop(1)
0x262: Return(); Pop(10)

0x263: Push(CvectorIndex(Stack[-5], 0))
0x264: Push(CvectorIndex(Stack[-6], 2))
0x265: @ Rotate(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: PushEmpty(cvector)
0x268: Call2 0x740

0x269: Pop(0)
0x26a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x26b: Push((int) 120)
0x26c: Push((float)0.5)
0x26d: @ SetTimer(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x270: Push((int) 1)
0x271: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x272: Pop(1)
0x273: Push(Stack[-3])
0x274: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x275: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: GOTO 0x28e

0x278: GOTO 0x28c

0x279: PushEmpty(cvector, float)
0x27a: Stack[-1] = (float) 2.61799
0x27b: Call2 0x228

0x27c: Stack[-4] = Stack[-2]
0x27d: Pop(2)
0x27e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x27f: Push((float)2500.0)
0x280: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x282: PushEmpty(cvector)
0x283: Call2 0x740

0x284: Pop(0)
0x285: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x286: Push((int) 120)
0x287: Push((float)0.5)
0x288: @ SetTimer(Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: GOTO 0x28c

0x28b: GOTO 0x28e

0x28c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x28e: Return(); Pop(10)

0x28f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x290: Push((int) 120)
0x291: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Return(); Pop(8)

0x294: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x296: @ Stop()
0x297: Pop(0)
0x298: Push((int) 1)
0x299: @ KillTimer(Stack[-1])
0x29a: Pop(1)
0x29b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x29c: GOTO 0x2c2

0x29d: @ GetDirection(Stack[-4])
0x29e: Pop(0)
0x29f: Push((float)7000.0)
0x2a0: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2a1: Pop(1)
0x2a2: PushEmpty(cvector, float)
0x2a3: Stack[-1] = (float) 1.74533
0x2a4: Call2 0x228

0x2a5: Stack[-4] = Stack[-2]
0x2a6: Pop(2)
0x2a7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2a8: PushEmpty(bool)
0x2a9: Stack[-1] = (bool) 0
0x2aa: Push((float)2500.0)
0x2ab: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ad: PushEmpty(bool)
0x2ae: Stack[-1] = (bool) 1
0x2af: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2b0: Push((float)2.25)
0x2b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b2: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x2d3

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Stack[-1] = (bool) 0
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[-1] = (bool) 1
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bc: @ Stop()
0x2bd: Pop(0)
0x2be: PushEmpty(cvector)
0x2bf: Call2 0x740

0x2c0: Pop(0)
0x2c1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2c2: Return(); Pop(8)

0x2c3: @ Stop()
0x2c4: Pop(0)
0x2c5: Push((int) 120)
0x2c6: @ KillTimer(Stack[-1])
0x2c7: Pop(1)
0x2c8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c9: Return(); Pop(0)

0x2ca: PushEmpty()
0x2cb: PushEmpty()
0x2cc: Call2 0x2c3

0x2cd: Pop(0)
0x2ce: PushEmpty(object)
0x2cf: Stack[-1] = Stack[-2]
0x2d0: Call2 0xa52

0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(cvector, cvector, cvector, cvector)
0x2d4: @ GetDirection(Stack[-2])
0x2d5: Pop(0)
0x2d6: PushEmpty(cvector, object)
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0x745

0x2d9: Stack[-3] = Stack[-2]
0x2da: Pop(2)
0x2db: PushEmpty(float, cvector, cvector)
0x2dc: Stack[-2] = Stack[-5]
0x2dd: Stack[-1] = Stack[-4]
0x2de: Call2 0x95c

0x2df: Pop(2)
0x2e0: Push((float)-0.34202)
0x2e1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x2e2: Return(); Pop(4)

0x2e3: PushEmpty(object, object)
0x2e4: @ GetScene(Stack[-1])
0x2e5: Pop(0)
0x2e6: PushEmpty(object)
0x2e7: Call2 0x93a

0x2e8: Pop(0)
0x2e9: @@ RemoveStationaryActor(Stack[-1])
0x2ea: Pop(1)
0x2eb: PushEmpty(object, bool, float)
0x2ec: Stack[-3] = Stack[-7]
0x2ed: Stack[-2] = Stack[-6]
0x2ee: Stack[-1] = (float) 180.0
0x2ef: Call2 0x2fd

0x2f0: Pop(3)
0x2f1: Push((int) 1)
0x2f2: @ Sleep(Stack[-1])
0x2f3: Pop(1)
0x2f4: GOTO 0x2eb

0x2f5: Return(); Pop(2)

0x2f6: Stack[-1] = 0
0x2f7: PushEmpty()
0x2f8: Stack[-3] = (float) 0.03
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Stack[-3] = (int) 0
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x2fe: PushEmpty()
0x2ff: Call2 0x3e2

0x300: Pop(0)
0x301: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x302: Push("@GetAttackDistance")
0x303: Push((int) 1)
0x304: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: @@ GetAttackDistance(Stack[-11])
0x307: Pop(0)
0x308: Push((int) 50)
0x309: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x30a: GOTO 0x30c

0x30b: Stack[-11] = Stack[-23]
0x30c: Push((int) 150)
0x30d: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-11] = (int) 150
0x310: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x311: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x312: @ IsPlayerActor(Stack[-0], Stack[-8])
0x313: Pop(0)
0x314: Push(Stack[-8])
0x315: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x316: Push("attack")
0x317: @ PlayGlobalMusic(Stack[-1])
0x318: Pop(1)
0x319: PushEmpty(object)
0x31a: Call2 0x93a

0x31b: Pop(0)
0x31c: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x31d: Pop(1)
0x31e: Push(Stack[-24])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-7] = (bool) 0
0x321: GOTO 0x323

0x322: Stack[-7] = (bool) 1
0x323: Push((float)400.0)
0x324: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x325: PushEmpty(bool)
0x326: Stack[-1] = (bool) 0
0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x329: Call2 0x7e5

0x32a: Pop(1)
0x32b: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Stack[-1] = (bool) 1
0x32f: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x330: PushEmpty()
0x331: Call2 0x57f

0x332: Pop(0)
0x333: @@ GetPFPosition(Stack[-10])
0x334: Pop(0)
0x335: @ GetPFPosition(Stack[-9])
0x336: Pop(0)
0x337: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x338: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x339: Pop(0); Push(Stack[-6] * Stack[-6]);
0x33a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x33c: PushEmpty(bool, object, float, float, bool, bool)
0x33d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x33e: Stack[-4] = Stack[-17]
0x33f: Stack[-3] = (float) 10000.0
0x340: Stack[-2] = (bool) 1
0x341: Stack[-1] = (bool) 0
0x342: Push(-6, 3); TaskCall(5)
0x343: Call2 0x593

0x344: Pop(-6, 3); TaskReturn
0x345: Pop(5)
0x346: Pop(1); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x3d1

0x349: Stack[-7] = (bool) 0
0x34a: GOTO 0x3d0

0x34b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x34c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x34e: @@ GetPFPosition(Stack[-3])
0x34f: Pop(0)
0x350: @ CanReachByPF(Stack[-2], Stack[-3])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-2] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x354: PushEmpty(bool, object, float, float, bool, bool)
0x355: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x356: Stack[-4] = Stack[-17]
0x357: Stack[-3] = (float) 10000.0
0x358: Stack[-2] = (bool) 1
0x359: Stack[-1] = (bool) 0
0x35a: Push(-6, 3); TaskCall(5)
0x35b: Call2 0x593

0x35c: Pop(-6, 3); TaskReturn
0x35d: Pop(5)
0x35e: Pop(1); Push((bool) Stack[-1] == 0)
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: GOTO 0x3d1

0x361: Stack[-7] = (bool) 0
0x362: GOTO 0x325

0x363: Pop(0); Push((bool) Stack[-7] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x365: PushEmpty(object)
0x366: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x367: Call2 0x87b

0x368: Pop(1)
0x369: Push("all")
0x36a: Push("attack_on")
0x36b: @ PlayAnimation(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: @ WaitForAnimEnd()
0x36e: Pop(0)
0x36f: PushEmpty()
0x370: Call2 0x57f

0x371: Pop(0)
0x372: @ StopAsync()
0x373: Pop(0)
0x374: Stack[-7] = (bool) 1
0x375: PushEmpty(bool, object)
0x376: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x377: Call2 0x7e5

0x378: Pop(1)
0x379: Pop(1); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: GOTO 0x3d1

0x37c: @ rand(Stack[-1])
0x37d: Pop(0)
0x37e: PushEmpty(bool)
0x37f: Stack[-1] = (bool) 1
0x380: Push((float)0.25)
0x381: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x383: PushEmpty(bool)
0x384: Call2 0x554

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Stack[-1] = (bool) 0
0x388: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x389: @ Face(Stack[-0])
0x38a: Pop(0)
0x38b: PushEmpty()
0x38c: Call2 0x586

0x38d: Pop(0)
0x38e: Push("all")
0x38f: Push("attack_stay")
0x390: @ PlayAnimation(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: PushEmpty(bool, float)
0x393: Stack[-1] = Stack[-25]
0x394: Call2 0x4d0

0x395: Pop(2)
0x396: @ StopAsync()
0x397: Pop(0)
0x398: GOTO 0x3c7

0x399: @ Face(Stack[-0])
0x39a: Pop(0)
0x39b: Push("all")
0x39c: Push("fjump")
0x39d: @ PlayAnimation(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: @ WaitForAnimEnd()
0x3a0: Pop(0)
0x3a1: PushEmpty()
0x3a2: Call2 0x57f

0x3a3: Pop(0)
0x3a4: Push(CVector(0.0, 0.0, 0.0))
0x3a5: @ SetSpeed(Stack[-1])
0x3a6: Pop(1)
0x3a7: @ Stop()
0x3a8: Pop(0)
0x3a9: @ StopAsync()
0x3aa: Pop(0)
0x3ab: PushEmpty(bool)
0x3ac: Call2 0x554

0x3ad: Pop(0)
0x3ae: Pop(1); Push((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b2: Call2 0x7e5

0x3b3: Pop(1)
0x3b4: Pop(1); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: GOTO 0x3d1

0x3b7: @@ GetPFPosition(Stack[-10])
0x3b8: Pop(0)
0x3b9: @ GetPFPosition(Stack[-9])
0x3ba: Pop(0)
0x3bb: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x3bc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3bd: Pop(0); Push(Stack[-23] * Stack[-23]);
0x3be: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c0: PushEmpty(bool, float)
0x3c1: Stack[-1] = Stack[-25]
0x3c2: Call2 0x42c

0x3c3: Pop(1)
0x3c4: Pop(1); Push((bool) Stack[-1] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: GOTO 0x3d1

0x3c7: GOTO 0x3d0

0x3c8: PushEmpty(bool, float)
0x3c9: Stack[-1] = Stack[-25]
0x3ca: Call2 0x42c

0x3cb: Pop(1)
0x3cc: Pop(1); Push((bool) Stack[-1] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: GOTO 0x3d1

0x3cf: Stack[-7] = (bool) 1
0x3d0: GOTO 0x325

0x3d1: @ WaitForAnimEnd()
0x3d2: Pop(0)
0x3d3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: Return(); Pop(22)

0x3d6: Push("all")
0x3d7: Push("attack_off")
0x3d8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: @ WaitForAnimEnd()
0x3db: Pop(0)
0x3dc: Push(Stack[-8])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3de: Push((float)2.0)
0x3df: @ Sleep(Stack[-1])
0x3e0: Pop(1)
0x3e1: Return(); Pop(22)

0x3e2: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x3e3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3e4: Push("all")
0x3e5: Push("attack_begin")
0x3e6: Push((int) 1)
0x3e7: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x3e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e9: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: Pop(0); Push((bool) Stack[-3] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: GOTO 0x3f1

0x3ee: Push((int) 1)
0x3ef: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3f0: GOTO 0x3e4

0x3f1: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x3f2: Push("attack")
0x3f3: Push((int) 1)
0x3f4: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x3f7: Pop(1)
0x3f8: Pop(0); Push((bool) Stack[-2] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x3fe

0x3fb: Push((int) 1)
0x3fc: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3fd: GOTO 0x3f2

0x3fe: Push("all")
0x3ff: Push("bjump")
0x400: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(2)
0x402: Push(CvectorIndex(Stack[-1], 2))
0x403: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x404: Return(); Pop(6)

0x405: PushEmpty(object, float, float, object, float, float)
0x406: Push((float)0.9)
0x407: Pop(1); Push(Stack[-9] * Stack[-1]);
0x408: @ GetVictim(Stack[-1], Stack[-4])
0x409: Pop(1)
0x40a: @ ReportAttack(Stack[-0])
0x40b: Pop(0)
0x40c: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x40d: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x40e: PushEmpty(float, object, int)
0x40f: Stack[-2] = Stack[-6]
0x410: Stack[-1] = Stack[-10]
0x411: Call2 0x2f7

0x412: Stack[-5] = Stack[-3]
0x413: Pop(3)
0x414: PushEmpty(float, object, float, int)
0x415: Stack[-3] = Stack[-7]
0x416: Stack[-2] = Stack[-6]
0x417: PushEmpty(int, object, int)
0x418: Stack[-2] = Stack[-10]
0x419: Stack[-1] = Stack[-14]
0x41a: Call2 0x2fa

0x41b: Stack[-4] = Stack[-3]
0x41c: Pop(3)
0x41d: Call2 0x773

0x41e: Stack[-5] = Stack[-4]
0x41f: Pop(4)
0x420: PushEmpty(int)
0x421: Call2 0x584

0x422: Pop(0)
0x423: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x424: Pop(1)
0x425: PushEmpty(object, float)
0x426: Stack[-2] = Stack[-5]
0x427: Stack[-1] = Stack[-3]
0x428: Call2 0x58b

0x429: Pop(2)
0x42a: Return(); Pop(6)

0x42b: Stack[-3] = 0
0x42c: PushEmpty(int, bool, int, string, int, bool, int, string)
0x42d: PushEmpty()
0x42e: Call2 0x57f

0x42f: Pop(0)
0x430: @ irand(Stack[-4], Stack[-1])
0x431: Pop(0)
0x432: Push((int) 1)
0x433: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x434: @ Face(Stack[-0])
0x435: Pop(0)
0x436: Push((bool) 1)
0x437: @ SetAttackState(Stack[-1])
0x438: Pop(1)
0x439: PushEmpty()
0x43a: Call2 0x9b0

0x43b: Pop(0)
0x43c: Push("all")
0x43d: Push("attack_begin")
0x43e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x43f: @ PlayAnimation(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: @ WaitForAnimEnd()
0x442: Pop(0)
0x443: PushEmpty()
0x444: Call2 0x55f

0x445: Pop(0)
0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x448: Call2 0x7e5

0x449: Pop(1)
0x44a: Pop(1); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44c: @ StopAsync()
0x44d: Pop(0)
0x44e: Stack[-10] = (bool) 0
0x44f: Return(); Pop(8)

0x450: PushEmpty(float, int)
0x451: Stack[-2] = Stack[-11]
0x452: Stack[-1] = Stack[-6]
0x453: Call2 0x405

0x454: Pop(2)
0x455: Push("all")
0x456: Push("attack_middle")
0x457: Pop(1); Push(Stack[-1] + Stack[-6]);
0x458: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Push(Stack[-3])
0x45b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x45c: PushEmpty()
0x45d: Call2 0x9b0

0x45e: Pop(0)
0x45f: Push("all")
0x460: Push("attack_middle")
0x461: Pop(1); Push(Stack[-1] + Stack[-6]);
0x462: @ PlayAnimation(Stack[-2], Stack[-1])
0x463: Pop(2)
0x464: @ WaitForAnimEnd()
0x465: Pop(0)
0x466: PushEmpty()
0x467: Call2 0x57f

0x468: Pop(0)
0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46b: Call2 0x7e5

0x46c: Pop(1)
0x46d: Pop(1); Push((bool) Stack[-1] == 0)
0x46e: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46f: @ StopAsync()
0x470: Pop(0)
0x471: Stack[-10] = (bool) 0
0x472: Return(); Pop(8)

0x473: PushEmpty(float, int)
0x474: Stack[-2] = Stack[-11]
0x475: Stack[-1] = Stack[-6]
0x476: Call2 0x405

0x477: Pop(2)
0x478: Stack[-2] = (int) 1
0x479: Push("attack_middle")
0x47a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x47b: Push("_")
0x47c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47d: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x47e: Push("all")
0x47f: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Pop(0); Push((bool) Stack[-3] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: GOTO 0x4a1

0x484: PushEmpty()
0x485: Call2 0x9b0

0x486: Pop(0)
0x487: Push("all")
0x488: @ PlayAnimation(Stack[-1], Stack[-2])
0x489: Pop(1)
0x48a: @ WaitForAnimEnd()
0x48b: Pop(0)
0x48c: PushEmpty()
0x48d: Call2 0x57f

0x48e: Pop(0)
0x48f: PushEmpty(bool, object)
0x490: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x491: Call2 0x7e5

0x492: Pop(1)
0x493: Pop(1); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x495: @ StopAsync()
0x496: Pop(0)
0x497: Stack[-10] = (bool) 0
0x498: Return(); Pop(8)

0x499: PushEmpty(float, int)
0x49a: Stack[-2] = Stack[-11]
0x49b: Stack[-1] = Stack[-6]
0x49c: Call2 0x405

0x49d: Pop(2)
0x49e: Push((int) 1)
0x49f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4a0: GOTO 0x479

0x4a1: Push((bool) 0)
0x4a2: @ SetAttackState(Stack[-1])
0x4a3: Pop(1)
0x4a4: Push("all")
0x4a5: Push("attack_end")
0x4a6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a8: Pop(2)
0x4a9: PushEmpty(bool)
0x4aa: Call2 0x58d

0x4ab: Pop(0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ad: PushEmpty(bool, float)
0x4ae: Stack[-1] = (float) 0.75
0x4af: Call2 0x4b5

0x4b0: Pop(2)
0x4b1: @ StopAsync()
0x4b2: Pop(0)
0x4b3: Stack[-10] = (bool) 1
0x4b4: Return(); Pop(8)

0x4b5: PushEmpty(float, bool, float, bool)
0x4b6: @ rand(Stack[-2])
0x4b7: Pop(0)
0x4b8: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4ba: @ IsAnimationPlaying(Stack[-1])
0x4bb: Pop(0)
0x4bc: Pop(0); Push((bool) Stack[-1] == 0)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: GOTO 0x4c8

0x4bf: PushEmpty(bool)
0x4c0: Call2 0x517

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-6] = (bool) 1
0x4c4: Return(); Pop(4)

0x4c5: @ sync()
0x4c6: Pop(0)
0x4c7: GOTO 0x4ba

0x4c8: GOTO 0x4ce

0x4c9: @ WaitForAnimEnd()
0x4ca: Pop(0)
0x4cb: PushEmpty()
0x4cc: Call2 0x57f

0x4cd: Pop(0)
0x4ce: Stack[-6] = (bool) 0
0x4cf: Return(); Pop(4)

0x4d0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4d1: @ IsAnimationPlaying(Stack[-5])
0x4d2: Pop(0)
0x4d3: Pop(0); Push((bool) Stack[-5] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: GOTO 0x4f6

0x4d6: PushEmpty(bool)
0x4d7: Call2 0x517

0x4d8: Pop(0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4da: Stack[-12] = (bool) 1
0x4db: Return(); Pop(10)

0x4dc: PushEmpty(bool, object)
0x4dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4de: Call2 0x7e5

0x4df: Pop(1)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-12] = (bool) 0
0x4e3: Return(); Pop(10)

0x4e4: @@ GetPFPosition(Stack[-4])
0x4e5: Pop(0)
0x4e6: @ GetPFPosition(Stack[-3])
0x4e7: Pop(0)
0x4e8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x4e9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4ea: Pop(0); Push(Stack[-11] * Stack[-11]);
0x4eb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ed: PushEmpty(bool, float)
0x4ee: Stack[-1] = Stack[-13]
0x4ef: Call2 0x42c

0x4f0: Pop(2)
0x4f1: Stack[-12] = (bool) 1
0x4f2: Return(); Pop(10)

0x4f3: @ sync()
0x4f4: Pop(0)
0x4f5: GOTO 0x4d1

0x4f6: PushEmpty()
0x4f7: Call2 0x57f

0x4f8: Pop(0)
0x4f9: Stack[-12] = (bool) 0
0x4fa: Return(); Pop(10)

0x4fb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x4fc: PushEmpty(bool, object)
0x4fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fe: Call2 0x7e5

0x4ff: Pop(1)
0x500: Pop(1); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-11] = (bool) 0
0x503: Return(); Pop(10)

0x504: PushEmpty(bool)
0x505: Call2 0x554

0x506: Pop(0)
0x507: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x508: @@ GetPFPosition(Stack[-5])
0x509: Pop(0)
0x50a: @ GetPFPosition(Stack[-4])
0x50b: Pop(0)
0x50c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x50d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x50e: @@ GetAttackDistance(Stack[-1])
0x50f: Pop(0)
0x510: Push((int) 50)
0x511: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x512: Pop(0); Push(Stack[-1] * Stack[-1]);
0x513: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x514: Return(); Pop(10)

0x515: Stack[-11] = (bool) 0
0x516: Return(); Pop(10)

0x517: PushEmpty(bool)
0x518: Stack[-1] = (bool) 0
0x519: PushEmpty(bool)
0x51a: Call2 0x4fb

0x51b: Pop(0)
0x51c: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51d: PushEmpty(bool)
0x51e: Call2 0x527

0x51f: Pop(0)
0x520: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x521: Stack[-1] = (bool) 1
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-1] = (bool) 1
0x524: Return(); Pop(0)

0x525: Stack[-1] = (bool) 0
0x526: Return(); Pop(0)

0x527: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x528: @ GetScene(Stack[-5])
0x529: Pop(0)
0x52a: Stack[-4] = (bool) 0
0x52b: PushEmpty(cvector, object)
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call2 0x745

0x52e: Pop(1)
0x52f: Pop(1); Push(( -Stack[-1])
0x530: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x531: Pop(1)
0x532: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x533: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x534: GOTO 0x551

0x535: @ Face(Stack[-0])
0x536: Pop(0)
0x537: Push("all")
0x538: Push("bjump")
0x539: @ PlayAnimation(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: @@ GetPFPosition(Stack[-2])
0x53c: Pop(0)
0x53d: @ GetPFPosition(Stack[-1])
0x53e: Pop(0)
0x53f: @ WaitForAnimEnd()
0x540: Pop(0)
0x541: PushEmpty()
0x542: Call2 0x57f

0x543: Pop(0)
0x544: @ StopAsync()
0x545: Pop(0)
0x546: Push(CVector(0.0, 0.0, 0.0))
0x547: @ SetSpeed(Stack[-1])
0x548: Pop(1)
0x549: Stack[-4] = (bool) 1
0x54a: PushEmpty(bool)
0x54b: Call2 0x4fb

0x54c: Pop(0)
0x54d: Pop(1); Push((bool) Stack[-1] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x551

0x550: GOTO 0x52b

0x551: Stack[-11] = Stack[-4]
0x552: Return(); Pop(10)

0x553: Stack[-5] = 0
0x554: PushEmpty(bool, bool)
0x555: Push("IsAttacking")
0x556: Push((int) 1)
0x557: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x558: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x559: @@ IsAttacking(Stack[-1])
0x55a: Pop(0)
0x55b: Stack[-3] = Stack[-1]
0x55c: Return(); Pop(2)

0x55d: Stack[-3] = (bool) 0
0x55e: Return(); Pop(2)

0x55f: PushEmpty(float, int, float, int)
0x560: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x561: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x562: Return(); Pop(4)

0x563: Push( Stack[5 + Tasks[-1].StackPointer] )
0x564: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x565: Push((int) -1)
0x566: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x567: Push((int) 0)
0x568: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x56a: Return(); Pop(4)

0x56b: @ rand(Stack[-2])
0x56c: Pop(0)
0x56d: PushEmpty(float)
0x56e: Call2 0x591

0x56f: Pop(0)
0x570: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x572: @ irand(Stack[-1], Stack[-2])
0x573: Pop(0)
0x574: Push((int) 1)
0x575: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x576: Push("attack")
0x577: Pop(1); Push(Stack[-1] + Stack[-2]);
0x578: @ Speak(Stack[-1])
0x579: Pop(1)
0x57a: PushEmpty(int)
0x57b: Call2 0x58f

0x57c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x57d: Pop(1)
0x57e: Return(); Pop(4)

0x57f: PushEmpty(object)
0x580: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x581: Call2 0x9a7

0x582: Pop(1)
0x583: Return(); Pop(0)

0x584: Stack[-1] = (int) 0
0x585: Return(); Pop(0)

0x586: PushEmpty(string)
0x587: Stack[-1] = "attack_stay"
0x588: Call2 0x911

0x589: Pop(1)
0x58a: Return(); Pop(0)

0x58b: PushEmpty()
0x58c: Return(); Pop(0)

0x58d: Stack[-1] = (bool) 1
0x58e: Return(); Pop(0)

0x58f: Stack[-1] = (int) 1
0x590: Return(); Pop(0)

0x591: Stack[-1] = (float) 0.5
0x592: Return(); Pop(0)

0x593: PushEmpty(bool, bool, bool, bool)
0x594: PushEmpty(object)
0x595: Stack[-1] = Stack[-10]
0x596: Call2 0x9a7

0x597: Pop(1)
0x598: Push((int) 1)
0x599: Push((int) 5)
0x59a: @ SetTimer(Stack[-2], Stack[-1])
0x59b: Pop(2)
0x59c: @ CanSee(Stack[-2], Stack[-9])
0x59d: Pop(0)
0x59e: Push(Stack[-2])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5a1: PushEmpty(object)
0x5a2: Stack[-1] = Stack[-10]
0x5a3: Call2 0x8ff

0x5a4: Pop(1)
0x5a5: GOTO 0x5a7

0x5a6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5a7: PushEmpty(bool, object)
0x5a8: Stack[-1] = Stack[-11]
0x5a9: Call2 0x74c

0x5aa: Pop(1)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ac: PushEmpty(object)
0x5ad: Call2 0x93a

0x5ae: Pop(0)
0x5af: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x5b0: Pop(1)
0x5b1: PushEmpty(bool, object, float, float, bool, bool)
0x5b2: Stack[-5] = Stack[-15]
0x5b3: Stack[-4] = Stack[-14]
0x5b4: Stack[-3] = Stack[-13]
0x5b5: Stack[-2] = Stack[-12]
0x5b6: Stack[-1] = Stack[-11]
0x5b7: Call2 0x5fc

0x5b8: Stack[-7] = Stack[-6]
0x5b9: Pop(6)
0x5ba: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bc: Push("head")
0x5bd: @ UnlookAsync(Stack[-1])
0x5be: Pop(1)
0x5bf: Push((int) 1)
0x5c0: @ KillTimer(Stack[-1])
0x5c1: Pop(1)
0x5c2: Stack[-10] = Stack[-1]
0x5c3: Return(); Pop(4)

0x5c4: PushEmpty()
0x5c5: Push((int) 1)
0x5c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5c8: PushEmpty(object)
0x5c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ca: Call2 0x9a7

0x5cb: Pop(1)
0x5cc: GOTO 0x5d1

0x5cd: PushEmpty(int)
0x5ce: Stack[-1] = Stack[-2]
0x5cf: Call2 0x662

0x5d0: Pop(1)
0x5d1: Return(); Pop(0)

0x5d2: Push((int) 1)
0x5d3: @ KillTimer(Stack[-1])
0x5d4: Pop(1)
0x5d5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5d6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5d8: Push("head")
0x5d9: @ UnlookAsync(Stack[-1])
0x5da: Pop(1)
0x5db: PushEmpty()
0x5dc: Call2 0x678

0x5dd: Pop(0)
0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: PushEmpty(bool)
0x5e1: Stack[-1] = (bool) 0
0x5e2: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e6: Stack[-1] = (bool) 1
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5e9: PushEmpty(object)
0x5ea: Stack[-1] = Stack[-2]
0x5eb: Call2 0x8ff

0x5ec: Pop(1)
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty()
0x5ef: PushEmpty(bool)
0x5f0: Stack[-1] = (bool) 0
0x5f1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: Stack[-1] = (bool) 1
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5f8: Push("head")
0x5f9: @ UnlookAsync(Stack[-1])
0x5fa: Pop(1)
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x5fd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5fe: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5ff: Stack[-7] = Stack[-17]
0x600: PushEmpty(bool, object)
0x601: Stack[-1] = Stack[-23]
0x602: Call2 0x688

0x603: Pop(1)
0x604: Pop(1); Push((bool) Stack[-1] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-22] = (bool) 0
0x607: Return(); Pop(16)

0x608: @@ GetPosition(Stack[-5])
0x609: Pop(0)
0x60a: @ GetPosition(Stack[-4])
0x60b: Pop(0)
0x60c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x60d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x60e: PushEmpty(bool)
0x60f: Stack[-1] = (bool) 0
0x610: Push((int) 0)
0x611: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x613: Pop(0); Push(Stack[-20] * Stack[-20]);
0x614: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x616: Stack[-1] = (bool) 1
0x617: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x618: @ Stop()
0x619: Pop(0)
0x61a: Stack[-22] = (bool) 0
0x61b: Return(); Pop(16)

0x61c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x61d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x61f: @@ GetPFPosition(Stack[-5])
0x620: Pop(0)
0x621: @ FindPathTo(Stack[-1], Stack[-5])
0x622: Pop(0)
0x623: Pop(0); Push(( Stack[-1] != 0 )
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-6] = Stack[-1]
0x626: Stack[-1] = 0
0x627: Pop(0); Push(( Stack[-6] != 0 )
0x628: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x629: Push(Stack[-7])
0x62a: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62b: Stack[-7] = (bool) 0
0x62c: @ RotatePath(Stack[-6], Stack[-8])
0x62d: Pop(0)
0x62e: Pop(0); Push((bool) Stack[-8] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x630: GOTO 0x660

0x631: Push((int) 0)
0x632: Push((float)0.3)
0x633: @ SetTimer(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: PushEmpty(string)
0x636: Call2 0x68f

0x637: Pop(0)
0x638: PushEmpty(string)
0x639: Call2 0x691

0x63a: Pop(0)
0x63b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x63c: Pop(2)
0x63d: Pop(0); Push((bool) Stack[-8] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x63f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x640: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x641: Stack[-6] = 0
0x642: GOTO 0x660

0x643: GOTO 0x645

0x644: GOTO 0x65f

0x645: GOTO 0x647

0x646: Stack[-6] = 0
0x647: GOTO 0x658

0x648: Push((int) 0)
0x649: @ KillTimer(Stack[-1])
0x64a: Pop(1)
0x64b: Push((float)0.5)
0x64c: @ Sleep(Stack[-1], Stack[-9])
0x64d: Pop(1)
0x64e: Pop(0); Push((bool) Stack[-8] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x650: Push( Stack[0 + Tasks[-1].StackPointer] )
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-6] = 0
0x653: GOTO 0x660

0x654: Push((int) 0)
0x655: Push((float)0.3)
0x656: @ SetTimer(Stack[-2], Stack[-1])
0x657: Pop(2)
0x658: Stack[-1] = 0
0x659: GOTO 0x65e

0x65a: Push((int) 0)
0x65b: @ KillTimer(Stack[-1])
0x65c: Pop(1)
0x65d: GOTO 0x660

0x65e: Stack[-6] = 0
0x65f: GOTO 0x600

0x660: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x661: Return(); Pop(16)

0x662: PushEmpty()
0x663: Push((int) 0)
0x664: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Return(); Pop(0)

0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x669: Call2 0x688

0x66a: Pop(1)
0x66b: Pop(1); Push((bool) Stack[-1] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x66e: Push((int) 0)
0x66f: @ KillTimer(Stack[-1])
0x670: Pop(1)
0x671: @ Stop()
0x672: Pop(0)
0x673: Return(); Pop(0)

0x674: PushEmpty()
0x675: @ RequestClearPath(Stack[-1])
0x676: Pop(0)
0x677: Return(); Pop(0)

0x678: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x679: Push((int) 0)
0x67a: @ KillTimer(Stack[-1])
0x67b: Pop(1)
0x67c: @ Stop()
0x67d: Pop(0)
0x67e: Return(); Pop(0)

0x67f: PushEmpty()
0x680: PushEmpty()
0x681: Call2 0x5d2

0x682: Pop(0)
0x683: PushEmpty(object)
0x684: Stack[-1] = Stack[-2]
0x685: Call2 0xa52

0x686: Pop(1)
0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[-3]
0x68b: Call2 0x7e5

0x68c: Stack[-4] = Stack[-2]
0x68d: Pop(2)
0x68e: Return(); Pop(0)

0x68f: Stack[-1] = "walk"
0x690: Return(); Pop(0)

0x691: Stack[-1] = "run"
0x692: Return(); Pop(0)

0x693: PushEmpty(bool, bool)
0x694: Push("powder")
0x695: Push((int) 0)
0x696: Push((int) 1)
0x697: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: PushEmpty(object)
0x69a: Stack[-1] = Stack[-4]
0x69b: Call2 0x69e

0x69c: Pop(1)
0x69d: Return(); Pop(2)

0x69e: PushEmpty()
0x69f: EventDisable(0)
0x6a0: PushEmpty(object)
0x6a1: Stack[-1] = Stack[-2]
0x6a2: Call2 0x6b7

0x6a3: Pop(1)
0x6a4: Push((int) 50)
0x6a5: Push((int) 40)
0x6a6: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x6a7: Pop(2)
0x6a8: EventEnable(0)
0x6a9: @ Hold()
0x6aa: Pop(0)
0x6ab: GOTO 0x6a9

0x6ac: Return(); Pop(0)

0x6ad: PushEmpty(bool, bool)
0x6ae: @ IsOverrideActive(Stack[-1])
0x6af: Pop(0)
0x6b0: Pop(0); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b2: PushEmpty(object)
0x6b3: Stack[-1] = Stack[-4]
0x6b4: Call2 0x9f8

0x6b5: Pop(1)
0x6b6: Return(); Pop(2)

0x6b7: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x6b8: Pop(0); Push((bool) Stack[-21] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "fdie"
0x6bc: Call2 0x712

0x6bd: Pop(1)
0x6be: GOTO 0x711

0x6bf: @@ GetPosition(Stack[-10])
0x6c0: Pop(0)
0x6c1: @ GetPosition(Stack[-9])
0x6c2: Pop(0)
0x6c3: @ GetDirection(Stack[-8])
0x6c4: Pop(0)
0x6c5: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x6c6: Push(CvectorIndex(Stack[-7], 0))
0x6c7: Push(CvectorIndex(Stack[-9], 0))
0x6c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6c9: Push(CvectorIndex(Stack[-8], 2))
0x6ca: Push(CvectorIndex(Stack[-10], 2))
0x6cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6cd: Push((int) 0)
0x6ce: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-6] = "fdie"
0x6d1: GOTO 0x6d3

0x6d2: Stack[-6] = "bdie"
0x6d3: @ RemoveRTEnvelope()
0x6d4: Pop(0)
0x6d5: @ SetDeathState()
0x6d6: Pop(0)
0x6d7: @ Stop()
0x6d8: Pop(0)
0x6d9: @ StopAsync()
0x6da: Pop(0)
0x6db: Stack[-5] = Stack[-21]
0x6dc: Push("GetScriptProperty")
0x6dd: Push((int) 2)
0x6de: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6df: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e0: Push("Owner")
0x6e1: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x6e2: Pop(1)
0x6e3: Push(Stack[-4])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e5: Push("Owner")
0x6e6: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x6e7: Pop(1)
0x6e8: Pop(0); Push((bool) Stack[-5] == 0)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6ea: Stack[-5] = Stack[-21]
0x6eb: Push("@GetEyesHeight")
0x6ec: Push((int) 1)
0x6ed: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6ee: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6ef: @@ GetEyesHeight(Stack[-2])
0x6f0: Pop(0)
0x6f1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6f2: Push(CvectorIndex(Stack[-1], 1))
0x6f3: Stack[-1] = Stack[-3]
0x6f4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f5: Push("head")
0x6f6: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6f7: Pop(1)
0x6f8: Stack[-3] = (bool) 1
0x6f9: GOTO 0x6fb

0x6fa: Stack[-3] = (bool) 0
0x6fb: PushEmpty(string)
0x6fc: Stack[-1] = Stack[-7]
0x6fd: Call2 0x911

0x6fe: Pop(1)
0x6ff: Push("all")
0x700: @ PlayAnimation(Stack[-1], Stack[-7])
0x701: Pop(1)
0x702: @ WaitForAnimEnd()
0x703: Pop(0)
0x704: Push(Stack[-3])
0x705: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x706: @ StopAsync()
0x707: Pop(0)
0x708: Push("head")
0x709: @ UnlookAsync(Stack[-1])
0x70a: Pop(1)
0x70b: Push("all")
0x70c: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x70d: Pop(1)
0x70e: @ RemoveEnvelope()
0x70f: Pop(0)
0x710: Stack[-5] = 0
0x711: Return(); Pop(20)

0x712: PushEmpty()
0x713: @ RemoveRTEnvelope()
0x714: Pop(0)
0x715: @ SetDeathState()
0x716: Pop(0)
0x717: @ Stop()
0x718: Pop(0)
0x719: @ StopAsync()
0x71a: Pop(0)
0x71b: @ StopSecondaryAnimation()
0x71c: Pop(0)
0x71d: PushEmpty(string)
0x71e: Stack[-1] = Stack[-2]
0x71f: Call2 0x911

0x720: Pop(1)
0x721: Push("all")
0x722: @ PlayAnimation(Stack[-1], Stack[-2])
0x723: Pop(1)
0x724: @ WaitForAnimEnd()
0x725: Pop(0)
0x726: Push("all")
0x727: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x728: Pop(1)
0x729: @ RemoveEnvelope()
0x72a: Pop(0)
0x72b: Return(); Pop(0)

0x72c: PushEmpty()
0x72d: Return(); Pop(0)

0x72e: PushEmpty()
0x72f: Return(); Pop(0)

0x730: PushEmpty()
0x731: Return(); Pop(0)

0x732: PushEmpty()
0x733: Push((int) 2)
0x734: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x736: Stack[-2] = "fire"
0x737: Return(); Pop(0)

0x738: GOTO 0x73e

0x739: Push((int) 1)
0x73a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-2] = "bullet"
0x73d: Return(); Pop(0)

0x73e: Stack[-2] = "phys"
0x73f: Return(); Pop(0)

0x740: PushEmpty(cvector, cvector)
0x741: @ GetPosition(Stack[-1])
0x742: Pop(0)
0x743: Stack[-3] = Stack[-1]
0x744: Return(); Pop(2)

0x745: PushEmpty(cvector, cvector, cvector, cvector)
0x746: @ GetPosition(Stack[-2])
0x747: Pop(0)
0x748: @@ GetPosition(Stack[-1])
0x749: Pop(0)
0x74a: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x74b: Return(); Pop(4)

0x74c: PushEmpty(bool, bool)
0x74d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x74e: Pop(0)
0x74f: Stack[-4] = Stack[-1]
0x750: Return(); Pop(2)

0x751: PushEmpty(bool, bool)
0x752: Push("HasProperty")
0x753: Push((int) 2)
0x754: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x755: Pop(1); Push((bool) Stack[-1] == 0)
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-5] = (bool) 0
0x758: Return(); Pop(2)

0x759: @@ HasProperty(Stack[-3], Stack[-1])
0x75a: Pop(0)
0x75b: Stack[-5] = Stack[-1]
0x75c: Return(); Pop(2)

0x75d: PushEmpty(float, float)
0x75e: PushEmpty(bool, object, string)
0x75f: Stack[-2] = Stack[-10]
0x760: Stack[-1] = Stack[-9]
0x761: Call2 0x751

0x762: Pop(2)
0x763: Pop(1); Push((bool) Stack[-1] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-8] = (bool) 0
0x766: Return(); Pop(2)

0x767: @@ GetProperty(Stack[-6], Stack[-1])
0x768: Pop(0)
0x769: PushEmpty(float, float, float, float)
0x76a: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x76b: Stack[-2] = Stack[-8]
0x76c: Stack[-1] = Stack[-7]
0x76d: Call2 0x951

0x76e: Pop(3)
0x76f: @@ SetProperty(Stack[-7], Stack[-1])
0x770: Pop(1)
0x771: Stack[-8] = (bool) 1
0x772: Return(); Pop(2)

0x773: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x774: PushEmpty(bool, object, string)
0x775: Stack[-2] = Stack[-18]
0x776: Stack[-1] = "health"
0x777: Call2 0x751

0x778: Pop(2)
0x779: Pop(1); Push((bool) Stack[-1] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77b: Stack[-16] = (float) 0.0
0x77c: Return(); Pop(12)

0x77d: PushEmpty(bool, object, string)
0x77e: Stack[-2] = Stack[-18]
0x77f: Stack[-1] = "armor"
0x780: Call2 0x751

0x781: Pop(2)
0x782: Pop(1); Push((bool) Stack[-1] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-6] = (int) 0
0x785: GOTO 0x789

0x786: Push("armor")
0x787: @@ GetProperty(Stack[-1], Stack[-7])
0x788: Pop(1)
0x789: Push("armor_")
0x78a: PushEmpty(string, int)
0x78b: Stack[-1] = Stack[-16]
0x78c: Call2 0x732

0x78d: Pop(1)
0x78e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x78f: PushEmpty(bool, object, string)
0x790: Stack[-2] = Stack[-18]
0x791: Stack[-1] = Stack[-8]
0x792: Call2 0x751

0x793: Pop(2)
0x794: Pop(1); Push((bool) Stack[-1] == 0)
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: Stack[-4] = (int) 0
0x797: GOTO 0x79a

0x798: @@ GetProperty(Stack[-5], Stack[-4])
0x799: Pop(0)
0x79a: PushEmpty(float, float, float)
0x79b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x79c: Push((float)100.0)
0x79d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x79e: Stack[-1] = (int) 1
0x79f: Call2 0x94a

0x7a0: Stack[-6] = Stack[-3]
0x7a1: Pop(3)
0x7a2: Push("health")
0x7a3: @@ GetProperty(Stack[-1], Stack[-3])
0x7a4: Pop(1)
0x7a5: Push((int) 1)
0x7a6: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7a7: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x7a8: Push("health")
0x7a9: PushEmpty(float, float, float, float)
0x7aa: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x7ab: Stack[-2] = (int) 0
0x7ac: Stack[-1] = (int) 1
0x7ad: Call2 0x951

0x7ae: Pop(3)
0x7af: @@ SetProperty(Stack[-2], Stack[-1])
0x7b0: Pop(2)
0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[-17]
0x7b3: Call2 0x74c

0x7b4: Pop(1)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b6: PushEmpty(float)
0x7b7: Stack[-1] = -Stack[-2]; Pop(0);
0x7b8: Call2 0x987

0x7b9: Pop(1)
0x7ba: Stack[-16] = Stack[-1]
0x7bb: Return(); Pop(12)

0x7bc: PushEmpty(bool, bool)
0x7bd: @@ IsDead(Stack[-1])
0x7be: Pop(0)
0x7bf: Stack[-4] = Stack[-1]
0x7c0: Return(); Pop(2)

0x7c1: PushEmpty(object, object, object, object)
0x7c2: Pop(0); Push((bool) Stack[-5] == 0)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-6] = (bool) 0
0x7c5: Return(); Pop(4)

0x7c6: PushEmpty(bool)
0x7c7: Stack[-1] = (bool) 0
0x7c8: Push("IsDead")
0x7c9: Push((int) 1)
0x7ca: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cc: PushEmpty(bool, object)
0x7cd: Stack[-1] = Stack[-8]
0x7ce: Call2 0x7bc

0x7cf: Pop(1)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d1: Stack[-1] = (bool) 1
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d3: Stack[-6] = (bool) 0
0x7d4: Return(); Pop(4)

0x7d5: @ GetScene(Stack[-2])
0x7d6: Pop(0)
0x7d7: Pop(0); Push((bool) Stack[-2] == 0)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-6] = (bool) 0
0x7da: Return(); Pop(4)

0x7db: @@ GetScene(Stack[-1])
0x7dc: Pop(0)
0x7dd: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-6] = (bool) 0
0x7e0: Return(); Pop(4)

0x7e1: Stack[-6] = (bool) 1
0x7e2: Return(); Pop(4)

0x7e3: Stack[-1] = 0
0x7e4: Stack[-2] = 0
0x7e5: PushEmpty(int, int)
0x7e6: PushEmpty(bool, object)
0x7e7: Stack[-1] = Stack[-5]
0x7e8: Call2 0x7c1

0x7e9: Pop(1)
0x7ea: Pop(1); Push((bool) Stack[-1] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ec: Stack[-4] = (bool) 0
0x7ed: Return(); Pop(2)

0x7ee: PushEmpty(bool, object, string)
0x7ef: Stack[-2] = Stack[-6]
0x7f0: Stack[-1] = "noaccess"
0x7f1: Call2 0x751

0x7f2: Pop(2)
0x7f3: Pop(1); Push((bool) Stack[-1] == 0)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f5: Stack[-4] = (bool) 1
0x7f6: Return(); Pop(2)

0x7f7: Push("noaccess")
0x7f8: @@ GetProperty(Stack[-1], Stack[-2])
0x7f9: Pop(1)
0x7fa: Push((int) 0)
0x7fb: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7fc: Return(); Pop(2)

0x7fd: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x7fe: Pop(0); Push((bool) Stack[-15] == 0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: Return(); Pop(14)

0x801: @ IsDead(Stack[-7])
0x802: Pop(0)
0x803: Push(Stack[-7])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Return(); Pop(14)

0x806: @ GetSecondaryAnimationType(Stack[-6])
0x807: Pop(0)
0x808: Push((int) 0)
0x809: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: Return(); Pop(14)

0x80c: @@ GetPosition(Stack[-5])
0x80d: Pop(0)
0x80e: @ GetPosition(Stack[-4])
0x80f: Pop(0)
0x810: @ GetDirection(Stack[-3])
0x811: Pop(0)
0x812: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x813: Push(CvectorIndex(Stack[-2], 0))
0x814: Push(CvectorIndex(Stack[-4], 0))
0x815: Pop(2); Push(Stack[-2] * Stack[-1]);
0x816: Push(CvectorIndex(Stack[-3], 2))
0x817: Push(CvectorIndex(Stack[-5], 2))
0x818: Pop(2); Push(Stack[-2] * Stack[-1]);
0x819: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81a: Push((int) 0)
0x81b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81d: Stack[-1] = "fhit"
0x81e: GOTO 0x820

0x81f: Stack[-1] = "bhit"
0x820: Push("hit_react")
0x821: Push("1")
0x822: Pop(1); Push(Stack[-3] + Stack[-1]);
0x823: Push("2")
0x824: Pop(1); Push(Stack[-4] + Stack[-1]);
0x825: Push((int) -10)
0x826: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(4)
0x828: Return(); Pop(14)

0x829: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x82a: PushEmpty(bool)
0x82b: Stack[-1] = (bool) 0
0x82c: PushEmpty(bool)
0x82d: Stack[-1] = (bool) 0
0x82e: Push(Stack[-23])
0x82f: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x830: Push((int) 4)
0x831: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x832: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x833: Stack[-1] = (bool) 1
0x834: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x835: Push((int) 5)
0x836: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x838: Stack[-1] = (bool) 1
0x839: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x83a: PushEmpty(cvector, cvector)
0x83b: PushEmpty(cvector, object)
0x83c: Stack[-1] = Stack[-25]
0x83d: Call2 0x745

0x83e: Stack[-3] = Stack[-2]
0x83f: Pop(2)
0x840: Call2 0x940

0x841: Stack[-11] = Stack[-2]
0x842: Pop(2)
0x843: @ CreateVectorVector(Stack[-8])
0x844: Pop(0)
0x845: Stack[-7] = (int) 1
0x846: Push("hit")
0x847: Pop(1); Push(Stack[-1] + Stack[-8]);
0x848: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x849: Pop(1)
0x84a: Pop(0); Push((bool) Stack[-6] == 0)
0x84b: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84c: GOTO 0x856

0x84d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x84e: Push((float)0.70711)
0x84f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x851: @@ add(Stack[-5])
0x852: Pop(0)
0x853: Push((int) 1)
0x854: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x855: GOTO 0x846

0x856: @@ size(Stack[-3])
0x857: Pop(0)
0x858: Push(Stack[-3])
0x859: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x85a: @ irand(Stack[-2], Stack[-3])
0x85b: Pop(0)
0x85c: @@ get(Stack[-1], Stack[-2])
0x85d: Pop(0)
0x85e: PushEmpty(object, int, float, cvector, cvector)
0x85f: Stack[-5] = Stack[-26]
0x860: Stack[-4] = Stack[-25]
0x861: Stack[-3] = Stack[-24]
0x862: Stack[-2] = Stack[-6]
0x863: Stack[-1] = -Stack[-14]; Pop(0);
0x864: Call2 0x86d

0x865: Pop(5)
0x866: Return(); Pop(18)

0x867: Stack[-8] = 0
0x868: PushEmpty(object)
0x869: Stack[-1] = Stack[-22]
0x86a: Call2 0x7fd

0x86b: Pop(1)
0x86c: Return(); Pop(18)

0x86d: PushEmpty(object, object, object, object)
0x86e: @ GetScene(Stack[-2])
0x86f: Pop(0)
0x870: Push("scripted")
0x871: Push("blood_dir.xml")
0x872: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x873: Pop(2)
0x874: PushEmpty(object)
0x875: Stack[-1] = Stack[-10]
0x876: Call2 0x7fd

0x877: Pop(1)
0x878: Return(); Pop(4)

0x879: Stack[-1] = 0
0x87a: Stack[-2] = 0
0x87b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x87c: @@ GetPosition(Stack[-3])
0x87d: Pop(0)
0x87e: @ GetPosition(Stack[-2])
0x87f: Pop(0)
0x880: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x881: Push(CvectorIndex(Stack[-1], 0))
0x882: Push(CvectorIndex(Stack[-2], 2))
0x883: @ RotateAsync(Stack[-2], Stack[-1])
0x884: Pop(2)
0x885: Return(); Pop(6)

0x886: PushEmpty(bool, bool)
0x887: @ IsLoaded(Stack[-1])
0x888: Pop(0)
0x889: Stack[-3] = Stack[-1]
0x88a: Return(); Pop(2)

0x88b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x88c: @@ GetPosition(Stack[-8])
0x88d: Pop(0)
0x88e: @@ GetEyesHeight(Stack[-9])
0x88f: Pop(0)
0x890: Push(CvectorIndex(Stack[-8], 1))
0x891: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x892: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x893: @ GetPosition(Stack[-7])
0x894: Pop(0)
0x895: @ GetEyesHeight(Stack[-9])
0x896: Pop(0)
0x897: Push(CvectorIndex(Stack[-7], 1))
0x898: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x899: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x89a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x89b: Push(CvectorIndex(Stack[-6], 1))
0x89c: Stack[-1] = (int) 0
0x89d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x89e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x89f: Pop(1); Push(Sqrt(Stack[-1]))
0x8a0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8a1: Stack[-5] = -Stack[-6]; Pop(0);
0x8a2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8a3: PushEmpty(cvector, cvector)
0x8a4: Push(CVector(0.0, 1.0, 0.0))
0x8a5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8a6: Call2 0x940

0x8a7: Pop(1)
0x8a8: Push((int) 25)
0x8a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8aa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8ab: Push(CVector(0.0, 10.0, 0.0))
0x8ac: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8ad: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8ae: @ IsOverrideActive(Stack[-2])
0x8af: Pop(0)
0x8b0: Push(Stack[-2])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8b2: Stack[-21] = (bool) 0
0x8b3: Return(); Pop(18)

0x8b4: @ StopWorld()
0x8b5: Pop(0)
0x8b6: @ CameraTransit(Stack[-3], Stack[-5])
0x8b7: Pop(0)
0x8b8: Push(CvectorIndex(Stack[-4], 0))
0x8b9: Push(CvectorIndex(Stack[-5], 2))
0x8ba: @ Rotate(Stack[-2], Stack[-1])
0x8bb: Pop(2)
0x8bc: PushEmpty(bool)
0x8bd: Call2 0xa0d

0x8be: Pop(0)
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: GOTO 0x8c9

0x8c1: Push("head")
0x8c2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8c3: Pop(1)
0x8c4: Push(Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c6: Push("head")
0x8c7: @ LookAsyncCamera(Stack[-1])
0x8c8: Pop(1)
0x8c9: @ CameraWaitForPlayFinish()
0x8ca: Pop(0)
0x8cb: @ ResumeWorld()
0x8cc: Pop(0)
0x8cd: Stack[-21] = (bool) 1
0x8ce: Return(); Pop(18)

0x8cf: PushEmpty(bool, bool)
0x8d0: @ CameraSwitchToNormal()
0x8d1: Pop(0)
0x8d2: PushEmpty(bool)
0x8d3: Call2 0xa0d

0x8d4: Pop(0)
0x8d5: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d6: GOTO 0x8df

0x8d7: Push("head")
0x8d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8d9: Pop(1)
0x8da: Push(Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dc: Push("head")
0x8dd: @ UnlookAsync(Stack[-1])
0x8de: Pop(1)
0x8df: Return(); Pop(2)

0x8e0: PushEmpty(bool, float, float, bool, float, float)
0x8e1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8e2: Pop(0)
0x8e3: Push(Stack[-3])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8e5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8e6: Pop(0)
0x8e7: Push((bool) 0)
0x8e8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(1)
0x8ea: GOTO 0x8ef

0x8eb: Push("Can't find lsh animation : ")
0x8ec: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8ed: @ Trace(Stack[-1])
0x8ee: Pop(1)
0x8ef: Return(); Pop(6)

0x8f0: PushEmpty(bool, float, float, bool, float, float)
0x8f1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8f2: Pop(0)
0x8f3: Push(Stack[-3])
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8f6: Pop(0)
0x8f7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8f8: Pop(0)
0x8f9: GOTO 0x8fe

0x8fa: Push("Can't find lsh animation : ")
0x8fb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8fc: @ Trace(Stack[-1])
0x8fd: Pop(1)
0x8fe: Return(); Pop(6)

0x8ff: PushEmpty(float, cvector, float, cvector)
0x900: @@ GetEyesHeight(Stack[-2])
0x901: Pop(0)
0x902: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x903: Push(CvectorIndex(Stack[-1], 1))
0x904: Stack[-1] = Stack[-3]
0x905: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x906: Push("head")
0x907: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x908: Pop(1)
0x909: Return(); Pop(4)

0x90a: PushEmpty(bool)
0x90b: Call2 0xa0d

0x90c: Pop(0)
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: @ lshStopSpeech()
0x90f: Pop(0)
0x910: Return(); Pop(0)

0x911: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x912: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x913: Pop(0)
0x914: Pop(0); Push((bool) Stack[-8] == 0)
0x915: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x916: Stack[-7] = (int) 0
0x917: Push((int) 1)
0x918: Pop(1); Push(Stack[-8] + Stack[-1]);
0x919: Pop(1); Push(Stack[-18] + Stack[-1]);
0x91a: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x91b: Pop(1)
0x91c: Pop(0); Push((bool) Stack[-6] == 0)
0x91d: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91e: GOTO 0x922

0x91f: Push((int) 1)
0x920: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x921: GOTO 0x917

0x922: Pop(0); Push((bool) Stack[-7] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: Return(); Pop(16)

0x925: @ irand(Stack[-5], Stack[-7])
0x926: Pop(0)
0x927: Push((int) 1)
0x928: Pop(1); Push(Stack[-6] + Stack[-1]);
0x929: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x92a: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x92b: Pop(0)
0x92c: Push(Stack[-4])
0x92d: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x92e: @ GetEyesHeight(Stack[-3])
0x92f: Pop(0)
0x930: @ GetDirection(Stack[-2])
0x931: Pop(0)
0x932: Push((int) 50)
0x933: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x934: Push(CvectorIndex(Stack[-1], 1))
0x935: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x936: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x937: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x938: Pop(0)
0x939: Return(); Pop(16)

0x93a: PushEmpty(object, object)
0x93b: @ self(Stack[-1])
0x93c: Pop(0)
0x93d: Stack[-3] = Stack[-1]
0x93e: Return(); Pop(2)

0x93f: Stack[-1] = 0
0x940: PushEmpty(float, float)
0x941: Pop(0); Push(Stack[-3] | Stack[-3]);
0x942: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x943: Push((float)0.0)
0x944: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x947: Return(); Pop(2)

0x948: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x949: Return(); Pop(2)

0x94a: PushEmpty()
0x94b: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94d: Stack[-3] = Stack[-2]
0x94e: GOTO 0x950

0x94f: Stack[-3] = Stack[-1]
0x950: Return(); Pop(0)

0x951: PushEmpty()
0x952: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x953: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x954: Stack[-4] = Stack[-2]
0x955: Return(); Pop(0)

0x956: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x958: Stack[-4] = Stack[-1]
0x959: Return(); Pop(0)

0x95a: Stack[-4] = Stack[-3]
0x95b: Return(); Pop(0)

0x95c: PushEmpty()
0x95d: Pop(0); Push(Stack[-2] | Stack[-1]);
0x95e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x95f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x960: Pop(2); Push(Stack[-2] * Stack[-1]);
0x961: Pop(1); Push(Sqrt(Stack[-1]))
0x962: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x963: Return(); Pop(0)

0x964: PushEmpty()
0x965: Pop(0); Push((bool) Stack[-2] == 0)
0x966: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x967: Stack[-3] = (bool) 0
0x968: Return(); Pop(0)

0x969: Push((int) 0)
0x96a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96c: Push((int) 8)
0x96d: @ SendWorldWndMessage(Stack[-1])
0x96e: Pop(1)
0x96f: GOTO 0x979

0x970: Push((int) 0)
0x971: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x973: Push((int) 9)
0x974: @ SendWorldWndMessage(Stack[-1])
0x975: Pop(1)
0x976: GOTO 0x979

0x977: Stack[-3] = (bool) 0
0x978: Return(); Pop(0)

0x979: PushEmpty(float)
0x97a: Stack[-1] = Stack[-2]
0x97b: Call2 0x991

0x97c: Pop(1)
0x97d: PushEmpty(bool, object, string, float, float, float)
0x97e: Stack[-5] = Stack[-8]
0x97f: Stack[-4] = "reputation"
0x980: Stack[-3] = Stack[-7]
0x981: Stack[-2] = (int) 0
0x982: Stack[-1] = (int) 1
0x983: Call2 0x75d

0x984: Pop(6)
0x985: Stack[-3] = (bool) 1
0x986: Return(); Pop(0)

0x987: PushEmpty(object, object)
0x988: @ CreateFloatVector(Stack[-1])
0x989: Pop(0)
0x98a: @@ add(Stack[-3])
0x98b: Pop(0)
0x98c: Push((int) 15)
0x98d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x98e: Pop(1)
0x98f: Return(); Pop(2)

0x990: Stack[-1] = 0
0x991: PushEmpty(object, object)
0x992: @ CreateFloatVector(Stack[-1])
0x993: Pop(0)
0x994: @@ add(Stack[-3])
0x995: Pop(0)
0x996: Push((int) 16)
0x997: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x998: Pop(1)
0x999: Return(); Pop(2)

0x99a: Stack[-1] = 0
0x99b: PushEmpty(object, object)
0x99c: @ FindActor(Stack[-1], Stack[-4])
0x99d: Pop(0)
0x99e: Pop(0); Push((bool) Stack[-1] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a0: Stack[-5] = (bool) 0
0x9a1: Return(); Pop(2)

0x9a2: @ Trigger(Stack[-1], Stack[-3])
0x9a3: Pop(0)
0x9a4: Stack[-5] = (bool) 1
0x9a5: Return(); Pop(2)

0x9a6: Stack[-1] = 0
0x9a7: PushEmpty(bool, bool)
0x9a8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9a9: Pop(0)
0x9aa: Push(Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ac: Push("attack")
0x9ad: @ PlayGlobalMusic(Stack[-1])
0x9ae: Pop(1)
0x9af: Return(); Pop(2)

0x9b0: PushEmpty(object, object)
0x9b1: @ GetScene(Stack[-1])
0x9b2: Pop(0)
0x9b3: Push("battle")
0x9b4: PushEmpty(object)
0x9b5: Call2 0x93a

0x9b6: Pop(0)
0x9b7: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x9b8: Pop(2)
0x9b9: Return(); Pop(2)

0x9ba: Stack[-1] = 0
0x9bb: PushEmpty(string, string)
0x9bc: Stack[-1] = "idle"
0x9bd: Push(Stack[-3])
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9c0: Stack[-4] = Stack[-1]
0x9c1: Return(); Pop(2)

0x9c2: PushEmpty(int, bool, int, bool)
0x9c3: Stack[-2] = (int) 0
0x9c4: Push("all")
0x9c5: PushEmpty(string, int)
0x9c6: Stack[-1] = Stack[-5]
0x9c7: Call2 0x9bb

0x9c8: Pop(1)
0x9c9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9ca: Pop(2)
0x9cb: Pop(0); Push((bool) Stack[-1] == 0)
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: GOTO 0x9d1

0x9ce: Push((int) 1)
0x9cf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9d0: GOTO 0x9c4

0x9d1: Stack[-5] = Stack[-2]
0x9d2: Return(); Pop(4)

0x9d3: PushEmpty()
0x9d4: Push((int) 1)
0x9d5: @@ SetReturnValue(Stack[-1])
0x9d6: Pop(1)
0x9d7: Return(); Pop(0)

0x9d8: PushEmpty()
0x9d9: Push("b1q03_retreat")
0x9da: Push((int) 1)
0x9db: @ SetVariable(Stack[-2], Stack[-1])
0x9dc: Pop(2)
0x9dd: Push((int) 0)
0x9de: @@ SetReturnValue(Stack[-1])
0x9df: Pop(1)
0x9e0: Return(); Pop(0)

0x9e1: PushEmpty(int, int)
0x9e2: Push("branch")
0x9e3: @ GetVariable(Stack[-1], Stack[-2])
0x9e4: Pop(1)
0x9e5: Push((int) 0)
0x9e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e8: Stack[-3] = (int) 1
0x9e9: Return(); Pop(2)

0x9ea: GOTO 0x9f0

0x9eb: Push((int) 1)
0x9ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ee: Stack[-3] = (int) 2
0x9ef: Return(); Pop(2)

0x9f0: Stack[-3] = (int) 3
0x9f1: Return(); Pop(2)

0x9f2: PushEmpty(int, int)
0x9f3: Push("branch")
0x9f4: @ GetVariable(Stack[-1], Stack[-2])
0x9f5: Pop(1)
0x9f6: Stack[-3] = Stack[-1]
0x9f7: Return(); Pop(2)

0x9f8: PushEmpty()
0x9f9: PushEmpty(int)
0x9fa: Call2 0x9f2

0x9fb: Pop(0)
0x9fc: Push((int) 1)
0x9fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0x9ff: @ WorkWithCorpse(Stack[-1])
0xa00: Pop(0)
0xa01: GOTO 0xa04

0xa02: @ Barter(Stack[-1])
0xa03: Pop(0)
0xa04: Return(); Pop(0)

0xa05: Stack[-1] = (int) 543373
0xa06: Return(); Pop(0)

0xa07: Stack[-1] = (int) 543372
0xa08: Return(); Pop(0)

0xa09: Stack[-1] = "ui/NPC_Citizen1.png"
0xa0a: Return(); Pop(0)

0xa0b: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xa0c: Return(); Pop(0)

0xa0d: Stack[-1] = (bool) 0
0xa0e: Return(); Pop(0)

0xa0f: PushEmpty(object, object)
0xa10: @ GetScene(Stack[-1])
0xa11: Pop(0)
0xa12: PushEmpty(object)
0xa13: Call2 0x93a

0xa14: Pop(0)
0xa15: @@ RemoveStationaryActor(Stack[-1])
0xa16: Pop(1)
0xa17: Return(); Pop(2)

0xa18: Stack[-1] = 0
0xa19: PushEmpty()
0xa1a: PushEmpty(bool, object)
0xa1b: Stack[-1] = Stack[-3]
0xa1c: Call2 0x74c

0xa1d: Pop(1)
0xa1e: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa1f: PushEmpty(bool, object, float)
0xa20: Stack[-2] = Stack[-4]
0xa21: Stack[-1] = (float) -0.1
0xa22: Call2 0x964

0xa23: Pop(3)
0xa24: PushEmpty(bool, string, string)
0xa25: Stack[-2] = "quest_b1_03"
0xa26: Stack[-1] = "doberman_dead"
0xa27: Call2 0x99b

0xa28: Pop(3)
0xa29: PushEmpty()
0xa2a: Call2 0xa0f

0xa2b: Pop(0)
0xa2c: PushEmpty(object)
0xa2d: Stack[-1] = Stack[-2]
0xa2e: Push(-1, 0); TaskCall(6)
0xa2f: Call2 0x693

0xa30: Pop(-1, 0); TaskReturn
0xa31: Pop(1)
0xa32: Return(); Pop(0)

0xa33: PushEmpty()
0xa34: PushEmpty(object, int, float)
0xa35: Stack[-3] = Stack[-7]
0xa36: Stack[-2] = Stack[-6]
0xa37: Stack[-1] = Stack[-5]
0xa38: Call2 0x829

0xa39: Pop(3)
0xa3a: Return(); Pop(0)

0xa3b: PushEmpty()
0xa3c: PushEmpty(object, int, float, cvector, cvector)
0xa3d: Stack[-5] = Stack[-11]
0xa3e: Stack[-4] = Stack[-10]
0xa3f: Stack[-3] = Stack[-9]
0xa40: Stack[-2] = Stack[-7]
0xa41: Stack[-1] = Stack[-6]
0xa42: Call2 0x86d

0xa43: Pop(5)
0xa44: Return(); Pop(0)

0xa45: PushEmpty(float, float)
0xa46: Push("health")
0xa47: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa48: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa49: Push("health")
0xa4a: @ GetProperty(Stack[-1], Stack[-2])
0xa4b: Pop(1)
0xa4c: Push((int) 0)
0xa4d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa4e: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa4f: @ SignalDeath(Stack[-4])
0xa50: Pop(0)
0xa51: Return(); Pop(2)

0xa52: PushEmpty()
0xa53: PushEmpty(object)
0xa54: Stack[-1] = Stack[-2]
0xa55: Call2 0xa19

0xa56: Pop(1)
0xa57: Return(); Pop(0)

0xa58: PushEmpty()
0xa59: PushEmpty(bool, object)
0xa5a: Stack[-1] = Stack[-3]
0xa5b: Call2 0x7e5

0xa5c: Stack[-4] = Stack[-2]
0xa5d: Pop(2)
0xa5e: Return(); Pop(0)

0xa5f: PushEmpty()
0xa60: PushEmpty(object, bool)
0xa61: Stack[-2] = Stack[-3]
0xa62: Stack[-1] = (bool) 1
0xa63: Push(-2, 6); TaskCall(4)
0xa64: Call2 0x2e3

0xa65: Pop(-2, 6); TaskReturn
0xa66: Pop(2)
0xa67: Return(); Pop(0)

