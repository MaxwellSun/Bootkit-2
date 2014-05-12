
#pragma pack(1) //�ֽڶ���

typedef struct _PARTITION_ENTRY//������ṹ
{
    UCHAR active; 
	//״̬���Ƿ񱻼��   ��Ҫ
    UCHAR StartHead; 
	//������ʼ��ͷ��   
    //UCHAR StartSector; 
    //������ʼ�����������,��2λΪ����ŵĵ� 9,10 λ, ���ֽ�Ϊ����ŵĵ� 8 λ  
    //UCHAR StartCylinder;
    // ��ʼ�������� 
    USHORT StartSecCyli; 
	//��63��λ��ó����ǿ�ʼ��������������6λ���ǿ�ʼ����
    UCHAR PartitionType; 
	// ��������   ��Ҫ 
    UCHAR EndHead; 
	//����������ͷ��
    //UCHAR EndSector;
    //������������   
    //UCHAR EndCylinder;
    // ���������
    USHORT EndSecCyli; 
	//��63��λ��ó��ľ��ǽ�����������������6λ���ǽ�������
    ULONG StartLBA; 
	// ������ʼ�߼���ַ   ��Ҫ
    ULONG TotalSector;
	// ������С      ��Ҫ
} PARTITION_ENTRY, *PPARTITION_ENTRY;

//������512BYTE�ṹ

typedef struct _MBR_SECTOR
{
    UCHAR BootCode[440];
    //������¼440 Byte
    ULONG DiskSignature;
    //����ǩ��
    USHORT NoneDisk;
    //�����ֽ�
    PARTITION_ENTRY Partition[4];
   //������ṹ64 Byte
    USHORT Signature;
   //������־2 Byte 55 AA
} MBR_SECTOR, *PMBR_SECTOR;

#pragma pack()


#define FIRST_DISK L"\\\\.\\PHYSICALDRIVE0"








































































