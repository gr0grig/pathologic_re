GlobalVarCount = 0

Strings:
	W:inited
	W:day
	A:SetProperty
	A:size
	A:get
	W:pt_k2s_svita
	W:index
	A:add
	W:dead
	A:HasProperty
	A:set
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:pt_k2s_npc
	W:NPC_Burah
	W:k2system_burah.xml
	W:pers_butcher
	W:k2system_butcher.xml
	W:pers_morlok
	W:k2system_morlok.xml
// @pool_raw:69006e0069007400650064000000640061007900000053657450726f70657274790073697a650067657400700074005f006b00320073005f0073007600690074006100000069006e006400650078000000616464006400650061006400000048617350726f706572747900736574004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000700074005f006b00320073005f006e007000630000004e00500043005f004200750072006100680000006b003200730079007300740065006d005f00620075007200610068002e0078006d006c00000070006500720073005f00620075007400630068006500720000006b003200730079007300740065006d005f0062007500740063006800650072002e0078006d006c00000070006500720073005f006d006f0072006c006f006b0000006b003200730079007300740065006d005f006d006f0072006c006f006b002e0078006d006c000000

Import:
	CreateObjectVector (1 args)
	CreateStringVector (1 args)
	CreateBoolVector (1 args)
	Hold (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, bool, int) Params = 0
		EVENT_5 Op = 0x17 Vars = ()
		EVENT_6 Op = 0x59 Vars = ()


0x0: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty(int)
0x2: Call2 0x87

0x3: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: @ CreateObjectVector(Stack[-4]T)
0x6: Pop(0)
0x7: @ CreateStringVector(Stack[-0]T)
0x8: Pop(0)
0x9: @ CreateStringVector(Stack[-1]T)
0xa: Pop(0)
0xb: @ CreateBoolVector(Stack[-2]T)
0xc: Pop(0)
0xd: PushEmpty(object, object, object)
0xe: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0xf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x11: Call2 0x9a

0x12: Pop(3)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(0)

0x17: PushEmpty(bool, bool, int, int, int, string, string, object, bool, bool, bool, int, int, int, string, string, object, bool)
0x18: Stack[-8] = (bool) 0
0x19: Push("inited") // @poff=0
0x1a: @ HasProperty(Stack[-1], Stack[-10])
0x1b: Pop(1)
0x1c: Push(Stack[-9])
0x1d: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1e: Push("inited") // @poff=0
0x1f: @ GetProperty(Stack[-1], Stack[-8])
0x20: Pop(1)
0x21: Push((int) 0)
0x22: Stack[-9] = Stack[-8] != Stack[-1]; Pop(1);
0x23: Pop(0); Push((bool) Stack[-8] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Return(); Pop(18)

0x26: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x28: PushEmpty(object, object)
0x29: PushEmpty(object)
0x2a: Call2 0x6f

0x2b: Stack[-1] = Stack[-2]
0x2c: Pop(1)
0x2d: Call2 0x90

0x2e: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0x2f: Pop(2)
0x30: Push("day") // @poff=14
0x31: @@@ SetProperty(Stack[-1], Stack[-6]T); Obj=3 // @poff=22
0x32: Pop(1)
0x33: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x34: @@@ size(Stack[-6]); Obj=0 // @poff=34
0x35: Pop(0)
0x36: Stack[-5] = (int) 0
0x37: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x38: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x39: @@@ get(Stack[-4], Stack[-5]); Obj=0 // @poff=39
0x3a: Pop(0)
0x3b: @@@ get(Stack[-3], Stack[-5]); Obj=1 // @poff=39
0x3c: Pop(0)
0x3d: @@@ get(Stack[-1], Stack[-5]); Obj=2 // @poff=39
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x41: PushEmpty(object, object, string, string, string)
0x42: PushEmpty(object)
0x43: Call2 0x6f

0x44: Stack[-1] = Stack[-5]
0x45: Pop(1)
0x46: Push("pt_k2s_svita") // @poff=43
0x47: Push((int) 1)
0x48: Pop(1); Push(Stack[-12] + Stack[-1]);
0x49: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4a: Stack[-9] = Stack[-2]
0x4b: Stack[-8] = Stack[-1]
0x4c: Call2 0x75

0x4d: Stack[-5] = Stack[-7]
0x4e: Pop(5)
0x4f: Push("index") // @poff=69
0x50: @@ SetProperty(Stack[-1], Stack[-6]); Obj=3 // @poff=22
0x51: Pop(1)
0x52: @@@ add(Stack[-2]); Obj=4 // @poff=81
0x53: Pop(0)
0x54: Stack[-2] = 0
0x55: Push((int) 1)
0x56: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x57: GOTO 0x37

0x58: Return(); Pop(18)

0x59: PushEmpty(int, int, object, bool, int, int, object, bool)
0x5a: @@@ size(Stack[-4]); Obj=4 // @poff=34
0x5b: Pop(0)
0x5c: Stack[-3] = (int) 0
0x5d: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x5e: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x5f: @@@ get(Stack[-2], Stack[-3]); Obj=4 // @poff=39
0x60: Pop(0)
0x61: Push(Stack[-2])
0x62: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x63: Push("dead") // @poff=85
0x64: @@ HasProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=95
0x65: Pop(1)
0x66: @@@ set(Stack[-1], Stack[-3]); Obj=2 // @poff=107
0x67: Pop(0)
0x68: @ RemoveActor(Stack[-2])
0x69: Pop(0)
0x6a: Stack[-2] = 0
0x6b: Push((int) 1)
0x6c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6d: GOTO 0x5d

0x6e: Return(); Pop(8)

0x6f: PushEmpty(object, object)
0x70: @ self(Stack[-1])
0x71: Pop(0)
0x72: Stack[-1] = Stack[-3]
0x73: Return(); Pop(2)

0x74: Stack[-1] = 0
0x75: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x76: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=111
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-4] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7a: Push("Locator ") // @poff=122
0x7b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x7c: Push(" doesn't exist") // @poff=140
0x7d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7e: @ Trace(Stack[-1])
0x7f: Pop(1)
0x80: Stack[-1] = 0
0x81: GOTO 0x84

0x82: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x83: Pop(0)
0x84: Stack[-1] = Stack[-13]
0x85: Return(); Pop(8)

0x86: Stack[-1] = 0
0x87: PushEmpty(float, float)
0x88: @ GetGameTime(Stack[-1])
0x89: Pop(0)
0x8a: Push((int) 1)
0x8b: PushEmpty(int)
0x8c: Push((int) 24)
0x8d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8f: Return(); Pop(2)

0x90: PushEmpty()
0x91: PushEmpty(object, object, string, string, string)
0x92: Stack[-6] = Stack[-4]
0x93: Stack[-3] = "pt_k2s_npc" // @poff=170
0x94: Stack[-2] = "NPC_Burah" // @poff=192
0x95: Stack[-1] = "k2system_burah.xml" // @poff=212
0x96: Call2 0x75

0x97: Stack[-5] = Stack[-7]
0x98: Pop(5)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push("pers_butcher") // @poff=250
0x9c: @@ add(Stack[-1]); Obj=4 // @poff=81
0x9d: Pop(1)
0x9e: Push("k2system_butcher.xml") // @poff=276
0x9f: @@ add(Stack[-1]); Obj=3 // @poff=81
0xa0: Pop(1)
0xa1: Push((bool) 0)
0xa2: @@ add(Stack[-1]); Obj=2 // @poff=81
0xa3: Pop(1)
0xa4: Push("pers_morlok") // @poff=318
0xa5: @@ add(Stack[-1]); Obj=4 // @poff=81
0xa6: Pop(1)
0xa7: Push("k2system_morlok.xml") // @poff=342
0xa8: @@ add(Stack[-1]); Obj=3 // @poff=81
0xa9: Pop(1)
0xaa: Push((bool) 0)
0xab: @@ add(Stack[-1]); Obj=2 // @poff=81
0xac: Pop(1)
0xad: Push("pers_morlok") // @poff=318
0xae: @@ add(Stack[-1]); Obj=4 // @poff=81
0xaf: Pop(1)
0xb0: Push("k2system_morlok.xml") // @poff=342
0xb1: @@ add(Stack[-1]); Obj=3 // @poff=81
0xb2: Pop(1)
0xb3: Push((bool) 0)
0xb4: @@ add(Stack[-1]); Obj=2 // @poff=81
0xb5: Pop(1)
0xb6: Return(); Pop(0)

