useEffect(() => {
  const timer = setInterval(() => {
    const currentTime = new Date();
    const FilteredJobs = jobs.filter(
      (job) => new Date(job?.dedline) > currentTime
    );
    setJobs(FilteredJobs);
  }, 1000);

  return () => clearInterval(timer);
}, []);
