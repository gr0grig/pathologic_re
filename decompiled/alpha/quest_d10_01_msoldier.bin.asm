GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 object 

Strings:
	SetNPCName
	SetPhoto
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
	shot
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	in
	attack
	quest_d10_01
	soldier_fight
	fire
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
	blood.xml
	fhit
	bhit
	hit_react
	2
	playing 
	start: 
	end: 
	ood10MSoldier1
	ood10MSoldier2
	ood10MSoldier3
	d10q01SoldierGotoPetr
	pt_d10q01_petr
	AddMark
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	add
	reputation
	Adding diary entry
	ui/NPC_Black.png

Import:
	Hold (0 args)
	StopGroup0 (0 args)
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
	SetRTEnvelope (2 args)
	WorkWithCorpse (1 args)
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
	Speak (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateObjectSet (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	ReportReputationChange (3 args)
	RemoveActor (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x411
RunTask = 6

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd5 Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x1a8 Vars = (object)
		EVENT_22 Op = 0x21d Vars = (object, int, float, float)
		EVENT_16 Op = 0x21f Vars = (object, string)
		EVENT_41 Op = 0x221 Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_41 Op = 0x243 Vars = (object)
		EVENT_3 Op = 0x24c Vars = (object)
		EVENT_4 Op = 0x255 Vars = (object)
		EVENT_17 Op = 0x261 Vars = (object)
		EVENT_30 Op = 0x275 Vars = (object, object)
		EVENT_1 Op = 0x281 Vars = (object)
		EVENT_7 Op = 0x28f Vars = (int)
	GTASK_5 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x31f Vars = (object)
		EVENT_1 Op = 0x32d Vars = (object)
		EVENT_17 Op = 0x39d Vars = (object)
		EVENT_30 Op = 0x3b5 Vars = (object, object)
	GTASK_6 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x3cc Vars = (object)
		EVENT_26 Op = 0x3d7 Vars = (string)
		EVENT_17 Op = 0x3e8 Vars = (object)
		EVENT_30 Op = 0x3ef Vars = (object, object)
		EVENT_6 Op = 0x3f1 Vars = ()
		EVENT_3 Op = 0x3fa Vars = (object)
		EVENT_1 Op = 0x41a Vars = (object)

Events:
EVENT_22 Op = 0x753 Vars = (object, int, float, float)
EVENT_16 Op = 0x75b Vars = (object, string)
EVENT_41 Op = 0x768 Vars = (object)
EVENT_6 Op = 0x7ed Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8: PushEmpty(bool, object)
0x9: Stack[-1] = Stack[-11]
0xa: Call 0x57b

0xb: Pop(1)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xe: Stack[-10] = (int) -2
0xf: Return(); Pop(8)

0x10: @ CreateDialog(Stack[-4])
0x11: Pop(0)
0x12: PushEmpty(int)
0x13: Call 0x80b

0x14: Pop(0)
0x15: @@ SetNPCName(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call 0x80d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(int)
0x1d: Call 0x6f2

0x1e: Pop(0)
0x1f: @@ SetPlayerName(Stack[-1])
0x20: Pop(1)
0x21: Stack[-2] = (int) -1
0x22: @ IsOverrideActive(Stack[-3])
0x23: Pop(0)
0x24: Push(Stack[-3])
0x25: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x26: Stack[-10] = (int) -2
0x27: Return(); Pop(8)

0x28: @ DoDialog(Stack[-4])
0x29: Pop(0)
0x2a: PushEmpty(object, object)
0x2b: Stack[-2] = Stack[-11]
0x2c: Stack[-1] = Stack[-6]
0x2d: Push(-2, 4); TaskCall(2)
0x2e: Call 0x45

0x2f: Pop(-2, 4); TaskReturn
0x30: Pop(2)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: Pop(0); Push((bool) Stack[-1] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: @ sync()
0x36: Pop(0)
0x37: @@ IsDialogEnd(Stack[-1])
0x38: Pop(0)
0x39: GOTO 0x33

0x3a: PushEmpty(object)
0x3b: Stack[-1] = Stack[-10]
0x3c: Call 0x5b3

0x3d: Pop(1)
0x3e: @ StopDialog(Stack[-4])
0x3f: Pop(0)
0x40: @@ GetReturnValue(Stack[-2])
0x41: Pop(0)
0x42: Stack[-10] = Stack[-2]
0x43: Return(); Pop(8)

0x44: Stack[-4] = 0
0x45: PushEmpty()
0x46: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x47: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x48: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49: Push((int) 1)
0x4a: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x4b: PushEmpty(bool, object)
0x4c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d: Call 0x672

0x4e: Pop(1)
0x4f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call 0x636

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call 0xc5

0x58: Pop(1)
0x59: Push((int) 15453)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 15454)
0x5f: Push((int) 16572)
0x60: Push((int) 16571)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0xa7

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call 0x67e

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call 0x63c

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call 0xc5

0x71: Pop(1)
0x72: Push((int) 15459)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 15460)
0x78: Push((int) -1)
0x79: Push((int) 16577)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0xa7

0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call 0x68a

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x82: PushEmpty(object, object)
0x83: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x85: Call 0x642

0x86: Pop(2)
0x87: PushEmpty(string)
0x88: Stack[-1] = "Neutral"
0x89: Call 0xc5

0x8a: Pop(1)
0x8b: Push((int) 15461)
0x8c: @@ SetMessage(Stack[-1])
0x8d: Pop(1)
0x8e: @@ ClearReplies()
0x8f: Pop(0)
0x90: Push((int) 15462)
0x91: Push((int) 16580)
0x92: Push((int) 16579)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: GOTO 0xa7

0x96: PushEmpty(string)
0x97: Stack[-1] = "Neutral"
0x98: Call 0xc5

0x99: Pop(1)
0x9a: Push((int) 15465)
0x9b: @@ SetMessage(Stack[-1])
0x9c: Pop(1)
0x9d: @@ ClearReplies()
0x9e: Pop(0)
0x9f: Push((int) 15466)
0xa0: Push((int) -1)
0xa1: Push((int) 16583)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: GOTO 0xa7

0xa5: Return(); Pop(0)

0xa6: GOTO 0x49

0xa7: PushEmpty(bool)
0xa8: Call 0x80f

0xa9: Pop(0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xab: @ lshWaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: PushEmpty(string)
0xb1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb2: Call 0x5b7

0xb3: Pop(1)
0xb4: GOTO 0xab

0xb5: GOTO 0xc4

0xb6: Push("all")
0xb7: Push("idle")
0xb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: @ WaitForAnimEnd()
0xbb: Pop(0)
0xbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: GOTO 0xc4

0xbf: Push("all")
0xc0: Push("idle")
0xc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: GOTO 0xba

0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty(bool)
0xc7: Call 0x80f

0xc8: Pop(0)
0xc9: Pop(1); Push((bool) Stack[-1] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Return(); Pop(0)

0xcc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = Stack[-2]
0xd1: Call 0x5b7

0xd2: Pop(1)
0xd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Push((int) 1)
0xd7: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0xd8: PushEmpty()
0xd9: Call 0x5c9

0xda: Pop(0)
0xdb: Push((int) 16575)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call 0x648

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call 0x662

0xe7: Pop(2)
0xe8: Push((int) 16583)
0xe9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call 0x65b

0xef: Pop(2)
0xf0: Push((int) 16570)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call 0x672

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call 0x636

0xfc: Pop(2)
0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral"
0xff: Call 0xc5

0x100: Pop(1)
0x101: Push((int) 15453)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 15454)
0x107: Push((int) 16572)
0x108: Push((int) 16571)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call 0x67e

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call 0x63c

0x115: Pop(2)
0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call 0xc5

0x119: Pop(1)
0x11a: Push((int) 15459)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 15460)
0x120: Push((int) -1)
0x121: Push((int) 16577)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call 0x68a

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call 0x642

0x12e: Pop(2)
0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call 0xc5

0x132: Pop(1)
0x133: Push((int) 15461)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 15462)
0x139: Push((int) 16580)
0x13a: Push((int) 16579)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral"
0x140: Call 0xc5

0x141: Pop(1)
0x142: Push((int) 15465)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 15466)
0x148: Push((int) -1)
0x149: Push((int) 16583)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 16580)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call 0xc5

0x153: Pop(1)
0x154: Push((int) 15463)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 15464)
0x15a: Push((int) -1)
0x15b: Push((int) 16581)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 16572)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call 0xc5

0x165: Pop(1)
0x166: Push((int) 15455)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 15456)
0x16c: Push((int) 16574)
0x16d: Push((int) 16573)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 16574)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call 0xc5

0x177: Pop(1)
0x178: Push((int) 15457)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 15458)
0x17e: Push((int) -1)
0x17f: Push((int) 16575)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x184: PushEmpty(bool)
0x185: Call 0x80f

0x186: Pop(0)
0x187: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x188: @ lshStopAnimation()
0x189: Pop(0)
0x18a: GOTO 0x18d

0x18b: @ StopAnimation()
0x18c: Pop(0)
0x18d: Return(); Pop(0)

0x18e: GOTO 0xd6

0x18f: Return(); Pop(0)

0x190: PushEmpty()
0x191: PushEmpty()
0x192: Call 0x721

0x193: Pop(0)
0x194: PushEmpty(object)
0x195: Stack[-1] = Stack[-2]
0x196: Call 0x199

0x197: Pop(1)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: EventDisable(0)
0x19b: PushEmpty(object)
0x19c: Stack[-1] = Stack[-2]
0x19d: Call 0x1b0

0x19e: Pop(1)
0x19f: Push((int) 50)
0x1a0: Push((int) 40)
0x1a1: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: EventEnable(0)
0x1a4: @ Hold()
0x1a5: Pop(0)
0x1a6: GOTO 0x1a4

0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(bool, bool)
0x1a9: @ IsOverrideActive(Stack[-1])
0x1aa: Pop(0)
0x1ab: Pop(0); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: @ WorkWithCorpse(Stack[-3])
0x1ae: Pop(0)
0x1af: Return(); Pop(2)

0x1b0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1b1: Pop(0); Push((bool) Stack[-21] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "fdie"
0x1b5: Call 0x207

0x1b6: Pop(1)
0x1b7: GOTO 0x206

0x1b8: @@ GetPosition(Stack[-10])
0x1b9: Pop(0)
0x1ba: @ GetPosition(Stack[-9])
0x1bb: Pop(0)
0x1bc: @ GetDirection(Stack[-8])
0x1bd: Pop(0)
0x1be: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x1bf: Push(CvectorIndex(Stack[-7], 0))
0x1c0: Push(CvectorIndex(Stack[-9], 0))
0x1c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1c2: Push(CvectorIndex(Stack[-8], 2))
0x1c3: Push(CvectorIndex(Stack[-10], 2))
0x1c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c6: Push((int) 0)
0x1c7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-6] = "fdie"
0x1ca: GOTO 0x1cc

0x1cb: Stack[-6] = "bdie"
0x1cc: @ RemoveRTEnvelope()
0x1cd: Pop(0)
0x1ce: @ SetDeathState()
0x1cf: Pop(0)
0x1d0: @ Stop()
0x1d1: Pop(0)
0x1d2: @ StopAsync()
0x1d3: Pop(0)
0x1d4: Stack[-5] = Stack[-21]
0x1d5: Push("GetScriptProperty")
0x1d6: Push((int) 2)
0x1d7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d9: Push("Owner")
0x1da: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x1db: Pop(1)
0x1dc: Push(Stack[-4])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: Push("Owner")
0x1df: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-5] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-5] = Stack[-21]
0x1e4: Push("@GetEyesHeight")
0x1e5: Push((int) 1)
0x1e6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e8: @@ GetEyesHeight(Stack[-2])
0x1e9: Pop(0)
0x1ea: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1eb: Push(CvectorIndex(Stack[-1], 1))
0x1ec: Stack[-1] = Stack[-3]
0x1ed: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1ee: Push("head")
0x1ef: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x1f0: Pop(1)
0x1f1: Stack[-3] = (bool) 1
0x1f2: GOTO 0x1f4

0x1f3: Stack[-3] = (bool) 0
0x1f4: Push("all")
0x1f5: @ PlayAnimation(Stack[-1], Stack[-7])
0x1f6: Pop(1)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: Push(Stack[-3])
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: @ StopAsync()
0x1fc: Pop(0)
0x1fd: Push("head")
0x1fe: @ UnlookAsync(Stack[-1])
0x1ff: Pop(1)
0x200: Push("all")
0x201: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x202: Pop(1)
0x203: @ RemoveEnvelope()
0x204: Pop(0)
0x205: Stack[-5] = 0
0x206: Return(); Pop(20)

0x207: PushEmpty()
0x208: @ RemoveRTEnvelope()
0x209: Pop(0)
0x20a: @ SetDeathState()
0x20b: Pop(0)
0x20c: @ Stop()
0x20d: Pop(0)
0x20e: @ StopAsync()
0x20f: Pop(0)
0x210: @ StopSecondaryAnimation()
0x211: Pop(0)
0x212: Push("all")
0x213: @ PlayAnimation(Stack[-1], Stack[-2])
0x214: Pop(1)
0x215: @ WaitForAnimEnd()
0x216: Pop(0)
0x217: Push("all")
0x218: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x219: Pop(1)
0x21a: @ RemoveEnvelope()
0x21b: Pop(0)
0x21c: Return(); Pop(0)

0x21d: PushEmpty()
0x21e: Return(); Pop(0)

0x21f: PushEmpty()
0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: Return(); Pop(0)

0x223: PushEmpty(bool, bool)
0x224: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x225: @ Face(Stack[-3])
0x226: Pop(0)
0x227: Push((float)0.5)
0x228: @ Sleep(Stack[-1], Stack[-2])
0x229: Pop(1)
0x22a: PushEmpty(bool)
0x22b: Stack[-1] = (bool) 1
0x22c: Pop(0); Push((bool) Stack[-2] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call 0x50e

0x231: Pop(1)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 0
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x238

0x237: GOTO 0x227

0x238: @ StopAsync()
0x239: Pop(0)
0x23a: Return(); Pop(2)

0x23b: @ StopAsync()
0x23c: Pop(0)
0x23d: Push((int) 100)
0x23e: @ KillTimer(Stack[-1])
0x23f: Pop(1)
0x240: @ StopGroup0()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: PushEmpty()
0x244: PushEmpty()
0x245: Call 0x23b

0x246: Pop(0)
0x247: PushEmpty(object)
0x248: Stack[-1] = Stack[-2]
0x249: Call 0x768

0x24a: Pop(1)
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: Push((int) 100)
0x250: @ KillTimer(Stack[-1])
0x251: Pop(1)
0x252: @ Face(Stack[-0])
0x253: Pop(0)
0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x257: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x258: Push((int) 100)
0x259: Push((float)3.0)
0x25a: @ SetTimer(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: PushEmpty(object)
0x25d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Call 0x569

0x25f: Pop(1)
0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[-3]
0x264: Call 0x50e

0x265: Pop(1)
0x266: Pop(1); Push((bool) Stack[-1] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: PushEmpty(object)
0x269: Stack[-1] = Stack[-2]
0x26a: Call 0x780

0x26b: Pop(1)
0x26c: Return(); Pop(0)

0x26d: PushEmpty()
0x26e: Call 0x23b

0x26f: Pop(0)
0x270: PushEmpty(object)
0x271: Stack[-1] = Stack[-2]
0x272: Call 0x78d

0x273: Pop(1)
0x274: Return(); Pop(0)

0x275: PushEmpty()
0x276: PushEmpty(bool, object, object)
0x277: Stack[-2] = Stack[-5]
0x278: Stack[-1] = Stack[-4]
0x279: Call 0x7b9

0x27a: Pop(2)
0x27b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27c: PushEmpty(object)
0x27d: Stack[-1] = Stack[-3]
0x27e: Call 0x261

0x27f: Pop(1)
0x280: Return(); Pop(0)

0x281: PushEmpty()
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[-3]
0x284: Call 0x79d

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x287: PushEmpty()
0x288: Call 0x23b

0x289: Pop(0)
0x28a: PushEmpty(object)
0x28b: Stack[-1] = Stack[-2]
0x28c: Call 0x7b3

0x28d: Pop(1)
0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: Push((int) 100)
0x291: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Return(); Pop(0)

0x294: Push((int) 100)
0x295: @ KillTimer(Stack[-1])
0x296: Pop(1)
0x297: @ StopGroup0()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(bool, bool, bool, bool)
0x29b: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x29c: @ Face(Stack[-0])
0x29d: Pop(0)
0x29e: Push(Stack[-5])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a0: Push("all")
0x2a1: Push("attack_on")
0x2a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: @ WaitForAnimEnd()
0x2a5: Pop(0)
0x2a6: Push("all")
0x2a7: Push("attack_on")
0x2a8: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: Push((bool) 1)
0x2ab: @ SetAttackState(Stack[-1])
0x2ac: Pop(1)
0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2af: Call 0x50e

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x2b2: @ CanSee(Stack[-1], Stack[-0])
0x2b3: Pop(0)
0x2b4: Push(Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b6: PushEmpty()
0x2b7: Call 0x343

0x2b8: Pop(0)
0x2b9: GOTO 0x309

0x2ba: PushEmpty(object)
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0x569

0x2bd: Pop(1)
0x2be: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2bf: Push("all")
0x2c0: Push("hunt")
0x2c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: @ WaitForAnimEnd(Stack[-2])
0x2c4: Pop(0)
0x2c5: Pop(0); Push((bool) Stack[-2] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c7: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c9: PushEmpty()
0x2ca: Call 0x33e

0x2cb: Pop(0)
0x2cc: Push("all")
0x2cd: Push("attack_on")
0x2ce: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: GOTO 0x2ad

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d3: Call 0x50e

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x313

0x2d8: @ CanSee(Stack[-1], Stack[-0])
0x2d9: Pop(0)
0x2da: Push(Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2dd: @ Face(Stack[-0])
0x2de: Pop(0)
0x2df: PushEmpty()
0x2e0: Call 0x343

0x2e1: Pop(0)
0x2e2: GOTO 0x309

0x2e3: Push("all")
0x2e4: Push("attack_on")
0x2e5: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2e6: Pop(2)
0x2e7: Push((int) 3)
0x2e8: @ Sleep(Stack[-1], Stack[-3])
0x2e9: Pop(1)
0x2ea: Pop(0); Push((bool) Stack[-2] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ec: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call 0x33e

0x2f0: Pop(0)
0x2f1: Push("all")
0x2f2: Push("attack_on")
0x2f3: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: GOTO 0x2ad

0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Call 0x50e

0x2f9: Pop(1)
0x2fa: Pop(1); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x313

0x2fd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2fe: @ CanSee(Stack[-1], Stack[-0])
0x2ff: Pop(0)
0x300: Push(Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: @ Face(Stack[-0])
0x303: Pop(0)
0x304: PushEmpty()
0x305: Call 0x343

0x306: Pop(0)
0x307: GOTO 0x309

0x308: GOTO 0x313

0x309: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x30a: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30b: PushEmpty()
0x30c: Call 0x33e

0x30d: Pop(0)
0x30e: GOTO 0x312

0x30f: Push((int) 2)
0x310: @ Sleep(Stack[-1])
0x311: Pop(1)
0x312: GOTO 0x2ad

0x313: Push((bool) 0)
0x314: @ SetAttackState(Stack[-1])
0x315: Pop(1)
0x316: @ StopAsync()
0x317: Pop(0)
0x318: Push("all")
0x319: Push("attack_off")
0x31a: @ PlayAnimation(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: @ WaitForAnimEnd()
0x31d: Pop(0)
0x31e: Return(); Pop(4)

0x31f: PushEmpty()
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 0
0x322: Push( Stack[2 + Tasks[-1].StackPointer] )
0x323: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x324: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[-1] = (bool) 1
0x327: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x328: PushEmpty(object)
0x329: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32a: Call 0x569

0x32b: Pop(1)
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: PushEmpty(bool)
0x32f: Stack[-1] = (bool) 0
0x330: Push( Stack[2 + Tasks[-1].StackPointer] )
0x331: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x332: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Stack[-1] = (bool) 1
0x335: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x336: Push("@Stop hunt")
0x337: @ Trace(Stack[-1])
0x338: Pop(1)
0x339: @ StopAnimation()
0x33a: Pop(0)
0x33b: @ StopGroup0()
0x33c: Pop(0)
0x33d: Return(); Pop(0)

0x33e: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x33f: Stack[1 + Tasks[-1].StackPointer] = 0
0x340: @ Face(Stack[-0])
0x341: Pop(0)
0x342: Return(); Pop(0)

0x343: PushEmpty(cvector, cvector, cvector, object, int, cvector, float, object, object, cvector, cvector, cvector, object, int, cvector, float, object, object)
0x344: @ ReportAttack(Stack[-0])
0x345: Pop(0)
0x346: @ GetDirection(Stack[-9])
0x347: Pop(0)
0x348: PushEmpty(cvector, object)
0x349: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34a: Call 0x483

0x34b: Stack[-10] = Stack[-2]
0x34c: Pop(2)
0x34d: PushEmpty(float, cvector, cvector)
0x34e: Stack[-2] = Stack[-12]
0x34f: Stack[-1] = Stack[-11]
0x350: Call 0x60f

0x351: Pop(2)
0x352: Push((float)0.96593)
0x353: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x355: Return(); Pop(18)

0x356: Push("all")
0x357: Push("attack_begin1")
0x358: @ PlayAnimation(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: @ WaitForAnimEnd()
0x35b: Pop(0)
0x35c: Push("shot")
0x35d: @ Speak(Stack[-1])
0x35e: Pop(1)
0x35f: @ GetDirection(Stack[-9])
0x360: Pop(0)
0x361: PushEmpty(cvector, object)
0x362: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x363: Call 0x483

0x364: Stack[-10] = Stack[-2]
0x365: Pop(2)
0x366: Push(CvectorIndex(Stack[-8], 1))
0x367: PushEmpty(float, object)
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call 0x574

0x36a: Pop(1)
0x36b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x36c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x36d: Push((float)0.2618)
0x36e: @ RandVecCone3D(Stack[-8], Stack[-9], Stack[-1])
0x36f: Pop(1)
0x370: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x371: Pop(0)
0x372: Pop(0); Push(( Stack[-6] != 0 )
0x373: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x374: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x375: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x376: PushEmpty(float, object, float, int)
0x377: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x378: Stack[-2] = (float) 1.5
0x379: Stack[-1] = (int) 0
0x37a: Call 0x4a5

0x37b: Stack[-7] = Stack[-4]
0x37c: Pop(4)
0x37d: Push((int) 2)
0x37e: Push((float)1.5)
0x37f: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x380: Pop(2)
0x381: GOTO 0x391

0x382: Push((int) -1)
0x383: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x385: @ GetScene(Stack[-2])
0x386: Pop(0)
0x387: Push("scripted")
0x388: Push(CVector(0.0, 0.0, 1.0))
0x389: Push("richochet.xml")
0x38a: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: Push("Material")
0x38d: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x38e: Pop(1)
0x38f: Stack[-1] = 0
0x390: Stack[-2] = 0
0x391: Push("all")
0x392: Push("attack_end1")
0x393: @ PlayAnimation(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: @ WaitForAnimEnd()
0x396: Pop(0)
0x397: Push("all")
0x398: Push("attack_on")
0x399: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: Return(); Pop(18)

0x39c: Stack[-6] = 0
0x39d: PushEmpty()
0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[-3]
0x3a0: Call 0x50e

0x3a1: Pop(1)
0x3a2: Pop(1); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Return(); Pop(0)

0x3a5: PushEmpty(object)
0x3a6: Stack[-1] = Stack[-2]
0x3a7: Call 0x780

0x3a8: Pop(1)
0x3a9: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[1 + Tasks[-1].StackPointer] = 0
0x3ac: GOTO 0x3b4

0x3ad: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3ae: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3af: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b0: @ StopAnimation()
0x3b1: Pop(0)
0x3b2: @ StopGroup0()
0x3b3: Pop(0)
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty()
0x3b6: PushEmpty(bool, object, object)
0x3b7: Stack[-2] = Stack[-5]
0x3b8: Stack[-1] = Stack[-4]
0x3b9: Call 0x7b9

0x3ba: Pop(2)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bc: PushEmpty(object)
0x3bd: Stack[-1] = Stack[-3]
0x3be: Call 0x39d

0x3bf: Pop(1)
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty()
0x3c2: PushEmpty()
0x3c3: Call 0x476

0x3c4: Pop(0)
0x3c5: PushEmpty(int, object)
0x3c6: Stack[-1] = Stack[-3]
0x3c7: Push(-2, 1); TaskCall(1)
0x3c8: Call 0x6

0x3c9: Pop(-2, 1); TaskReturn
0x3ca: Pop(2)
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty(bool, bool)
0x3cd: Push(GlobalVars[0])
0x3ce: @@ in(Stack[-2], Stack[-4])
0x3cf: Pop(1)
0x3d0: Pop(0); Push((bool) Stack[-1] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d2: PushEmpty(object)
0x3d3: Stack[-1] = Stack[-4]
0x3d4: Call 0x3c1

0x3d5: Pop(1)
0x3d6: Return(); Pop(2)

0x3d7: PushEmpty(object, object)
0x3d8: Push("attack")
0x3d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3db: PushEmpty(object)
0x3dc: Call 0x492

0x3dd: Stack[-2] = Stack[-1]
0x3de: Pop(1)
0x3df: PushEmpty()
0x3e0: Call 0x476

0x3e1: Pop(0)
0x3e2: PushEmpty(object)
0x3e3: Stack[-1] = Stack[-2]
0x3e4: Call 0x78d

0x3e5: Pop(1)
0x3e6: Stack[-1] = 0
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty()
0x3e9: PushEmpty(bool, string, string)
0x3ea: Stack[-2] = "quest_d10_01"
0x3eb: Stack[-1] = "soldier_fight"
0x3ec: Call 0x625

0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: Return(); Pop(0)

0x3f1: PushEmpty()
0x3f2: Call 0x476

0x3f3: Pop(0)
0x3f4: PushEmpty()
0x3f5: Push(-0, 0); TaskCall(0)
0x3f6: Call 0x0

0x3f7: Pop(-0, 0); TaskReturn
0x3f8: Pop(0)
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(bool, bool)
0x3fb: PushEmpty(bool, object)
0x3fc: Stack[-1] = Stack[-5]
0x3fd: Call 0x50e

0x3fe: Pop(1)
0x3ff: Pop(1); Push((bool) Stack[-1] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Return(); Pop(2)

0x402: Push(GlobalVars[0])
0x403: @@ in(Stack[-2], Stack[-4])
0x404: Pop(1)
0x405: Push(Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x407: PushEmpty()
0x408: Call 0x476

0x409: Pop(0)
0x40a: PushEmpty(object)
0x40b: Stack[-1] = Stack[-4]
0x40c: Push(-1, 1); TaskCall(4)
0x40d: Call 0x223

0x40e: Pop(-1, 1); TaskReturn
0x40f: Pop(1)
0x410: Return(); Pop(2)

0x411: PushEmpty()
0x412: Call 0x76e

0x413: Pop(0)
0x414: PushEmpty()
0x415: Call 0x428

0x416: Pop(0)
0x417: GOTO 0x414

0x418: Return(); Pop(0)

0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[-3]
0x41d: Call 0x79d

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x420: PushEmpty()
0x421: Call 0x476

0x422: Pop(0)
0x423: PushEmpty(object)
0x424: Stack[-1] = Stack[-2]
0x425: Call 0x7e1

0x426: Pop(1)
0x427: Return(); Pop(0)

0x428: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x429: @ GetPFPosition(Stack[-1])
0x42a: Pop(0)
0x42b: @ GetDirection(Stack[-0])
0x42c: Pop(0)
0x42d: Push((int) 60)
0x42e: @ irand(Stack[-5], Stack[-1])
0x42f: Pop(1)
0x430: Push((int) 30)
0x431: Pop(1); Push(Stack[-5] + Stack[-1]);
0x432: @ Sleep(Stack[-1], Stack[-4])
0x433: Pop(1)
0x434: Push(Stack[-3])
0x435: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x436: PushEmpty()
0x437: Call 0x419

0x438: Pop(0)
0x439: GOTO 0x474

0x43a: @ GetPFPosition(Stack[-2])
0x43b: Pop(0)
0x43c: PushEmpty(float, cvector, cvector)
0x43d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43e: Stack[-1] = Stack[-5]
0x43f: Call 0x5e0

0x440: Pop(2)
0x441: Push((int) 40000)
0x442: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x444: @ FindPathTo(Stack[-1], Stack[-1])
0x445: Pop(0)
0x446: Pop(0); Push(( Stack[-1] != 0 )
0x447: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x448: @ RotatePath(Stack[-1], Stack[-3])
0x449: Pop(0)
0x44a: Pop(0); Push((bool) Stack[-3] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: GOTO 0x473

0x44d: Push((bool) 0)
0x44e: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x44f: Pop(1)
0x450: Pop(0); Push((bool) Stack[-3] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x452: GOTO 0x473

0x453: Push(CvectorIndex(Stack[-0], 0))
0x454: Push(CvectorIndex(Stack[-0], 2))
0x455: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x456: Pop(2)
0x457: Pop(0); Push((bool) Stack[-3] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: GOTO 0x473

0x45a: @ WaitForAnimEnd(Stack[-3])
0x45b: Pop(0)
0x45c: Pop(0); Push((bool) Stack[-3] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45e: GOTO 0x473

0x45f: GOTO 0x474

0x460: GOTO 0x464

0x461: Push((int) 1)
0x462: @ Sleep(Stack[-1])
0x463: Pop(1)
0x464: Stack[-1] = 0
0x465: GOTO 0x473

0x466: Push(CvectorIndex(Stack[-0], 0))
0x467: Push(CvectorIndex(Stack[-0], 2))
0x468: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x469: Pop(2)
0x46a: Pop(0); Push((bool) Stack[-3] == 0)
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: GOTO 0x473

0x46d: @ WaitForAnimEnd(Stack[-3])
0x46e: Pop(0)
0x46f: Pop(0); Push((bool) Stack[-3] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x473

0x472: GOTO 0x474

0x473: GOTO 0x43a

0x474: GOTO 0x42d

0x475: Return(); Pop(8)

0x476: @ StopGroup0()
0x477: Pop(0)
0x478: @ Stop()
0x479: Pop(0)
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: Push((int) 1)
0x47d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-2] = "fire"
0x480: Return(); Pop(0)

0x481: Stack[-2] = "phys"
0x482: Return(); Pop(0)

0x483: PushEmpty(cvector, cvector, cvector, cvector)
0x484: @ GetPosition(Stack[-2])
0x485: Pop(0)
0x486: @@ GetPosition(Stack[-1])
0x487: Pop(0)
0x488: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x489: Return(); Pop(4)

0x48a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x48b: @ GetPosition(Stack[-3])
0x48c: Pop(0)
0x48d: @@ GetPosition(Stack[-2])
0x48e: Pop(0)
0x48f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x490: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x491: Return(); Pop(6)

0x492: PushEmpty(object, object)
0x493: Push("player")
0x494: @ FindActor(Stack[-2], Stack[-1])
0x495: Pop(1)
0x496: Stack[-3] = Stack[-1]
0x497: Return(); Pop(2)

0x498: Stack[-1] = 0
0x499: PushEmpty(bool, bool)
0x49a: Push("HasProperty")
0x49b: Push((int) 2)
0x49c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x49d: Pop(1); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-5] = (bool) 0
0x4a0: Return(); Pop(2)

0x4a1: @@ HasProperty(Stack[-3], Stack[-1])
0x4a2: Pop(0)
0x4a3: Stack[-5] = Stack[-1]
0x4a4: Return(); Pop(2)

0x4a5: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4a6: PushEmpty(bool, object, string)
0x4a7: Stack[-2] = Stack[-18]
0x4a8: Stack[-1] = "health"
0x4a9: Call 0x499

0x4aa: Pop(2)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-16] = (float) 0.0
0x4ae: Return(); Pop(12)

0x4af: PushEmpty(bool, object, string)
0x4b0: Stack[-2] = Stack[-18]
0x4b1: Stack[-1] = "armor"
0x4b2: Call 0x499

0x4b3: Pop(2)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-6] = (int) 0
0x4b7: GOTO 0x4bb

0x4b8: Push("armor")
0x4b9: @@ GetProperty(Stack[-1], Stack[-7])
0x4ba: Pop(1)
0x4bb: Push("armor_")
0x4bc: PushEmpty(string, int)
0x4bd: Stack[-1] = Stack[-16]
0x4be: Call 0x47b

0x4bf: Pop(1)
0x4c0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4c1: PushEmpty(bool, object, string)
0x4c2: Stack[-2] = Stack[-18]
0x4c3: Stack[-1] = Stack[-8]
0x4c4: Call 0x499

0x4c5: Pop(2)
0x4c6: Pop(1); Push((bool) Stack[-1] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-4] = (int) 0
0x4c9: GOTO 0x4cc

0x4ca: @@ GetProperty(Stack[-5], Stack[-4])
0x4cb: Pop(0)
0x4cc: PushEmpty(float, float, float)
0x4cd: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4ce: Push((float)100.0)
0x4cf: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4d0: Stack[-1] = (int) 1
0x4d1: Call 0x5e4

0x4d2: Stack[-6] = Stack[-3]
0x4d3: Pop(3)
0x4d4: Push("health")
0x4d5: @@ GetProperty(Stack[-1], Stack[-3])
0x4d6: Pop(1)
0x4d7: Push((int) 1)
0x4d8: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4d9: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4da: Push("health")
0x4db: PushEmpty(float, float, float, float)
0x4dc: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4dd: Stack[-2] = (int) 0
0x4de: Stack[-1] = (int) 1
0x4df: Call 0x5eb

0x4e0: Pop(3)
0x4e1: @@ SetProperty(Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: Stack[-16] = Stack[-1]
0x4e4: Return(); Pop(12)

0x4e5: PushEmpty(bool, bool)
0x4e6: @@ IsDead(Stack[-1])
0x4e7: Pop(0)
0x4e8: Stack[-4] = Stack[-1]
0x4e9: Return(); Pop(2)

0x4ea: PushEmpty(object, object, object, object)
0x4eb: Pop(0); Push((bool) Stack[-5] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-6] = (bool) 0
0x4ee: Return(); Pop(4)

0x4ef: PushEmpty(bool)
0x4f0: Stack[-1] = (bool) 0
0x4f1: Push("IsDead")
0x4f2: Push((int) 1)
0x4f3: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f5: PushEmpty(bool, object)
0x4f6: Stack[-1] = Stack[-8]
0x4f7: Call 0x4e5

0x4f8: Pop(1)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: Stack[-1] = (bool) 1
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-6] = (bool) 0
0x4fd: Return(); Pop(4)

0x4fe: @ GetScene(Stack[-2])
0x4ff: Pop(0)
0x500: Pop(0); Push((bool) Stack[-2] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-6] = (bool) 0
0x503: Return(); Pop(4)

0x504: @@ GetScene(Stack[-1])
0x505: Pop(0)
0x506: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-6] = (bool) 0
0x509: Return(); Pop(4)

0x50a: Stack[-6] = (bool) 1
0x50b: Return(); Pop(4)

0x50c: Stack[-1] = 0
0x50d: Stack[-2] = 0
0x50e: PushEmpty(int, int)
0x50f: PushEmpty(bool, object)
0x510: Stack[-1] = Stack[-5]
0x511: Call 0x4ea

0x512: Pop(1)
0x513: Pop(1); Push((bool) Stack[-1] == 0)
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-4] = (bool) 0
0x516: Return(); Pop(2)

0x517: PushEmpty(bool, object, string)
0x518: Stack[-2] = Stack[-6]
0x519: Stack[-1] = "noaccess"
0x51a: Call 0x499

0x51b: Pop(2)
0x51c: Pop(1); Push((bool) Stack[-1] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51e: Stack[-4] = (bool) 1
0x51f: Return(); Pop(2)

0x520: Push("noaccess")
0x521: @@ GetProperty(Stack[-1], Stack[-2])
0x522: Pop(1)
0x523: Push((int) 0)
0x524: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x525: Return(); Pop(2)

0x526: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x527: PushEmpty(bool)
0x528: Stack[-1] = (bool) 0
0x529: Push((int) 4)
0x52a: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52c: Push((int) 5)
0x52d: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: Stack[-1] = (bool) 1
0x530: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x531: @ GetScene(Stack[-10])
0x532: Pop(0)
0x533: @ GetPosition(Stack[-8])
0x534: Pop(0)
0x535: @ GetEyesHeight(Stack[-7])
0x536: Pop(0)
0x537: Push(CvectorIndex(Stack[-8], 1))
0x538: Push((int) 2)
0x539: Pop(1); Push(Stack[-9] / Stack[-1]);
0x53a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x53b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x53c: Push("scripted")
0x53d: Push(CVector(0.0, 0.0, 1.0))
0x53e: Push("blood.xml")
0x53f: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Stack[-9] = 0
0x542: Stack[-10] = 0
0x543: Pop(0); Push((bool) Stack[-23] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: Return(); Pop(20)

0x546: @ GetSecondaryAnimationType(Stack[-6])
0x547: Pop(0)
0x548: Push((int) 0)
0x549: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: Return(); Pop(20)

0x54c: @@ GetPosition(Stack[-5])
0x54d: Pop(0)
0x54e: @ GetPosition(Stack[-4])
0x54f: Pop(0)
0x550: @ GetDirection(Stack[-3])
0x551: Pop(0)
0x552: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x553: Push(CvectorIndex(Stack[-2], 0))
0x554: Push(CvectorIndex(Stack[-4], 0))
0x555: Pop(2); Push(Stack[-2] * Stack[-1]);
0x556: Push(CvectorIndex(Stack[-3], 2))
0x557: Push(CvectorIndex(Stack[-5], 2))
0x558: Pop(2); Push(Stack[-2] * Stack[-1]);
0x559: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55a: Push((int) 0)
0x55b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-1] = "fhit"
0x55e: GOTO 0x560

0x55f: Stack[-1] = "bhit"
0x560: Push("hit_react")
0x561: Push("1")
0x562: Pop(1); Push(Stack[-3] + Stack[-1]);
0x563: Push("2")
0x564: Pop(1); Push(Stack[-4] + Stack[-1]);
0x565: Push((int) -10)
0x566: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(4)
0x568: Return(); Pop(20)

0x569: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x56a: @@ GetPosition(Stack[-3])
0x56b: Pop(0)
0x56c: @ GetPosition(Stack[-2])
0x56d: Pop(0)
0x56e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x56f: Push(CvectorIndex(Stack[-1], 0))
0x570: Push(CvectorIndex(Stack[-2], 2))
0x571: @ RotateAsync(Stack[-2], Stack[-1])
0x572: Pop(2)
0x573: Return(); Pop(6)

0x574: PushEmpty(float, float, float, float)
0x575: @ GetEyesHeight(Stack[-2])
0x576: Pop(0)
0x577: @@ GetEyesHeight(Stack[-1])
0x578: Pop(0)
0x579: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x57a: Return(); Pop(4)

0x57b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x57c: @@ GetPosition(Stack[-7])
0x57d: Pop(0)
0x57e: @@ GetEyesHeight(Stack[-8])
0x57f: Pop(0)
0x580: Push(CvectorIndex(Stack[-7], 1))
0x581: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x582: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x583: @ GetPosition(Stack[-6])
0x584: Pop(0)
0x585: @ GetEyesHeight(Stack[-8])
0x586: Pop(0)
0x587: Push(CvectorIndex(Stack[-6], 1))
0x588: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x589: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x58a: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x58b: Push(CvectorIndex(Stack[-5], 1))
0x58c: Stack[-1] = (int) 0
0x58d: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x58e: Pop(0); Push(Stack[-5] | Stack[-5]);
0x58f: Pop(1); Push(Sqrt(Stack[-1]))
0x590: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x591: Stack[-4] = -Stack[-5]; Pop(0);
0x592: Push((int) 70)
0x593: Pop(1); Push(Stack[-6] * Stack[-1]);
0x594: PushEmpty(cvector, cvector)
0x595: Push(CVector(0.0, 1.0, 0.0))
0x596: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x597: Call 0x5d6

0x598: Pop(1)
0x599: Push((int) 25)
0x59a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59c: Push(CVector(0.0, 10.0, 0.0))
0x59d: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x59e: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x59f: @ IsOverrideActive(Stack[-1])
0x5a0: Pop(0)
0x5a1: Push(Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-18] = (bool) 0
0x5a4: Return(); Pop(16)

0x5a5: @ StopWorld()
0x5a6: Pop(0)
0x5a7: @ CameraTransit(Stack[-2], Stack[-4])
0x5a8: Pop(0)
0x5a9: Push(CvectorIndex(Stack[-3], 0))
0x5aa: Push(CvectorIndex(Stack[-4], 2))
0x5ab: @ Rotate(Stack[-2], Stack[-1])
0x5ac: Pop(2)
0x5ad: @ CameraWaitForPlayFinish()
0x5ae: Pop(0)
0x5af: @ ResumeWorld()
0x5b0: Pop(0)
0x5b1: Stack[-18] = (bool) 1
0x5b2: Return(); Pop(16)

0x5b3: PushEmpty()
0x5b4: @ CameraSwitchToNormal()
0x5b5: Pop(0)
0x5b6: Return(); Pop(0)

0x5b7: PushEmpty(float, float, float, float)
0x5b8: Push("playing ")
0x5b9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5ba: @ Trace(Stack[-1])
0x5bb: Pop(1)
0x5bc: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5bd: Pop(0)
0x5be: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x5bf: Pop(0)
0x5c0: Push("start: ")
0x5c1: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5c2: @ Trace(Stack[-1])
0x5c3: Pop(1)
0x5c4: Push("end: ")
0x5c5: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5c6: @ Trace(Stack[-1])
0x5c7: Pop(1)
0x5c8: Return(); Pop(4)

0x5c9: PushEmpty(bool)
0x5ca: Call 0x80f

0x5cb: Pop(0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: @ lshStopSpeech()
0x5ce: Pop(0)
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty(object, object)
0x5d1: @ self(Stack[-1])
0x5d2: Pop(0)
0x5d3: Stack[-3] = Stack[-1]
0x5d4: Return(); Pop(2)

0x5d5: Stack[-1] = 0
0x5d6: PushEmpty(float, float)
0x5d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5d9: Push((float)0.0)
0x5da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5dd: Return(); Pop(2)

0x5de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5df: Return(); Pop(2)

0x5e0: PushEmpty(cvector, cvector)
0x5e1: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5e2: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5e3: Return(); Pop(2)

0x5e4: PushEmpty()
0x5e5: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-3] = Stack[-2]
0x5e8: GOTO 0x5ea

0x5e9: Stack[-3] = Stack[-1]
0x5ea: Return(); Pop(0)

0x5eb: PushEmpty()
0x5ec: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-4] = Stack[-2]
0x5ef: Return(); Pop(0)

0x5f0: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: Stack[-4] = Stack[-1]
0x5f3: Return(); Pop(0)

0x5f4: Stack[-4] = Stack[-3]
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty(object, object)
0x5f7: @ CreateObjectSet(Stack[-1])
0x5f8: Pop(0)
0x5f9: Stack[-3] = Stack[-1]
0x5fa: Return(); Pop(2)

0x5fb: Stack[-1] = 0
0x5fc: PushEmpty()
0x5fd: Push(CvectorIndex(Stack[-2], 0))
0x5fe: Push(CvectorIndex(Stack[-2], 0))
0x5ff: Pop(2); Push(Stack[-2] * Stack[-1]);
0x600: Push(CvectorIndex(Stack[-3], 2))
0x601: Push(CvectorIndex(Stack[-3], 2))
0x602: Pop(2); Push(Stack[-2] * Stack[-1]);
0x603: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Push(CvectorIndex(Stack[-1], 0))
0x607: Push(CvectorIndex(Stack[-2], 0))
0x608: Pop(2); Push(Stack[-2] * Stack[-1]);
0x609: Push(CvectorIndex(Stack[-2], 2))
0x60a: Push(CvectorIndex(Stack[-3], 2))
0x60b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60d: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x60e: Return(); Pop(0)

0x60f: PushEmpty()
0x610: PushEmpty(float, cvector, cvector)
0x611: Stack[-2] = Stack[-5]
0x612: Stack[-1] = Stack[-4]
0x613: Call 0x5fc

0x614: Pop(2)
0x615: PushEmpty(float, cvector)
0x616: Stack[-1] = Stack[-5]
0x617: Call 0x605

0x618: Pop(1)
0x619: PushEmpty(float, cvector)
0x61a: Stack[-1] = Stack[-5]
0x61b: Call 0x605

0x61c: Pop(1)
0x61d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x61e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x61f: Return(); Pop(0)

0x620: PushEmpty(int, int)
0x621: @ GetVariable(Stack[-3], Stack[-1])
0x622: Pop(0)
0x623: Stack[-4] = Stack[-1]
0x624: Return(); Pop(2)

0x625: PushEmpty(object, object)
0x626: @ FindActor(Stack[-1], Stack[-4])
0x627: Pop(0)
0x628: Pop(0); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-5] = (bool) 0
0x62b: Return(); Pop(2)

0x62c: @ Trigger(Stack[-1], Stack[-3])
0x62d: Pop(0)
0x62e: Stack[-5] = (bool) 1
0x62f: Return(); Pop(2)

0x630: Stack[-1] = 0
0x631: PushEmpty(float, float)
0x632: @ GetGameTime(Stack[-1])
0x633: Pop(0)
0x634: Stack[-3] = Stack[-1]
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: Push("ood10MSoldier1")
0x638: Push((int) 1)
0x639: @ SetVariable(Stack[-2], Stack[-1])
0x63a: Pop(2)
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: Push("ood10MSoldier2")
0x63e: Push((int) 1)
0x63f: @ SetVariable(Stack[-2], Stack[-1])
0x640: Pop(2)
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: Push("ood10MSoldier3")
0x644: Push((int) 1)
0x645: @ SetVariable(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Return(); Pop(0)

0x648: PushEmpty(object, object)
0x649: PushEmpty(object)
0x64a: Call 0x6c0

0x64b: Stack[-2] = Stack[-1]
0x64c: Pop(1)
0x64d: Push("d10q01SoldierGotoPetr")
0x64e: Push("pt_d10q01_petr")
0x64f: Push((int) 1)
0x650: Push((int) 15467)
0x651: PushEmpty(float)
0x652: Call 0x631

0x653: Pop(0)
0x654: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(5)
0x656: PushEmpty()
0x657: Call 0x7fb

0x658: Pop(0)
0x659: Return(); Pop(2)

0x65a: Stack[-1] = 0
0x65b: PushEmpty()
0x65c: PushEmpty(bool, string, string)
0x65d: Stack[-2] = "quest_d10_01"
0x65e: Stack[-1] = "soldier_fight"
0x65f: Call 0x625

0x660: Pop(3)
0x661: Return(); Pop(0)

0x662: PushEmpty()
0x663: PushEmpty(object, string, float)
0x664: PushEmpty(object)
0x665: Call 0x6c0

0x666: Stack[-4] = Stack[-1]
0x667: Pop(1)
0x668: Stack[-2] = "pt_d10q01_petr"
0x669: Stack[-1] = (int) 2
0x66a: Call 0x6d1

0x66b: Pop(3)
0x66c: PushEmpty(object)
0x66d: Call 0x6c0

0x66e: Pop(0)
0x66f: @@ ShowMap(Stack[-1])
0x670: Pop(1)
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: PushEmpty(int, string)
0x674: Stack[-1] = "ood10MSoldier1"
0x675: Call 0x620

0x676: Pop(1)
0x677: Push((int) 0)
0x678: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: Stack[-2] = (bool) 1
0x67b: Return(); Pop(0)

0x67c: Stack[-2] = (bool) 0
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: PushEmpty(int, string)
0x680: Stack[-1] = "ood10MSoldier2"
0x681: Call 0x620

0x682: Pop(1)
0x683: Push((int) 0)
0x684: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-2] = (bool) 1
0x687: Return(); Pop(0)

0x688: Stack[-2] = (bool) 0
0x689: Return(); Pop(0)

0x68a: PushEmpty()
0x68b: PushEmpty(int, string)
0x68c: Stack[-1] = "ood10MSoldier3"
0x68d: Call 0x620

0x68e: Pop(1)
0x68f: Push((int) 0)
0x690: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-2] = (bool) 1
0x693: Return(); Pop(0)

0x694: Stack[-2] = (bool) 0
0x695: Return(); Pop(0)

0x696: PushEmpty(object, object)
0x697: @ GetDiaryRoot(Stack[-1])
0x698: Pop(0)
0x699: Pop(0); Push((bool) Stack[-1] == 0)
0x69a: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69b: Push("Can't retrieve diary root")
0x69c: @ Trace(Stack[-1])
0x69d: Pop(1)
0x69e: Stack[-3] = (bool) 0
0x69f: Return(); Pop(2)

0x6a0: Stack[-3] = Stack[-1]
0x6a1: Return(); Pop(2)

0x6a2: Stack[-1] = 0
0x6a3: PushEmpty(object, object, int, object, object, int)
0x6a4: PushEmpty(object)
0x6a5: Call 0x696

0x6a6: Stack[-4] = Stack[-1]
0x6a7: Pop(1)
0x6a8: @@ Find(Stack[-7], Stack[-2])
0x6a9: Pop(0)
0x6aa: Pop(0); Push((bool) Stack[-2] == 0)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6ac: Push("Can't find diary parent with id: ")
0x6ad: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ae: @ Trace(Stack[-1])
0x6af: Pop(1)
0x6b0: Stack[-9] = (bool) 0
0x6b1: Return(); Pop(6)

0x6b2: @@ AddChild(Stack[-8])
0x6b3: Pop(0)
0x6b4: Push("player_diary")
0x6b5: Push((int) 1)
0x6b6: @ SetVariable(Stack[-2], Stack[-1])
0x6b7: Pop(2)
0x6b8: @@ GetCategory(Stack[-1])
0x6b9: Pop(0)
0x6ba: @ SetDiarySection(Stack[-1])
0x6bb: Pop(0)
0x6bc: Stack[-9] = (bool) 0
0x6bd: Return(); Pop(6)

0x6be: Stack[-2] = 0
0x6bf: Stack[-3] = 0
0x6c0: PushEmpty(object, object, object, object)
0x6c1: @ GetMainOutdoorScene(Stack[-2])
0x6c2: Pop(0)
0x6c3: Pop(0); Push((bool) Stack[-2] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c5: Push("Can't find main outdoor scene")
0x6c6: @ Trace(Stack[-1])
0x6c7: Pop(1)
0x6c8: Stack[-1] = 0
0x6c9: Stack[-5] = Stack[-1]
0x6ca: Return(); Pop(4)

0x6cb: @@ GetMap(Stack[-1])
0x6cc: Pop(0)
0x6cd: Stack[-5] = Stack[-1]
0x6ce: Return(); Pop(4)

0x6cf: Stack[-1] = 0
0x6d0: Stack[-2] = 0
0x6d1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6d2: @ GetMainOutdoorScene(Stack[-2])
0x6d3: Pop(0)
0x6d4: Pop(0); Push((bool) Stack[-2] == 0)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d6: Push("Can't find main outdoor scene")
0x6d7: @ Trace(Stack[-1])
0x6d8: Pop(1)
0x6d9: Return(); Pop(8)

0x6da: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x6db: Pop(0)
0x6dc: Pop(0); Push((bool) Stack[-1] == 0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6de: Push("Warning: outdoor scene locator ")
0x6df: Pop(1); Push(Stack[-1] + Stack[-11]);
0x6e0: Push(" doesnt exist")
0x6e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e2: @ Trace(Stack[-1])
0x6e3: Pop(1)
0x6e4: @@ GetMap(Stack[-11])
0x6e5: Pop(0)
0x6e6: Pop(0); Push((bool) Stack[-11] == 0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e8: Push("Can't find map")
0x6e9: @ Trace(Stack[-1])
0x6ea: Pop(1)
0x6eb: Return(); Pop(8)

0x6ec: Push(CvectorIndex(Stack[-4], 0))
0x6ed: Push(CvectorIndex(Stack[-5], 2))
0x6ee: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x6ef: Pop(2)
0x6f0: Return(); Pop(8)

0x6f1: Stack[-2] = 0
0x6f2: PushEmpty(int, int)
0x6f3: Push("player")
0x6f4: @ GetVariable(Stack[-1], Stack[-2])
0x6f5: Pop(1)
0x6f6: Push((int) 0)
0x6f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f9: Stack[-3] = (int) 200001
0x6fa: Return(); Pop(2)

0x6fb: GOTO 0x701

0x6fc: Push((int) 1)
0x6fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: Stack[-3] = (int) 200002
0x700: Return(); Pop(2)

0x701: Stack[-3] = (int) 200003
0x702: Return(); Pop(2)

0x703: PushEmpty(int, int, int, bool, int, int, int, bool)
0x704: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x705: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x706: Push("GenerateMoney: iMin > iMax")
0x707: @ Trace(Stack[-1])
0x708: Pop(1)
0x709: Return(); Pop(8)

0x70a: Stack[-4] = (int) 0
0x70b: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x70c: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70d: Pop(0); Push(Stack[-9] - Stack[-10]);
0x70e: @ irand(Stack[-4], Stack[-1])
0x70f: Pop(1)
0x710: GOTO 0x715

0x711: Push((int) 0)
0x712: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x714: Return(); Pop(8)

0x715: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x716: Push((int) 0)
0x717: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x719: Return(); Pop(8)

0x71a: Push("Money")
0x71b: @ GetInvItemByName(Stack[-3], Stack[-1])
0x71c: Pop(1)
0x71d: Push((int) 0)
0x71e: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x71f: Pop(1)
0x720: Return(); Pop(8)

0x721: PushEmpty(int, bool, int, bool)
0x722: Push((int) 0)
0x723: @ ClearSubContainer(Stack[-1])
0x724: Pop(1)
0x725: PushEmpty(int, int)
0x726: Stack[-2] = (int) 500
0x727: Stack[-1] = (int) 1000
0x728: Call 0x703

0x729: Pop(2)
0x72a: Push((int) 4)
0x72b: @ irand(Stack[-3], Stack[-1])
0x72c: Pop(1)
0x72d: Push((int) 0)
0x72e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x72f: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x730: PushEmpty(int, string)
0x731: Stack[-1] = "rifle_ammo"
0x732: Call 0x746

0x733: Pop(1)
0x734: Push((int) 0)
0x735: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x736: Pop(2)
0x737: Push((int) 3)
0x738: @ irand(Stack[-3], Stack[-1])
0x739: Pop(1)
0x73a: Push((int) 0)
0x73b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73d: PushEmpty(int, string)
0x73e: Stack[-1] = "rusk"
0x73f: Call 0x746

0x740: Pop(1)
0x741: Push((int) 0)
0x742: Push((int) 1)
0x743: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x744: Pop(3)
0x745: Return(); Pop(4)

0x746: PushEmpty(int, int)
0x747: @ GetInvItemByName(Stack[-1], Stack[-3])
0x748: Pop(0)
0x749: Stack[-4] = Stack[-1]
0x74a: Return(); Pop(2)

0x74b: PushEmpty()
0x74c: PushEmpty(object)
0x74d: Stack[-1] = Stack[-2]
0x74e: Push(-1, 0); TaskCall(3)
0x74f: Call 0x190

0x750: Pop(-1, 0); TaskReturn
0x751: Pop(1)
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: PushEmpty(object, int, float)
0x755: Stack[-3] = Stack[-7]
0x756: Stack[-2] = Stack[-6]
0x757: Stack[-1] = Stack[-5]
0x758: Call 0x526

0x759: Pop(3)
0x75a: Return(); Pop(0)

0x75b: PushEmpty(float, float)
0x75c: Push("health")
0x75d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x75f: Push("health")
0x760: @ GetProperty(Stack[-1], Stack[-2])
0x761: Pop(1)
0x762: Push((int) 0)
0x763: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: @ SignalDeath(Stack[-4])
0x766: Pop(0)
0x767: Return(); Pop(2)

0x768: PushEmpty()
0x769: PushEmpty(object)
0x76a: Stack[-1] = Stack[-2]
0x76b: Call 0x7f5

0x76c: Pop(1)
0x76d: Return(); Pop(0)

0x76e: Push(GlobalVars[0])
0x76f: PushEmpty(object)
0x770: Call 0x5f6

0x771: Stack[-2] = Stack[-1]
0x772: Pop(1)
0x773: GlobalVars[0] = Stack[-1]; Pop(1)
0x774: Return(); Pop(0)

0x775: PushEmpty()
0x776: PushEmpty(object, bool)
0x777: Stack[-2] = Stack[-4]
0x778: Stack[-1] = Stack[-3]
0x779: Push(-2, 3); TaskCall(5)
0x77a: Call 0x29a

0x77b: Pop(-2, 3); TaskReturn
0x77c: Pop(2)
0x77d: @ ResetAAS()
0x77e: Pop(0)
0x77f: Return(); Pop(0)

0x780: PushEmpty(bool, bool)
0x781: Pop(0); Push((bool) Stack[-3] == 0)
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: Return(); Pop(2)

0x784: Push(GlobalVars[0])
0x785: @@ in(Stack[-2], Stack[-4])
0x786: Pop(1)
0x787: Pop(0); Push((bool) Stack[-1] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x789: Push(GlobalVars[0])
0x78a: @@ add(Stack[-4])
0x78b: Pop(1)
0x78c: Return(); Pop(2)

0x78d: PushEmpty()
0x78e: PushEmpty(object)
0x78f: Stack[-1] = Stack[-2]
0x790: Call 0x780

0x791: Pop(1)
0x792: PushEmpty(object, bool)
0x793: Stack[-2] = Stack[-3]
0x794: Stack[-1] = (bool) 1
0x795: Call 0x775

0x796: Pop(2)
0x797: Return(); Pop(0)

0x798: PushEmpty(bool, bool)
0x799: @ IsPlayerActor(Stack[-3], Stack[-1])
0x79a: Pop(0)
0x79b: Stack[-4] = Stack[-1]
0x79c: Return(); Pop(2)

0x79d: PushEmpty(bool, bool)
0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[-5]
0x7a0: Call 0x50e

0x7a1: Pop(1)
0x7a2: Pop(1); Push((bool) Stack[-1] == 0)
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a4: Stack[-4] = (bool) 0
0x7a5: Return(); Pop(2)

0x7a6: Push(GlobalVars[0])
0x7a7: @@ in(Stack[-2], Stack[-4])
0x7a8: Pop(1)
0x7a9: Push(Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-4] = (bool) 1
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty(bool, object)
0x7ae: Stack[-1] = Stack[-5]
0x7af: Call 0x798

0x7b0: Stack[-6] = Stack[-2]
0x7b1: Pop(2)
0x7b2: Return(); Pop(2)

0x7b3: PushEmpty()
0x7b4: PushEmpty(object)
0x7b5: Stack[-1] = Stack[-2]
0x7b6: Call 0x7e1

0x7b7: Pop(1)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty(float, bool, float, bool)
0x7ba: PushEmpty(bool, object, string)
0x7bb: Stack[-2] = Stack[-8]
0x7bc: Stack[-1] = "reputation"
0x7bd: Call 0x499

0x7be: Pop(2)
0x7bf: Pop(1); Push((bool) Stack[-1] == 0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: Stack[-7] = (bool) 0
0x7c2: Return(); Pop(4)

0x7c3: Push("reputation")
0x7c4: @@ GetProperty(Stack[-1], Stack[-3])
0x7c5: Pop(1)
0x7c6: Push((float)0.5)
0x7c7: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c9: Stack[-7] = (bool) 0
0x7ca: Return(); Pop(4)

0x7cb: @ CanSee(Stack[-1], Stack[-6])
0x7cc: Pop(0)
0x7cd: PushEmpty(bool)
0x7ce: Stack[-1] = (bool) 1
0x7cf: Push(Stack[-2])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d1: PushEmpty(float, object)
0x7d2: Stack[-1] = Stack[-9]
0x7d3: Call 0x48a

0x7d4: Pop(1)
0x7d5: Push((float)160000.0)
0x7d6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d8: Stack[-1] = (bool) 0
0x7d9: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7da: Push((float)-0.2)
0x7db: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7dc: Pop(1)
0x7dd: Stack[-7] = (bool) 1
0x7de: Return(); Pop(4)

0x7df: Stack[-7] = (bool) 0
0x7e0: Return(); Pop(4)

0x7e1: PushEmpty(bool, bool)
0x7e2: Push(GlobalVars[0])
0x7e3: @@ in(Stack[-2], Stack[-4])
0x7e4: Pop(1)
0x7e5: Push(Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e7: PushEmpty(object, bool)
0x7e8: Stack[-2] = Stack[-5]
0x7e9: Stack[-1] = (bool) 1
0x7ea: Call 0x775

0x7eb: Pop(2)
0x7ec: Return(); Pop(2)

0x7ed: PushEmpty(object)
0x7ee: Call 0x5d0

0x7ef: Pop(0)
0x7f0: @ RemoveActor(Stack[-1])
0x7f1: Pop(1)
0x7f2: @ Hold()
0x7f3: Pop(0)
0x7f4: Return(); Pop(0)

0x7f5: PushEmpty()
0x7f6: PushEmpty(object)
0x7f7: Stack[-1] = Stack[-2]
0x7f8: Call 0x74b

0x7f9: Pop(1)
0x7fa: Return(); Pop(0)

0x7fb: PushEmpty(object, object)
0x7fc: Push("Adding diary entry")
0x7fd: @ Trace(Stack[-1])
0x7fe: Pop(1)
0x7ff: Push((int) 188)
0x800: Push((int) 1)
0x801: Push((int) 15473)
0x802: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: PushEmpty(bool, object, int)
0x805: Stack[-2] = Stack[-4]
0x806: Stack[-1] = (int) 186
0x807: Call 0x6a3

0x808: Pop(3)
0x809: Return(); Pop(2)

0x80a: Stack[-1] = 0
0x80b: Stack[-1] = (int) 14841
0x80c: Return(); Pop(0)

0x80d: Stack[-1] = "ui/NPC_Black.png"
0x80e: Return(); Pop(0)

0x80f: Stack[-1] = (bool) 0
0x810: Return(); Pop(0)

