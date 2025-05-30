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
	quest_b5_01
	butcher_attack
	player
	head
	RemoveStationaryActor
	@GetAttackDistance
	GetAttackDistance
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
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	battle
	oob5Butcher1
	b5q01WifeDead
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	Stop (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
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
	GetVariable (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x253
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe1 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x25d Vars = (object)
		EVENT_17 Op = 0x268 Vars = (object)
		EVENT_26 Op = 0x26f Vars = (string)
		EVENT_7 Op = 0x2a6 Vars = (int)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x606 Vars = (int)
		EVENT_1 Op = 0x621 Vars = (object)
		EVENT_2 Op = 0x630 Vars = (object)
		EVENT_10 Op = 0x6b6 Vars = (object)
		EVENT_41 Op = 0x6c1 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x6e4 Vars = (object)
		EVENT_22 Op = 0x763 Vars = (object, int, float, float)
		EVENT_16 Op = 0x765 Vars = (object, string)
		EVENT_41 Op = 0x767 Vars = (object)

Events:
EVENT_22 Op = 0xa2a Vars = (object, int, float, float)
EVENT_43 Op = 0xa32 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa3c Vars = (object, string)
EVENT_41 Op = 0xa49 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8af

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa12

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa10

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa14

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa16

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x9d4

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
0x41: Call2 0x8f3

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
0x4f: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x9bc

0x55: Pop(1)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: PushEmpty(bool, object)
0x59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Call2 0x9c8

0x5b: Pop(1)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x9b6

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0xcb

0x67: Pop(1)
0x68: Push((int) 518663)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 518671)
0x6e: Push((int) 19764)
0x6f: Push((int) 19763)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 518678)
0x73: Push((int) 19781)
0x74: Push((int) 19770)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 518666)
0x78: Push((int) -1)
0x79: Push((int) 19758)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0xad

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call2 0x9bc

0x80: Pop(1)
0x81: Pop(1); Push((bool) Stack[-1] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x83: PushEmpty(string)
0x84: Stack[-1] = "Neutral"
0x85: Call2 0xcb

0x86: Pop(1)
0x87: Push((int) 530807)
0x88: @@ SetMessage(Stack[-1])
0x89: Pop(1)
0x8a: @@ ClearReplies()
0x8b: Pop(0)
0x8c: Push((int) 530809)
0x8d: Push((int) -1)
0x8e: Push((int) 32121)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: Push((int) 530808)
0x92: Push((int) -1)
0x93: Push((int) 32120)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: GOTO 0xad

0x97: PushEmpty(bool, object)
0x98: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99: Call2 0x9bc

0x9a: Pop(1)
0x9b: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9c: PushEmpty(string)
0x9d: Stack[-1] = "Neutral"
0x9e: Call2 0xcb

0x9f: Pop(1)
0xa0: Push((int) 524880)
0xa1: @@ SetMessage(Stack[-1])
0xa2: Pop(1)
0xa3: @@ ClearReplies()
0xa4: Pop(0)
0xa5: Push((int) 524881)
0xa6: Push((int) -1)
0xa7: Push((int) 26205)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: GOTO 0xad

0xab: Return(); Pop(0)

0xac: GOTO 0x4e

0xad: PushEmpty(bool)
0xae: Call2 0xa18

0xaf: Pop(0)
0xb0: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb1: @ lshWaitForAnimEnd()
0xb2: Pop(0)
0xb3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: GOTO 0xbb

0xb6: PushEmpty(string)
0xb7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb8: Call2 0x904

0xb9: Pop(1)
0xba: GOTO 0xb1

0xbb: GOTO 0xca

0xbc: Push("all")
0xbd: Push("idle")
0xbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: @ WaitForAnimEnd()
0xc1: Pop(0)
0xc2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: GOTO 0xca

0xc5: Push("all")
0xc6: Push("idle")
0xc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: GOTO 0xc0

0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: PushEmpty(bool)
0xcd: Call2 0xa18

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(0)

0xd2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Return(); Pop(0)

0xd5: PushEmpty(string, bool)
0xd6: Stack[-2] = Stack[-3]
0xd7: Push("")
0xd8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xda: Stack[-1] = (bool) 0
0xdb: GOTO 0xdd

0xdc: Stack[-1] = (bool) 1
0xdd: Call2 0x914

0xde: Pop(2)
0xdf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: Push((int) 1)
0xe3: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0xe4: PushEmpty()
0xe5: Call2 0x92e

0xe6: Pop(0)
0xe7: Push((int) 19792)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x9af

0xee: Pop(2)
0xef: Push((int) 19758)
0xf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x9af

0xf6: Pop(2)
0xf7: Push((int) 32120)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x9af

0xfe: Pop(2)
0xff: Push((int) 19755)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call2 0x9bc

0x107: Pop(1)
0x108: Pop(1); Push((bool) Stack[-1] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x9c8

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: Stack[-1] = (bool) 1
0x110: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x9b6

0x115: Pop(2)
0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0xcb

0x119: Pop(1)
0x11a: Push((int) 518663)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 518671)
0x120: Push((int) 19764)
0x121: Push((int) 19763)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 518678)
0x125: Push((int) 19781)
0x126: Push((int) 19770)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 518666)
0x12a: Push((int) -1)
0x12b: Push((int) 19758)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x9bc

0x132: Pop(1)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral"
0x137: Call2 0xcb

0x138: Pop(1)
0x139: Push((int) 530807)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 530809)
0x13f: Push((int) -1)
0x140: Push((int) 32121)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push((int) 530808)
0x144: Push((int) -1)
0x145: Push((int) 32120)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x9bc

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Neutral"
0x150: Call2 0xcb

0x151: Pop(1)
0x152: Push((int) 524880)
0x153: @@ SetMessage(Stack[-1])
0x154: Pop(1)
0x155: @@ ClearReplies()
0x156: Pop(0)
0x157: Push((int) 524881)
0x158: Push((int) -1)
0x159: Push((int) 26205)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 19764)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0xcb

0x163: Pop(1)
0x164: Push((int) 518672)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 518673)
0x16a: Push((int) 19766)
0x16b: Push((int) 19765)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 518689)
0x16f: Push((int) 19771)
0x170: Push((int) 19783)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 19766)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0xcb

0x17a: Pop(1)
0x17b: Push((int) 518674)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 518675)
0x181: Push((int) 19771)
0x182: Push((int) 19767)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 518676)
0x186: Push((int) 19769)
0x187: Push((int) 19768)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Push((int) 19769)
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x18e: PushEmpty(string)
0x18f: Stack[-1] = "Neutral"
0x190: Call2 0xcb

0x191: Pop(1)
0x192: Push((int) 518677)
0x193: @@ SetMessage(Stack[-1])
0x194: Pop(1)
0x195: @@ ClearReplies()
0x196: Pop(0)
0x197: Push((int) 518682)
0x198: Push((int) 19775)
0x199: Push((int) 19774)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 19775)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call2 0xcb

0x1a3: Pop(1)
0x1a4: Push((int) 518683)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 518684)
0x1aa: Push((int) 19773)
0x1ab: Push((int) 19776)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 19771)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral"
0x1b4: Call2 0xcb

0x1b5: Pop(1)
0x1b6: Push((int) 518679)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 518680)
0x1bc: Push((int) 19773)
0x1bd: Push((int) 19772)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Push((int) 518690)
0x1c1: Push((int) 19786)
0x1c2: Push((int) 19785)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Return(); Pop(0)

0x1c6: Push((int) 19786)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Neutral"
0x1cb: Call2 0xcb

0x1cc: Pop(1)
0x1cd: Push((int) 518691)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: Push((int) 518692)
0x1d3: Push((int) 19775)
0x1d4: Push((int) 19787)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 19773)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral"
0x1dd: Call2 0xcb

0x1de: Pop(1)
0x1df: Push((int) 518681)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 518685)
0x1e5: Push((int) 19779)
0x1e6: Push((int) 19778)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Push((int) 518693)
0x1ea: Push((int) 19790)
0x1eb: Push((int) 19789)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 19779)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral"
0x1f4: Call2 0xcb

0x1f5: Pop(1)
0x1f6: Push((int) 518686)
0x1f7: @@ SetMessage(Stack[-1])
0x1f8: Pop(1)
0x1f9: @@ ClearReplies()
0x1fa: Pop(0)
0x1fb: Push((int) 518687)
0x1fc: Push((int) 19781)
0x1fd: Push((int) 19780)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 19781)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Neutral"
0x206: Call2 0xcb

0x207: Pop(1)
0x208: Push((int) 518688)
0x209: @@ SetMessage(Stack[-1])
0x20a: Pop(1)
0x20b: @@ ClearReplies()
0x20c: Pop(0)
0x20d: Push((int) 518664)
0x20e: Push((int) -1)
0x20f: Push((int) 19756)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Push((int) 518697)
0x213: Push((int) 19794)
0x214: Push((int) 19793)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 19794)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral"
0x21d: Call2 0xcb

0x21e: Pop(1)
0x21f: Push((int) 518698)
0x220: @@ SetMessage(Stack[-1])
0x221: Pop(1)
0x222: @@ ClearReplies()
0x223: Pop(0)
0x224: Push((int) 518699)
0x225: Push((int) -1)
0x226: Push((int) 19795)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Push((int) 518700)
0x22a: Push((int) 19790)
0x22b: Push((int) 19796)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 19790)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0xcb

0x235: Pop(1)
0x236: Push((int) 518694)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 518695)
0x23c: Push((int) -1)
0x23d: Push((int) 19791)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Push((int) 518696)
0x241: Push((int) -1)
0x242: Push((int) 19792)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x247: PushEmpty(bool)
0x248: Call2 0xa18

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: @ lshStopAnimation()
0x24c: Pop(0)
0x24d: GOTO 0x250

0x24e: @ StopAnimation()
0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: GOTO 0xe2

0x252: Return(); Pop(0)

0x253: Push((int) 3)
0x254: @ Sleep(Stack[-1])
0x255: Pop(1)
0x256: PushEmpty(float, float)
0x257: Stack[-2] = (int) 300
0x258: Stack[-1] = (int) 100
0x259: Call2 0x27c

0x25a: Pop(2)
0x25b: GOTO 0x253

0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: PushEmpty()
0x25f: Call2 0x2bd

0x260: Pop(0)
0x261: PushEmpty(int, object)
0x262: Stack[-1] = Stack[-3]
0x263: Push(-2, 1); TaskCall(0)
0x264: Call2 0x0

0x265: Pop(-2, 1); TaskReturn
0x266: Pop(2)
0x267: Return(); Pop(0)

0x268: PushEmpty()
0x269: PushEmpty(bool, string, string)
0x26a: Stack[-2] = "quest_b5_01"
0x26b: Stack[-1] = "butcher_attack"
0x26c: Call2 0x98f

0x26d: Pop(3)
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push("attack")
0x271: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x273: PushEmpty()
0x274: Call2 0x2bd

0x275: Pop(0)
0x276: PushEmpty()
0x277: Push(-0, 6); TaskCall(3)
0x278: Call2 0x321

0x279: Pop(-0, 6); TaskReturn
0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty()
0x27d: PushEmpty(bool)
0x27e: Call2 0x8aa

0x27f: Pop(0)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Return(); Pop(0)

0x283: Push("player")
0x284: @ FindActor(Stack[-4], Stack[-1])
0x285: Pop(1)
0x286: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x287: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x288: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x289: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x28a: Push((int) 10)
0x28b: Push((float)1.0)
0x28c: @ SetTimer(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: PushEmpty()
0x28f: Call2 0x2cb

0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x293: Push((int) 10)
0x294: @ KillTimer(Stack[-1])
0x295: Pop(1)
0x296: Return(); Pop(0)

0x297: PushEmpty(float, float)
0x298: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-3] = (bool) 0
0x29b: Return(); Pop(2)

0x29c: PushEmpty(float, object)
0x29d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x29e: Call2 0x77e

0x29f: Pop(1)
0x2a0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2a4: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty()
0x2a7: Push((int) 10)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2aa: PushEmpty(bool)
0x2ab: Call2 0x297

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ae: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2b2: Call2 0x923

0x2b3: Pop(1)
0x2b4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2b5: GOTO 0x2bc

0x2b6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b8: Push("head")
0x2b9: @ UnlookAsync(Stack[-1])
0x2ba: Pop(1)
0x2bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: Call2 0x31c

0x2bf: Pop(0)
0x2c0: Push((int) 10)
0x2c1: @ KillTimer(Stack[-1])
0x2c2: Pop(1)
0x2c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c5: Push("head")
0x2c6: @ UnlookAsync(Stack[-1])
0x2c7: Pop(1)
0x2c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2cc: @ WaitForAnimEnd()
0x2cd: Pop(0)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x8aa

0x2d0: Pop(0)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Return(); Pop(14)

0x2d4: PushEmpty(int)
0x2d5: Call2 0x9ff

0x2d6: Stack[-8] = Stack[-1]
0x2d7: Pop(1)
0x2d8: Stack[-6] = (int) 0
0x2d9: PushEmpty(bool)
0x2da: Stack[-1] = (bool) 0
0x2db: Push((int) 5)
0x2dc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: PushEmpty(bool)
0x2df: Call2 0x8aa

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: Stack[-1] = (bool) 1
0x2e3: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x2e4: Push((int) 3)
0x2e5: @ irand(Stack[-6], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push((int) 0)
0x2e8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2ea: Push(Stack[-7])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2ec: @ irand(Stack[-4], Stack[-7])
0x2ed: Pop(0)
0x2ee: Push("all")
0x2ef: PushEmpty(string, int)
0x2f0: Stack[-1] = Stack[-7]
0x2f1: Call2 0x9f8

0x2f2: Pop(1)
0x2f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: @ WaitForAnimEnd(Stack[-3])
0x2f6: Pop(0)
0x2f7: Pop(0); Push((bool) Stack[-3] == 0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: GOTO 0x317

0x2fa: GOTO 0x30c

0x2fb: Push((int) 1)
0x2fc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2fe: Push((int) 4)
0x2ff: @ rand(Stack[-3], Stack[-1])
0x300: Pop(1)
0x301: Push((int) 1)
0x302: Pop(1); Push(Stack[-3] + Stack[-1]);
0x303: @ Sleep(Stack[-1], Stack[-2])
0x304: Pop(1)
0x305: Pop(0); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x317

0x308: GOTO 0x30c

0x309: Push(Stack[-6])
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x317

0x30c: PushEmpty(bool)
0x30d: Call2 0x31a

0x30e: Pop(0)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x317

0x312: @ ResetAAS()
0x313: Pop(0)
0x314: Push((int) 1)
0x315: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x316: GOTO 0x2d9

0x317: @ ResetAAS()
0x318: Pop(0)
0x319: Return(); Pop(14)

0x31a: Stack[-1] = (bool) 1
0x31b: Return(); Pop(0)

0x31c: @ StopAnimation()
0x31d: Pop(0)
0x31e: @ StopGroup0()
0x31f: Pop(0)
0x320: Return(); Pop(0)

0x321: PushEmpty(object, object, object, object)
0x322: @ GetScene(Stack[-2])
0x323: Pop(0)
0x324: PushEmpty(object)
0x325: Call2 0x95e

0x326: Pop(0)
0x327: @@ RemoveStationaryActor(Stack[-1])
0x328: Pop(1)
0x329: Push("player")
0x32a: @ FindActor(Stack[-2], Stack[-1])
0x32b: Pop(1)
0x32c: PushEmpty(object, bool, float)
0x32d: Stack[-3] = Stack[-4]
0x32e: Stack[-2] = (bool) 1
0x32f: Stack[-1] = (float) 180.0
0x330: Call2 0x33f

0x331: Pop(3)
0x332: Push((int) 1)
0x333: @ Sleep(Stack[-1])
0x334: Pop(1)
0x335: GOTO 0x32c

0x336: Return(); Pop(4)

0x337: Stack[-1] = 0
0x338: Stack[-2] = 0
0x339: PushEmpty()
0x33a: Stack[-3] = (float) 0.1
0x33b: Return(); Pop(0)

0x33c: PushEmpty()
0x33d: Stack[-3] = (int) 0
0x33e: Return(); Pop(0)

0x33f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x340: PushEmpty()
0x341: Call2 0x424

0x342: Pop(0)
0x343: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x344: Push("@GetAttackDistance")
0x345: Push((int) 1)
0x346: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x347: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x348: @@ GetAttackDistance(Stack[-11])
0x349: Pop(0)
0x34a: Push((int) 50)
0x34b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x34c: GOTO 0x34e

0x34d: Stack[-11] = Stack[-23]
0x34e: Push((int) 150)
0x34f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x351: Stack[-11] = (int) 150
0x352: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x353: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x354: @ IsPlayerActor(Stack[-0], Stack[-8])
0x355: Pop(0)
0x356: Push(Stack[-8])
0x357: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x358: Push("attack")
0x359: @ PlayGlobalMusic(Stack[-1])
0x35a: Pop(1)
0x35b: PushEmpty(object)
0x35c: Call2 0x95e

0x35d: Pop(0)
0x35e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x35f: Pop(1)
0x360: Push(Stack[-24])
0x361: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x362: Stack[-7] = (bool) 0
0x363: GOTO 0x365

0x364: Stack[-7] = (bool) 1
0x365: Push((float)400.0)
0x366: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x367: PushEmpty(bool)
0x368: Stack[-1] = (bool) 0
0x369: PushEmpty(bool, object)
0x36a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36b: Call2 0x809

0x36c: Pop(1)
0x36d: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 1
0x371: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x372: PushEmpty()
0x373: Call2 0x5c1

0x374: Pop(0)
0x375: @@ GetPFPosition(Stack[-10])
0x376: Pop(0)
0x377: @ GetPFPosition(Stack[-9])
0x378: Pop(0)
0x379: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x37a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x37b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x37c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x37e: PushEmpty(bool, object, float, float, bool, bool)
0x37f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x380: Stack[-4] = Stack[-17]
0x381: Stack[-3] = (float) 3000.0
0x382: Stack[-2] = (bool) 1
0x383: Stack[-1] = (bool) 0
0x384: Push(-6, 3); TaskCall(4)
0x385: Call2 0x5d5

0x386: Pop(-6, 3); TaskReturn
0x387: Pop(5)
0x388: Pop(1); Push((bool) Stack[-1] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x413

0x38b: Stack[-7] = (bool) 0
0x38c: GOTO 0x412

0x38d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x38e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x390: @@ GetPFPosition(Stack[-3])
0x391: Pop(0)
0x392: @ CanReachByPF(Stack[-2], Stack[-3])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-2] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x396: PushEmpty(bool, object, float, float, bool, bool)
0x397: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x398: Stack[-4] = Stack[-17]
0x399: Stack[-3] = (float) 3000.0
0x39a: Stack[-2] = (bool) 1
0x39b: Stack[-1] = (bool) 0
0x39c: Push(-6, 3); TaskCall(4)
0x39d: Call2 0x5d5

0x39e: Pop(-6, 3); TaskReturn
0x39f: Pop(5)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: GOTO 0x413

0x3a3: Stack[-7] = (bool) 0
0x3a4: GOTO 0x367

0x3a5: Pop(0); Push((bool) Stack[-7] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3a7: PushEmpty(object)
0x3a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a9: Call2 0x89f

0x3aa: Pop(1)
0x3ab: Push("all")
0x3ac: Push("attack_on")
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: @ WaitForAnimEnd()
0x3b0: Pop(0)
0x3b1: PushEmpty()
0x3b2: Call2 0x5c1

0x3b3: Pop(0)
0x3b4: @ StopAsync()
0x3b5: Pop(0)
0x3b6: Stack[-7] = (bool) 1
0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b9: Call2 0x809

0x3ba: Pop(1)
0x3bb: Pop(1); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x413

0x3be: @ rand(Stack[-1])
0x3bf: Pop(0)
0x3c0: PushEmpty(bool)
0x3c1: Stack[-1] = (bool) 1
0x3c2: Push((float)0.25)
0x3c3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c5: PushEmpty(bool)
0x3c6: Call2 0x596

0x3c7: Pop(0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: Stack[-1] = (bool) 0
0x3ca: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3cb: @ Face(Stack[-0])
0x3cc: Pop(0)
0x3cd: PushEmpty()
0x3ce: Call2 0x5c8

0x3cf: Pop(0)
0x3d0: Push("all")
0x3d1: Push("attack_stay")
0x3d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: PushEmpty(bool, float)
0x3d5: Stack[-1] = Stack[-25]
0x3d6: Call2 0x512

0x3d7: Pop(2)
0x3d8: @ StopAsync()
0x3d9: Pop(0)
0x3da: GOTO 0x409

0x3db: @ Face(Stack[-0])
0x3dc: Pop(0)
0x3dd: Push("all")
0x3de: Push("fjump")
0x3df: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e0: Pop(2)
0x3e1: @ WaitForAnimEnd()
0x3e2: Pop(0)
0x3e3: PushEmpty()
0x3e4: Call2 0x5c1

0x3e5: Pop(0)
0x3e6: Push(CVector(0.0, 0.0, 0.0))
0x3e7: @ SetSpeed(Stack[-1])
0x3e8: Pop(1)
0x3e9: @ Stop()
0x3ea: Pop(0)
0x3eb: @ StopAsync()
0x3ec: Pop(0)
0x3ed: PushEmpty(bool)
0x3ee: Call2 0x596

0x3ef: Pop(0)
0x3f0: Pop(1); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f2: PushEmpty(bool, object)
0x3f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f4: Call2 0x809

0x3f5: Pop(1)
0x3f6: Pop(1); Push((bool) Stack[-1] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: GOTO 0x413

0x3f9: @@ GetPFPosition(Stack[-10])
0x3fa: Pop(0)
0x3fb: @ GetPFPosition(Stack[-9])
0x3fc: Pop(0)
0x3fd: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x3fe: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ff: Pop(0); Push(Stack[-23] * Stack[-23]);
0x400: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x402: PushEmpty(bool, float)
0x403: Stack[-1] = Stack[-25]
0x404: Call2 0x46e

0x405: Pop(1)
0x406: Pop(1); Push((bool) Stack[-1] == 0)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: GOTO 0x413

0x409: GOTO 0x412

0x40a: PushEmpty(bool, float)
0x40b: Stack[-1] = Stack[-25]
0x40c: Call2 0x46e

0x40d: Pop(1)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x413

0x411: Stack[-7] = (bool) 1
0x412: GOTO 0x367

0x413: @ WaitForAnimEnd()
0x414: Pop(0)
0x415: Push( Stack[3 + Tasks[-1].StackPointer] )
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: Return(); Pop(22)

0x418: Push("all")
0x419: Push("attack_off")
0x41a: @ PlayAnimation(Stack[-2], Stack[-1])
0x41b: Pop(2)
0x41c: @ WaitForAnimEnd()
0x41d: Pop(0)
0x41e: Push(Stack[-8])
0x41f: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x420: Push((float)2.0)
0x421: @ Sleep(Stack[-1])
0x422: Pop(1)
0x423: Return(); Pop(22)

0x424: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x425: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x426: Push("all")
0x427: Push("attack_begin")
0x428: Push((int) 1)
0x429: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x42a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: Pop(0); Push((bool) Stack[-3] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: GOTO 0x433

0x430: Push((int) 1)
0x431: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x432: GOTO 0x426

0x433: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x434: Push("attack")
0x435: Push((int) 1)
0x436: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x437: Pop(2); Push(Stack[-2] + Stack[-1]);
0x438: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x439: Pop(1)
0x43a: Pop(0); Push((bool) Stack[-2] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: GOTO 0x440

0x43d: Push((int) 1)
0x43e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x43f: GOTO 0x434

0x440: Push("all")
0x441: Push("bjump")
0x442: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(2)
0x444: Push(CvectorIndex(Stack[-1], 2))
0x445: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x446: Return(); Pop(6)

0x447: PushEmpty(object, float, float, object, float, float)
0x448: Push((float)0.9)
0x449: Pop(1); Push(Stack[-9] * Stack[-1]);
0x44a: @ GetVictim(Stack[-1], Stack[-4])
0x44b: Pop(1)
0x44c: @ ReportAttack(Stack[-0])
0x44d: Pop(0)
0x44e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x44f: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x450: PushEmpty(float, object, int)
0x451: Stack[-2] = Stack[-6]
0x452: Stack[-1] = Stack[-10]
0x453: Call2 0x339

0x454: Stack[-5] = Stack[-3]
0x455: Pop(3)
0x456: PushEmpty(float, object, float, int)
0x457: Stack[-3] = Stack[-7]
0x458: Stack[-2] = Stack[-6]
0x459: PushEmpty(int, object, int)
0x45a: Stack[-2] = Stack[-10]
0x45b: Stack[-1] = Stack[-14]
0x45c: Call2 0x33c

0x45d: Stack[-4] = Stack[-3]
0x45e: Pop(3)
0x45f: Call2 0x797

0x460: Stack[-5] = Stack[-4]
0x461: Pop(4)
0x462: PushEmpty(int)
0x463: Call2 0x5c6

0x464: Pop(0)
0x465: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x466: Pop(1)
0x467: PushEmpty(object, float)
0x468: Stack[-2] = Stack[-5]
0x469: Stack[-1] = Stack[-3]
0x46a: Call2 0x5cd

0x46b: Pop(2)
0x46c: Return(); Pop(6)

0x46d: Stack[-3] = 0
0x46e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x46f: PushEmpty()
0x470: Call2 0x5c1

0x471: Pop(0)
0x472: @ irand(Stack[-4], Stack[-1])
0x473: Pop(0)
0x474: Push((int) 1)
0x475: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x476: @ Face(Stack[-0])
0x477: Pop(0)
0x478: Push((bool) 1)
0x479: @ SetAttackState(Stack[-1])
0x47a: Pop(1)
0x47b: PushEmpty()
0x47c: Call2 0x9a4

0x47d: Pop(0)
0x47e: Push("all")
0x47f: Push("attack_begin")
0x480: Pop(1); Push(Stack[-1] + Stack[-6]);
0x481: @ PlayAnimation(Stack[-2], Stack[-1])
0x482: Pop(2)
0x483: @ WaitForAnimEnd()
0x484: Pop(0)
0x485: PushEmpty()
0x486: Call2 0x5a1

0x487: Pop(0)
0x488: PushEmpty(bool, object)
0x489: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x48a: Call2 0x809

0x48b: Pop(1)
0x48c: Pop(1); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48e: @ StopAsync()
0x48f: Pop(0)
0x490: Stack[-10] = (bool) 0
0x491: Return(); Pop(8)

0x492: PushEmpty(float, int)
0x493: Stack[-2] = Stack[-11]
0x494: Stack[-1] = Stack[-6]
0x495: Call2 0x447

0x496: Pop(2)
0x497: Push("all")
0x498: Push("attack_middle")
0x499: Pop(1); Push(Stack[-1] + Stack[-6]);
0x49a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x49b: Pop(2)
0x49c: Push(Stack[-3])
0x49d: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x49e: PushEmpty()
0x49f: Call2 0x9a4

0x4a0: Pop(0)
0x4a1: Push("all")
0x4a2: Push("attack_middle")
0x4a3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a5: Pop(2)
0x4a6: @ WaitForAnimEnd()
0x4a7: Pop(0)
0x4a8: PushEmpty()
0x4a9: Call2 0x5c1

0x4aa: Pop(0)
0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ad: Call2 0x809

0x4ae: Pop(1)
0x4af: Pop(1); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b1: @ StopAsync()
0x4b2: Pop(0)
0x4b3: Stack[-10] = (bool) 0
0x4b4: Return(); Pop(8)

0x4b5: PushEmpty(float, int)
0x4b6: Stack[-2] = Stack[-11]
0x4b7: Stack[-1] = Stack[-6]
0x4b8: Call2 0x447

0x4b9: Pop(2)
0x4ba: Stack[-2] = (int) 1
0x4bb: Push("attack_middle")
0x4bc: Pop(1); Push(Stack[-1] + Stack[-5]);
0x4bd: Push("_")
0x4be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4bf: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x4c0: Push("all")
0x4c1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x4c2: Pop(1)
0x4c3: Pop(0); Push((bool) Stack[-3] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: GOTO 0x4e3

0x4c6: PushEmpty()
0x4c7: Call2 0x9a4

0x4c8: Pop(0)
0x4c9: Push("all")
0x4ca: @ PlayAnimation(Stack[-1], Stack[-2])
0x4cb: Pop(1)
0x4cc: @ WaitForAnimEnd()
0x4cd: Pop(0)
0x4ce: PushEmpty()
0x4cf: Call2 0x5c1

0x4d0: Pop(0)
0x4d1: PushEmpty(bool, object)
0x4d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d3: Call2 0x809

0x4d4: Pop(1)
0x4d5: Pop(1); Push((bool) Stack[-1] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d7: @ StopAsync()
0x4d8: Pop(0)
0x4d9: Stack[-10] = (bool) 0
0x4da: Return(); Pop(8)

0x4db: PushEmpty(float, int)
0x4dc: Stack[-2] = Stack[-11]
0x4dd: Stack[-1] = Stack[-6]
0x4de: Call2 0x447

0x4df: Pop(2)
0x4e0: Push((int) 1)
0x4e1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4e2: GOTO 0x4bb

0x4e3: Push((bool) 0)
0x4e4: @ SetAttackState(Stack[-1])
0x4e5: Pop(1)
0x4e6: Push("all")
0x4e7: Push("attack_end")
0x4e8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4e9: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ea: Pop(2)
0x4eb: PushEmpty(bool)
0x4ec: Call2 0x5cf

0x4ed: Pop(0)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4ef: PushEmpty(bool, float)
0x4f0: Stack[-1] = (float) 0.75
0x4f1: Call2 0x4f7

0x4f2: Pop(2)
0x4f3: @ StopAsync()
0x4f4: Pop(0)
0x4f5: Stack[-10] = (bool) 1
0x4f6: Return(); Pop(8)

0x4f7: PushEmpty(float, bool, float, bool)
0x4f8: @ rand(Stack[-2])
0x4f9: Pop(0)
0x4fa: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4fb: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4fc: @ IsAnimationPlaying(Stack[-1])
0x4fd: Pop(0)
0x4fe: Pop(0); Push((bool) Stack[-1] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: GOTO 0x50a

0x501: PushEmpty(bool)
0x502: Call2 0x559

0x503: Pop(0)
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: Stack[-6] = (bool) 1
0x506: Return(); Pop(4)

0x507: @ sync()
0x508: Pop(0)
0x509: GOTO 0x4fc

0x50a: GOTO 0x510

0x50b: @ WaitForAnimEnd()
0x50c: Pop(0)
0x50d: PushEmpty()
0x50e: Call2 0x5c1

0x50f: Pop(0)
0x510: Stack[-6] = (bool) 0
0x511: Return(); Pop(4)

0x512: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x513: @ IsAnimationPlaying(Stack[-5])
0x514: Pop(0)
0x515: Pop(0); Push((bool) Stack[-5] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: GOTO 0x538

0x518: PushEmpty(bool)
0x519: Call2 0x559

0x51a: Pop(0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-12] = (bool) 1
0x51d: Return(); Pop(10)

0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x520: Call2 0x809

0x521: Pop(1)
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-12] = (bool) 0
0x525: Return(); Pop(10)

0x526: @@ GetPFPosition(Stack[-4])
0x527: Pop(0)
0x528: @ GetPFPosition(Stack[-3])
0x529: Pop(0)
0x52a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x52b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x52c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x52d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x52f: PushEmpty(bool, float)
0x530: Stack[-1] = Stack[-13]
0x531: Call2 0x46e

0x532: Pop(2)
0x533: Stack[-12] = (bool) 1
0x534: Return(); Pop(10)

0x535: @ sync()
0x536: Pop(0)
0x537: GOTO 0x513

0x538: PushEmpty()
0x539: Call2 0x5c1

0x53a: Pop(0)
0x53b: Stack[-12] = (bool) 0
0x53c: Return(); Pop(10)

0x53d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x53e: PushEmpty(bool, object)
0x53f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x540: Call2 0x809

0x541: Pop(1)
0x542: Pop(1); Push((bool) Stack[-1] == 0)
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-11] = (bool) 0
0x545: Return(); Pop(10)

0x546: PushEmpty(bool)
0x547: Call2 0x596

0x548: Pop(0)
0x549: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x54a: @@ GetPFPosition(Stack[-5])
0x54b: Pop(0)
0x54c: @ GetPFPosition(Stack[-4])
0x54d: Pop(0)
0x54e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x54f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x550: @@ GetAttackDistance(Stack[-1])
0x551: Pop(0)
0x552: Push((int) 50)
0x553: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x554: Pop(0); Push(Stack[-1] * Stack[-1]);
0x555: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x556: Return(); Pop(10)

0x557: Stack[-11] = (bool) 0
0x558: Return(); Pop(10)

0x559: PushEmpty(bool)
0x55a: Stack[-1] = (bool) 0
0x55b: PushEmpty(bool)
0x55c: Call2 0x53d

0x55d: Pop(0)
0x55e: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55f: PushEmpty(bool)
0x560: Call2 0x569

0x561: Pop(0)
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Stack[-1] = (bool) 1
0x564: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x565: Stack[-1] = (bool) 1
0x566: Return(); Pop(0)

0x567: Stack[-1] = (bool) 0
0x568: Return(); Pop(0)

0x569: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x56a: @ GetScene(Stack[-5])
0x56b: Pop(0)
0x56c: Stack[-4] = (bool) 0
0x56d: PushEmpty(cvector, object)
0x56e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56f: Call2 0x777

0x570: Pop(1)
0x571: Pop(1); Push(( -Stack[-1])
0x572: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x573: Pop(1)
0x574: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x575: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x576: GOTO 0x593

0x577: @ Face(Stack[-0])
0x578: Pop(0)
0x579: Push("all")
0x57a: Push("bjump")
0x57b: @ PlayAnimation(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: @@ GetPFPosition(Stack[-2])
0x57e: Pop(0)
0x57f: @ GetPFPosition(Stack[-1])
0x580: Pop(0)
0x581: @ WaitForAnimEnd()
0x582: Pop(0)
0x583: PushEmpty()
0x584: Call2 0x5c1

0x585: Pop(0)
0x586: @ StopAsync()
0x587: Pop(0)
0x588: Push(CVector(0.0, 0.0, 0.0))
0x589: @ SetSpeed(Stack[-1])
0x58a: Pop(1)
0x58b: Stack[-4] = (bool) 1
0x58c: PushEmpty(bool)
0x58d: Call2 0x53d

0x58e: Pop(0)
0x58f: Pop(1); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: GOTO 0x593

0x592: GOTO 0x56d

0x593: Stack[-11] = Stack[-4]
0x594: Return(); Pop(10)

0x595: Stack[-5] = 0
0x596: PushEmpty(bool, bool)
0x597: Push("IsAttacking")
0x598: Push((int) 1)
0x599: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x59a: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59b: @@ IsAttacking(Stack[-1])
0x59c: Pop(0)
0x59d: Stack[-3] = Stack[-1]
0x59e: Return(); Pop(2)

0x59f: Stack[-3] = (bool) 0
0x5a0: Return(); Pop(2)

0x5a1: PushEmpty(float, int, float, int)
0x5a2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a4: Return(); Pop(4)

0x5a5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a7: Push((int) -1)
0x5a8: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5a9: Push((int) 0)
0x5aa: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: Return(); Pop(4)

0x5ad: @ rand(Stack[-2])
0x5ae: Pop(0)
0x5af: PushEmpty(float)
0x5b0: Call2 0x5d3

0x5b1: Pop(0)
0x5b2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5b4: @ irand(Stack[-1], Stack[-2])
0x5b5: Pop(0)
0x5b6: Push((int) 1)
0x5b7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5b8: Push("attack")
0x5b9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5ba: @ Speak(Stack[-1])
0x5bb: Pop(1)
0x5bc: PushEmpty(int)
0x5bd: Call2 0x5d1

0x5be: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x5bf: Pop(1)
0x5c0: Return(); Pop(4)

0x5c1: PushEmpty(object)
0x5c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c3: Call2 0x99b

0x5c4: Pop(1)
0x5c5: Return(); Pop(0)

0x5c6: Stack[-1] = (int) 0
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "attack_stay"
0x5ca: Call2 0x935

0x5cb: Pop(1)
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty()
0x5ce: Return(); Pop(0)

0x5cf: Stack[-1] = (bool) 1
0x5d0: Return(); Pop(0)

0x5d1: Stack[-1] = (int) 1
0x5d2: Return(); Pop(0)

0x5d3: Stack[-1] = (float) 0.5
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(bool, bool, bool, bool)
0x5d6: PushEmpty(object)
0x5d7: Stack[-1] = Stack[-10]
0x5d8: Call2 0x99b

0x5d9: Pop(1)
0x5da: Push((int) 1)
0x5db: Push((int) 5)
0x5dc: @ SetTimer(Stack[-2], Stack[-1])
0x5dd: Pop(2)
0x5de: @ CanSee(Stack[-2], Stack[-9])
0x5df: Pop(0)
0x5e0: Push(Stack[-2])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5e3: PushEmpty(object)
0x5e4: Stack[-1] = Stack[-10]
0x5e5: Call2 0x923

0x5e6: Pop(1)
0x5e7: GOTO 0x5e9

0x5e8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5e9: PushEmpty(bool, object)
0x5ea: Stack[-1] = Stack[-11]
0x5eb: Call2 0x786

0x5ec: Pop(1)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5ee: PushEmpty(object)
0x5ef: Call2 0x95e

0x5f0: Pop(0)
0x5f1: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x5f2: Pop(1)
0x5f3: PushEmpty(bool, object, float, float, bool, bool)
0x5f4: Stack[-5] = Stack[-15]
0x5f5: Stack[-4] = Stack[-14]
0x5f6: Stack[-3] = Stack[-13]
0x5f7: Stack[-2] = Stack[-12]
0x5f8: Stack[-1] = Stack[-11]
0x5f9: Call2 0x63e

0x5fa: Stack[-7] = Stack[-6]
0x5fb: Pop(6)
0x5fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5fd: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fe: Push("head")
0x5ff: @ UnlookAsync(Stack[-1])
0x600: Pop(1)
0x601: Push((int) 1)
0x602: @ KillTimer(Stack[-1])
0x603: Pop(1)
0x604: Stack[-10] = Stack[-1]
0x605: Return(); Pop(4)

0x606: PushEmpty()
0x607: Push((int) 1)
0x608: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60a: PushEmpty(object)
0x60b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Call2 0x99b

0x60d: Pop(1)
0x60e: GOTO 0x613

0x60f: PushEmpty(int)
0x610: Stack[-1] = Stack[-2]
0x611: Call2 0x6a4

0x612: Pop(1)
0x613: Return(); Pop(0)

0x614: Push((int) 1)
0x615: @ KillTimer(Stack[-1])
0x616: Pop(1)
0x617: Push( Stack[2 + Tasks[-1].StackPointer] )
0x618: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x619: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x61a: Push("head")
0x61b: @ UnlookAsync(Stack[-1])
0x61c: Pop(1)
0x61d: PushEmpty()
0x61e: Call2 0x6ba

0x61f: Pop(0)
0x620: Return(); Pop(0)

0x621: PushEmpty()
0x622: PushEmpty(bool)
0x623: Stack[-1] = (bool) 0
0x624: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x625: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x626: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x627: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x628: Stack[-1] = (bool) 1
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x62b: PushEmpty(object)
0x62c: Stack[-1] = Stack[-2]
0x62d: Call2 0x923

0x62e: Pop(1)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: PushEmpty(bool)
0x632: Stack[-1] = (bool) 0
0x633: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x634: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x635: Push( Stack[2 + Tasks[-1].StackPointer] )
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: Stack[-1] = (bool) 1
0x638: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x639: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x63a: Push("head")
0x63b: @ UnlookAsync(Stack[-1])
0x63c: Pop(1)
0x63d: Return(); Pop(0)

0x63e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x63f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x640: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x641: Stack[-7] = Stack[-17]
0x642: PushEmpty(bool, object)
0x643: Stack[-1] = Stack[-23]
0x644: Call2 0x6ca

0x645: Pop(1)
0x646: Pop(1); Push((bool) Stack[-1] == 0)
0x647: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x648: Stack[-22] = (bool) 0
0x649: Return(); Pop(16)

0x64a: @@ GetPosition(Stack[-5])
0x64b: Pop(0)
0x64c: @ GetPosition(Stack[-4])
0x64d: Pop(0)
0x64e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x64f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x650: PushEmpty(bool)
0x651: Stack[-1] = (bool) 0
0x652: Push((int) 0)
0x653: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x655: Pop(0); Push(Stack[-20] * Stack[-20]);
0x656: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: Stack[-1] = (bool) 1
0x659: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65a: @ Stop()
0x65b: Pop(0)
0x65c: Stack[-22] = (bool) 0
0x65d: Return(); Pop(16)

0x65e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x65f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x661: @@ GetPFPosition(Stack[-5])
0x662: Pop(0)
0x663: @ FindPathTo(Stack[-1], Stack[-5])
0x664: Pop(0)
0x665: Pop(0); Push(( Stack[-1] != 0 )
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-6] = Stack[-1]
0x668: Stack[-1] = 0
0x669: Pop(0); Push(( Stack[-6] != 0 )
0x66a: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x66b: Push(Stack[-7])
0x66c: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66d: Stack[-7] = (bool) 0
0x66e: @ RotatePath(Stack[-6], Stack[-8])
0x66f: Pop(0)
0x670: Pop(0); Push((bool) Stack[-8] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: GOTO 0x6a2

0x673: Push((int) 0)
0x674: Push((float)0.3)
0x675: @ SetTimer(Stack[-2], Stack[-1])
0x676: Pop(2)
0x677: PushEmpty(string)
0x678: Call2 0x6d1

0x679: Pop(0)
0x67a: PushEmpty(string)
0x67b: Call2 0x6d3

0x67c: Pop(0)
0x67d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x67e: Pop(2)
0x67f: Pop(0); Push((bool) Stack[-8] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x681: Push( Stack[0 + Tasks[-1].StackPointer] )
0x682: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x683: Stack[-6] = 0
0x684: GOTO 0x6a2

0x685: GOTO 0x687

0x686: GOTO 0x6a1

0x687: GOTO 0x689

0x688: Stack[-6] = 0
0x689: GOTO 0x69a

0x68a: Push((int) 0)
0x68b: @ KillTimer(Stack[-1])
0x68c: Pop(1)
0x68d: Push((float)0.5)
0x68e: @ Sleep(Stack[-1], Stack[-9])
0x68f: Pop(1)
0x690: Pop(0); Push((bool) Stack[-8] == 0)
0x691: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x692: Push( Stack[0 + Tasks[-1].StackPointer] )
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-6] = 0
0x695: GOTO 0x6a2

0x696: Push((int) 0)
0x697: Push((float)0.3)
0x698: @ SetTimer(Stack[-2], Stack[-1])
0x699: Pop(2)
0x69a: Stack[-1] = 0
0x69b: GOTO 0x6a0

0x69c: Push((int) 0)
0x69d: @ KillTimer(Stack[-1])
0x69e: Pop(1)
0x69f: GOTO 0x6a2

0x6a0: Stack[-6] = 0
0x6a1: GOTO 0x642

0x6a2: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6a3: Return(); Pop(16)

0x6a4: PushEmpty()
0x6a5: Push((int) 0)
0x6a6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: Return(); Pop(0)

0x6a9: PushEmpty(bool, object)
0x6aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ab: Call2 0x6ca

0x6ac: Pop(1)
0x6ad: Pop(1); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6af: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6b0: Push((int) 0)
0x6b1: @ KillTimer(Stack[-1])
0x6b2: Pop(1)
0x6b3: @ Stop()
0x6b4: Pop(0)
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty()
0x6b7: @ RequestClearPath(Stack[-1])
0x6b8: Pop(0)
0x6b9: Return(); Pop(0)

0x6ba: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6bb: Push((int) 0)
0x6bc: @ KillTimer(Stack[-1])
0x6bd: Pop(1)
0x6be: @ Stop()
0x6bf: Pop(0)
0x6c0: Return(); Pop(0)

0x6c1: PushEmpty()
0x6c2: PushEmpty()
0x6c3: Call2 0x614

0x6c4: Pop(0)
0x6c5: PushEmpty(object)
0x6c6: Stack[-1] = Stack[-2]
0x6c7: Call2 0xa49

0x6c8: Pop(1)
0x6c9: Return(); Pop(0)

0x6ca: PushEmpty()
0x6cb: PushEmpty(bool, object)
0x6cc: Stack[-1] = Stack[-3]
0x6cd: Call2 0x809

0x6ce: Stack[-4] = Stack[-2]
0x6cf: Pop(2)
0x6d0: Return(); Pop(0)

0x6d1: Stack[-1] = "walk"
0x6d2: Return(); Pop(0)

0x6d3: Stack[-1] = "run"
0x6d4: Return(); Pop(0)

0x6d5: PushEmpty()
0x6d6: EventDisable(0)
0x6d7: PushEmpty(object)
0x6d8: Stack[-1] = Stack[-2]
0x6d9: Call2 0x6ee

0x6da: Pop(1)
0x6db: Push((int) 50)
0x6dc: Push((int) 40)
0x6dd: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x6de: Pop(2)
0x6df: EventEnable(0)
0x6e0: @ Hold()
0x6e1: Pop(0)
0x6e2: GOTO 0x6e0

0x6e3: Return(); Pop(0)

0x6e4: PushEmpty(bool, bool)
0x6e5: @ IsOverrideActive(Stack[-1])
0x6e6: Pop(0)
0x6e7: Pop(0); Push((bool) Stack[-1] == 0)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e9: PushEmpty(object)
0x6ea: Stack[-1] = Stack[-4]
0x6eb: Call2 0x9eb

0x6ec: Pop(1)
0x6ed: Return(); Pop(2)

0x6ee: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x6ef: Pop(0); Push((bool) Stack[-21] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f1: PushEmpty(string)
0x6f2: Stack[-1] = "fdie"
0x6f3: Call2 0x749

0x6f4: Pop(1)
0x6f5: GOTO 0x748

0x6f6: @@ GetPosition(Stack[-10])
0x6f7: Pop(0)
0x6f8: @ GetPosition(Stack[-9])
0x6f9: Pop(0)
0x6fa: @ GetDirection(Stack[-8])
0x6fb: Pop(0)
0x6fc: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x6fd: Push(CvectorIndex(Stack[-7], 0))
0x6fe: Push(CvectorIndex(Stack[-9], 0))
0x6ff: Pop(2); Push(Stack[-2] * Stack[-1]);
0x700: Push(CvectorIndex(Stack[-8], 2))
0x701: Push(CvectorIndex(Stack[-10], 2))
0x702: Pop(2); Push(Stack[-2] * Stack[-1]);
0x703: Pop(2); Push(Stack[-2] + Stack[-1]);
0x704: Push((int) 0)
0x705: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x707: Stack[-6] = "fdie"
0x708: GOTO 0x70a

0x709: Stack[-6] = "bdie"
0x70a: @ RemoveRTEnvelope()
0x70b: Pop(0)
0x70c: @ SetDeathState()
0x70d: Pop(0)
0x70e: @ Stop()
0x70f: Pop(0)
0x710: @ StopAsync()
0x711: Pop(0)
0x712: Stack[-5] = Stack[-21]
0x713: Push("GetScriptProperty")
0x714: Push((int) 2)
0x715: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x716: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x717: Push("Owner")
0x718: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x719: Pop(1)
0x71a: Push(Stack[-4])
0x71b: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71c: Push("Owner")
0x71d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x71e: Pop(1)
0x71f: Pop(0); Push((bool) Stack[-5] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: Stack[-5] = Stack[-21]
0x722: Push("@GetEyesHeight")
0x723: Push((int) 1)
0x724: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x725: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x726: @@ GetEyesHeight(Stack[-2])
0x727: Pop(0)
0x728: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x729: Push(CvectorIndex(Stack[-1], 1))
0x72a: Stack[-1] = Stack[-3]
0x72b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x72c: Push("head")
0x72d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x72e: Pop(1)
0x72f: Stack[-3] = (bool) 1
0x730: GOTO 0x732

0x731: Stack[-3] = (bool) 0
0x732: PushEmpty(string)
0x733: Stack[-1] = Stack[-7]
0x734: Call2 0x935

0x735: Pop(1)
0x736: Push("all")
0x737: @ PlayAnimation(Stack[-1], Stack[-7])
0x738: Pop(1)
0x739: @ WaitForAnimEnd()
0x73a: Pop(0)
0x73b: Push(Stack[-3])
0x73c: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73d: @ StopAsync()
0x73e: Pop(0)
0x73f: Push("head")
0x740: @ UnlookAsync(Stack[-1])
0x741: Pop(1)
0x742: Push("all")
0x743: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x744: Pop(1)
0x745: @ RemoveEnvelope()
0x746: Pop(0)
0x747: Stack[-5] = 0
0x748: Return(); Pop(20)

0x749: PushEmpty()
0x74a: @ RemoveRTEnvelope()
0x74b: Pop(0)
0x74c: @ SetDeathState()
0x74d: Pop(0)
0x74e: @ Stop()
0x74f: Pop(0)
0x750: @ StopAsync()
0x751: Pop(0)
0x752: @ StopSecondaryAnimation()
0x753: Pop(0)
0x754: PushEmpty(string)
0x755: Stack[-1] = Stack[-2]
0x756: Call2 0x935

0x757: Pop(1)
0x758: Push("all")
0x759: @ PlayAnimation(Stack[-1], Stack[-2])
0x75a: Pop(1)
0x75b: @ WaitForAnimEnd()
0x75c: Pop(0)
0x75d: Push("all")
0x75e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x75f: Pop(1)
0x760: @ RemoveEnvelope()
0x761: Pop(0)
0x762: Return(); Pop(0)

0x763: PushEmpty()
0x764: Return(); Pop(0)

0x765: PushEmpty()
0x766: Return(); Pop(0)

0x767: PushEmpty()
0x768: Return(); Pop(0)

0x769: PushEmpty()
0x76a: Push((int) 2)
0x76b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76d: Stack[-2] = "fire"
0x76e: Return(); Pop(0)

0x76f: GOTO 0x775

0x770: Push((int) 1)
0x771: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x773: Stack[-2] = "bullet"
0x774: Return(); Pop(0)

0x775: Stack[-2] = "phys"
0x776: Return(); Pop(0)

0x777: PushEmpty(cvector, cvector, cvector, cvector)
0x778: @ GetPosition(Stack[-2])
0x779: Pop(0)
0x77a: @@ GetPosition(Stack[-1])
0x77b: Pop(0)
0x77c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x77d: Return(); Pop(4)

0x77e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x77f: @ GetPosition(Stack[-3])
0x780: Pop(0)
0x781: @@ GetPosition(Stack[-2])
0x782: Pop(0)
0x783: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x784: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x785: Return(); Pop(6)

0x786: PushEmpty(bool, bool)
0x787: @ IsPlayerActor(Stack[-3], Stack[-1])
0x788: Pop(0)
0x789: Stack[-4] = Stack[-1]
0x78a: Return(); Pop(2)

0x78b: PushEmpty(bool, bool)
0x78c: Push("HasProperty")
0x78d: Push((int) 2)
0x78e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x78f: Pop(1); Push((bool) Stack[-1] == 0)
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-5] = (bool) 0
0x792: Return(); Pop(2)

0x793: @@ HasProperty(Stack[-3], Stack[-1])
0x794: Pop(0)
0x795: Stack[-5] = Stack[-1]
0x796: Return(); Pop(2)

0x797: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x798: PushEmpty(bool, object, string)
0x799: Stack[-2] = Stack[-18]
0x79a: Stack[-1] = "health"
0x79b: Call2 0x78b

0x79c: Pop(2)
0x79d: Pop(1); Push((bool) Stack[-1] == 0)
0x79e: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79f: Stack[-16] = (float) 0.0
0x7a0: Return(); Pop(12)

0x7a1: PushEmpty(bool, object, string)
0x7a2: Stack[-2] = Stack[-18]
0x7a3: Stack[-1] = "armor"
0x7a4: Call2 0x78b

0x7a5: Pop(2)
0x7a6: Pop(1); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a8: Stack[-6] = (int) 0
0x7a9: GOTO 0x7ad

0x7aa: Push("armor")
0x7ab: @@ GetProperty(Stack[-1], Stack[-7])
0x7ac: Pop(1)
0x7ad: Push("armor_")
0x7ae: PushEmpty(string, int)
0x7af: Stack[-1] = Stack[-16]
0x7b0: Call2 0x769

0x7b1: Pop(1)
0x7b2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x7b3: PushEmpty(bool, object, string)
0x7b4: Stack[-2] = Stack[-18]
0x7b5: Stack[-1] = Stack[-8]
0x7b6: Call2 0x78b

0x7b7: Pop(2)
0x7b8: Pop(1); Push((bool) Stack[-1] == 0)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7ba: Stack[-4] = (int) 0
0x7bb: GOTO 0x7be

0x7bc: @@ GetProperty(Stack[-5], Stack[-4])
0x7bd: Pop(0)
0x7be: PushEmpty(float, float, float)
0x7bf: Pop(0); Push(Stack[-9] + Stack[-7]);
0x7c0: Push((float)100.0)
0x7c1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x7c2: Stack[-1] = (int) 1
0x7c3: Call2 0x96e

0x7c4: Stack[-6] = Stack[-3]
0x7c5: Pop(3)
0x7c6: Push("health")
0x7c7: @@ GetProperty(Stack[-1], Stack[-3])
0x7c8: Pop(1)
0x7c9: Push((int) 1)
0x7ca: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7cb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x7cc: Push("health")
0x7cd: PushEmpty(float, float, float, float)
0x7ce: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x7cf: Stack[-2] = (int) 0
0x7d0: Stack[-1] = (int) 1
0x7d1: Call2 0x975

0x7d2: Pop(3)
0x7d3: @@ SetProperty(Stack[-2], Stack[-1])
0x7d4: Pop(2)
0x7d5: PushEmpty(bool, object)
0x7d6: Stack[-1] = Stack[-17]
0x7d7: Call2 0x786

0x7d8: Pop(1)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7da: PushEmpty(float)
0x7db: Stack[-1] = -Stack[-2]; Pop(0);
0x7dc: Call2 0x985

0x7dd: Pop(1)
0x7de: Stack[-16] = Stack[-1]
0x7df: Return(); Pop(12)

0x7e0: PushEmpty(bool, bool)
0x7e1: @@ IsDead(Stack[-1])
0x7e2: Pop(0)
0x7e3: Stack[-4] = Stack[-1]
0x7e4: Return(); Pop(2)

0x7e5: PushEmpty(object, object, object, object)
0x7e6: Pop(0); Push((bool) Stack[-5] == 0)
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-6] = (bool) 0
0x7e9: Return(); Pop(4)

0x7ea: PushEmpty(bool)
0x7eb: Stack[-1] = (bool) 0
0x7ec: Push("IsDead")
0x7ed: Push((int) 1)
0x7ee: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f0: PushEmpty(bool, object)
0x7f1: Stack[-1] = Stack[-8]
0x7f2: Call2 0x7e0

0x7f3: Pop(1)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: Stack[-1] = (bool) 1
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f7: Stack[-6] = (bool) 0
0x7f8: Return(); Pop(4)

0x7f9: @ GetScene(Stack[-2])
0x7fa: Pop(0)
0x7fb: Pop(0); Push((bool) Stack[-2] == 0)
0x7fc: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fd: Stack[-6] = (bool) 0
0x7fe: Return(); Pop(4)

0x7ff: @@ GetScene(Stack[-1])
0x800: Pop(0)
0x801: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-6] = (bool) 0
0x804: Return(); Pop(4)

0x805: Stack[-6] = (bool) 1
0x806: Return(); Pop(4)

0x807: Stack[-1] = 0
0x808: Stack[-2] = 0
0x809: PushEmpty(int, int)
0x80a: PushEmpty(bool, object)
0x80b: Stack[-1] = Stack[-5]
0x80c: Call2 0x7e5

0x80d: Pop(1)
0x80e: Pop(1); Push((bool) Stack[-1] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x810: Stack[-4] = (bool) 0
0x811: Return(); Pop(2)

0x812: PushEmpty(bool, object, string)
0x813: Stack[-2] = Stack[-6]
0x814: Stack[-1] = "noaccess"
0x815: Call2 0x78b

0x816: Pop(2)
0x817: Pop(1); Push((bool) Stack[-1] == 0)
0x818: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x819: Stack[-4] = (bool) 1
0x81a: Return(); Pop(2)

0x81b: Push("noaccess")
0x81c: @@ GetProperty(Stack[-1], Stack[-2])
0x81d: Pop(1)
0x81e: Push((int) 0)
0x81f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x820: Return(); Pop(2)

0x821: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x822: Pop(0); Push((bool) Stack[-15] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x824: Return(); Pop(14)

0x825: @ IsDead(Stack[-7])
0x826: Pop(0)
0x827: Push(Stack[-7])
0x828: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x829: Return(); Pop(14)

0x82a: @ GetSecondaryAnimationType(Stack[-6])
0x82b: Pop(0)
0x82c: Push((int) 0)
0x82d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82f: Return(); Pop(14)

0x830: @@ GetPosition(Stack[-5])
0x831: Pop(0)
0x832: @ GetPosition(Stack[-4])
0x833: Pop(0)
0x834: @ GetDirection(Stack[-3])
0x835: Pop(0)
0x836: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x837: Push(CvectorIndex(Stack[-2], 0))
0x838: Push(CvectorIndex(Stack[-4], 0))
0x839: Pop(2); Push(Stack[-2] * Stack[-1]);
0x83a: Push(CvectorIndex(Stack[-3], 2))
0x83b: Push(CvectorIndex(Stack[-5], 2))
0x83c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x83d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x83e: Push((int) 0)
0x83f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-1] = "fhit"
0x842: GOTO 0x844

0x843: Stack[-1] = "bhit"
0x844: Push("hit_react")
0x845: Push("1")
0x846: Pop(1); Push(Stack[-3] + Stack[-1]);
0x847: Push("2")
0x848: Pop(1); Push(Stack[-4] + Stack[-1]);
0x849: Push((int) -10)
0x84a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(4)
0x84c: Return(); Pop(14)

0x84d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x84e: PushEmpty(bool)
0x84f: Stack[-1] = (bool) 0
0x850: PushEmpty(bool)
0x851: Stack[-1] = (bool) 0
0x852: Push(Stack[-23])
0x853: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x854: Push((int) 4)
0x855: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x857: Stack[-1] = (bool) 1
0x858: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x859: Push((int) 5)
0x85a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85c: Stack[-1] = (bool) 1
0x85d: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x85e: PushEmpty(cvector, cvector)
0x85f: PushEmpty(cvector, object)
0x860: Stack[-1] = Stack[-25]
0x861: Call2 0x777

0x862: Stack[-3] = Stack[-2]
0x863: Pop(2)
0x864: Call2 0x964

0x865: Stack[-11] = Stack[-2]
0x866: Pop(2)
0x867: @ CreateVectorVector(Stack[-8])
0x868: Pop(0)
0x869: Stack[-7] = (int) 1
0x86a: Push("hit")
0x86b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x86c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x86d: Pop(1)
0x86e: Pop(0); Push((bool) Stack[-6] == 0)
0x86f: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x870: GOTO 0x87a

0x871: Pop(0); Push(Stack[-4] | Stack[-9]);
0x872: Push((float)0.70711)
0x873: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x875: @@ add(Stack[-5])
0x876: Pop(0)
0x877: Push((int) 1)
0x878: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x879: GOTO 0x86a

0x87a: @@ size(Stack[-3])
0x87b: Pop(0)
0x87c: Push(Stack[-3])
0x87d: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x87e: @ irand(Stack[-2], Stack[-3])
0x87f: Pop(0)
0x880: @@ get(Stack[-1], Stack[-2])
0x881: Pop(0)
0x882: PushEmpty(object, int, float, cvector, cvector)
0x883: Stack[-5] = Stack[-26]
0x884: Stack[-4] = Stack[-25]
0x885: Stack[-3] = Stack[-24]
0x886: Stack[-2] = Stack[-6]
0x887: Stack[-1] = -Stack[-14]; Pop(0);
0x888: Call2 0x891

0x889: Pop(5)
0x88a: Return(); Pop(18)

0x88b: Stack[-8] = 0
0x88c: PushEmpty(object)
0x88d: Stack[-1] = Stack[-22]
0x88e: Call2 0x821

0x88f: Pop(1)
0x890: Return(); Pop(18)

0x891: PushEmpty(object, object, object, object)
0x892: @ GetScene(Stack[-2])
0x893: Pop(0)
0x894: Push("scripted")
0x895: Push("blood_dir.xml")
0x896: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x897: Pop(2)
0x898: PushEmpty(object)
0x899: Stack[-1] = Stack[-10]
0x89a: Call2 0x821

0x89b: Pop(1)
0x89c: Return(); Pop(4)

0x89d: Stack[-1] = 0
0x89e: Stack[-2] = 0
0x89f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8a0: @@ GetPosition(Stack[-3])
0x8a1: Pop(0)
0x8a2: @ GetPosition(Stack[-2])
0x8a3: Pop(0)
0x8a4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x8a5: Push(CvectorIndex(Stack[-1], 0))
0x8a6: Push(CvectorIndex(Stack[-2], 2))
0x8a7: @ RotateAsync(Stack[-2], Stack[-1])
0x8a8: Pop(2)
0x8a9: Return(); Pop(6)

0x8aa: PushEmpty(bool, bool)
0x8ab: @ IsLoaded(Stack[-1])
0x8ac: Pop(0)
0x8ad: Stack[-3] = Stack[-1]
0x8ae: Return(); Pop(2)

0x8af: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8b0: @@ GetPosition(Stack[-8])
0x8b1: Pop(0)
0x8b2: @@ GetEyesHeight(Stack[-9])
0x8b3: Pop(0)
0x8b4: Push(CvectorIndex(Stack[-8], 1))
0x8b5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8b6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8b7: @ GetPosition(Stack[-7])
0x8b8: Pop(0)
0x8b9: @ GetEyesHeight(Stack[-9])
0x8ba: Pop(0)
0x8bb: Push(CvectorIndex(Stack[-7], 1))
0x8bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8bd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8be: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8bf: Push(CvectorIndex(Stack[-6], 1))
0x8c0: Stack[-1] = (int) 0
0x8c1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8c2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8c3: Pop(1); Push(Sqrt(Stack[-1]))
0x8c4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8c5: Stack[-5] = -Stack[-6]; Pop(0);
0x8c6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8c7: PushEmpty(cvector, cvector)
0x8c8: Push(CVector(0.0, 1.0, 0.0))
0x8c9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8ca: Call2 0x964

0x8cb: Pop(1)
0x8cc: Push((int) 25)
0x8cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8cf: Push(CVector(0.0, 10.0, 0.0))
0x8d0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8d1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8d2: @ IsOverrideActive(Stack[-2])
0x8d3: Pop(0)
0x8d4: Push(Stack[-2])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8d6: Stack[-21] = (bool) 0
0x8d7: Return(); Pop(18)

0x8d8: @ StopWorld()
0x8d9: Pop(0)
0x8da: @ CameraTransit(Stack[-3], Stack[-5])
0x8db: Pop(0)
0x8dc: Push(CvectorIndex(Stack[-4], 0))
0x8dd: Push(CvectorIndex(Stack[-5], 2))
0x8de: @ Rotate(Stack[-2], Stack[-1])
0x8df: Pop(2)
0x8e0: PushEmpty(bool)
0x8e1: Call2 0xa18

0x8e2: Pop(0)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e4: GOTO 0x8ed

0x8e5: Push("head")
0x8e6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8e7: Pop(1)
0x8e8: Push(Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8ea: Push("head")
0x8eb: @ LookAsyncCamera(Stack[-1])
0x8ec: Pop(1)
0x8ed: @ CameraWaitForPlayFinish()
0x8ee: Pop(0)
0x8ef: @ ResumeWorld()
0x8f0: Pop(0)
0x8f1: Stack[-21] = (bool) 1
0x8f2: Return(); Pop(18)

0x8f3: PushEmpty(bool, bool)
0x8f4: @ CameraSwitchToNormal()
0x8f5: Pop(0)
0x8f6: PushEmpty(bool)
0x8f7: Call2 0xa18

0x8f8: Pop(0)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8fa: GOTO 0x903

0x8fb: Push("head")
0x8fc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8fd: Pop(1)
0x8fe: Push(Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x900: Push("head")
0x901: @ UnlookAsync(Stack[-1])
0x902: Pop(1)
0x903: Return(); Pop(2)

0x904: PushEmpty(bool, float, float, bool, float, float)
0x905: @ lshHasAnimation(Stack[-3], Stack[-7])
0x906: Pop(0)
0x907: Push(Stack[-3])
0x908: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x909: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x90a: Pop(0)
0x90b: Push((bool) 0)
0x90c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(1)
0x90e: GOTO 0x913

0x90f: Push("Can't find lsh animation : ")
0x910: Pop(1); Push(Stack[-1] + Stack[-8]);
0x911: @ Trace(Stack[-1])
0x912: Pop(1)
0x913: Return(); Pop(6)

0x914: PushEmpty(bool, float, float, bool, float, float)
0x915: @ lshHasAnimation(Stack[-3], Stack[-8])
0x916: Pop(0)
0x917: Push(Stack[-3])
0x918: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x919: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x91a: Pop(0)
0x91b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x91c: Pop(0)
0x91d: GOTO 0x922

0x91e: Push("Can't find lsh animation : ")
0x91f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x920: @ Trace(Stack[-1])
0x921: Pop(1)
0x922: Return(); Pop(6)

0x923: PushEmpty(float, cvector, float, cvector)
0x924: @@ GetEyesHeight(Stack[-2])
0x925: Pop(0)
0x926: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x927: Push(CvectorIndex(Stack[-1], 1))
0x928: Stack[-1] = Stack[-3]
0x929: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x92a: Push("head")
0x92b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x92c: Pop(1)
0x92d: Return(); Pop(4)

0x92e: PushEmpty(bool)
0x92f: Call2 0xa18

0x930: Pop(0)
0x931: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x932: @ lshStopSpeech()
0x933: Pop(0)
0x934: Return(); Pop(0)

0x935: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x936: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x937: Pop(0)
0x938: Pop(0); Push((bool) Stack[-8] == 0)
0x939: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x93a: Stack[-7] = (int) 0
0x93b: Push((int) 1)
0x93c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x93d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x93e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x93f: Pop(1)
0x940: Pop(0); Push((bool) Stack[-6] == 0)
0x941: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x942: GOTO 0x946

0x943: Push((int) 1)
0x944: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x945: GOTO 0x93b

0x946: Pop(0); Push((bool) Stack[-7] == 0)
0x947: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x948: Return(); Pop(16)

0x949: @ irand(Stack[-5], Stack[-7])
0x94a: Pop(0)
0x94b: Push((int) 1)
0x94c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x94d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x94e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x94f: Pop(0)
0x950: Push(Stack[-4])
0x951: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x952: @ GetEyesHeight(Stack[-3])
0x953: Pop(0)
0x954: @ GetDirection(Stack[-2])
0x955: Pop(0)
0x956: Push((int) 50)
0x957: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x958: Push(CvectorIndex(Stack[-1], 1))
0x959: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x95a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x95b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x95c: Pop(0)
0x95d: Return(); Pop(16)

0x95e: PushEmpty(object, object)
0x95f: @ self(Stack[-1])
0x960: Pop(0)
0x961: Stack[-3] = Stack[-1]
0x962: Return(); Pop(2)

0x963: Stack[-1] = 0
0x964: PushEmpty(float, float)
0x965: Pop(0); Push(Stack[-3] | Stack[-3]);
0x966: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x967: Push((float)0.0)
0x968: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x969: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x96b: Return(); Pop(2)

0x96c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x96d: Return(); Pop(2)

0x96e: PushEmpty()
0x96f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x971: Stack[-3] = Stack[-2]
0x972: GOTO 0x974

0x973: Stack[-3] = Stack[-1]
0x974: Return(); Pop(0)

0x975: PushEmpty()
0x976: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: Stack[-4] = Stack[-2]
0x979: Return(); Pop(0)

0x97a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x97b: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x97c: Stack[-4] = Stack[-1]
0x97d: Return(); Pop(0)

0x97e: Stack[-4] = Stack[-3]
0x97f: Return(); Pop(0)

0x980: PushEmpty(int, int)
0x981: @ GetVariable(Stack[-3], Stack[-1])
0x982: Pop(0)
0x983: Stack[-4] = Stack[-1]
0x984: Return(); Pop(2)

0x985: PushEmpty(object, object)
0x986: @ CreateFloatVector(Stack[-1])
0x987: Pop(0)
0x988: @@ add(Stack[-3])
0x989: Pop(0)
0x98a: Push((int) 15)
0x98b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x98c: Pop(1)
0x98d: Return(); Pop(2)

0x98e: Stack[-1] = 0
0x98f: PushEmpty(object, object)
0x990: @ FindActor(Stack[-1], Stack[-4])
0x991: Pop(0)
0x992: Pop(0); Push((bool) Stack[-1] == 0)
0x993: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x994: Stack[-5] = (bool) 0
0x995: Return(); Pop(2)

0x996: @ Trigger(Stack[-1], Stack[-3])
0x997: Pop(0)
0x998: Stack[-5] = (bool) 1
0x999: Return(); Pop(2)

0x99a: Stack[-1] = 0
0x99b: PushEmpty(bool, bool)
0x99c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x99d: Pop(0)
0x99e: Push(Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x9a0: Push("attack")
0x9a1: @ PlayGlobalMusic(Stack[-1])
0x9a2: Pop(1)
0x9a3: Return(); Pop(2)

0x9a4: PushEmpty(object, object)
0x9a5: @ GetScene(Stack[-1])
0x9a6: Pop(0)
0x9a7: Push("battle")
0x9a8: PushEmpty(object)
0x9a9: Call2 0x95e

0x9aa: Pop(0)
0x9ab: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x9ac: Pop(2)
0x9ad: Return(); Pop(2)

0x9ae: Stack[-1] = 0
0x9af: PushEmpty()
0x9b0: PushEmpty(bool, string, string)
0x9b1: Stack[-2] = "quest_b5_01"
0x9b2: Stack[-1] = "butcher_attack"
0x9b3: Call2 0x98f

0x9b4: Pop(3)
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty()
0x9b7: Push("oob5Butcher1")
0x9b8: Push((int) 1)
0x9b9: @ SetVariable(Stack[-2], Stack[-1])
0x9ba: Pop(2)
0x9bb: Return(); Pop(0)

0x9bc: PushEmpty()
0x9bd: PushEmpty(int, string)
0x9be: Stack[-1] = "b5q01WifeDead"
0x9bf: Call2 0x980

0x9c0: Pop(1)
0x9c1: Push((int) 0)
0x9c2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c4: Stack[-2] = (bool) 1
0x9c5: Return(); Pop(0)

0x9c6: Stack[-2] = (bool) 0
0x9c7: Return(); Pop(0)

0x9c8: PushEmpty()
0x9c9: PushEmpty(int, string)
0x9ca: Stack[-1] = "oob5Butcher1"
0x9cb: Call2 0x980

0x9cc: Pop(1)
0x9cd: Push((int) 0)
0x9ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d0: Stack[-2] = (bool) 1
0x9d1: Return(); Pop(0)

0x9d2: Stack[-2] = (bool) 0
0x9d3: Return(); Pop(0)

0x9d4: PushEmpty(int, int)
0x9d5: Push("branch")
0x9d6: @ GetVariable(Stack[-1], Stack[-2])
0x9d7: Pop(1)
0x9d8: Push((int) 0)
0x9d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9da: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9db: Stack[-3] = (int) 1
0x9dc: Return(); Pop(2)

0x9dd: GOTO 0x9e3

0x9de: Push((int) 1)
0x9df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9e1: Stack[-3] = (int) 2
0x9e2: Return(); Pop(2)

0x9e3: Stack[-3] = (int) 3
0x9e4: Return(); Pop(2)

0x9e5: PushEmpty(int, int)
0x9e6: Push("branch")
0x9e7: @ GetVariable(Stack[-1], Stack[-2])
0x9e8: Pop(1)
0x9e9: Stack[-3] = Stack[-1]
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty()
0x9ec: PushEmpty(int)
0x9ed: Call2 0x9e5

0x9ee: Pop(0)
0x9ef: Push((int) 1)
0x9f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f2: @ WorkWithCorpse(Stack[-1])
0x9f3: Pop(0)
0x9f4: GOTO 0x9f7

0x9f5: @ Barter(Stack[-1])
0x9f6: Pop(0)
0x9f7: Return(); Pop(0)

0x9f8: PushEmpty(string, string)
0x9f9: Stack[-1] = "idle"
0x9fa: Push(Stack[-3])
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9fd: Stack[-4] = Stack[-1]
0x9fe: Return(); Pop(2)

0x9ff: PushEmpty(int, bool, int, bool)
0xa00: Stack[-2] = (int) 0
0xa01: Push("all")
0xa02: PushEmpty(string, int)
0xa03: Stack[-1] = Stack[-5]
0xa04: Call2 0x9f8

0xa05: Pop(1)
0xa06: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa07: Pop(2)
0xa08: Pop(0); Push((bool) Stack[-1] == 0)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa0a: GOTO 0xa0e

0xa0b: Push((int) 1)
0xa0c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa0d: GOTO 0xa01

0xa0e: Stack[-5] = Stack[-2]
0xa0f: Return(); Pop(4)

0xa10: Stack[-1] = (int) 515562
0xa11: Return(); Pop(0)

0xa12: Stack[-1] = (int) 503347
0xa13: Return(); Pop(0)

0xa14: Stack[-1] = "ui/NPC_Citizen1.png"
0xa15: Return(); Pop(0)

0xa16: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xa17: Return(); Pop(0)

0xa18: Stack[-1] = (bool) 0
0xa19: Return(); Pop(0)

0xa1a: PushEmpty(object, object)
0xa1b: @ GetScene(Stack[-1])
0xa1c: Pop(0)
0xa1d: PushEmpty(object)
0xa1e: Call2 0x95e

0xa1f: Pop(0)
0xa20: @@ RemoveStationaryActor(Stack[-1])
0xa21: Pop(1)
0xa22: PushEmpty(object)
0xa23: Stack[-1] = Stack[-4]
0xa24: Push(-1, 0); TaskCall(5)
0xa25: Call2 0x6d5

0xa26: Pop(-1, 0); TaskReturn
0xa27: Pop(1)
0xa28: Return(); Pop(2)

0xa29: Stack[-1] = 0
0xa2a: PushEmpty()
0xa2b: PushEmpty(object, int, float)
0xa2c: Stack[-3] = Stack[-7]
0xa2d: Stack[-2] = Stack[-6]
0xa2e: Stack[-1] = Stack[-5]
0xa2f: Call2 0x84d

0xa30: Pop(3)
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: PushEmpty(object, int, float, cvector, cvector)
0xa34: Stack[-5] = Stack[-11]
0xa35: Stack[-4] = Stack[-10]
0xa36: Stack[-3] = Stack[-9]
0xa37: Stack[-2] = Stack[-7]
0xa38: Stack[-1] = Stack[-6]
0xa39: Call2 0x891

0xa3a: Pop(5)
0xa3b: Return(); Pop(0)

0xa3c: PushEmpty(float, float)
0xa3d: Push("health")
0xa3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa40: Push("health")
0xa41: @ GetProperty(Stack[-1], Stack[-2])
0xa42: Pop(1)
0xa43: Push((int) 0)
0xa44: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa46: @ SignalDeath(Stack[-4])
0xa47: Pop(0)
0xa48: Return(); Pop(2)

0xa49: PushEmpty()
0xa4a: PushEmpty(object)
0xa4b: Stack[-1] = Stack[-2]
0xa4c: Call2 0xa1a

0xa4d: Pop(1)
0xa4e: Return(); Pop(0)

