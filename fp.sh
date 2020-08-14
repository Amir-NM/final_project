read link
wget $link -P /tmp/final_project
name=`ls /tmp/final_project`
tar -xvf /tmp/final_project/$name -C /tmp/final_project
rm /tmp/final_project/$name
