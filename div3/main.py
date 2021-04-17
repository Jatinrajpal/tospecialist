class Doctor:
    def __init__(self,docid,docname,specs,fee,available):
        self.docid=docid
        self.docname=docname
        self.specs=specs
        self.fee=fee
        self.available=available
class Hospital:
    def __init__(self,doc):
        self.doctorDB=doc

    def searchByDoctorSpecialization(self,name):
        l=[]
        for i in doctorDB.keys():
            if doctorDB[i].specs.lower()==name.lower():
                # l=l+[doctorDB[i]]
                l.append(doctorDB[i].docid)
                l.append(doctorDB[i].docname)
        if len(l)>0:
            return l
        else:
            return None
    def calculateConsultationFeeBySpecialization(self,spec):
        s=0
        for i in doctorDB.keys():
            if doctorDB[i].available.lower()!="available" and doctorDB[i].fee>fee:
                s=s+doctorDB[i].fee
        return s
if __name__ == "__main__":
    n=int(input())
    lst=[]
    for i in range(n):
        did=int(input())
        name=input()
        spec=input()
        fee=int(input())
        available=input()
        d=Doctor(did,name,spec,fee,available)
        lst=lst+[d]
    searchname=input()
    searchspec=input()
    doctorDB={}
    c=1
    for i in lst:
        doctorDB[c]=i
        c=c+1
    h=Hospital(doctorDB)
    rname=h.searchByDoctorSpecialization(searchname)
    rspec=h.calculateConsultationFeeBySpecialization(searchspec)
    if len(rname)==0:
        print("No Doctor Exists with the given DoctorName")
    else:
        for i in rname:
            print(i.docid)
            print(i.docname)
            print(i.specs)
            print(i.fee)
    if rspec==0:
        print("No Doctor with given sepcialization")
    else:
        print(rspec)