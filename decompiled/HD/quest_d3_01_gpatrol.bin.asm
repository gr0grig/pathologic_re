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
	kill_player
	talk_player
	quest_d3_01
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
	battle
	d3q01
	gpatrol_attack
	gpatrol_talk
	playsound
	givemoney
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
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	Stop (0 args)
	FindActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
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
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x1a3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x17b Vars = (object)
		EVENT_26 Op = 0x186 Vars = (string)
		EVENT_17 Op = 0x198 Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x4d9 Vars = (int)
		EVENT_1 Op = 0x4f4 Vars = (object)
		EVENT_2 Op = 0x503 Vars = (object)
		EVENT_10 Op = 0x589 Vars = (object)
		EVENT_41 Op = 0x594 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x5b5 Vars = (object)
		EVENT_22 Op = 0x634 Vars = (object, int, float, float)
		EVENT_16 Op = 0x636 Vars = (object, string)
		EVENT_41 Op = 0x638 Vars = (object)

Events:
EVENT_22 Op = 0x987 Vars = (object, int, float, float)
EVENT_43 Op = 0x98f Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x999 Vars = (object, string)
EVENT_41 Op = 0x9a6 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x790

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x96a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x968

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x96c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x96e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x91b

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
0x41: Call2 0x7d5

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
0x54: Push((int) 509131)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509132)
0x5a: Push((int) 10013)
0x5b: Push((int) 10012)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 534051)
0x5f: Push((int) -1)
0x60: Push((int) 35632)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x970

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x7e7

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
0x86: Call2 0x970

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
0x96: Call2 0x7f7

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x811

0x9f: Pop(0)
0xa0: Push((int) 10025)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x8ef

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x8f6

0xac: Pop(2)
0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x8fd

0xb1: Pop(2)
0xb2: Push((int) 10024)
0xb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x8ef

0xb9: Pop(2)
0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x8f6

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x8fd

0xc3: Pop(2)
0xc4: Push((int) 10017)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x8e4

0xcb: Pop(2)
0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x903

0xd0: Pop(2)
0xd1: Push((int) 10018)
0xd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x8e4

0xd8: Pop(2)
0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x903

0xdd: Pop(2)
0xde: Push((int) 10011)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x84

0xe4: Pop(1)
0xe5: Push((int) 509131)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 509132)
0xeb: Push((int) 10013)
0xec: Push((int) 10012)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 534051)
0xf0: Push((int) -1)
0xf1: Push((int) 35632)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 10013)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call2 0x84

0xfb: Pop(1)
0xfc: Push((int) 509133)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 509134)
0x102: Push((int) 10019)
0x103: Push((int) 10014)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 509135)
0x107: Push((int) 10016)
0x108: Push((int) 10015)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 10016)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0x84

0x112: Pop(1)
0x113: Push((int) 509136)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 509137)
0x119: Push((int) -1)
0x11a: Push((int) 10017)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 509138)
0x11e: Push((int) -1)
0x11f: Push((int) 10018)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 10019)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0x84

0x129: Pop(1)
0x12a: Push((int) 509139)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 509140)
0x130: Push((int) 10021)
0x131: Push((int) 10020)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 10021)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0x84

0x13b: Pop(1)
0x13c: Push((int) 509141)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 509142)
0x142: Push((int) 10023)
0x143: Push((int) 10022)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x90a

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 509144)
0x14c: Push((int) -1)
0x14d: Push((int) 10024)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 10023)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call2 0x84

0x157: Pop(1)
0x158: Push((int) 509143)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0x90a

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push((int) 509145)
0x163: Push((int) -1)
0x164: Push((int) 10025)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 509146)
0x168: Push((int) 10016)
0x169: Push((int) 10026)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16e: PushEmpty(bool)
0x16f: Call2 0x970

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x172: @ lshStopAnimation()
0x173: Pop(0)
0x174: GOTO 0x177

0x175: @ StopAnimation()
0x176: Pop(0)
0x177: Return(); Pop(0)

0x178: GOTO 0x9b

0x179: Return(); Pop(0)

0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: PushEmpty()
0x17d: Call2 0x1f7

0x17e: Pop(0)
0x17f: PushEmpty(int, object)
0x180: Stack[-1] = Stack[-3]
0x181: Push(-2, 1); TaskCall(0)
0x182: Call2 0x0

0x183: Pop(-2, 1); TaskReturn
0x184: Pop(2)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: Push("kill_player")
0x188: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18a: PushEmpty()
0x18b: Call2 0x1f7

0x18c: Pop(0)
0x18d: PushEmpty()
0x18e: Push(-0, 6); TaskCall(3)
0x18f: Call2 0x1fd

0x190: Pop(-0, 6); TaskReturn
0x191: Pop(0)
0x192: GOTO 0x197

0x193: Push("talk_player")
0x194: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: EventDisable(0)
0x197: Return(); Pop(0)

0x198: PushEmpty(bool, bool)
0x199: @ IsPlayerActor(Stack[-3], Stack[-1])
0x19a: Pop(0)
0x19b: Push(Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(bool, string, string)
0x19e: Stack[-2] = "quest_d3_01"
0x19f: Stack[-1] = "kill_player"
0x1a0: Call2 0x8c4

0x1a1: Pop(3)
0x1a2: Return(); Pop(2)

0x1a3: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x1a4: @ GetPFPosition(Stack[-1])
0x1a5: Pop(0)
0x1a6: @ GetDirection(Stack[-0])
0x1a7: Pop(0)
0x1a8: PushEmpty()
0x1a9: Call2 0x1fc

0x1aa: Pop(0)
0x1ab: Push((int) 10)
0x1ac: @ irand(Stack[-5], Stack[-1])
0x1ad: Pop(1)
0x1ae: Push((int) 5)
0x1af: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1b0: @ Sleep(Stack[-1], Stack[-4])
0x1b1: Pop(1)
0x1b2: Push(Stack[-3])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x17a

0x1b6: Pop(0)
0x1b7: GOTO 0x1f5

0x1b8: PushEmpty()
0x1b9: Call2 0x1fc

0x1ba: Pop(0)
0x1bb: @ GetPFPosition(Stack[-2])
0x1bc: Pop(0)
0x1bd: PushEmpty(float, cvector, cvector)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[-5]
0x1c0: Call2 0x851

0x1c1: Pop(2)
0x1c2: Push((int) 40000)
0x1c3: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1c5: @ FindPathTo(Stack[-1], Stack[-1])
0x1c6: Pop(0)
0x1c7: Pop(0); Push(( Stack[-1] != 0 )
0x1c8: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1c9: @ RotatePath(Stack[-1], Stack[-3])
0x1ca: Pop(0)
0x1cb: Pop(0); Push((bool) Stack[-3] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1f4

0x1ce: Push((bool) 0)
0x1cf: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x1d0: Pop(1)
0x1d1: Pop(0); Push((bool) Stack[-3] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1f4

0x1d4: Push(CvectorIndex(Stack[-0], 0))
0x1d5: Push(CvectorIndex(Stack[-0], 2))
0x1d6: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x1d7: Pop(2)
0x1d8: Pop(0); Push((bool) Stack[-3] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: GOTO 0x1f4

0x1db: @ WaitForAnimEnd(Stack[-3])
0x1dc: Pop(0)
0x1dd: Pop(0); Push((bool) Stack[-3] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: GOTO 0x1f4

0x1e0: GOTO 0x1f5

0x1e1: GOTO 0x1e5

0x1e2: Push((int) 1)
0x1e3: @ Sleep(Stack[-1])
0x1e4: Pop(1)
0x1e5: Stack[-1] = 0
0x1e6: GOTO 0x1f4

0x1e7: Push(CvectorIndex(Stack[-0], 0))
0x1e8: Push(CvectorIndex(Stack[-0], 2))
0x1e9: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x1ea: Pop(2)
0x1eb: Pop(0); Push((bool) Stack[-3] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f4

0x1ee: @ WaitForAnimEnd(Stack[-3])
0x1ef: Pop(0)
0x1f0: Pop(0); Push((bool) Stack[-3] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x1f4

0x1f3: GOTO 0x1f5

0x1f4: GOTO 0x1b8

0x1f5: GOTO 0x1a8

0x1f6: Return(); Pop(8)

0x1f7: @ StopGroup0()
0x1f8: Pop(0)
0x1f9: @ Stop()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(object, object)
0x1fe: Push("player")
0x1ff: @ FindActor(Stack[-2], Stack[-1])
0x200: Pop(1)
0x201: Pop(0); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Return(); Pop(2)

0x204: PushEmpty(object, bool, float)
0x205: Stack[-3] = Stack[-4]
0x206: Stack[-2] = (bool) 1
0x207: Stack[-1] = (float) 180.0
0x208: Call2 0x212

0x209: Pop(3)
0x20a: Return(); Pop(2)

0x20b: Stack[-1] = 0
0x20c: PushEmpty()
0x20d: Stack[-3] = (float) 0.15
0x20e: Return(); Pop(0)

0x20f: PushEmpty()
0x210: Stack[-3] = (int) 0
0x211: Return(); Pop(0)

0x212: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x213: PushEmpty()
0x214: Call2 0x2f7

0x215: Pop(0)
0x216: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x217: Push("@GetAttackDistance")
0x218: Push((int) 1)
0x219: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: @@ GetAttackDistance(Stack[-11])
0x21c: Pop(0)
0x21d: Push((int) 50)
0x21e: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x21f: GOTO 0x221

0x220: Stack[-11] = Stack[-23]
0x221: Push((int) 150)
0x222: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-11] = (int) 150
0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x226: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x227: @ IsPlayerActor(Stack[-0], Stack[-8])
0x228: Pop(0)
0x229: Push(Stack[-8])
0x22a: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22b: Push("attack")
0x22c: @ PlayGlobalMusic(Stack[-1])
0x22d: Pop(1)
0x22e: PushEmpty(object)
0x22f: Call2 0x841

0x230: Pop(0)
0x231: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x232: Pop(1)
0x233: Push(Stack[-24])
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-7] = (bool) 0
0x236: GOTO 0x238

0x237: Stack[-7] = (bool) 1
0x238: Push((float)400.0)
0x239: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x23a: PushEmpty(bool)
0x23b: Stack[-1] = (bool) 0
0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Call2 0x6ef

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x245: PushEmpty()
0x246: Call2 0x494

0x247: Pop(0)
0x248: @@ GetPFPosition(Stack[-10])
0x249: Pop(0)
0x24a: @ GetPFPosition(Stack[-9])
0x24b: Pop(0)
0x24c: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x24d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x24e: Pop(0); Push(Stack[-6] * Stack[-6]);
0x24f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x251: PushEmpty(bool, object, float, float, bool, bool)
0x252: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x253: Stack[-4] = Stack[-17]
0x254: Stack[-3] = (float) 10000.0
0x255: Stack[-2] = (bool) 1
0x256: Stack[-1] = (bool) 0
0x257: Push(-6, 3); TaskCall(4)
0x258: Call2 0x4a8

0x259: Pop(-6, 3); TaskReturn
0x25a: Pop(5)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x2e6

0x25e: Stack[-7] = (bool) 0
0x25f: GOTO 0x2e5

0x260: Pop(0); Push(Stack[-23] * Stack[-23]);
0x261: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x263: @@ GetPFPosition(Stack[-3])
0x264: Pop(0)
0x265: @ CanReachByPF(Stack[-2], Stack[-3])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-2] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x269: PushEmpty(bool, object, float, float, bool, bool)
0x26a: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x26b: Stack[-4] = Stack[-17]
0x26c: Stack[-3] = (float) 10000.0
0x26d: Stack[-2] = (bool) 1
0x26e: Stack[-1] = (bool) 0
0x26f: Push(-6, 3); TaskCall(4)
0x270: Call2 0x4a8

0x271: Pop(-6, 3); TaskReturn
0x272: Pop(5)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x2e6

0x276: Stack[-7] = (bool) 0
0x277: GOTO 0x23a

0x278: Pop(0); Push((bool) Stack[-7] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x27a: PushEmpty(object)
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call2 0x785

0x27d: Pop(1)
0x27e: Push("all")
0x27f: Push("attack_on")
0x280: @ PlayAnimation(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: @ WaitForAnimEnd()
0x283: Pop(0)
0x284: PushEmpty()
0x285: Call2 0x494

0x286: Pop(0)
0x287: @ StopAsync()
0x288: Pop(0)
0x289: Stack[-7] = (bool) 1
0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call2 0x6ef

0x28d: Pop(1)
0x28e: Pop(1); Push((bool) Stack[-1] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: GOTO 0x2e6

0x291: @ rand(Stack[-1])
0x292: Pop(0)
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 1
0x295: Push((float)0.25)
0x296: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(bool)
0x299: Call2 0x469

0x29a: Pop(0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 0
0x29d: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29e: @ Face(Stack[-0])
0x29f: Pop(0)
0x2a0: PushEmpty()
0x2a1: Call2 0x49b

0x2a2: Pop(0)
0x2a3: Push("all")
0x2a4: Push("attack_stay")
0x2a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: PushEmpty(bool, float)
0x2a8: Stack[-1] = Stack[-25]
0x2a9: Call2 0x3e5

0x2aa: Pop(2)
0x2ab: @ StopAsync()
0x2ac: Pop(0)
0x2ad: GOTO 0x2dc

0x2ae: @ Face(Stack[-0])
0x2af: Pop(0)
0x2b0: Push("all")
0x2b1: Push("fjump")
0x2b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: @ WaitForAnimEnd()
0x2b5: Pop(0)
0x2b6: PushEmpty()
0x2b7: Call2 0x494

0x2b8: Pop(0)
0x2b9: Push(CVector(0.0, 0.0, 0.0))
0x2ba: @ SetSpeed(Stack[-1])
0x2bb: Pop(1)
0x2bc: @ Stop()
0x2bd: Pop(0)
0x2be: @ StopAsync()
0x2bf: Pop(0)
0x2c0: PushEmpty(bool)
0x2c1: Call2 0x469

0x2c2: Pop(0)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c7: Call2 0x6ef

0x2c8: Pop(1)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: GOTO 0x2e6

0x2cc: @@ GetPFPosition(Stack[-10])
0x2cd: Pop(0)
0x2ce: @ GetPFPosition(Stack[-9])
0x2cf: Pop(0)
0x2d0: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2d1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d2: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2d3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d5: PushEmpty(bool, float)
0x2d6: Stack[-1] = Stack[-25]
0x2d7: Call2 0x341

0x2d8: Pop(1)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2e6

0x2dc: GOTO 0x2e5

0x2dd: PushEmpty(bool, float)
0x2de: Stack[-1] = Stack[-25]
0x2df: Call2 0x341

0x2e0: Pop(1)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2e6

0x2e4: Stack[-7] = (bool) 1
0x2e5: GOTO 0x23a

0x2e6: @ WaitForAnimEnd()
0x2e7: Pop(0)
0x2e8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Return(); Pop(22)

0x2eb: Push("all")
0x2ec: Push("attack_off")
0x2ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: @ WaitForAnimEnd()
0x2f0: Pop(0)
0x2f1: Push(Stack[-8])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push((float)2.0)
0x2f4: @ Sleep(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(22)

0x2f7: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2f8: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2f9: Push("all")
0x2fa: Push("attack_begin")
0x2fb: Push((int) 1)
0x2fc: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2fe: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Pop(0); Push((bool) Stack[-3] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x306

0x303: Push((int) 1)
0x304: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x305: GOTO 0x2f9

0x306: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x307: Push("attack")
0x308: Push((int) 1)
0x309: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x30c: Pop(1)
0x30d: Pop(0); Push((bool) Stack[-2] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x313

0x310: Push((int) 1)
0x311: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x312: GOTO 0x307

0x313: Push("all")
0x314: Push("bjump")
0x315: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: Push(CvectorIndex(Stack[-1], 2))
0x318: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x319: Return(); Pop(6)

0x31a: PushEmpty(object, float, float, object, float, float)
0x31b: Push((float)0.9)
0x31c: Pop(1); Push(Stack[-9] * Stack[-1]);
0x31d: @ GetVictim(Stack[-1], Stack[-4])
0x31e: Pop(1)
0x31f: @ ReportAttack(Stack[-0])
0x320: Pop(0)
0x321: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x322: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x323: PushEmpty(float, object, int)
0x324: Stack[-2] = Stack[-6]
0x325: Stack[-1] = Stack[-10]
0x326: Call2 0x20c

0x327: Stack[-5] = Stack[-3]
0x328: Pop(3)
0x329: PushEmpty(float, object, float, int)
0x32a: Stack[-3] = Stack[-7]
0x32b: Stack[-2] = Stack[-6]
0x32c: PushEmpty(int, object, int)
0x32d: Stack[-2] = Stack[-10]
0x32e: Stack[-1] = Stack[-14]
0x32f: Call2 0x20f

0x330: Stack[-4] = Stack[-3]
0x331: Pop(3)
0x332: Call2 0x67d

0x333: Stack[-5] = Stack[-4]
0x334: Pop(4)
0x335: PushEmpty(int)
0x336: Call2 0x499

0x337: Pop(0)
0x338: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x339: Pop(1)
0x33a: PushEmpty(object, float)
0x33b: Stack[-2] = Stack[-5]
0x33c: Stack[-1] = Stack[-3]
0x33d: Call2 0x4a0

0x33e: Pop(2)
0x33f: Return(); Pop(6)

0x340: Stack[-3] = 0
0x341: PushEmpty(int, bool, int, string, int, bool, int, string)
0x342: PushEmpty()
0x343: Call2 0x494

0x344: Pop(0)
0x345: @ irand(Stack[-4], Stack[-1])
0x346: Pop(0)
0x347: Push((int) 1)
0x348: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x349: @ Face(Stack[-0])
0x34a: Pop(0)
0x34b: Push((bool) 1)
0x34c: @ SetAttackState(Stack[-1])
0x34d: Pop(1)
0x34e: PushEmpty()
0x34f: Call2 0x8d9

0x350: Pop(0)
0x351: Push("all")
0x352: Push("attack_begin")
0x353: Pop(1); Push(Stack[-1] + Stack[-6]);
0x354: @ PlayAnimation(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: @ WaitForAnimEnd()
0x357: Pop(0)
0x358: PushEmpty()
0x359: Call2 0x474

0x35a: Pop(0)
0x35b: PushEmpty(bool, object)
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call2 0x6ef

0x35e: Pop(1)
0x35f: Pop(1); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x361: @ StopAsync()
0x362: Pop(0)
0x363: Stack[-10] = (bool) 0
0x364: Return(); Pop(8)

0x365: PushEmpty(float, int)
0x366: Stack[-2] = Stack[-11]
0x367: Stack[-1] = Stack[-6]
0x368: Call2 0x31a

0x369: Pop(2)
0x36a: Push("all")
0x36b: Push("attack_middle")
0x36c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x36d: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Push(Stack[-3])
0x370: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x371: PushEmpty()
0x372: Call2 0x8d9

0x373: Pop(0)
0x374: Push("all")
0x375: Push("attack_middle")
0x376: Pop(1); Push(Stack[-1] + Stack[-6]);
0x377: @ PlayAnimation(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: @ WaitForAnimEnd()
0x37a: Pop(0)
0x37b: PushEmpty()
0x37c: Call2 0x494

0x37d: Pop(0)
0x37e: PushEmpty(bool, object)
0x37f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x380: Call2 0x6ef

0x381: Pop(1)
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x384: @ StopAsync()
0x385: Pop(0)
0x386: Stack[-10] = (bool) 0
0x387: Return(); Pop(8)

0x388: PushEmpty(float, int)
0x389: Stack[-2] = Stack[-11]
0x38a: Stack[-1] = Stack[-6]
0x38b: Call2 0x31a

0x38c: Pop(2)
0x38d: Stack[-2] = (int) 1
0x38e: Push("attack_middle")
0x38f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x390: Push("_")
0x391: Pop(2); Push(Stack[-2] + Stack[-1]);
0x392: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x393: Push("all")
0x394: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x395: Pop(1)
0x396: Pop(0); Push((bool) Stack[-3] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x3b6

0x399: PushEmpty()
0x39a: Call2 0x8d9

0x39b: Pop(0)
0x39c: Push("all")
0x39d: @ PlayAnimation(Stack[-1], Stack[-2])
0x39e: Pop(1)
0x39f: @ WaitForAnimEnd()
0x3a0: Pop(0)
0x3a1: PushEmpty()
0x3a2: Call2 0x494

0x3a3: Pop(0)
0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a6: Call2 0x6ef

0x3a7: Pop(1)
0x3a8: Pop(1); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3aa: @ StopAsync()
0x3ab: Pop(0)
0x3ac: Stack[-10] = (bool) 0
0x3ad: Return(); Pop(8)

0x3ae: PushEmpty(float, int)
0x3af: Stack[-2] = Stack[-11]
0x3b0: Stack[-1] = Stack[-6]
0x3b1: Call2 0x31a

0x3b2: Pop(2)
0x3b3: Push((int) 1)
0x3b4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b5: GOTO 0x38e

0x3b6: Push((bool) 0)
0x3b7: @ SetAttackState(Stack[-1])
0x3b8: Pop(1)
0x3b9: Push("all")
0x3ba: Push("attack_end")
0x3bb: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: PushEmpty(bool)
0x3bf: Call2 0x4a2

0x3c0: Pop(0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c2: PushEmpty(bool, float)
0x3c3: Stack[-1] = (float) 0.75
0x3c4: Call2 0x3ca

0x3c5: Pop(2)
0x3c6: @ StopAsync()
0x3c7: Pop(0)
0x3c8: Stack[-10] = (bool) 1
0x3c9: Return(); Pop(8)

0x3ca: PushEmpty(float, bool, float, bool)
0x3cb: @ rand(Stack[-2])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3cf: @ IsAnimationPlaying(Stack[-1])
0x3d0: Pop(0)
0x3d1: Pop(0); Push((bool) Stack[-1] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: GOTO 0x3dd

0x3d4: PushEmpty(bool)
0x3d5: Call2 0x42c

0x3d6: Pop(0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-6] = (bool) 1
0x3d9: Return(); Pop(4)

0x3da: @ sync()
0x3db: Pop(0)
0x3dc: GOTO 0x3cf

0x3dd: GOTO 0x3e3

0x3de: @ WaitForAnimEnd()
0x3df: Pop(0)
0x3e0: PushEmpty()
0x3e1: Call2 0x494

0x3e2: Pop(0)
0x3e3: Stack[-6] = (bool) 0
0x3e4: Return(); Pop(4)

0x3e5: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3e6: @ IsAnimationPlaying(Stack[-5])
0x3e7: Pop(0)
0x3e8: Pop(0); Push((bool) Stack[-5] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: GOTO 0x40b

0x3eb: PushEmpty(bool)
0x3ec: Call2 0x42c

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-12] = (bool) 1
0x3f0: Return(); Pop(10)

0x3f1: PushEmpty(bool, object)
0x3f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f3: Call2 0x6ef

0x3f4: Pop(1)
0x3f5: Pop(1); Push((bool) Stack[-1] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: Stack[-12] = (bool) 0
0x3f8: Return(); Pop(10)

0x3f9: @@ GetPFPosition(Stack[-4])
0x3fa: Pop(0)
0x3fb: @ GetPFPosition(Stack[-3])
0x3fc: Pop(0)
0x3fd: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3fe: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ff: Pop(0); Push(Stack[-11] * Stack[-11]);
0x400: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x402: PushEmpty(bool, float)
0x403: Stack[-1] = Stack[-13]
0x404: Call2 0x341

0x405: Pop(2)
0x406: Stack[-12] = (bool) 1
0x407: Return(); Pop(10)

0x408: @ sync()
0x409: Pop(0)
0x40a: GOTO 0x3e6

0x40b: PushEmpty()
0x40c: Call2 0x494

0x40d: Pop(0)
0x40e: Stack[-12] = (bool) 0
0x40f: Return(); Pop(10)

0x410: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x411: PushEmpty(bool, object)
0x412: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x413: Call2 0x6ef

0x414: Pop(1)
0x415: Pop(1); Push((bool) Stack[-1] == 0)
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-11] = (bool) 0
0x418: Return(); Pop(10)

0x419: PushEmpty(bool)
0x41a: Call2 0x469

0x41b: Pop(0)
0x41c: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41d: @@ GetPFPosition(Stack[-5])
0x41e: Pop(0)
0x41f: @ GetPFPosition(Stack[-4])
0x420: Pop(0)
0x421: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x422: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x423: @@ GetAttackDistance(Stack[-1])
0x424: Pop(0)
0x425: Push((int) 50)
0x426: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x427: Pop(0); Push(Stack[-1] * Stack[-1]);
0x428: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x429: Return(); Pop(10)

0x42a: Stack[-11] = (bool) 0
0x42b: Return(); Pop(10)

0x42c: PushEmpty(bool)
0x42d: Stack[-1] = (bool) 0
0x42e: PushEmpty(bool)
0x42f: Call2 0x410

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x432: PushEmpty(bool)
0x433: Call2 0x43c

0x434: Pop(0)
0x435: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x436: Stack[-1] = (bool) 1
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-1] = (bool) 1
0x439: Return(); Pop(0)

0x43a: Stack[-1] = (bool) 0
0x43b: Return(); Pop(0)

0x43c: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x43d: @ GetScene(Stack[-5])
0x43e: Pop(0)
0x43f: Stack[-4] = (bool) 0
0x440: PushEmpty(cvector, object)
0x441: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x442: Call2 0x648

0x443: Pop(1)
0x444: Pop(1); Push(( -Stack[-1])
0x445: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x446: Pop(1)
0x447: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: GOTO 0x466

0x44a: @ Face(Stack[-0])
0x44b: Pop(0)
0x44c: Push("all")
0x44d: Push("bjump")
0x44e: @ PlayAnimation(Stack[-2], Stack[-1])
0x44f: Pop(2)
0x450: @@ GetPFPosition(Stack[-2])
0x451: Pop(0)
0x452: @ GetPFPosition(Stack[-1])
0x453: Pop(0)
0x454: @ WaitForAnimEnd()
0x455: Pop(0)
0x456: PushEmpty()
0x457: Call2 0x494

0x458: Pop(0)
0x459: @ StopAsync()
0x45a: Pop(0)
0x45b: Push(CVector(0.0, 0.0, 0.0))
0x45c: @ SetSpeed(Stack[-1])
0x45d: Pop(1)
0x45e: Stack[-4] = (bool) 1
0x45f: PushEmpty(bool)
0x460: Call2 0x410

0x461: Pop(0)
0x462: Pop(1); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: GOTO 0x466

0x465: GOTO 0x440

0x466: Stack[-11] = Stack[-4]
0x467: Return(); Pop(10)

0x468: Stack[-5] = 0
0x469: PushEmpty(bool, bool)
0x46a: Push("IsAttacking")
0x46b: Push((int) 1)
0x46c: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x46d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46e: @@ IsAttacking(Stack[-1])
0x46f: Pop(0)
0x470: Stack[-3] = Stack[-1]
0x471: Return(); Pop(2)

0x472: Stack[-3] = (bool) 0
0x473: Return(); Pop(2)

0x474: PushEmpty(float, int, float, int)
0x475: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Return(); Pop(4)

0x478: Push( Stack[5 + Tasks[-1].StackPointer] )
0x479: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47a: Push((int) -1)
0x47b: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x47c: Push((int) 0)
0x47d: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: Return(); Pop(4)

0x480: @ rand(Stack[-2])
0x481: Pop(0)
0x482: PushEmpty(float)
0x483: Call2 0x4a6

0x484: Pop(0)
0x485: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x487: @ irand(Stack[-1], Stack[-2])
0x488: Pop(0)
0x489: Push((int) 1)
0x48a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x48b: Push("attack")
0x48c: Pop(1); Push(Stack[-1] + Stack[-2]);
0x48d: @ Speak(Stack[-1])
0x48e: Pop(1)
0x48f: PushEmpty(int)
0x490: Call2 0x4a4

0x491: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x492: Pop(1)
0x493: Return(); Pop(4)

0x494: PushEmpty(object)
0x495: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x496: Call2 0x8d0

0x497: Pop(1)
0x498: Return(); Pop(0)

0x499: Stack[-1] = (int) 0
0x49a: Return(); Pop(0)

0x49b: PushEmpty(string)
0x49c: Stack[-1] = "attack_stay"
0x49d: Call2 0x818

0x49e: Pop(1)
0x49f: Return(); Pop(0)

0x4a0: PushEmpty()
0x4a1: Return(); Pop(0)

0x4a2: Stack[-1] = (bool) 1
0x4a3: Return(); Pop(0)

0x4a4: Stack[-1] = (int) 1
0x4a5: Return(); Pop(0)

0x4a6: Stack[-1] = (float) 0.5
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty(bool, bool, bool, bool)
0x4a9: PushEmpty(object)
0x4aa: Stack[-1] = Stack[-10]
0x4ab: Call2 0x8d0

0x4ac: Pop(1)
0x4ad: Push((int) 1)
0x4ae: Push((int) 5)
0x4af: @ SetTimer(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: @ CanSee(Stack[-2], Stack[-9])
0x4b2: Pop(0)
0x4b3: Push(Stack[-2])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4b6: PushEmpty(object)
0x4b7: Stack[-1] = Stack[-10]
0x4b8: Call2 0x806

0x4b9: Pop(1)
0x4ba: GOTO 0x4bc

0x4bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4bc: PushEmpty(bool, object)
0x4bd: Stack[-1] = Stack[-11]
0x4be: Call2 0x64f

0x4bf: Pop(1)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c1: PushEmpty(object)
0x4c2: Call2 0x841

0x4c3: Pop(0)
0x4c4: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4c5: Pop(1)
0x4c6: PushEmpty(bool, object, float, float, bool, bool)
0x4c7: Stack[-5] = Stack[-15]
0x4c8: Stack[-4] = Stack[-14]
0x4c9: Stack[-3] = Stack[-13]
0x4ca: Stack[-2] = Stack[-12]
0x4cb: Stack[-1] = Stack[-11]
0x4cc: Call2 0x511

0x4cd: Stack[-7] = Stack[-6]
0x4ce: Pop(6)
0x4cf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d1: Push("head")
0x4d2: @ UnlookAsync(Stack[-1])
0x4d3: Pop(1)
0x4d4: Push((int) 1)
0x4d5: @ KillTimer(Stack[-1])
0x4d6: Pop(1)
0x4d7: Stack[-10] = Stack[-1]
0x4d8: Return(); Pop(4)

0x4d9: PushEmpty()
0x4da: Push((int) 1)
0x4db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4dd: PushEmpty(object)
0x4de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Call2 0x8d0

0x4e0: Pop(1)
0x4e1: GOTO 0x4e6

0x4e2: PushEmpty(int)
0x4e3: Stack[-1] = Stack[-2]
0x4e4: Call2 0x577

0x4e5: Pop(1)
0x4e6: Return(); Pop(0)

0x4e7: Push((int) 1)
0x4e8: @ KillTimer(Stack[-1])
0x4e9: Pop(1)
0x4ea: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ec: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4ed: Push("head")
0x4ee: @ UnlookAsync(Stack[-1])
0x4ef: Pop(1)
0x4f0: PushEmpty()
0x4f1: Call2 0x58d

0x4f2: Pop(0)
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty()
0x4f5: PushEmpty(bool)
0x4f6: Stack[-1] = (bool) 0
0x4f7: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[-1] = (bool) 1
0x4fc: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4fe: PushEmpty(object)
0x4ff: Stack[-1] = Stack[-2]
0x500: Call2 0x806

0x501: Pop(1)
0x502: Return(); Pop(0)

0x503: PushEmpty()
0x504: PushEmpty(bool)
0x505: Stack[-1] = (bool) 0
0x506: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x507: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x508: Push( Stack[2 + Tasks[-1].StackPointer] )
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: Stack[-1] = (bool) 1
0x50b: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x50d: Push("head")
0x50e: @ UnlookAsync(Stack[-1])
0x50f: Pop(1)
0x510: Return(); Pop(0)

0x511: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x512: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x513: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x514: Stack[-7] = Stack[-17]
0x515: PushEmpty(bool, object)
0x516: Stack[-1] = Stack[-23]
0x517: Call2 0x59d

0x518: Pop(1)
0x519: Pop(1); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51b: Stack[-22] = (bool) 0
0x51c: Return(); Pop(16)

0x51d: @@ GetPosition(Stack[-5])
0x51e: Pop(0)
0x51f: @ GetPosition(Stack[-4])
0x520: Pop(0)
0x521: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x522: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x523: PushEmpty(bool)
0x524: Stack[-1] = (bool) 0
0x525: Push((int) 0)
0x526: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x528: Pop(0); Push(Stack[-20] * Stack[-20]);
0x529: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Stack[-1] = (bool) 1
0x52c: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52d: @ Stop()
0x52e: Pop(0)
0x52f: Stack[-22] = (bool) 0
0x530: Return(); Pop(16)

0x531: Pop(0); Push(Stack[-20] * Stack[-20]);
0x532: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x534: @@ GetPFPosition(Stack[-5])
0x535: Pop(0)
0x536: @ FindPathTo(Stack[-1], Stack[-5])
0x537: Pop(0)
0x538: Pop(0); Push(( Stack[-1] != 0 )
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-6] = Stack[-1]
0x53b: Stack[-1] = 0
0x53c: Pop(0); Push(( Stack[-6] != 0 )
0x53d: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x53e: Push(Stack[-7])
0x53f: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x540: Stack[-7] = (bool) 0
0x541: @ RotatePath(Stack[-6], Stack[-8])
0x542: Pop(0)
0x543: Pop(0); Push((bool) Stack[-8] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: GOTO 0x575

0x546: Push((int) 0)
0x547: Push((float)0.3)
0x548: @ SetTimer(Stack[-2], Stack[-1])
0x549: Pop(2)
0x54a: PushEmpty(string)
0x54b: Call2 0x5a4

0x54c: Pop(0)
0x54d: PushEmpty(string)
0x54e: Call2 0x5a6

0x54f: Pop(0)
0x550: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x551: Pop(2)
0x552: Pop(0); Push((bool) Stack[-8] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x554: Push( Stack[0 + Tasks[-1].StackPointer] )
0x555: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x556: Stack[-6] = 0
0x557: GOTO 0x575

0x558: GOTO 0x55a

0x559: GOTO 0x574

0x55a: GOTO 0x55c

0x55b: Stack[-6] = 0
0x55c: GOTO 0x56d

0x55d: Push((int) 0)
0x55e: @ KillTimer(Stack[-1])
0x55f: Pop(1)
0x560: Push((float)0.5)
0x561: @ Sleep(Stack[-1], Stack[-9])
0x562: Pop(1)
0x563: Pop(0); Push((bool) Stack[-8] == 0)
0x564: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x565: Push( Stack[0 + Tasks[-1].StackPointer] )
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-6] = 0
0x568: GOTO 0x575

0x569: Push((int) 0)
0x56a: Push((float)0.3)
0x56b: @ SetTimer(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: Stack[-1] = 0
0x56e: GOTO 0x573

0x56f: Push((int) 0)
0x570: @ KillTimer(Stack[-1])
0x571: Pop(1)
0x572: GOTO 0x575

0x573: Stack[-6] = 0
0x574: GOTO 0x515

0x575: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x576: Return(); Pop(16)

0x577: PushEmpty()
0x578: Push((int) 0)
0x579: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57b: Return(); Pop(0)

0x57c: PushEmpty(bool, object)
0x57d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57e: Call2 0x59d

0x57f: Pop(1)
0x580: Pop(1); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x583: Push((int) 0)
0x584: @ KillTimer(Stack[-1])
0x585: Pop(1)
0x586: @ Stop()
0x587: Pop(0)
0x588: Return(); Pop(0)

0x589: PushEmpty()
0x58a: @ RequestClearPath(Stack[-1])
0x58b: Pop(0)
0x58c: Return(); Pop(0)

0x58d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x58e: Push((int) 0)
0x58f: @ KillTimer(Stack[-1])
0x590: Pop(1)
0x591: @ Stop()
0x592: Pop(0)
0x593: Return(); Pop(0)

0x594: PushEmpty()
0x595: PushEmpty()
0x596: Call2 0x4e7

0x597: Pop(0)
0x598: PushEmpty(object)
0x599: Stack[-1] = Stack[-2]
0x59a: Call2 0x9a6

0x59b: Pop(1)
0x59c: Return(); Pop(0)

0x59d: PushEmpty()
0x59e: PushEmpty(bool, object)
0x59f: Stack[-1] = Stack[-3]
0x5a0: Call2 0x6ef

0x5a1: Stack[-4] = Stack[-2]
0x5a2: Pop(2)
0x5a3: Return(); Pop(0)

0x5a4: Stack[-1] = "walk"
0x5a5: Return(); Pop(0)

0x5a6: Stack[-1] = "run"
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: PushEmpty(object)
0x5aa: Stack[-1] = Stack[-2]
0x5ab: Call2 0x5bf

0x5ac: Pop(1)
0x5ad: Push((int) 50)
0x5ae: Push((int) 40)
0x5af: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x5b0: Pop(2)
0x5b1: @ Hold()
0x5b2: Pop(0)
0x5b3: GOTO 0x5b1

0x5b4: Return(); Pop(0)

0x5b5: PushEmpty(bool, bool)
0x5b6: @ IsOverrideActive(Stack[-1])
0x5b7: Pop(0)
0x5b8: Pop(0); Push((bool) Stack[-1] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5ba: PushEmpty(object)
0x5bb: Stack[-1] = Stack[-4]
0x5bc: Call2 0x932

0x5bd: Pop(1)
0x5be: Return(); Pop(2)

0x5bf: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x5c0: Pop(0); Push((bool) Stack[-21] == 0)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "fdie"
0x5c4: Call2 0x61a

0x5c5: Pop(1)
0x5c6: GOTO 0x619

0x5c7: @@ GetPosition(Stack[-10])
0x5c8: Pop(0)
0x5c9: @ GetPosition(Stack[-9])
0x5ca: Pop(0)
0x5cb: @ GetDirection(Stack[-8])
0x5cc: Pop(0)
0x5cd: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x5ce: Push(CvectorIndex(Stack[-7], 0))
0x5cf: Push(CvectorIndex(Stack[-9], 0))
0x5d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d1: Push(CvectorIndex(Stack[-8], 2))
0x5d2: Push(CvectorIndex(Stack[-10], 2))
0x5d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d5: Push((int) 0)
0x5d6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-6] = "fdie"
0x5d9: GOTO 0x5db

0x5da: Stack[-6] = "bdie"
0x5db: @ RemoveRTEnvelope()
0x5dc: Pop(0)
0x5dd: @ SetDeathState()
0x5de: Pop(0)
0x5df: @ Stop()
0x5e0: Pop(0)
0x5e1: @ StopAsync()
0x5e2: Pop(0)
0x5e3: Stack[-5] = Stack[-21]
0x5e4: Push("GetScriptProperty")
0x5e5: Push((int) 2)
0x5e6: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5e8: Push("Owner")
0x5e9: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x5ea: Pop(1)
0x5eb: Push(Stack[-4])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5ed: Push("Owner")
0x5ee: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5ef: Pop(1)
0x5f0: Pop(0); Push((bool) Stack[-5] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f2: Stack[-5] = Stack[-21]
0x5f3: Push("@GetEyesHeight")
0x5f4: Push((int) 1)
0x5f5: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5f6: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5f7: @@ GetEyesHeight(Stack[-2])
0x5f8: Pop(0)
0x5f9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5fa: Push(CvectorIndex(Stack[-1], 1))
0x5fb: Stack[-1] = Stack[-3]
0x5fc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5fd: Push("head")
0x5fe: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x5ff: Pop(1)
0x600: Stack[-3] = (bool) 1
0x601: GOTO 0x603

0x602: Stack[-3] = (bool) 0
0x603: PushEmpty(string)
0x604: Stack[-1] = Stack[-7]
0x605: Call2 0x818

0x606: Pop(1)
0x607: Push("all")
0x608: @ PlayAnimation(Stack[-1], Stack[-7])
0x609: Pop(1)
0x60a: @ WaitForAnimEnd()
0x60b: Pop(0)
0x60c: Push(Stack[-3])
0x60d: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60e: @ StopAsync()
0x60f: Pop(0)
0x610: Push("head")
0x611: @ UnlookAsync(Stack[-1])
0x612: Pop(1)
0x613: Push("all")
0x614: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x615: Pop(1)
0x616: @ RemoveEnvelope()
0x617: Pop(0)
0x618: Stack[-5] = 0
0x619: Return(); Pop(20)

0x61a: PushEmpty()
0x61b: @ RemoveRTEnvelope()
0x61c: Pop(0)
0x61d: @ SetDeathState()
0x61e: Pop(0)
0x61f: @ Stop()
0x620: Pop(0)
0x621: @ StopAsync()
0x622: Pop(0)
0x623: @ StopSecondaryAnimation()
0x624: Pop(0)
0x625: PushEmpty(string)
0x626: Stack[-1] = Stack[-2]
0x627: Call2 0x818

0x628: Pop(1)
0x629: Push("all")
0x62a: @ PlayAnimation(Stack[-1], Stack[-2])
0x62b: Pop(1)
0x62c: @ WaitForAnimEnd()
0x62d: Pop(0)
0x62e: Push("all")
0x62f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x630: Pop(1)
0x631: @ RemoveEnvelope()
0x632: Pop(0)
0x633: Return(); Pop(0)

0x634: PushEmpty()
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: Return(); Pop(0)

0x638: PushEmpty()
0x639: Return(); Pop(0)

0x63a: PushEmpty()
0x63b: Push((int) 2)
0x63c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63e: Stack[-2] = "fire"
0x63f: Return(); Pop(0)

0x640: GOTO 0x646

0x641: Push((int) 1)
0x642: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-2] = "bullet"
0x645: Return(); Pop(0)

0x646: Stack[-2] = "phys"
0x647: Return(); Pop(0)

0x648: PushEmpty(cvector, cvector, cvector, cvector)
0x649: @ GetPosition(Stack[-2])
0x64a: Pop(0)
0x64b: @@ GetPosition(Stack[-1])
0x64c: Pop(0)
0x64d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x64e: Return(); Pop(4)

0x64f: PushEmpty(bool, bool)
0x650: @ IsPlayerActor(Stack[-3], Stack[-1])
0x651: Pop(0)
0x652: Stack[-4] = Stack[-1]
0x653: Return(); Pop(2)

0x654: PushEmpty(bool, bool)
0x655: Push("HasProperty")
0x656: Push((int) 2)
0x657: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x658: Pop(1); Push((bool) Stack[-1] == 0)
0x659: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65a: Stack[-5] = (bool) 0
0x65b: Return(); Pop(2)

0x65c: @@ HasProperty(Stack[-3], Stack[-1])
0x65d: Pop(0)
0x65e: Stack[-5] = Stack[-1]
0x65f: Return(); Pop(2)

0x660: PushEmpty(float, float)
0x661: PushEmpty(bool, object, string)
0x662: Stack[-2] = Stack[-10]
0x663: Stack[-1] = Stack[-9]
0x664: Call2 0x654

0x665: Pop(2)
0x666: Pop(1); Push((bool) Stack[-1] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-8] = (bool) 0
0x669: Return(); Pop(2)

0x66a: @@ GetProperty(Stack[-6], Stack[-1])
0x66b: Pop(0)
0x66c: PushEmpty(float, float, float, float)
0x66d: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x66e: Stack[-2] = Stack[-8]
0x66f: Stack[-1] = Stack[-7]
0x670: Call2 0x85c

0x671: Pop(3)
0x672: @@ SetProperty(Stack[-7], Stack[-1])
0x673: Pop(1)
0x674: Stack[-8] = (bool) 1
0x675: Return(); Pop(2)

0x676: PushEmpty(int, int)
0x677: @@ GetProperty(Stack[-4], Stack[-1])
0x678: Pop(0)
0x679: Pop(0); Push(Stack[-1] + Stack[-3]);
0x67a: @@ SetProperty(Stack[-5], Stack[-1])
0x67b: Pop(1)
0x67c: Return(); Pop(2)

0x67d: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x67e: PushEmpty(bool, object, string)
0x67f: Stack[-2] = Stack[-18]
0x680: Stack[-1] = "health"
0x681: Call2 0x654

0x682: Pop(2)
0x683: Pop(1); Push((bool) Stack[-1] == 0)
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-16] = (float) 0.0
0x686: Return(); Pop(12)

0x687: PushEmpty(bool, object, string)
0x688: Stack[-2] = Stack[-18]
0x689: Stack[-1] = "armor"
0x68a: Call2 0x654

0x68b: Pop(2)
0x68c: Pop(1); Push((bool) Stack[-1] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-6] = (int) 0
0x68f: GOTO 0x693

0x690: Push("armor")
0x691: @@ GetProperty(Stack[-1], Stack[-7])
0x692: Pop(1)
0x693: Push("armor_")
0x694: PushEmpty(string, int)
0x695: Stack[-1] = Stack[-16]
0x696: Call2 0x63a

0x697: Pop(1)
0x698: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x699: PushEmpty(bool, object, string)
0x69a: Stack[-2] = Stack[-18]
0x69b: Stack[-1] = Stack[-8]
0x69c: Call2 0x654

0x69d: Pop(2)
0x69e: Pop(1); Push((bool) Stack[-1] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a0: Stack[-4] = (int) 0
0x6a1: GOTO 0x6a4

0x6a2: @@ GetProperty(Stack[-5], Stack[-4])
0x6a3: Pop(0)
0x6a4: PushEmpty(float, float, float)
0x6a5: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6a6: Push((float)100.0)
0x6a7: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6a8: Stack[-1] = (int) 1
0x6a9: Call2 0x855

0x6aa: Stack[-6] = Stack[-3]
0x6ab: Pop(3)
0x6ac: Push("health")
0x6ad: @@ GetProperty(Stack[-1], Stack[-3])
0x6ae: Pop(1)
0x6af: Push((int) 1)
0x6b0: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6b1: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6b2: Push("health")
0x6b3: PushEmpty(float, float, float, float)
0x6b4: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6b5: Stack[-2] = (int) 0
0x6b6: Stack[-1] = (int) 1
0x6b7: Call2 0x85c

0x6b8: Pop(3)
0x6b9: @@ SetProperty(Stack[-2], Stack[-1])
0x6ba: Pop(2)
0x6bb: PushEmpty(bool, object)
0x6bc: Stack[-1] = Stack[-17]
0x6bd: Call2 0x64f

0x6be: Pop(1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c0: PushEmpty(float)
0x6c1: Stack[-1] = -Stack[-2]; Pop(0);
0x6c2: Call2 0x8a9

0x6c3: Pop(1)
0x6c4: Stack[-16] = Stack[-1]
0x6c5: Return(); Pop(12)

0x6c6: PushEmpty(bool, bool)
0x6c7: @@ IsDead(Stack[-1])
0x6c8: Pop(0)
0x6c9: Stack[-4] = Stack[-1]
0x6ca: Return(); Pop(2)

0x6cb: PushEmpty(object, object, object, object)
0x6cc: Pop(0); Push((bool) Stack[-5] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-6] = (bool) 0
0x6cf: Return(); Pop(4)

0x6d0: PushEmpty(bool)
0x6d1: Stack[-1] = (bool) 0
0x6d2: Push("IsDead")
0x6d3: Push((int) 1)
0x6d4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6d5: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d6: PushEmpty(bool, object)
0x6d7: Stack[-1] = Stack[-8]
0x6d8: Call2 0x6c6

0x6d9: Pop(1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Stack[-1] = (bool) 1
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: Stack[-6] = (bool) 0
0x6de: Return(); Pop(4)

0x6df: @ GetScene(Stack[-2])
0x6e0: Pop(0)
0x6e1: Pop(0); Push((bool) Stack[-2] == 0)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-6] = (bool) 0
0x6e4: Return(); Pop(4)

0x6e5: @@ GetScene(Stack[-1])
0x6e6: Pop(0)
0x6e7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-6] = (bool) 0
0x6ea: Return(); Pop(4)

0x6eb: Stack[-6] = (bool) 1
0x6ec: Return(); Pop(4)

0x6ed: Stack[-1] = 0
0x6ee: Stack[-2] = 0
0x6ef: PushEmpty(int, int)
0x6f0: PushEmpty(bool, object)
0x6f1: Stack[-1] = Stack[-5]
0x6f2: Call2 0x6cb

0x6f3: Pop(1)
0x6f4: Pop(1); Push((bool) Stack[-1] == 0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f6: Stack[-4] = (bool) 0
0x6f7: Return(); Pop(2)

0x6f8: PushEmpty(bool, object, string)
0x6f9: Stack[-2] = Stack[-6]
0x6fa: Stack[-1] = "noaccess"
0x6fb: Call2 0x654

0x6fc: Pop(2)
0x6fd: Pop(1); Push((bool) Stack[-1] == 0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: Stack[-4] = (bool) 1
0x700: Return(); Pop(2)

0x701: Push("noaccess")
0x702: @@ GetProperty(Stack[-1], Stack[-2])
0x703: Pop(1)
0x704: Push((int) 0)
0x705: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x706: Return(); Pop(2)

0x707: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x708: Pop(0); Push((bool) Stack[-15] == 0)
0x709: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x70a: Return(); Pop(14)

0x70b: @ IsDead(Stack[-7])
0x70c: Pop(0)
0x70d: Push(Stack[-7])
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: Return(); Pop(14)

0x710: @ GetSecondaryAnimationType(Stack[-6])
0x711: Pop(0)
0x712: Push((int) 0)
0x713: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x715: Return(); Pop(14)

0x716: @@ GetPosition(Stack[-5])
0x717: Pop(0)
0x718: @ GetPosition(Stack[-4])
0x719: Pop(0)
0x71a: @ GetDirection(Stack[-3])
0x71b: Pop(0)
0x71c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x71d: Push(CvectorIndex(Stack[-2], 0))
0x71e: Push(CvectorIndex(Stack[-4], 0))
0x71f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x720: Push(CvectorIndex(Stack[-3], 2))
0x721: Push(CvectorIndex(Stack[-5], 2))
0x722: Pop(2); Push(Stack[-2] * Stack[-1]);
0x723: Pop(2); Push(Stack[-2] + Stack[-1]);
0x724: Push((int) 0)
0x725: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x727: Stack[-1] = "fhit"
0x728: GOTO 0x72a

0x729: Stack[-1] = "bhit"
0x72a: Push("hit_react")
0x72b: Push("1")
0x72c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x72d: Push("2")
0x72e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x72f: Push((int) -10)
0x730: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(4)
0x732: Return(); Pop(14)

0x733: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x734: PushEmpty(bool)
0x735: Stack[-1] = (bool) 0
0x736: PushEmpty(bool)
0x737: Stack[-1] = (bool) 0
0x738: Push(Stack[-23])
0x739: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73a: Push((int) 4)
0x73b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73d: Stack[-1] = (bool) 1
0x73e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73f: Push((int) 5)
0x740: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x742: Stack[-1] = (bool) 1
0x743: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x744: PushEmpty(cvector, cvector)
0x745: PushEmpty(cvector, object)
0x746: Stack[-1] = Stack[-25]
0x747: Call2 0x648

0x748: Stack[-3] = Stack[-2]
0x749: Pop(2)
0x74a: Call2 0x847

0x74b: Stack[-11] = Stack[-2]
0x74c: Pop(2)
0x74d: @ CreateVectorVector(Stack[-8])
0x74e: Pop(0)
0x74f: Stack[-7] = (int) 1
0x750: Push("hit")
0x751: Pop(1); Push(Stack[-1] + Stack[-8]);
0x752: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x753: Pop(1)
0x754: Pop(0); Push((bool) Stack[-6] == 0)
0x755: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x756: GOTO 0x760

0x757: Pop(0); Push(Stack[-4] | Stack[-9]);
0x758: Push((float)0.70711)
0x759: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: @@ add(Stack[-5])
0x75c: Pop(0)
0x75d: Push((int) 1)
0x75e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x75f: GOTO 0x750

0x760: @@ size(Stack[-3])
0x761: Pop(0)
0x762: Push(Stack[-3])
0x763: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x764: @ irand(Stack[-2], Stack[-3])
0x765: Pop(0)
0x766: @@ get(Stack[-1], Stack[-2])
0x767: Pop(0)
0x768: PushEmpty(object, int, float, cvector, cvector)
0x769: Stack[-5] = Stack[-26]
0x76a: Stack[-4] = Stack[-25]
0x76b: Stack[-3] = Stack[-24]
0x76c: Stack[-2] = Stack[-6]
0x76d: Stack[-1] = -Stack[-14]; Pop(0);
0x76e: Call2 0x777

0x76f: Pop(5)
0x770: Return(); Pop(18)

0x771: Stack[-8] = 0
0x772: PushEmpty(object)
0x773: Stack[-1] = Stack[-22]
0x774: Call2 0x707

0x775: Pop(1)
0x776: Return(); Pop(18)

0x777: PushEmpty(object, object, object, object)
0x778: @ GetScene(Stack[-2])
0x779: Pop(0)
0x77a: Push("scripted")
0x77b: Push("blood_dir.xml")
0x77c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x77d: Pop(2)
0x77e: PushEmpty(object)
0x77f: Stack[-1] = Stack[-10]
0x780: Call2 0x707

0x781: Pop(1)
0x782: Return(); Pop(4)

0x783: Stack[-1] = 0
0x784: Stack[-2] = 0
0x785: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x786: @@ GetPosition(Stack[-3])
0x787: Pop(0)
0x788: @ GetPosition(Stack[-2])
0x789: Pop(0)
0x78a: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x78b: Push(CvectorIndex(Stack[-1], 0))
0x78c: Push(CvectorIndex(Stack[-2], 2))
0x78d: @ RotateAsync(Stack[-2], Stack[-1])
0x78e: Pop(2)
0x78f: Return(); Pop(6)

0x790: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x791: @@ GetPosition(Stack[-8])
0x792: Pop(0)
0x793: @@ GetEyesHeight(Stack[-9])
0x794: Pop(0)
0x795: Push(CvectorIndex(Stack[-8], 1))
0x796: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x797: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x798: @ GetPosition(Stack[-7])
0x799: Pop(0)
0x79a: @ GetEyesHeight(Stack[-9])
0x79b: Pop(0)
0x79c: Push(CvectorIndex(Stack[-7], 1))
0x79d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x79e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x79f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7a0: Push(CvectorIndex(Stack[-6], 1))
0x7a1: Stack[-1] = (int) 0
0x7a2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7a3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7a4: Pop(1); Push(Sqrt(Stack[-1]))
0x7a5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7a6: Stack[-5] = -Stack[-6]; Pop(0);
0x7a7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7a8: PushEmpty(cvector, cvector)
0x7a9: Push(CVector(0.0, 1.0, 0.0))
0x7aa: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7ab: Call2 0x847

0x7ac: Pop(1)
0x7ad: Push((int) 25)
0x7ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b0: Push(CVector(0.0, 10.0, 0.0))
0x7b1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7b2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7b3: @ IsOverrideActive(Stack[-2])
0x7b4: Pop(0)
0x7b5: Push(Stack[-2])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b7: Stack[-21] = (bool) 0
0x7b8: Return(); Pop(18)

0x7b9: @ StopWorld()
0x7ba: Pop(0)
0x7bb: Push((bool) 1)
0x7bc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x7bd: Pop(1)
0x7be: Push(CvectorIndex(Stack[-4], 0))
0x7bf: Push(CvectorIndex(Stack[-5], 2))
0x7c0: @ Rotate(Stack[-2], Stack[-1])
0x7c1: Pop(2)
0x7c2: PushEmpty(bool)
0x7c3: Call2 0x970

0x7c4: Pop(0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c6: GOTO 0x7cf

0x7c7: Push("head")
0x7c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7c9: Pop(1)
0x7ca: Push(Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cc: Push("head")
0x7cd: @ LookAsyncCamera(Stack[-1])
0x7ce: Pop(1)
0x7cf: @ CameraWaitForPlayFinish()
0x7d0: Pop(0)
0x7d1: @ ResumeWorld()
0x7d2: Pop(0)
0x7d3: Stack[-21] = (bool) 1
0x7d4: Return(); Pop(18)

0x7d5: PushEmpty(bool, bool)
0x7d6: Push((bool) 1)
0x7d7: @ CameraSwitchToNormal(Stack[-1])
0x7d8: Pop(1)
0x7d9: PushEmpty(bool)
0x7da: Call2 0x970

0x7db: Pop(0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dd: GOTO 0x7e6

0x7de: Push("head")
0x7df: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7e0: Pop(1)
0x7e1: Push(Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e3: Push("head")
0x7e4: @ UnlookAsync(Stack[-1])
0x7e5: Pop(1)
0x7e6: Return(); Pop(2)

0x7e7: PushEmpty(bool, float, float, bool, float, float)
0x7e8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x7e9: Pop(0)
0x7ea: Push(Stack[-3])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ec: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x7ed: Pop(0)
0x7ee: Push((bool) 0)
0x7ef: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(1)
0x7f1: GOTO 0x7f6

0x7f2: Push("Can't find lsh animation : ")
0x7f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7f4: @ Trace(Stack[-1])
0x7f5: Pop(1)
0x7f6: Return(); Pop(6)

0x7f7: PushEmpty(bool, float, float, bool, float, float)
0x7f8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x7f9: Pop(0)
0x7fa: Push(Stack[-3])
0x7fb: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x7fd: Pop(0)
0x7fe: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x7ff: Pop(0)
0x800: GOTO 0x805

0x801: Push("Can't find lsh animation : ")
0x802: Pop(1); Push(Stack[-1] + Stack[-9]);
0x803: @ Trace(Stack[-1])
0x804: Pop(1)
0x805: Return(); Pop(6)

0x806: PushEmpty(float, cvector, float, cvector)
0x807: @@ GetEyesHeight(Stack[-2])
0x808: Pop(0)
0x809: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x80a: Push(CvectorIndex(Stack[-1], 1))
0x80b: Stack[-1] = Stack[-3]
0x80c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x80d: Push("head")
0x80e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x80f: Pop(1)
0x810: Return(); Pop(4)

0x811: PushEmpty(bool)
0x812: Call2 0x970

0x813: Pop(0)
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: @ lshStopSpeech()
0x816: Pop(0)
0x817: Return(); Pop(0)

0x818: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x819: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x81a: Pop(0)
0x81b: Pop(0); Push((bool) Stack[-8] == 0)
0x81c: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x81d: Stack[-7] = (int) 0
0x81e: Push((int) 1)
0x81f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x820: Pop(1); Push(Stack[-18] + Stack[-1]);
0x821: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x822: Pop(1)
0x823: Pop(0); Push((bool) Stack[-6] == 0)
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: GOTO 0x829

0x826: Push((int) 1)
0x827: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x828: GOTO 0x81e

0x829: Pop(0); Push((bool) Stack[-7] == 0)
0x82a: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82b: Return(); Pop(16)

0x82c: @ irand(Stack[-5], Stack[-7])
0x82d: Pop(0)
0x82e: Push((int) 1)
0x82f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x830: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x831: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x832: Pop(0)
0x833: Push(Stack[-4])
0x834: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x835: @ GetEyesHeight(Stack[-3])
0x836: Pop(0)
0x837: @ GetDirection(Stack[-2])
0x838: Pop(0)
0x839: Push((int) 50)
0x83a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x83b: Push(CvectorIndex(Stack[-1], 1))
0x83c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x83d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x83e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x83f: Pop(0)
0x840: Return(); Pop(16)

0x841: PushEmpty(object, object)
0x842: @ self(Stack[-1])
0x843: Pop(0)
0x844: Stack[-3] = Stack[-1]
0x845: Return(); Pop(2)

0x846: Stack[-1] = 0
0x847: PushEmpty(float, float)
0x848: Pop(0); Push(Stack[-3] | Stack[-3]);
0x849: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x84a: Push((float)0.0)
0x84b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x84e: Return(); Pop(2)

0x84f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x850: Return(); Pop(2)

0x851: PushEmpty(cvector, cvector)
0x852: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x853: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x854: Return(); Pop(2)

0x855: PushEmpty()
0x856: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x858: Stack[-3] = Stack[-2]
0x859: GOTO 0x85b

0x85a: Stack[-3] = Stack[-1]
0x85b: Return(); Pop(0)

0x85c: PushEmpty()
0x85d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x85e: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x85f: Stack[-4] = Stack[-2]
0x860: Return(); Pop(0)

0x861: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x863: Stack[-4] = Stack[-1]
0x864: Return(); Pop(0)

0x865: Stack[-4] = Stack[-3]
0x866: Return(); Pop(0)

0x867: PushEmpty(object, object)
0x868: @ CreateIntVector(Stack[-1])
0x869: Pop(0)
0x86a: @@ add(Stack[-4])
0x86b: Pop(0)
0x86c: @@ add(Stack[-3])
0x86d: Pop(0)
0x86e: Push((int) 3)
0x86f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x870: Pop(1)
0x871: Return(); Pop(2)

0x872: Stack[-1] = 0
0x873: PushEmpty(int, int)
0x874: PushEmpty(object, string, int)
0x875: Stack[-3] = Stack[-7]
0x876: Stack[-2] = "money"
0x877: Stack[-1] = Stack[-6]
0x878: Call2 0x676

0x879: Pop(3)
0x87a: Push((int) 0)
0x87b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x87d: Push("Money")
0x87e: @ GetInvItemByName(Stack[-2], Stack[-1])
0x87f: Pop(1)
0x880: PushEmpty(int, int)
0x881: Stack[-2] = Stack[-3]
0x882: Stack[-1] = Stack[-5]
0x883: Call2 0x867

0x884: Pop(2)
0x885: Return(); Pop(2)

0x886: PushEmpty()
0x887: Pop(0); Push((bool) Stack[-2] == 0)
0x888: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x889: Stack[-3] = (bool) 0
0x88a: Return(); Pop(0)

0x88b: Push((int) 0)
0x88c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88d: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x88e: Push((int) 8)
0x88f: @ SendWorldWndMessage(Stack[-1])
0x890: Pop(1)
0x891: GOTO 0x89b

0x892: Push((int) 0)
0x893: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x895: Push((int) 9)
0x896: @ SendWorldWndMessage(Stack[-1])
0x897: Pop(1)
0x898: GOTO 0x89b

0x899: Stack[-3] = (bool) 0
0x89a: Return(); Pop(0)

0x89b: PushEmpty(float)
0x89c: Stack[-1] = Stack[-2]
0x89d: Call2 0x8ba

0x89e: Pop(1)
0x89f: PushEmpty(bool, object, string, float, float, float)
0x8a0: Stack[-5] = Stack[-8]
0x8a1: Stack[-4] = "reputation"
0x8a2: Stack[-3] = Stack[-7]
0x8a3: Stack[-2] = (int) 0
0x8a4: Stack[-1] = (int) 1
0x8a5: Call2 0x660

0x8a6: Pop(6)
0x8a7: Stack[-3] = (bool) 1
0x8a8: Return(); Pop(0)

0x8a9: PushEmpty(object, object)
0x8aa: @ CreateFloatVector(Stack[-1])
0x8ab: Pop(0)
0x8ac: @@ add(Stack[-3])
0x8ad: Pop(0)
0x8ae: Push((int) 0)
0x8af: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b1: Push((float)0.7)
0x8b2: Push((int) 500)
0x8b3: @ RumblePlay(Stack[-2], Stack[-1])
0x8b4: Pop(2)
0x8b5: Push((int) 15)
0x8b6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8b7: Pop(1)
0x8b8: Return(); Pop(2)

0x8b9: Stack[-1] = 0
0x8ba: PushEmpty(object, object)
0x8bb: @ CreateFloatVector(Stack[-1])
0x8bc: Pop(0)
0x8bd: @@ add(Stack[-3])
0x8be: Pop(0)
0x8bf: Push((int) 16)
0x8c0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8c1: Pop(1)
0x8c2: Return(); Pop(2)

0x8c3: Stack[-1] = 0
0x8c4: PushEmpty(object, object)
0x8c5: @ FindActor(Stack[-1], Stack[-4])
0x8c6: Pop(0)
0x8c7: Pop(0); Push((bool) Stack[-1] == 0)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c9: Stack[-5] = (bool) 0
0x8ca: Return(); Pop(2)

0x8cb: @ Trigger(Stack[-1], Stack[-3])
0x8cc: Pop(0)
0x8cd: Stack[-5] = (bool) 1
0x8ce: Return(); Pop(2)

0x8cf: Stack[-1] = 0
0x8d0: PushEmpty(bool, bool)
0x8d1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8d2: Pop(0)
0x8d3: Push(Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8d5: Push("attack")
0x8d6: @ PlayGlobalMusic(Stack[-1])
0x8d7: Pop(1)
0x8d8: Return(); Pop(2)

0x8d9: PushEmpty(object, object)
0x8da: @ GetScene(Stack[-1])
0x8db: Pop(0)
0x8dc: Push("battle")
0x8dd: PushEmpty(object)
0x8de: Call2 0x841

0x8df: Pop(0)
0x8e0: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x8e1: Pop(2)
0x8e2: Return(); Pop(2)

0x8e3: Stack[-1] = 0
0x8e4: PushEmpty()
0x8e5: Push("d3q01")
0x8e6: Push((int) 8)
0x8e7: @ SetVariable(Stack[-2], Stack[-1])
0x8e8: Pop(2)
0x8e9: PushEmpty(bool, string, string)
0x8ea: Stack[-2] = "quest_d3_01"
0x8eb: Stack[-1] = "gpatrol_attack"
0x8ec: Call2 0x8c4

0x8ed: Pop(3)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(object, int)
0x8f1: Stack[-2] = Stack[-4]
0x8f2: Stack[-1] = (int) -10000
0x8f3: Call2 0x873

0x8f4: Pop(2)
0x8f5: Return(); Pop(0)

0x8f6: PushEmpty()
0x8f7: PushEmpty(bool, string, string)
0x8f8: Stack[-2] = "quest_d3_01"
0x8f9: Stack[-1] = "gpatrol_talk"
0x8fa: Call2 0x8c4

0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: PushEmpty()
0x8fe: Push("playsound")
0x8ff: Push("givemoney")
0x900: @ TriggerWorld(Stack[-2], Stack[-1])
0x901: Pop(2)
0x902: Return(); Pop(0)

0x903: PushEmpty()
0x904: PushEmpty(bool, object, float)
0x905: Stack[-2] = Stack[-5]
0x906: Stack[-1] = (float) -0.3
0x907: Call2 0x886

0x908: Pop(3)
0x909: Return(); Pop(0)

0x90a: PushEmpty()
0x90b: PushEmpty(bool, object)
0x90c: Stack[-1] = Stack[-3]
0x90d: Call2 0x914

0x90e: Pop(1)
0x90f: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x910: Stack[-2] = (bool) 1
0x911: Return(); Pop(0)

0x912: Stack[-2] = (bool) 0
0x913: Return(); Pop(0)

0x914: PushEmpty(int, int)
0x915: Push("money")
0x916: @@ GetProperty(Stack[-1], Stack[-2])
0x917: Pop(1)
0x918: Push((int) 10000)
0x919: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x91a: Return(); Pop(2)

0x91b: PushEmpty(int, int)
0x91c: Push("branch")
0x91d: @ GetVariable(Stack[-1], Stack[-2])
0x91e: Pop(1)
0x91f: Push((int) 0)
0x920: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x922: Stack[-3] = (int) 1
0x923: Return(); Pop(2)

0x924: GOTO 0x92a

0x925: Push((int) 1)
0x926: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x928: Stack[-3] = (int) 2
0x929: Return(); Pop(2)

0x92a: Stack[-3] = (int) 3
0x92b: Return(); Pop(2)

0x92c: PushEmpty(int, int)
0x92d: Push("branch")
0x92e: @ GetVariable(Stack[-1], Stack[-2])
0x92f: Pop(1)
0x930: Stack[-3] = Stack[-1]
0x931: Return(); Pop(2)

0x932: PushEmpty()
0x933: PushEmpty(int)
0x934: Call2 0x92c

0x935: Pop(0)
0x936: Push((int) 1)
0x937: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x939: @ WorkWithCorpse(Stack[-1])
0x93a: Pop(0)
0x93b: GOTO 0x93e

0x93c: @ Barter(Stack[-1])
0x93d: Pop(0)
0x93e: Return(); Pop(0)

0x93f: PushEmpty(object, int, bool, object, int, bool)
0x940: @ CreateInvItem(Stack[-3])
0x941: Pop(0)
0x942: @@ SetItemName(Stack[-7])
0x943: Pop(0)
0x944: Push("Organ")
0x945: Push((int) 1)
0x946: @@ SetProperty(Stack[-2], Stack[-1])
0x947: Pop(2)
0x948: @@ GetItemID(Stack[-2])
0x949: Pop(0)
0x94a: Push((int) 0)
0x94b: Push((int) 1)
0x94c: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x94d: Pop(2)
0x94e: Return(); Pop(6)

0x94f: Stack[-3] = 0
0x950: PushEmpty(int)
0x951: Call2 0x92c

0x952: Pop(0)
0x953: Push((int) 1)
0x954: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x955: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x956: Return(); Pop(0)

0x957: PushEmpty(string)
0x958: Stack[-1] = "liver"
0x959: Call2 0x93f

0x95a: Pop(1)
0x95b: PushEmpty(string)
0x95c: Stack[-1] = "kidney"
0x95d: Call2 0x93f

0x95e: Pop(1)
0x95f: PushEmpty(string)
0x960: Stack[-1] = "heart"
0x961: Call2 0x93f

0x962: Pop(1)
0x963: PushEmpty(string)
0x964: Stack[-1] = "blood"
0x965: Call2 0x93f

0x966: Pop(1)
0x967: Return(); Pop(0)

0x968: Stack[-1] = (int) 515572
0x969: Return(); Pop(0)

0x96a: Stack[-1] = (int) 504031
0x96b: Return(); Pop(0)

0x96c: Stack[-1] = "ui/NPC_Citizen2.png"
0x96d: Return(); Pop(0)

0x96e: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x96f: Return(); Pop(0)

0x970: Stack[-1] = (bool) 0
0x971: Return(); Pop(0)

0x972: PushEmpty(bool, bool)
0x973: Push("revolver_ammo")
0x974: Push((int) 0)
0x975: Push((int) 2)
0x976: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x977: Pop(3)
0x978: Push("alpha_pills")
0x979: Push((int) 0)
0x97a: Push((int) 2)
0x97b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x97c: Pop(3)
0x97d: PushEmpty()
0x97e: Call2 0x950

0x97f: Pop(0)
0x980: PushEmpty(object)
0x981: Stack[-1] = Stack[-4]
0x982: Push(-1, 0); TaskCall(5)
0x983: Call2 0x5a8

0x984: Pop(-1, 0); TaskReturn
0x985: Pop(1)
0x986: Return(); Pop(2)

0x987: PushEmpty()
0x988: PushEmpty(object, int, float)
0x989: Stack[-3] = Stack[-7]
0x98a: Stack[-2] = Stack[-6]
0x98b: Stack[-1] = Stack[-5]
0x98c: Call2 0x733

0x98d: Pop(3)
0x98e: Return(); Pop(0)

0x98f: PushEmpty()
0x990: PushEmpty(object, int, float, cvector, cvector)
0x991: Stack[-5] = Stack[-11]
0x992: Stack[-4] = Stack[-10]
0x993: Stack[-3] = Stack[-9]
0x994: Stack[-2] = Stack[-7]
0x995: Stack[-1] = Stack[-6]
0x996: Call2 0x777

0x997: Pop(5)
0x998: Return(); Pop(0)

0x999: PushEmpty(float, float)
0x99a: Push("health")
0x99b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99c: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x99d: Push("health")
0x99e: @ GetProperty(Stack[-1], Stack[-2])
0x99f: Pop(1)
0x9a0: Push((int) 0)
0x9a1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a3: @ SignalDeath(Stack[-4])
0x9a4: Pop(0)
0x9a5: Return(); Pop(2)

0x9a6: PushEmpty()
0x9a7: PushEmpty(object)
0x9a8: Stack[-1] = Stack[-2]
0x9a9: Call2 0x972

0x9aa: Pop(1)
0x9ab: Return(); Pop(0)

