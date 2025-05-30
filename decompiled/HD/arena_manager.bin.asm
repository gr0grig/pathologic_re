GlobalVarCount = 2
	G_VAR_0 cvector 
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
	player
	head
	RemoveAllItems
	SelectWeapon
	pt_arena_player
	GetLocator
	pt_arena_enemy
	pers_butcher
	arena_fighter.xml
	pers_worker
	arena_spectator_worker.xml
	pt_arena_spectator1
	pt_arena_spectator2
	pers_unosha
	arena_spectator_unosha.xml
	pt_arena_spectator3
	pt_arena_spectator4
	arena_spectator_unosha2.xml
	pt_arena_spectator5
	pers_dohodyaga
	arena_spectator_dohodyaga.xml
	pt_arena_spectator6
	pers_boy
	arena_spectator_boy.xml
	pt_arena_spectator7
	IsDead
	pt_arena_return
	GetItemCount
	GetItem
	GetItemID
	Group
	IsItemSelected
	GetItemAmount
	RemoveItem
	Locator doesn't exist for arena spectator 
	AddStationaryActor
	add
	size
	get
	GetActor
	Remove
	clear
	GetPosition
	GetEyesHeight
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	Can't find lsh animation : 
	AddItem
	SelectItem
	noinv_drop
	nouse_container
	Category
	DropItems
	SetItemName
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	ooArenaManager1
	SetReturnValue
	blood is given
	blood
	playsound
	giveitem
	branch

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
	SetTimer (2 args)
	GetDirection (1 args)
	KillTimer (1 args)
	FindActor (2 args)
	UnlookAsync (1 args)
	irand (2 args)
	GetPFPosition (1 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	Stop (0 args)
	LockCamera (0 args)
	RotateAsync (2 args)
	CreateIntVector (1 args)
	GetScene (1 args)
	Teleport (4 args)
	AddActor (6 args)
	Rotate (2 args)
	UnlockCamera (0 args)
	RemoveActor (1 args)
	StopAsync (0 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	Trace (1 args)
	GetPosition (1 args)
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
	LookAsync (3 args)
	lshStopSpeech (0 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	SendWorldWndMessage (2 args)
	CreateInvItem (1 args)
	ModDarkenLevel (1 args)
	sync (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)

RunOp = 0x22e
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ea Vars = (int, int)
	GTASK_4 Vars = (cvector, cvector, bool, bool) Params = 0
		EVENT_0 Op = 0x246 Vars = (object)
		EVENT_7 Op = 0x26e Vars = (int)
	GTASK_5 Vars = (object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object) Params = 1


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x496

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x628

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x626

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x62a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x62c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x658

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
0x41: Call2 0x4db

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x64c

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x630

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 520512)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 520513)
0x64: Push((int) 21717)
0x65: Push((int) 21716)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 529946)
0x69: Push((int) 31329)
0x6a: Push((int) 31328)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 520519)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 520520)
0x78: Push((int) -1)
0x79: Push((int) 21723)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 520521)
0x7d: Push((int) -1)
0x7e: Push((int) 21724)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x62e

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x518

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x62e

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x528

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x58f

0xbd: Pop(0)
0xbe: Push((int) 21720)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x636

0xc5: Pop(2)
0xc6: Push((int) 21723)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x636

0xcd: Pop(2)
0xce: Push((int) 21715)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x64c

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x630

0xda: Pop(2)
0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0xa2

0xde: Pop(1)
0xdf: Push((int) 520512)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 520513)
0xe5: Push((int) 21717)
0xe6: Push((int) 21716)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 529946)
0xea: Push((int) 31329)
0xeb: Push((int) 31328)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0xa2

0xf2: Pop(1)
0xf3: Push((int) 520519)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 520520)
0xf9: Push((int) -1)
0xfa: Push((int) 21723)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 520521)
0xfe: Push((int) -1)
0xff: Push((int) 21724)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 31329)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 529947)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 529948)
0x110: Push((int) 21717)
0x111: Push((int) 31330)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 21717)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0xa2

0x11b: Pop(1)
0x11c: Push((int) 520514)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 520515)
0x122: Push((int) 21719)
0x123: Push((int) 21718)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 529949)
0x127: Push((int) 21719)
0x128: Push((int) 31332)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 21719)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0xa2

0x132: Pop(1)
0x133: Push((int) 520516)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 520517)
0x139: Push((int) -1)
0x13a: Push((int) 21720)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 520518)
0x13e: Push((int) -1)
0x13f: Push((int) 21721)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x144: PushEmpty(bool)
0x145: Call2 0x62e

0x146: Pop(0)
0x147: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x148: @ lshStopAnimation()
0x149: Pop(0)
0x14a: GOTO 0x14d

0x14b: @ StopAnimation()
0x14c: Pop(0)
0x14d: Return(); Pop(0)

0x14e: GOTO 0xb9

0x14f: Return(); Pop(0)

0x150: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x151: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x152: PushEmpty(bool, object, float)
0x153: Stack[-2] = Stack[-12]
0x154: Stack[-1] = (float) 110.0
0x155: Call2 0x496

0x156: Pop(2)
0x157: Pop(1); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x159: Stack[-10] = (int) -2
0x15a: Return(); Pop(8)

0x15b: @ CreateDialog(Stack[-4])
0x15c: Pop(0)
0x15d: PushEmpty(int)
0x15e: Call2 0x628

0x15f: Pop(0)
0x160: @@ SetNPCName(Stack[-1])
0x161: Pop(1)
0x162: PushEmpty(int)
0x163: Call2 0x626

0x164: Pop(0)
0x165: @@ SetNPCDescription(Stack[-1])
0x166: Pop(1)
0x167: PushEmpty(string)
0x168: Call2 0x62a

0x169: Pop(0)
0x16a: @@ SetPhoto(Stack[-1])
0x16b: Pop(1)
0x16c: PushEmpty(string)
0x16d: Call2 0x62c

0x16e: Pop(0)
0x16f: @@ SetPhoto2(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty(int)
0x172: Call2 0x658

0x173: Pop(0)
0x174: @@ SetPlayerName(Stack[-1])
0x175: Pop(1)
0x176: Stack[-2] = (int) -1
0x177: @ IsOverrideActive(Stack[-3])
0x178: Pop(0)
0x179: Push(Stack[-3])
0x17a: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17b: Stack[-10] = (int) -2
0x17c: Return(); Pop(8)

0x17d: @ DoDialog(Stack[-4])
0x17e: Pop(0)
0x17f: PushEmpty(object, object)
0x180: Stack[-2] = Stack[-11]
0x181: Stack[-1] = Stack[-6]
0x182: Push(-2, 4); TaskCall(3)
0x183: Call2 0x19a

0x184: Pop(-2, 4); TaskReturn
0x185: Pop(2)
0x186: @@ IsDialogEnd(Stack[-1])
0x187: Pop(0)
0x188: Pop(0); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: @ sync()
0x18b: Pop(0)
0x18c: @@ IsDialogEnd(Stack[-1])
0x18d: Pop(0)
0x18e: GOTO 0x188

0x18f: PushEmpty(object)
0x190: Stack[-1] = Stack[-10]
0x191: Call2 0x4db

0x192: Pop(1)
0x193: @ StopDialog(Stack[-4])
0x194: Pop(0)
0x195: @@ GetReturnValue(Stack[-2])
0x196: Pop(0)
0x197: Stack[-10] = Stack[-2]
0x198: Return(); Pop(8)

0x199: Stack[-4] = 0
0x19a: PushEmpty()
0x19b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x19c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x19d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19e: Push((int) 1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call2 0x1d4

0x1a3: Pop(1)
0x1a4: Push((int) 520523)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 520524)
0x1aa: Push((int) -1)
0x1ab: Push((int) 21727)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Push((int) 529950)
0x1af: Push((int) -1)
0x1b0: Push((int) 31334)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: GOTO 0x1b6

0x1b4: Return(); Pop(0)

0x1b5: GOTO 0x19e

0x1b6: PushEmpty(bool)
0x1b7: Call2 0x62e

0x1b8: Pop(0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1ba: @ lshWaitForAnimEnd()
0x1bb: Pop(0)
0x1bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: GOTO 0x1c4

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1c1: Call2 0x518

0x1c2: Pop(1)
0x1c3: GOTO 0x1ba

0x1c4: GOTO 0x1d3

0x1c5: Push("all")
0x1c6: Push("idle")
0x1c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c8: Pop(2)
0x1c9: @ WaitForAnimEnd()
0x1ca: Pop(0)
0x1cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1d3

0x1ce: Push("all")
0x1cf: Push("idle")
0x1d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: GOTO 0x1c9

0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: PushEmpty(bool)
0x1d6: Call2 0x62e

0x1d7: Pop(0)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Return(); Pop(0)

0x1db: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Return(); Pop(0)

0x1de: PushEmpty(string, bool)
0x1df: Stack[-2] = Stack[-3]
0x1e0: Push("")
0x1e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e3: Stack[-1] = (bool) 0
0x1e4: GOTO 0x1e6

0x1e5: Stack[-1] = (bool) 1
0x1e6: Call2 0x528

0x1e7: Pop(2)
0x1e8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: Push((int) 1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x58f

0x1ef: Pop(0)
0x1f0: Push((int) 21727)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f3: PushEmpty(object, object)
0x1f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f6: Call2 0x63b

0x1f7: Pop(2)
0x1f8: PushEmpty(object, object)
0x1f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fb: Call2 0x646

0x1fc: Pop(2)
0x1fd: Push((int) 31334)
0x1fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call2 0x63b

0x204: Pop(2)
0x205: PushEmpty(object, object)
0x206: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x646

0x209: Pop(2)
0x20a: Push((int) 21726)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0x1d4

0x210: Pop(1)
0x211: Push((int) 520523)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 520524)
0x217: Push((int) -1)
0x218: Push((int) 21727)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 529950)
0x21c: Push((int) -1)
0x21d: Push((int) 31334)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x222: PushEmpty(bool)
0x223: Call2 0x62e

0x224: Pop(0)
0x225: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x226: @ lshStopAnimation()
0x227: Pop(0)
0x228: GOTO 0x22b

0x229: @ StopAnimation()
0x22a: Pop(0)
0x22b: Return(); Pop(0)

0x22c: GOTO 0x1eb

0x22d: Return(); Pop(0)

0x22e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22f: Push(GlobalVars[1])
0x230: Stack[-1] = (bool) 0
0x231: GlobalVars[1] = Stack[-1]; Pop(1)
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x233: Push(GlobalVars[0])
0x234: PushEmpty(cvector)
0x235: Call2 0x241

0x236: Stack[-2] = Stack[-1]
0x237: Pop(1)
0x238: GlobalVars[0] = Stack[-1]; Pop(1)
0x239: Push((int) 10)
0x23a: Push((float)0.75)
0x23b: @ SetTimer(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: PushEmpty()
0x23e: Call2 0x2ad

0x23f: Pop(0)
0x240: Return(); Pop(0)

0x241: PushEmpty(cvector, cvector)
0x242: @ GetDirection(Stack[-1])
0x243: Pop(0)
0x244: Stack[-3] = Stack[-1]
0x245: Return(); Pop(2)

0x246: PushEmpty()
0x247: PushEmpty()
0x248: Call2 0x28f

0x249: Pop(0)
0x24a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24c: PushEmpty(int, object)
0x24d: Stack[-1] = Stack[-3]
0x24e: Push(-2, 1); TaskCall(2)
0x24f: Call2 0x150

0x250: Pop(-2, 1); TaskReturn
0x251: Pop(2)
0x252: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x253: Return(); Pop(0)

0x254: GOTO 0x25f

0x255: Push((int) 1)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-4]
0x258: Push(-2, 1); TaskCall(0)
0x259: Call2 0x0

0x25a: Pop(-2, 1); TaskReturn
0x25b: Pop(1)
0x25c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Return(); Pop(0)

0x25f: Push((int) 10)
0x260: @ KillTimer(Stack[-1])
0x261: Pop(1)
0x262: PushEmpty(object)
0x263: Stack[-1] = Stack[-2]
0x264: Push(-1, 16); TaskCall(5)
0x265: Call2 0x307

0x266: Pop(-1, 16); TaskReturn
0x267: Pop(1)
0x268: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x269: Push((int) 10)
0x26a: Push((float)0.75)
0x26b: @ SetTimer(Stack[-2], Stack[-1])
0x26c: Pop(2)
0x26d: Return(); Pop(0)

0x26e: PushEmpty(object, object)
0x26f: Push((int) 10)
0x270: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x272: Push("player")
0x273: @ FindActor(Stack[-2], Stack[-1])
0x274: Pop(1)
0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[-3]
0x277: Call2 0x669

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27a: Push(GlobalVars[1])
0x27b: Pop(1); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27d: PushEmpty(object)
0x27e: Stack[-1] = Stack[-2]
0x27f: Call2 0x584

0x280: Pop(1)
0x281: Push(GlobalVars[1])
0x282: Stack[-1] = (bool) 1
0x283: GlobalVars[1] = Stack[-1]; Pop(1)
0x284: GOTO 0x28d

0x285: Push(GlobalVars[1])
0x286: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x287: Push("head")
0x288: @ UnlookAsync(Stack[-1])
0x289: Pop(1)
0x28a: Push(GlobalVars[1])
0x28b: Stack[-1] = (bool) 0
0x28c: GlobalVars[1] = Stack[-1]; Pop(1)
0x28d: Stack[-1] = 0
0x28e: Return(); Pop(2)

0x28f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x290: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x291: @ StopAnimation()
0x292: Pop(0)
0x293: GOTO 0x297

0x294: PushEmpty()
0x295: Call2 0x301

0x296: Pop(0)
0x297: Return(); Pop(0)

0x298: PushEmpty(int, int, int, int)
0x299: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x29a: PushEmpty(int)
0x29b: Call2 0x615

0x29c: Stack[-3] = Stack[-1]
0x29d: Pop(1)
0x29e: Push(Stack[-2])
0x29f: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a0: @ irand(Stack[-1], Stack[-2])
0x2a1: Pop(0)
0x2a2: Push("all")
0x2a3: PushEmpty(string, int)
0x2a4: Stack[-1] = Stack[-4]
0x2a5: Call2 0x60e

0x2a6: Pop(1)
0x2a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: @ WaitForAnimEnd()
0x2aa: Pop(0)
0x2ab: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ac: Return(); Pop(4)

0x2ad: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x2ae: @ GetPFPosition(Stack[-1])
0x2af: Pop(0)
0x2b0: @ GetDirection(Stack[-0])
0x2b1: Pop(0)
0x2b2: PushEmpty()
0x2b3: Call2 0x306

0x2b4: Pop(0)
0x2b5: Push((int) 10)
0x2b6: @ irand(Stack[-5], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push((int) 5)
0x2b9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ba: @ Sleep(Stack[-1], Stack[-4])
0x2bb: Pop(1)
0x2bc: Push(Stack[-3])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2be: PushEmpty()
0x2bf: Call2 0x298

0x2c0: Pop(0)
0x2c1: GOTO 0x2ff

0x2c2: PushEmpty()
0x2c3: Call2 0x306

0x2c4: Pop(0)
0x2c5: @ GetPFPosition(Stack[-2])
0x2c6: Pop(0)
0x2c7: PushEmpty(float, cvector, cvector)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[-5]
0x2ca: Call2 0x5a0

0x2cb: Pop(2)
0x2cc: Push((int) 40000)
0x2cd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2cf: @ FindPathTo(Stack[-1], Stack[-1])
0x2d0: Pop(0)
0x2d1: Pop(0); Push(( Stack[-1] != 0 )
0x2d2: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2d3: @ RotatePath(Stack[-1], Stack[-3])
0x2d4: Pop(0)
0x2d5: Pop(0); Push((bool) Stack[-3] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2fe

0x2d8: Push((bool) 0)
0x2d9: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x2da: Pop(1)
0x2db: Pop(0); Push((bool) Stack[-3] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2fe

0x2de: Push(CvectorIndex(Stack[-0], 0))
0x2df: Push(CvectorIndex(Stack[-0], 2))
0x2e0: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x2e1: Pop(2)
0x2e2: Pop(0); Push((bool) Stack[-3] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2fe

0x2e5: @ WaitForAnimEnd(Stack[-3])
0x2e6: Pop(0)
0x2e7: Pop(0); Push((bool) Stack[-3] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x2fe

0x2ea: GOTO 0x2ff

0x2eb: GOTO 0x2ef

0x2ec: Push((int) 1)
0x2ed: @ Sleep(Stack[-1])
0x2ee: Pop(1)
0x2ef: Stack[-1] = 0
0x2f0: GOTO 0x2fe

0x2f1: Push(CvectorIndex(Stack[-0], 0))
0x2f2: Push(CvectorIndex(Stack[-0], 2))
0x2f3: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x2f4: Pop(2)
0x2f5: Pop(0); Push((bool) Stack[-3] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x2fe

0x2f8: @ WaitForAnimEnd(Stack[-3])
0x2f9: Pop(0)
0x2fa: Pop(0); Push((bool) Stack[-3] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x2fe

0x2fd: GOTO 0x2ff

0x2fe: GOTO 0x2c2

0x2ff: GOTO 0x2b2

0x300: Return(); Pop(8)

0x301: @ StopGroup0()
0x302: Pop(0)
0x303: @ Stop()
0x304: Pop(0)
0x305: Return(); Pop(0)

0x306: Return(); Pop(0)

0x307: PushEmpty(cvector, int, object, cvector, cvector, cvector, cvector, bool, object, bool, cvector, cvector, cvector, int, object, cvector, cvector, cvector, cvector, bool, object, bool, cvector, cvector)
0x308: PushEmpty(object)
0x309: Call2 0x5a4

0x30a: Stack[15 + Tasks[-1].StackPointer] = Stack[-1]
0x30b: Pop(1)
0x30c: PushEmpty(object)
0x30d: Stack[-1] = Stack[-26]
0x30e: Call2 0x4ed

0x30f: Pop(1)
0x310: PushEmpty()
0x311: Call2 0x5bc

0x312: Pop(0)
0x313: PushEmpty()
0x314: Call2 0x5c8

0x315: Pop(0)
0x316: Push(GlobalVars[0])
0x317: Stack[-13] = Stack[-1]
0x318: Pop(1)
0x319: @ LockCamera()
0x31a: Pop(0)
0x31b: Push(CvectorIndex(Stack[-12], 0))
0x31c: Pop(1); Push(( -Stack[-1])
0x31d: Push(CvectorIndex(Stack[-13], 2))
0x31e: Pop(1); Push(( -Stack[-1])
0x31f: @ RotateAsync(Stack[-2], Stack[-1])
0x320: Pop(2)
0x321: PushEmpty(float, float, float)
0x322: Stack[-3] = (int) 0
0x323: Stack[-2] = (int) 1
0x324: Stack[-1] = (float) 0.75
0x325: Call2 0x5fa

0x326: Pop(3)
0x327: @ CreateIntVector(Stack[-1])
0x328: Pop(0)
0x329: @ CreateIntVector(Stack[-3])
0x32a: Pop(0)
0x32b: @ CreateIntVector(Stack[-5])
0x32c: Pop(0)
0x32d: @ CreateIntVector(Stack[-7])
0x32e: Pop(0)
0x32f: @ CreateIntVector(Stack[-9])
0x330: Pop(0)
0x331: PushEmpty(object, object, int, object)
0x332: Stack[-3] = Stack[-29]
0x333: Stack[-2] = (int) 0
0x334: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x335: Call2 0x537

0x336: Stack[0 + Tasks[-1].StackPointer] = Stack[-4]
0x337: Pop(4)
0x338: PushEmpty(object, object, int, object)
0x339: Stack[-3] = Stack[-29]
0x33a: Stack[-2] = (int) 1
0x33b: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x33c: Call2 0x537

0x33d: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0x33e: Pop(4)
0x33f: PushEmpty(object, object, int, object)
0x340: Stack[-3] = Stack[-29]
0x341: Stack[-2] = (int) 2
0x342: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x343: Call2 0x537

0x344: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x345: Pop(4)
0x346: PushEmpty(object, object, int, object)
0x347: Stack[-3] = Stack[-29]
0x348: Stack[-2] = (int) 3
0x349: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0x34a: Call2 0x537

0x34b: Stack[6 + Tasks[-1].StackPointer] = Stack[-4]
0x34c: Pop(4)
0x34d: PushEmpty(object, object, int, object)
0x34e: Stack[-3] = Stack[-29]
0x34f: Stack[-2] = (int) 4
0x350: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x351: Call2 0x537

0x352: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0x353: Pop(4)
0x354: PushEmpty(object, object, int)
0x355: Stack[-2] = Stack[-28]
0x356: Stack[-1] = (int) 0
0x357: Call2 0x550

0x358: Stack[10 + Tasks[-1].StackPointer] = Stack[-3]
0x359: Pop(3)
0x35a: PushEmpty(object, object, int)
0x35b: Stack[-2] = Stack[-28]
0x35c: Stack[-1] = (int) 1
0x35d: Call2 0x550

0x35e: Stack[11 + Tasks[-1].StackPointer] = Stack[-3]
0x35f: Pop(3)
0x360: PushEmpty(object, object, int)
0x361: Stack[-2] = Stack[-28]
0x362: Stack[-1] = (int) 2
0x363: Call2 0x550

0x364: Stack[12 + Tasks[-1].StackPointer] = Stack[-3]
0x365: Pop(3)
0x366: PushEmpty(object, object, int)
0x367: Stack[-2] = Stack[-28]
0x368: Stack[-1] = (int) 3
0x369: Call2 0x550

0x36a: Stack[13 + Tasks[-1].StackPointer] = Stack[-3]
0x36b: Pop(3)
0x36c: PushEmpty(object, object, int)
0x36d: Stack[-2] = Stack[-28]
0x36e: Stack[-1] = (int) 4
0x36f: Call2 0x550

0x370: Stack[14 + Tasks[-1].StackPointer] = Stack[-3]
0x371: Pop(3)
0x372: PushEmpty(object)
0x373: Stack[-1] = Stack[-26]
0x374: Call2 0x438

0x375: Pop(1)
0x376: Stack[-11] = (int) 1
0x377: Push((int) 5)
0x378: Pop(1); Push((bool) Stack[-12] < Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: @@ RemoveAllItems(Stack[-11])
0x37b: Pop(0)
0x37c: Push((int) 1)
0x37d: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x37e: GOTO 0x377

0x37f: @@ SelectWeapon()
0x380: Pop(0)
0x381: @ GetScene(Stack[-10])
0x382: Pop(0)
0x383: Push("pt_arena_player")
0x384: @@ GetLocator(Stack[-1], Stack[-6], Stack[-10], Stack[-9])
0x385: Pop(1)
0x386: Push("pt_arena_enemy")
0x387: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0x388: Pop(1)
0x389: @ Teleport(Stack[-25], Stack[-10], Stack[-9], Stack[-8])
0x38a: Pop(0)
0x38b: Push("pers_butcher")
0x38c: Push("arena_fighter.xml")
0x38d: @ AddActor(Stack[-6], Stack[-2], Stack[-12], Stack[-9], Stack[-8], Stack[-1])
0x38e: Pop(2)
0x38f: PushEmpty(object, string, string, string)
0x390: Stack[-4] = Stack[-14]
0x391: Stack[-3] = "pers_worker"
0x392: Stack[-2] = "arena_spectator_worker.xml"
0x393: Stack[-1] = "pt_arena_spectator1"
0x394: Call2 0x465

0x395: Pop(4)
0x396: PushEmpty(object, string, string, string)
0x397: Stack[-4] = Stack[-14]
0x398: Stack[-3] = "pers_worker"
0x399: Stack[-2] = "arena_spectator_worker.xml"
0x39a: Stack[-1] = "pt_arena_spectator2"
0x39b: Call2 0x465

0x39c: Pop(4)
0x39d: PushEmpty(object, string, string, string)
0x39e: Stack[-4] = Stack[-14]
0x39f: Stack[-3] = "pers_unosha"
0x3a0: Stack[-2] = "arena_spectator_unosha.xml"
0x3a1: Stack[-1] = "pt_arena_spectator3"
0x3a2: Call2 0x465

0x3a3: Pop(4)
0x3a4: PushEmpty(object, string, string, string)
0x3a5: Stack[-4] = Stack[-14]
0x3a6: Stack[-3] = "pers_unosha"
0x3a7: Stack[-2] = "arena_spectator_unosha.xml"
0x3a8: Stack[-1] = "pt_arena_spectator4"
0x3a9: Call2 0x465

0x3aa: Pop(4)
0x3ab: PushEmpty(object, string, string, string)
0x3ac: Stack[-4] = Stack[-14]
0x3ad: Stack[-3] = "pers_unosha"
0x3ae: Stack[-2] = "arena_spectator_unosha2.xml"
0x3af: Stack[-1] = "pt_arena_spectator5"
0x3b0: Call2 0x465

0x3b1: Pop(4)
0x3b2: PushEmpty(object, string, string, string)
0x3b3: Stack[-4] = Stack[-14]
0x3b4: Stack[-3] = "pers_dohodyaga"
0x3b5: Stack[-2] = "arena_spectator_dohodyaga.xml"
0x3b6: Stack[-1] = "pt_arena_spectator6"
0x3b7: Call2 0x465

0x3b8: Pop(4)
0x3b9: PushEmpty(object, string, string, string)
0x3ba: Stack[-4] = Stack[-14]
0x3bb: Stack[-3] = "pers_boy"
0x3bc: Stack[-2] = "arena_spectator_boy.xml"
0x3bd: Stack[-1] = "pt_arena_spectator7"
0x3be: Call2 0x465

0x3bf: Pop(4)
0x3c0: Push(CvectorIndex(Stack[-12], 0))
0x3c1: Pop(1); Push(( -Stack[-1])
0x3c2: Push(CvectorIndex(Stack[-13], 2))
0x3c3: Pop(1); Push(( -Stack[-1])
0x3c4: @ Rotate(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: PushEmpty(object)
0x3c7: Stack[-1] = Stack[-26]
0x3c8: Call2 0x584

0x3c9: Pop(1)
0x3ca: PushEmpty(float, float, float)
0x3cb: Stack[-3] = (int) 1
0x3cc: Stack[-2] = (int) 0
0x3cd: Stack[-1] = (float) 0.75
0x3ce: Call2 0x5fa

0x3cf: Pop(3)
0x3d0: @ UnlockCamera()
0x3d1: Pop(0)
0x3d2: Push((int) 1)
0x3d3: @ Sleep(Stack[-1])
0x3d4: Pop(1)
0x3d5: Pop(0); Push(( Stack[-25] != 0 )
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d7: @@ IsDead(Stack[-3])
0x3d8: Pop(0)
0x3d9: Push(Stack[-3])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3dd

0x3dc: GOTO 0x3d2

0x3dd: @ LockCamera()
0x3de: Pop(0)
0x3df: Push(CvectorIndex(Stack[-12], 0))
0x3e0: Push(CvectorIndex(Stack[-13], 2))
0x3e1: @ RotateAsync(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: PushEmpty(float, float, float)
0x3e4: Stack[-3] = (int) 0
0x3e5: Stack[-2] = (int) 1
0x3e6: Stack[-1] = (float) 0.75
0x3e7: Call2 0x5fa

0x3e8: Pop(3)
0x3e9: @ RemoveActor(Stack[-4])
0x3ea: Pop(0)
0x3eb: PushEmpty()
0x3ec: Call2 0x476

0x3ed: Pop(0)
0x3ee: PushEmpty(object, int, object, object, object)
0x3ef: Stack[-5] = Stack[-30]
0x3f0: Stack[-4] = (int) 0
0x3f1: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x3f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x3f4: Call2 0x564

0x3f5: Pop(5)
0x3f6: PushEmpty(object, int, object, object, object)
0x3f7: Stack[-5] = Stack[-30]
0x3f8: Stack[-4] = (int) 1
0x3f9: Stack[-3] = Stack[2 + Tasks[-1].StackPointer]
0x3fa: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x3fb: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x3fc: Call2 0x564

0x3fd: Pop(5)
0x3fe: PushEmpty(object, int, object, object, object)
0x3ff: Stack[-5] = Stack[-30]
0x400: Stack[-4] = (int) 2
0x401: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x402: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x403: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x404: Call2 0x564

0x405: Pop(5)
0x406: PushEmpty(object, int, object, object, object)
0x407: Stack[-5] = Stack[-30]
0x408: Stack[-4] = (int) 3
0x409: Stack[-3] = Stack[6 + Tasks[-1].StackPointer]
0x40a: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0x40b: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x40c: Call2 0x564

0x40d: Pop(5)
0x40e: PushEmpty(object, int, object, object, object)
0x40f: Stack[-5] = Stack[-30]
0x410: Stack[-4] = (int) 4
0x411: Stack[-3] = Stack[8 + Tasks[-1].StackPointer]
0x412: Stack[-2] = Stack[9 + Tasks[-1].StackPointer]
0x413: Stack[-1] = Stack[14 + Tasks[-1].StackPointer]
0x414: Call2 0x564

0x415: Pop(5)
0x416: @@ SelectWeapon()
0x417: Pop(0)
0x418: Push("pt_arena_return")
0x419: @@ GetLocator(Stack[-1], Stack[-6], Stack[-3], Stack[-2])
0x41a: Pop(1)
0x41b: @ Teleport(Stack[-25], Stack[-10], Stack[-2], Stack[-1])
0x41c: Pop(0)
0x41d: @ StopAsync()
0x41e: Pop(0)
0x41f: Push(CvectorIndex(Stack[-12], 0))
0x420: Push(CvectorIndex(Stack[-13], 2))
0x421: @ Rotate(Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: PushEmpty(float, float, float)
0x424: Stack[-3] = (int) 1
0x425: Stack[-2] = (int) 0
0x426: Stack[-1] = (float) 0.75
0x427: Call2 0x5fa

0x428: Pop(3)
0x429: @ UnlockCamera()
0x42a: Pop(0)
0x42b: PushEmpty()
0x42c: Call2 0x5c2

0x42d: Pop(0)
0x42e: PushEmpty()
0x42f: Call2 0x5b6

0x430: Pop(0)
0x431: PushEmpty(object)
0x432: Stack[-1] = Stack[-26]
0x433: Call2 0x504

0x434: Pop(1)
0x435: Return(); Pop(24)

0x436: Stack[-4] = 0
0x437: Stack[-10] = 0
0x438: PushEmpty(int, int, object, int, bool, int, bool, int, int, int, object, int, bool, int, bool, int)
0x439: Push((int) 0)
0x43a: @@ GetItemCount(Stack[-9], Stack[-1])
0x43b: Pop(1)
0x43c: Stack[-7] = (int) 0
0x43d: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x43e: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x43f: @@ GetItem(Stack[-6], Stack[-7])
0x440: Pop(0)
0x441: @@ GetItemID(Stack[-5])
0x442: Pop(0)
0x443: Push("Group")
0x444: @ HasInvItemProperty(Stack[-5], Stack[-6], Stack[-1])
0x445: Pop(1)
0x446: Push(Stack[-4])
0x447: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x448: Push("Group")
0x449: @ GetInvItemProperty(Stack[-4], Stack[-6], Stack[-1])
0x44a: Pop(1)
0x44b: Push((int) 0)
0x44c: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: GOTO 0x461

0x44f: GOTO 0x456

0x450: Push((int) 0)
0x451: @@ IsItemSelected(Stack[-3], Stack[-8], Stack[-1])
0x452: Pop(1)
0x453: Push(Stack[-2])
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: GOTO 0x461

0x456: Push((int) 0)
0x457: @@ GetItemAmount(Stack[-2], Stack[-8], Stack[-1])
0x458: Pop(1)
0x459: Push((int) 0)
0x45a: @@ RemoveItem(Stack[-8], Stack[-2], Stack[-1])
0x45b: Pop(1)
0x45c: Push((int) -1)
0x45d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x45e: Push((int) -1)
0x45f: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x460: Stack[-6] = 0
0x461: Push((int) 1)
0x462: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x463: GOTO 0x43d

0x464: Return(); Pop(16)

0x465: PushEmpty(cvector, cvector, bool, object, cvector, cvector, bool, object)
0x466: @@ GetLocator(Stack[-9], Stack[-2], Stack[-4], Stack[-3])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-2] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46a: Push("Locator doesn't exist for arena spectator ")
0x46b: Pop(1); Push(Stack[-1] + Stack[-10]);
0x46c: @ Trace(Stack[-1])
0x46d: Pop(1)
0x46e: Return(); Pop(8)

0x46f: Push((bool) 1)
0x470: @@ AddStationaryActor(Stack[-2], Stack[-5], Stack[-4], Stack[-12], Stack[-11], Stack[-1])
0x471: Pop(1)
0x472: @@ add(Stack[-1])
0x473: Pop(0)
0x474: Return(); Pop(8)

0x475: Stack[-1] = 0
0x476: PushEmpty(int, int, object, object, int, int, object, object)
0x477: @@ size(Stack[-4])
0x478: Pop(0)
0x479: Stack[-3] = (int) 0
0x47a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x47b: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x47c: @@ get(Stack[-2], Stack[-3])
0x47d: Pop(0)
0x47e: @@ GetActor(Stack[-1])
0x47f: Pop(0)
0x480: Pop(0); Push(( Stack[-1] != 0 )
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: @ RemoveActor(Stack[-1])
0x483: Pop(0)
0x484: @@ Remove()
0x485: Pop(0)
0x486: Stack[-1] = 0
0x487: Stack[-2] = 0
0x488: Push((int) 1)
0x489: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x48a: GOTO 0x47a

0x48b: @@ clear()
0x48c: Pop(0)
0x48d: Return(); Pop(8)

0x48e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x48f: @ GetPosition(Stack[-3])
0x490: Pop(0)
0x491: @@ GetPosition(Stack[-2])
0x492: Pop(0)
0x493: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x494: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x495: Return(); Pop(6)

0x496: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x497: @@ GetPosition(Stack[-8])
0x498: Pop(0)
0x499: @@ GetEyesHeight(Stack[-9])
0x49a: Pop(0)
0x49b: Push(CvectorIndex(Stack[-8], 1))
0x49c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x49d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x49e: @ GetPosition(Stack[-7])
0x49f: Pop(0)
0x4a0: @ GetEyesHeight(Stack[-9])
0x4a1: Pop(0)
0x4a2: Push(CvectorIndex(Stack[-7], 1))
0x4a3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4a4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4a5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4a6: Push(CvectorIndex(Stack[-6], 1))
0x4a7: Stack[-1] = (int) 0
0x4a8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4a9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4aa: Pop(1); Push(Sqrt(Stack[-1]))
0x4ab: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4ac: Stack[-5] = -Stack[-6]; Pop(0);
0x4ad: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4ae: PushEmpty(cvector, cvector)
0x4af: Push(CVector(0.0, 1.0, 0.0))
0x4b0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4b1: Call2 0x596

0x4b2: Pop(1)
0x4b3: Push((int) 25)
0x4b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b6: Push(CVector(0.0, 10.0, 0.0))
0x4b7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4b8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4b9: @ IsOverrideActive(Stack[-2])
0x4ba: Pop(0)
0x4bb: Push(Stack[-2])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-21] = (bool) 0
0x4be: Return(); Pop(18)

0x4bf: @ StopWorld()
0x4c0: Pop(0)
0x4c1: Push((bool) 1)
0x4c2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x4c3: Pop(1)
0x4c4: Push(CvectorIndex(Stack[-4], 0))
0x4c5: Push(CvectorIndex(Stack[-5], 2))
0x4c6: @ Rotate(Stack[-2], Stack[-1])
0x4c7: Pop(2)
0x4c8: PushEmpty(bool)
0x4c9: Call2 0x62e

0x4ca: Pop(0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: GOTO 0x4d5

0x4cd: Push("head")
0x4ce: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4cf: Pop(1)
0x4d0: Push(Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d2: Push("head")
0x4d3: @ LookAsyncCamera(Stack[-1])
0x4d4: Pop(1)
0x4d5: @ CameraWaitForPlayFinish()
0x4d6: Pop(0)
0x4d7: @ ResumeWorld()
0x4d8: Pop(0)
0x4d9: Stack[-21] = (bool) 1
0x4da: Return(); Pop(18)

0x4db: PushEmpty(bool, bool)
0x4dc: Push((bool) 1)
0x4dd: @ CameraSwitchToNormal(Stack[-1])
0x4de: Pop(1)
0x4df: PushEmpty(bool)
0x4e0: Call2 0x62e

0x4e1: Pop(0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: GOTO 0x4ec

0x4e4: Push("head")
0x4e5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4e6: Pop(1)
0x4e7: Push(Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e9: Push("head")
0x4ea: @ UnlookAsync(Stack[-1])
0x4eb: Pop(1)
0x4ec: Return(); Pop(2)

0x4ed: PushEmpty(bool, int, bool, int)
0x4ee: Pop(0); Push((bool) Stack[-5] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: Return(); Pop(4)

0x4f1: Push("noaccess")
0x4f2: @@ HasProperty(Stack[-1], Stack[-3])
0x4f3: Pop(1)
0x4f4: Push(Stack[-2])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f6: Push("noaccess")
0x4f7: @@ GetProperty(Stack[-1], Stack[-2])
0x4f8: Pop(1)
0x4f9: Push("noaccess")
0x4fa: Push((int) 1)
0x4fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4fc: @@ SetProperty(Stack[-2], Stack[-1])
0x4fd: Pop(2)
0x4fe: GOTO 0x503

0x4ff: Push("noaccess")
0x500: Push((int) 1)
0x501: @@ SetProperty(Stack[-2], Stack[-1])
0x502: Pop(2)
0x503: Return(); Pop(4)

0x504: PushEmpty(int, int)
0x505: Pop(0); Push((bool) Stack[-3] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: Return(); Pop(2)

0x508: Push("noaccess")
0x509: @@ GetProperty(Stack[-1], Stack[-2])
0x50a: Pop(1)
0x50b: Push((int) 1)
0x50c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x50e: Push("noaccess")
0x50f: Push((int) 1)
0x510: Pop(1); Push(Stack[-3] - Stack[-1]);
0x511: @@ SetProperty(Stack[-2], Stack[-1])
0x512: Pop(2)
0x513: GOTO 0x517

0x514: Push("noaccess")
0x515: @@ RemoveProperty(Stack[-1])
0x516: Pop(1)
0x517: Return(); Pop(2)

0x518: PushEmpty(bool, float, float, bool, float, float)
0x519: @ lshHasAnimation(Stack[-3], Stack[-7])
0x51a: Pop(0)
0x51b: Push(Stack[-3])
0x51c: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x51e: Pop(0)
0x51f: Push((bool) 0)
0x520: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x521: Pop(1)
0x522: GOTO 0x527

0x523: Push("Can't find lsh animation : ")
0x524: Pop(1); Push(Stack[-1] + Stack[-8]);
0x525: @ Trace(Stack[-1])
0x526: Pop(1)
0x527: Return(); Pop(6)

0x528: PushEmpty(bool, float, float, bool, float, float)
0x529: @ lshHasAnimation(Stack[-3], Stack[-8])
0x52a: Pop(0)
0x52b: Push(Stack[-3])
0x52c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x52e: Pop(0)
0x52f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x530: Pop(0)
0x531: GOTO 0x536

0x532: Push("Can't find lsh animation : ")
0x533: Pop(1); Push(Stack[-1] + Stack[-9]);
0x534: @ Trace(Stack[-1])
0x535: Pop(1)
0x536: Return(); Pop(6)

0x537: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0x538: PushEmpty(object)
0x539: Call2 0x5a4

0x53a: Stack[-6] = Stack[-1]
0x53b: Pop(1)
0x53c: @@ GetItemCount(Stack[-4], Stack[-12])
0x53d: Pop(0)
0x53e: Stack[-3] = (int) 0
0x53f: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x540: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x541: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0x542: Pop(0)
0x543: @@ add(Stack[-2])
0x544: Pop(0)
0x545: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0x546: Pop(0)
0x547: @@ add(Stack[-1])
0x548: Pop(0)
0x549: Stack[-2] = 0
0x54a: Push((int) 1)
0x54b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x54c: GOTO 0x53f

0x54d: Stack[-14] = Stack[-5]
0x54e: Return(); Pop(10)

0x54f: Stack[-5] = 0
0x550: PushEmpty(object, int, int, bool, object, int, int, bool)
0x551: @ CreateIntVector(Stack[-4])
0x552: Pop(0)
0x553: @@ GetItemCount(Stack[-3], Stack[-9])
0x554: Pop(0)
0x555: Stack[-2] = (int) 0
0x556: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x557: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x558: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9])
0x559: Pop(0)
0x55a: Push(Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: @@ add(Stack[-2])
0x55d: Pop(0)
0x55e: Push((int) 1)
0x55f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x560: GOTO 0x556

0x561: Stack[-11] = Stack[-4]
0x562: Return(); Pop(8)

0x563: Stack[-4] = 0
0x564: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x565: @@ RemoveAllItems(Stack[-18])
0x566: Pop(0)
0x567: @@ size(Stack[-7])
0x568: Pop(0)
0x569: Stack[-6] = (int) 0
0x56a: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x56b: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x56c: @@ get(Stack[-5], Stack[-6])
0x56d: Pop(0)
0x56e: @@ get(Stack[-4], Stack[-6])
0x56f: Pop(0)
0x570: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4])
0x571: Pop(0)
0x572: Stack[-5] = 0
0x573: Push((int) 1)
0x574: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x575: GOTO 0x56a

0x576: @@ size(Stack[-7])
0x577: Pop(0)
0x578: Stack[-2] = (int) 0
0x579: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x57a: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57b: @@ get(Stack[-1], Stack[-2])
0x57c: Pop(0)
0x57d: Push((bool) 1)
0x57e: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19])
0x57f: Pop(1)
0x580: Push((int) 1)
0x581: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x582: GOTO 0x579

0x583: Return(); Pop(14)

0x584: PushEmpty(float, cvector, float, cvector)
0x585: @@ GetEyesHeight(Stack[-2])
0x586: Pop(0)
0x587: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x588: Push(CvectorIndex(Stack[-1], 1))
0x589: Stack[-1] = Stack[-3]
0x58a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x58b: Push("head")
0x58c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x58d: Pop(1)
0x58e: Return(); Pop(4)

0x58f: PushEmpty(bool)
0x590: Call2 0x62e

0x591: Pop(0)
0x592: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x593: @ lshStopSpeech()
0x594: Pop(0)
0x595: Return(); Pop(0)

0x596: PushEmpty(float, float)
0x597: Pop(0); Push(Stack[-3] | Stack[-3]);
0x598: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x599: Push((float)0.0)
0x59a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x59d: Return(); Pop(2)

0x59e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x59f: Return(); Pop(2)

0x5a0: PushEmpty(cvector, cvector)
0x5a1: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5a2: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5a3: Return(); Pop(2)

0x5a4: PushEmpty(object, object)
0x5a5: @ CreateObjectVector(Stack[-1])
0x5a6: Pop(0)
0x5a7: Stack[-3] = Stack[-1]
0x5a8: Return(); Pop(2)

0x5a9: Stack[-1] = 0
0x5aa: PushEmpty(int, int)
0x5ab: @ GetVariable(Stack[-3], Stack[-1])
0x5ac: Pop(0)
0x5ad: Stack[-4] = Stack[-1]
0x5ae: Return(); Pop(2)

0x5af: PushEmpty(int, int)
0x5b0: @ GetVariable(Stack[-4], Stack[-1])
0x5b1: Pop(0)
0x5b2: Pop(0); Push(Stack[-1] + Stack[-3]);
0x5b3: @ SetVariable(Stack[-5], Stack[-1])
0x5b4: Pop(1)
0x5b5: Return(); Pop(2)

0x5b6: PushEmpty(string, int)
0x5b7: Stack[-2] = "noinv_drop"
0x5b8: Stack[-1] = (int) -1
0x5b9: Call2 0x5af

0x5ba: Pop(2)
0x5bb: Return(); Pop(0)

0x5bc: PushEmpty(string, int)
0x5bd: Stack[-2] = "noinv_drop"
0x5be: Stack[-1] = (int) 1
0x5bf: Call2 0x5af

0x5c0: Pop(2)
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(string, int)
0x5c3: Stack[-2] = "nouse_container"
0x5c4: Stack[-1] = (int) -1
0x5c5: Call2 0x5af

0x5c6: Pop(2)
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty(string, int)
0x5c9: Stack[-2] = "nouse_container"
0x5ca: Stack[-1] = (int) 1
0x5cb: Call2 0x5af

0x5cc: Pop(2)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(object, object)
0x5cf: @ CreateIntVector(Stack[-1])
0x5d0: Pop(0)
0x5d1: @@ add(Stack[-4])
0x5d2: Pop(0)
0x5d3: @@ add(Stack[-3])
0x5d4: Pop(0)
0x5d5: Push((int) 3)
0x5d6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5d7: Pop(1)
0x5d8: Return(); Pop(2)

0x5d9: Stack[-1] = 0
0x5da: PushEmpty(int, int, bool, int, int, bool)
0x5db: @@ GetItemID(Stack[-3])
0x5dc: Pop(0)
0x5dd: Push("Category")
0x5de: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5df: Pop(1)
0x5e0: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5e1: Pop(0)
0x5e2: Pop(0); Push((bool) Stack[-1] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e4: @@ DropItems(Stack[-8], Stack[-7])
0x5e5: Pop(0)
0x5e6: GOTO 0x5ec

0x5e7: PushEmpty(int, int)
0x5e8: Stack[-2] = Stack[-5]
0x5e9: Stack[-1] = Stack[-9]
0x5ea: Call2 0x5ce

0x5eb: Pop(2)
0x5ec: Return(); Pop(6)

0x5ed: PushEmpty(object, object)
0x5ee: @ CreateInvItem(Stack[-1])
0x5ef: Pop(0)
0x5f0: @@ SetItemName(Stack[-4])
0x5f1: Pop(0)
0x5f2: PushEmpty(object, object, int)
0x5f3: Stack[-3] = Stack[-8]
0x5f4: Stack[-2] = Stack[-4]
0x5f5: Stack[-1] = Stack[-6]
0x5f6: Call2 0x5da

0x5f7: Pop(3)
0x5f8: Return(); Pop(2)

0x5f9: Stack[-1] = 0
0x5fa: PushEmpty(bool, float, float, bool, float, float)
0x5fb: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x5fc: Pop(0); Push(Stack[-8] - Stack[-9]);
0x5fd: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x5fe: Push(Stack[-3])
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x601: GOTO 0x603

0x602: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x603: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x604: @ ModDarkenLevel(Stack[-9])
0x605: Pop(0)
0x606: @ sync(Stack[-1])
0x607: Pop(0)
0x608: Pop(0); Push(Stack[-1] * Stack[-2]);
0x609: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x60a: GOTO 0x5fe

0x60b: @ ModDarkenLevel(Stack[-8])
0x60c: Pop(0)
0x60d: Return(); Pop(6)

0x60e: PushEmpty(string, string)
0x60f: Stack[-1] = "idle"
0x610: Push(Stack[-3])
0x611: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x612: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x613: Stack[-4] = Stack[-1]
0x614: Return(); Pop(2)

0x615: PushEmpty(int, bool, int, bool)
0x616: Stack[-2] = (int) 0
0x617: Push("all")
0x618: PushEmpty(string, int)
0x619: Stack[-1] = Stack[-5]
0x61a: Call2 0x60e

0x61b: Pop(1)
0x61c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(2)
0x61e: Pop(0); Push((bool) Stack[-1] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x620: GOTO 0x624

0x621: Push((int) 1)
0x622: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x623: GOTO 0x617

0x624: Stack[-5] = Stack[-2]
0x625: Return(); Pop(4)

0x626: Stack[-1] = (int) 521048
0x627: Return(); Pop(0)

0x628: Stack[-1] = (int) 521047
0x629: Return(); Pop(0)

0x62a: Stack[-1] = "ui/NPC_Morlok.png"
0x62b: Return(); Pop(0)

0x62c: Stack[-1] = "ui/NPC_Morlok_b.png"
0x62d: Return(); Pop(0)

0x62e: Stack[-1] = (bool) 0
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: Push("ooArenaManager1")
0x632: Push((int) 1)
0x633: @ SetVariable(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: Push((int) 1)
0x638: @@ SetReturnValue(Stack[-1])
0x639: Pop(1)
0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: Push("blood is given")
0x63d: @ Trace(Stack[-1])
0x63e: Pop(1)
0x63f: PushEmpty(object, string, int)
0x640: Stack[-3] = Stack[-5]
0x641: Stack[-2] = "blood"
0x642: Stack[-1] = (int) 1
0x643: Call2 0x5ed

0x644: Pop(3)
0x645: Return(); Pop(0)

0x646: PushEmpty()
0x647: Push("playsound")
0x648: Push("giveitem")
0x649: @ TriggerWorld(Stack[-2], Stack[-1])
0x64a: Pop(2)
0x64b: Return(); Pop(0)

0x64c: PushEmpty()
0x64d: PushEmpty(int, string)
0x64e: Stack[-1] = "ooArenaManager1"
0x64f: Call2 0x5aa

0x650: Pop(1)
0x651: Push((int) 0)
0x652: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-2] = (bool) 1
0x655: Return(); Pop(0)

0x656: Stack[-2] = (bool) 0
0x657: Return(); Pop(0)

0x658: PushEmpty(int, int)
0x659: Push("branch")
0x65a: @ GetVariable(Stack[-1], Stack[-2])
0x65b: Pop(1)
0x65c: Push((int) 0)
0x65d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65f: Stack[-3] = (int) 1
0x660: Return(); Pop(2)

0x661: GOTO 0x667

0x662: Push((int) 1)
0x663: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-3] = (int) 2
0x666: Return(); Pop(2)

0x667: Stack[-3] = (int) 3
0x668: Return(); Pop(2)

0x669: PushEmpty(float, float)
0x66a: Pop(0); Push((bool) Stack[-3] == 0)
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: Stack[-4] = (bool) 0
0x66d: Return(); Pop(2)

0x66e: PushEmpty(float, object)
0x66f: Stack[-1] = Stack[-5]
0x670: Call2 0x48e

0x671: Pop(1)
0x672: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x673: Push(GlobalVars[1])
0x674: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x675: Push((int) 100)
0x676: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x677: Push((int) 300)
0x678: Stack[-5] = Stack[-2] < Stack[-1]; Pop(1);
0x679: Return(); Pop(2)

